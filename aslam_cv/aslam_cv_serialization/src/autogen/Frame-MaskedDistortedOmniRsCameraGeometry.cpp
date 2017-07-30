// THIS FILE HAS BEEN AUTOGENERATED BY gen_files.py
#include <aslam/cameras.hpp>
#include <aslam/Frame.hpp>
#include <aslam/FrameBaseSerialization.hpp>

// Standard serialization headers
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>
#include <boost/archive/binary_oarchive.hpp>
#include <boost/archive/binary_iarchive.hpp>
#include <boost/archive/xml_oarchive.hpp>
#include <boost/archive/xml_iarchive.hpp>
// These ones are in sm_boost
#include <boost/portable_binary_iarchive.hpp>
#include <boost/portable_binary_oarchive.hpp>

BOOST_CLASS_EXPORT_IMPLEMENT(aslam::Frame<aslam::cameras::MaskedDistortedOmniRsCameraGeometry >);


namespace aslam {
    
template void Frame<aslam::cameras::MaskedDistortedOmniRsCameraGeometry >::save<>(boost::archive::text_oarchive & ar, const unsigned int version) const;
template void Frame<aslam::cameras::MaskedDistortedOmniRsCameraGeometry >::load<>(boost::archive::text_iarchive & ar, const unsigned int version);
template void Frame<aslam::cameras::MaskedDistortedOmniRsCameraGeometry >::save<>(boost::archive::xml_oarchive & ar, const unsigned int version) const;
template void Frame<aslam::cameras::MaskedDistortedOmniRsCameraGeometry >::load<>(boost::archive::xml_iarchive & ar, const unsigned int version);
template void Frame<aslam::cameras::MaskedDistortedOmniRsCameraGeometry >::save<>(boost::archive::binary_oarchive & ar, const unsigned int version) const;
template void Frame< aslam::cameras::MaskedDistortedOmniRsCameraGeometry >::load<>(boost::archive::binary_iarchive & ar, const unsigned int version);
template void Frame<aslam::cameras::MaskedDistortedOmniRsCameraGeometry >::save<>(boost::archive::portable_binary_oarchive & ar, const unsigned int version) const;
template void Frame<aslam::cameras::MaskedDistortedOmniRsCameraGeometry >::load<>(boost::archive::portable_binary_iarchive & ar, const unsigned int version);

} // namespace aslam



