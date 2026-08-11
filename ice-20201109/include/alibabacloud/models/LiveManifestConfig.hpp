// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LIVEMANIFESTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_LIVEMANIFESTCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class LiveManifestConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LiveManifestConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AdMarkers, adMarkers_);
      DARABONBA_PTR_TO_JSON(DateTimeInterval, dateTimeInterval_);
      DARABONBA_PTR_TO_JSON(ManifestDuration, manifestDuration_);
      DARABONBA_PTR_TO_JSON(MaxVideoBitrate, maxVideoBitrate_);
      DARABONBA_PTR_TO_JSON(MinBufferTime, minBufferTime_);
      DARABONBA_PTR_TO_JSON(MinUpdatePeriod, minUpdatePeriod_);
      DARABONBA_PTR_TO_JSON(MinVideoBitrate, minVideoBitrate_);
      DARABONBA_PTR_TO_JSON(PartHoldBackMs, partHoldBackMs_);
      DARABONBA_PTR_TO_JSON(PresentationDelay, presentationDelay_);
      DARABONBA_PTR_TO_JSON(SegmentCount, segmentCount_);
      DARABONBA_PTR_TO_JSON(SegmentTemplateFormat, segmentTemplateFormat_);
      DARABONBA_PTR_TO_JSON(StreamOrder, streamOrder_);
    };
    friend void from_json(const Darabonba::Json& j, LiveManifestConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AdMarkers, adMarkers_);
      DARABONBA_PTR_FROM_JSON(DateTimeInterval, dateTimeInterval_);
      DARABONBA_PTR_FROM_JSON(ManifestDuration, manifestDuration_);
      DARABONBA_PTR_FROM_JSON(MaxVideoBitrate, maxVideoBitrate_);
      DARABONBA_PTR_FROM_JSON(MinBufferTime, minBufferTime_);
      DARABONBA_PTR_FROM_JSON(MinUpdatePeriod, minUpdatePeriod_);
      DARABONBA_PTR_FROM_JSON(MinVideoBitrate, minVideoBitrate_);
      DARABONBA_PTR_FROM_JSON(PartHoldBackMs, partHoldBackMs_);
      DARABONBA_PTR_FROM_JSON(PresentationDelay, presentationDelay_);
      DARABONBA_PTR_FROM_JSON(SegmentCount, segmentCount_);
      DARABONBA_PTR_FROM_JSON(SegmentTemplateFormat, segmentTemplateFormat_);
      DARABONBA_PTR_FROM_JSON(StreamOrder, streamOrder_);
    };
    LiveManifestConfig() = default ;
    LiveManifestConfig(const LiveManifestConfig &) = default ;
    LiveManifestConfig(LiveManifestConfig &&) = default ;
    LiveManifestConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LiveManifestConfig() = default ;
    LiveManifestConfig& operator=(const LiveManifestConfig &) = default ;
    LiveManifestConfig& operator=(LiveManifestConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adMarkers_ == nullptr
        && this->dateTimeInterval_ == nullptr && this->manifestDuration_ == nullptr && this->maxVideoBitrate_ == nullptr && this->minBufferTime_ == nullptr && this->minUpdatePeriod_ == nullptr
        && this->minVideoBitrate_ == nullptr && this->partHoldBackMs_ == nullptr && this->presentationDelay_ == nullptr && this->segmentCount_ == nullptr && this->segmentTemplateFormat_ == nullptr
        && this->streamOrder_ == nullptr; };
    // adMarkers Field Functions 
    bool hasAdMarkers() const { return this->adMarkers_ != nullptr;};
    void deleteAdMarkers() { this->adMarkers_ = nullptr;};
    inline string getAdMarkers() const { DARABONBA_PTR_GET_DEFAULT(adMarkers_, "") };
    inline LiveManifestConfig& setAdMarkers(string adMarkers) { DARABONBA_PTR_SET_VALUE(adMarkers_, adMarkers) };


    // dateTimeInterval Field Functions 
    bool hasDateTimeInterval() const { return this->dateTimeInterval_ != nullptr;};
    void deleteDateTimeInterval() { this->dateTimeInterval_ = nullptr;};
    inline int32_t getDateTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(dateTimeInterval_, 0) };
    inline LiveManifestConfig& setDateTimeInterval(int32_t dateTimeInterval) { DARABONBA_PTR_SET_VALUE(dateTimeInterval_, dateTimeInterval) };


    // manifestDuration Field Functions 
    bool hasManifestDuration() const { return this->manifestDuration_ != nullptr;};
    void deleteManifestDuration() { this->manifestDuration_ = nullptr;};
    inline int32_t getManifestDuration() const { DARABONBA_PTR_GET_DEFAULT(manifestDuration_, 0) };
    inline LiveManifestConfig& setManifestDuration(int32_t manifestDuration) { DARABONBA_PTR_SET_VALUE(manifestDuration_, manifestDuration) };


    // maxVideoBitrate Field Functions 
    bool hasMaxVideoBitrate() const { return this->maxVideoBitrate_ != nullptr;};
    void deleteMaxVideoBitrate() { this->maxVideoBitrate_ = nullptr;};
    inline int32_t getMaxVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(maxVideoBitrate_, 0) };
    inline LiveManifestConfig& setMaxVideoBitrate(int32_t maxVideoBitrate) { DARABONBA_PTR_SET_VALUE(maxVideoBitrate_, maxVideoBitrate) };


    // minBufferTime Field Functions 
    bool hasMinBufferTime() const { return this->minBufferTime_ != nullptr;};
    void deleteMinBufferTime() { this->minBufferTime_ = nullptr;};
    inline int32_t getMinBufferTime() const { DARABONBA_PTR_GET_DEFAULT(minBufferTime_, 0) };
    inline LiveManifestConfig& setMinBufferTime(int32_t minBufferTime) { DARABONBA_PTR_SET_VALUE(minBufferTime_, minBufferTime) };


    // minUpdatePeriod Field Functions 
    bool hasMinUpdatePeriod() const { return this->minUpdatePeriod_ != nullptr;};
    void deleteMinUpdatePeriod() { this->minUpdatePeriod_ = nullptr;};
    inline int32_t getMinUpdatePeriod() const { DARABONBA_PTR_GET_DEFAULT(minUpdatePeriod_, 0) };
    inline LiveManifestConfig& setMinUpdatePeriod(int32_t minUpdatePeriod) { DARABONBA_PTR_SET_VALUE(minUpdatePeriod_, minUpdatePeriod) };


    // minVideoBitrate Field Functions 
    bool hasMinVideoBitrate() const { return this->minVideoBitrate_ != nullptr;};
    void deleteMinVideoBitrate() { this->minVideoBitrate_ = nullptr;};
    inline int32_t getMinVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(minVideoBitrate_, 0) };
    inline LiveManifestConfig& setMinVideoBitrate(int32_t minVideoBitrate) { DARABONBA_PTR_SET_VALUE(minVideoBitrate_, minVideoBitrate) };


    // partHoldBackMs Field Functions 
    bool hasPartHoldBackMs() const { return this->partHoldBackMs_ != nullptr;};
    void deletePartHoldBackMs() { this->partHoldBackMs_ = nullptr;};
    inline int32_t getPartHoldBackMs() const { DARABONBA_PTR_GET_DEFAULT(partHoldBackMs_, 0) };
    inline LiveManifestConfig& setPartHoldBackMs(int32_t partHoldBackMs) { DARABONBA_PTR_SET_VALUE(partHoldBackMs_, partHoldBackMs) };


    // presentationDelay Field Functions 
    bool hasPresentationDelay() const { return this->presentationDelay_ != nullptr;};
    void deletePresentationDelay() { this->presentationDelay_ = nullptr;};
    inline int32_t getPresentationDelay() const { DARABONBA_PTR_GET_DEFAULT(presentationDelay_, 0) };
    inline LiveManifestConfig& setPresentationDelay(int32_t presentationDelay) { DARABONBA_PTR_SET_VALUE(presentationDelay_, presentationDelay) };


    // segmentCount Field Functions 
    bool hasSegmentCount() const { return this->segmentCount_ != nullptr;};
    void deleteSegmentCount() { this->segmentCount_ = nullptr;};
    inline int32_t getSegmentCount() const { DARABONBA_PTR_GET_DEFAULT(segmentCount_, 0) };
    inline LiveManifestConfig& setSegmentCount(int32_t segmentCount) { DARABONBA_PTR_SET_VALUE(segmentCount_, segmentCount) };


    // segmentTemplateFormat Field Functions 
    bool hasSegmentTemplateFormat() const { return this->segmentTemplateFormat_ != nullptr;};
    void deleteSegmentTemplateFormat() { this->segmentTemplateFormat_ = nullptr;};
    inline string getSegmentTemplateFormat() const { DARABONBA_PTR_GET_DEFAULT(segmentTemplateFormat_, "") };
    inline LiveManifestConfig& setSegmentTemplateFormat(string segmentTemplateFormat) { DARABONBA_PTR_SET_VALUE(segmentTemplateFormat_, segmentTemplateFormat) };


    // streamOrder Field Functions 
    bool hasStreamOrder() const { return this->streamOrder_ != nullptr;};
    void deleteStreamOrder() { this->streamOrder_ = nullptr;};
    inline string getStreamOrder() const { DARABONBA_PTR_GET_DEFAULT(streamOrder_, "") };
    inline LiveManifestConfig& setStreamOrder(string streamOrder) { DARABONBA_PTR_SET_VALUE(streamOrder_, streamOrder) };


  protected:
    // The ad markers supported in the playlist. Valid values:
    // - NONE: removes ad markers.
    // - DATE_RANGE: uses the EXT-X-DATERANGE tag defined in the HLS specification. This value is available when the endpoint protocol is HLS/HLS_CMAF.
    // - XML: uses the XML ad markers defined in the DASH specification. This value is available when the endpoint protocol is DASH.
    shared_ptr<string> adMarkers_ {};
    // The interval (in seconds) for inserting the EXT-X-PROGRAM-DATE-TIME time tag. By default, the tag is not inserted. Valid values: 1 to 3600. This parameter applies to the HLS/HLS_CMAF protocol.
    shared_ptr<int32_t> dateTimeInterval_ {};
    // The maximum time-shift duration during live streaming. Unit: seconds. Valid values: 1 to 3600. Default value: 60. This parameter applies to DASH.
    shared_ptr<int32_t> manifestDuration_ {};
    // The maximum input bitrate threshold (unit: bit/s). A video track must have a bitrate less than or equal to this threshold to be played from this endpoint. Valid values: integers greater than 0. By default, this parameter is empty and no maximum bitrate limit is set.
    shared_ptr<int32_t> maxVideoBitrate_ {};
    // The minimum buffer time. Unit: seconds. Valid values: 1 to 30. Default value: 2 segment durations. This parameter applies only to DASH.
    // 
    // >  An excessively small minimum buffer time may cause playback stuttering. Set this parameter to a value no less than 2 segment durations.
    shared_ptr<int32_t> minBufferTime_ {};
    // The minimum update interval. Unit: seconds. Valid values: 1 to 3600. Default value: 2 segment durations. This parameter applies to DASH.
    // 
    // >  Set this parameter to a value less than the minimum buffer time. An excessively large value may cause DASH playback stuttering.
    shared_ptr<int32_t> minUpdatePeriod_ {};
    // The minimum input bitrate threshold (unit: bit/s). A video track must have a bitrate greater than or equal to this threshold to be played from this endpoint. Valid values: integers greater than 0. By default, this parameter is empty and no minimum bitrate is set.
    shared_ptr<int32_t> minVideoBitrate_ {};
    shared_ptr<int32_t> partHoldBackMs_ {};
    // The suggested presentation delay. Unit: seconds. Valid values: 1 to 60. Default value: 3 segment durations.
    shared_ptr<int32_t> presentationDelay_ {};
    // The number of segments. This parameter applies to the HLS/HLS_CMAF protocol. By default, the channel configuration is used. Valid values: 2 to 100.
    shared_ptr<int32_t> segmentCount_ {};
    // The segment template. Currently, only NUMBER_TIMELINE (default) is supported. This parameter applies to DASH.
    shared_ptr<string> segmentTemplateFormat_ {};
    // The stream sorting rule. Valid values:
    // - ORIGINAL: retains the original order of the input sub-manifest.
    // - VIDEO_BITRATE_ASCENDING: sorts by video stream bitrate in ascending order.
    // - VIDEO_BITRATE_DESCENDING: sorts by video stream bitrate in descending order.
    shared_ptr<string> streamOrder_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
