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
        && return this->dateTimeInterval_ == nullptr && return this->manifestDuration_ == nullptr && return this->maxVideoBitrate_ == nullptr && return this->minBufferTime_ == nullptr && return this->minUpdatePeriod_ == nullptr
        && return this->minVideoBitrate_ == nullptr && return this->presentationDelay_ == nullptr && return this->segmentCount_ == nullptr && return this->segmentTemplateFormat_ == nullptr && return this->streamOrder_ == nullptr; };
    // adMarkers Field Functions 
    bool hasAdMarkers() const { return this->adMarkers_ != nullptr;};
    void deleteAdMarkers() { this->adMarkers_ = nullptr;};
    inline string adMarkers() const { DARABONBA_PTR_GET_DEFAULT(adMarkers_, "") };
    inline LiveManifestConfig& setAdMarkers(string adMarkers) { DARABONBA_PTR_SET_VALUE(adMarkers_, adMarkers) };


    // dateTimeInterval Field Functions 
    bool hasDateTimeInterval() const { return this->dateTimeInterval_ != nullptr;};
    void deleteDateTimeInterval() { this->dateTimeInterval_ = nullptr;};
    inline int32_t dateTimeInterval() const { DARABONBA_PTR_GET_DEFAULT(dateTimeInterval_, 0) };
    inline LiveManifestConfig& setDateTimeInterval(int32_t dateTimeInterval) { DARABONBA_PTR_SET_VALUE(dateTimeInterval_, dateTimeInterval) };


    // manifestDuration Field Functions 
    bool hasManifestDuration() const { return this->manifestDuration_ != nullptr;};
    void deleteManifestDuration() { this->manifestDuration_ = nullptr;};
    inline int32_t manifestDuration() const { DARABONBA_PTR_GET_DEFAULT(manifestDuration_, 0) };
    inline LiveManifestConfig& setManifestDuration(int32_t manifestDuration) { DARABONBA_PTR_SET_VALUE(manifestDuration_, manifestDuration) };


    // maxVideoBitrate Field Functions 
    bool hasMaxVideoBitrate() const { return this->maxVideoBitrate_ != nullptr;};
    void deleteMaxVideoBitrate() { this->maxVideoBitrate_ = nullptr;};
    inline int32_t maxVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(maxVideoBitrate_, 0) };
    inline LiveManifestConfig& setMaxVideoBitrate(int32_t maxVideoBitrate) { DARABONBA_PTR_SET_VALUE(maxVideoBitrate_, maxVideoBitrate) };


    // minBufferTime Field Functions 
    bool hasMinBufferTime() const { return this->minBufferTime_ != nullptr;};
    void deleteMinBufferTime() { this->minBufferTime_ = nullptr;};
    inline int32_t minBufferTime() const { DARABONBA_PTR_GET_DEFAULT(minBufferTime_, 0) };
    inline LiveManifestConfig& setMinBufferTime(int32_t minBufferTime) { DARABONBA_PTR_SET_VALUE(minBufferTime_, minBufferTime) };


    // minUpdatePeriod Field Functions 
    bool hasMinUpdatePeriod() const { return this->minUpdatePeriod_ != nullptr;};
    void deleteMinUpdatePeriod() { this->minUpdatePeriod_ = nullptr;};
    inline int32_t minUpdatePeriod() const { DARABONBA_PTR_GET_DEFAULT(minUpdatePeriod_, 0) };
    inline LiveManifestConfig& setMinUpdatePeriod(int32_t minUpdatePeriod) { DARABONBA_PTR_SET_VALUE(minUpdatePeriod_, minUpdatePeriod) };


    // minVideoBitrate Field Functions 
    bool hasMinVideoBitrate() const { return this->minVideoBitrate_ != nullptr;};
    void deleteMinVideoBitrate() { this->minVideoBitrate_ = nullptr;};
    inline int32_t minVideoBitrate() const { DARABONBA_PTR_GET_DEFAULT(minVideoBitrate_, 0) };
    inline LiveManifestConfig& setMinVideoBitrate(int32_t minVideoBitrate) { DARABONBA_PTR_SET_VALUE(minVideoBitrate_, minVideoBitrate) };


    // presentationDelay Field Functions 
    bool hasPresentationDelay() const { return this->presentationDelay_ != nullptr;};
    void deletePresentationDelay() { this->presentationDelay_ = nullptr;};
    inline int32_t presentationDelay() const { DARABONBA_PTR_GET_DEFAULT(presentationDelay_, 0) };
    inline LiveManifestConfig& setPresentationDelay(int32_t presentationDelay) { DARABONBA_PTR_SET_VALUE(presentationDelay_, presentationDelay) };


    // segmentCount Field Functions 
    bool hasSegmentCount() const { return this->segmentCount_ != nullptr;};
    void deleteSegmentCount() { this->segmentCount_ = nullptr;};
    inline int32_t segmentCount() const { DARABONBA_PTR_GET_DEFAULT(segmentCount_, 0) };
    inline LiveManifestConfig& setSegmentCount(int32_t segmentCount) { DARABONBA_PTR_SET_VALUE(segmentCount_, segmentCount) };


    // segmentTemplateFormat Field Functions 
    bool hasSegmentTemplateFormat() const { return this->segmentTemplateFormat_ != nullptr;};
    void deleteSegmentTemplateFormat() { this->segmentTemplateFormat_ = nullptr;};
    inline string segmentTemplateFormat() const { DARABONBA_PTR_GET_DEFAULT(segmentTemplateFormat_, "") };
    inline LiveManifestConfig& setSegmentTemplateFormat(string segmentTemplateFormat) { DARABONBA_PTR_SET_VALUE(segmentTemplateFormat_, segmentTemplateFormat) };


    // streamOrder Field Functions 
    bool hasStreamOrder() const { return this->streamOrder_ != nullptr;};
    void deleteStreamOrder() { this->streamOrder_ = nullptr;};
    inline string streamOrder() const { DARABONBA_PTR_GET_DEFAULT(streamOrder_, "") };
    inline LiveManifestConfig& setStreamOrder(string streamOrder) { DARABONBA_PTR_SET_VALUE(streamOrder_, streamOrder) };


  protected:
    std::shared_ptr<string> adMarkers_ = nullptr;
    std::shared_ptr<int32_t> dateTimeInterval_ = nullptr;
    std::shared_ptr<int32_t> manifestDuration_ = nullptr;
    std::shared_ptr<int32_t> maxVideoBitrate_ = nullptr;
    std::shared_ptr<int32_t> minBufferTime_ = nullptr;
    std::shared_ptr<int32_t> minUpdatePeriod_ = nullptr;
    std::shared_ptr<int32_t> minVideoBitrate_ = nullptr;
    std::shared_ptr<int32_t> presentationDelay_ = nullptr;
    std::shared_ptr<int32_t> segmentCount_ = nullptr;
    std::shared_ptr<string> segmentTemplateFormat_ = nullptr;
    std::shared_ptr<string> streamOrder_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
