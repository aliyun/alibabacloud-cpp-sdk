// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDLIVESTREAMMERGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDLIVESTREAMMERGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class AddLiveStreamMergeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddLiveStreamMergeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InAppName1, inAppName1_);
      DARABONBA_PTR_TO_JSON(InAppName2, inAppName2_);
      DARABONBA_PTR_TO_JSON(InStreamName1, inStreamName1_);
      DARABONBA_PTR_TO_JSON(InStreamName2, inStreamName2_);
      DARABONBA_PTR_TO_JSON(LiveMerger, liveMerger_);
      DARABONBA_PTR_TO_JSON(MergeParameters, mergeParameters_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, AddLiveStreamMergeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InAppName1, inAppName1_);
      DARABONBA_PTR_FROM_JSON(InAppName2, inAppName2_);
      DARABONBA_PTR_FROM_JSON(InStreamName1, inStreamName1_);
      DARABONBA_PTR_FROM_JSON(InStreamName2, inStreamName2_);
      DARABONBA_PTR_FROM_JSON(LiveMerger, liveMerger_);
      DARABONBA_PTR_FROM_JSON(MergeParameters, mergeParameters_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    AddLiveStreamMergeRequest() = default ;
    AddLiveStreamMergeRequest(const AddLiveStreamMergeRequest &) = default ;
    AddLiveStreamMergeRequest(AddLiveStreamMergeRequest &&) = default ;
    AddLiveStreamMergeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddLiveStreamMergeRequest() = default ;
    AddLiveStreamMergeRequest& operator=(const AddLiveStreamMergeRequest &) = default ;
    AddLiveStreamMergeRequest& operator=(AddLiveStreamMergeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->domainName_ == nullptr && this->endTime_ == nullptr && this->inAppName1_ == nullptr && this->inAppName2_ == nullptr && this->inStreamName1_ == nullptr
        && this->inStreamName2_ == nullptr && this->liveMerger_ == nullptr && this->mergeParameters_ == nullptr && this->ownerId_ == nullptr && this->protocol_ == nullptr
        && this->regionId_ == nullptr && this->startTime_ == nullptr && this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline AddLiveStreamMergeRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline AddLiveStreamMergeRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline AddLiveStreamMergeRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // inAppName1 Field Functions 
    bool hasInAppName1() const { return this->inAppName1_ != nullptr;};
    void deleteInAppName1() { this->inAppName1_ = nullptr;};
    inline string getInAppName1() const { DARABONBA_PTR_GET_DEFAULT(inAppName1_, "") };
    inline AddLiveStreamMergeRequest& setInAppName1(string inAppName1) { DARABONBA_PTR_SET_VALUE(inAppName1_, inAppName1) };


    // inAppName2 Field Functions 
    bool hasInAppName2() const { return this->inAppName2_ != nullptr;};
    void deleteInAppName2() { this->inAppName2_ = nullptr;};
    inline string getInAppName2() const { DARABONBA_PTR_GET_DEFAULT(inAppName2_, "") };
    inline AddLiveStreamMergeRequest& setInAppName2(string inAppName2) { DARABONBA_PTR_SET_VALUE(inAppName2_, inAppName2) };


    // inStreamName1 Field Functions 
    bool hasInStreamName1() const { return this->inStreamName1_ != nullptr;};
    void deleteInStreamName1() { this->inStreamName1_ = nullptr;};
    inline string getInStreamName1() const { DARABONBA_PTR_GET_DEFAULT(inStreamName1_, "") };
    inline AddLiveStreamMergeRequest& setInStreamName1(string inStreamName1) { DARABONBA_PTR_SET_VALUE(inStreamName1_, inStreamName1) };


    // inStreamName2 Field Functions 
    bool hasInStreamName2() const { return this->inStreamName2_ != nullptr;};
    void deleteInStreamName2() { this->inStreamName2_ = nullptr;};
    inline string getInStreamName2() const { DARABONBA_PTR_GET_DEFAULT(inStreamName2_, "") };
    inline AddLiveStreamMergeRequest& setInStreamName2(string inStreamName2) { DARABONBA_PTR_SET_VALUE(inStreamName2_, inStreamName2) };


    // liveMerger Field Functions 
    bool hasLiveMerger() const { return this->liveMerger_ != nullptr;};
    void deleteLiveMerger() { this->liveMerger_ = nullptr;};
    inline string getLiveMerger() const { DARABONBA_PTR_GET_DEFAULT(liveMerger_, "") };
    inline AddLiveStreamMergeRequest& setLiveMerger(string liveMerger) { DARABONBA_PTR_SET_VALUE(liveMerger_, liveMerger) };


    // mergeParameters Field Functions 
    bool hasMergeParameters() const { return this->mergeParameters_ != nullptr;};
    void deleteMergeParameters() { this->mergeParameters_ = nullptr;};
    inline string getMergeParameters() const { DARABONBA_PTR_GET_DEFAULT(mergeParameters_, "") };
    inline AddLiveStreamMergeRequest& setMergeParameters(string mergeParameters) { DARABONBA_PTR_SET_VALUE(mergeParameters_, mergeParameters) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline AddLiveStreamMergeRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string getProtocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline AddLiveStreamMergeRequest& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AddLiveStreamMergeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline AddLiveStreamMergeRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline AddLiveStreamMergeRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application that generates the output stream. The value must be the same as the application name in the ingest URL of the output stream. Otherwise, the configuration does not take effect. You cannot set the value to an asterisk (\\*).
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    // The end time of the stream mixing.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // >  The interval between the start time and the end time must be within 7 days.
    // 
    // This parameter is required.
    shared_ptr<string> endTime_ {};
    // The name of the application that generates the input primary stream. The value must be the same as the application name that is specified in the ingest URL of the primary stream. Otherwise, the configuration does not take effect.
    // 
    // This parameter is required.
    shared_ptr<string> inAppName1_ {};
    // The name of the application that generates the input secondary stream. The value must be the same as the application name that is specified in the ingest URL of the secondary stream. Otherwise, the configuration does not take effect.
    // 
    // This parameter is required.
    shared_ptr<string> inAppName2_ {};
    // The name of the input primary stream. The value must be the same as the stream name that is specified in the ingest URL of the primary stream. Otherwise, the configuration does not take effect.
    // 
    // This parameter is required.
    shared_ptr<string> inStreamName1_ {};
    // The name of the input secondary stream. The value must be the same as the stream name that is specified in the ingest URL of the secondary stream. Otherwise, the configuration does not take effect.
    // 
    // This parameter is required.
    shared_ptr<string> inStreamName2_ {};
    shared_ptr<string> liveMerger_ {};
    shared_ptr<string> mergeParameters_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The streaming protocol. Valid values:
    // 
    // *   **rtmp**: This is the default value.
    // *   **rtc**
    shared_ptr<string> protocol_ {};
    shared_ptr<string> regionId_ {};
    // The start time of the stream mixing.
    // 
    // Specify the time in the ISO 8601 standard in the yyyy-MM-ddTHH:mm:ssZ format. The time must be in UTC.
    // 
    // This parameter is required.
    shared_ptr<string> startTime_ {};
    // The name of the output stream. The value must be the same as the stream name in the ingest URL of the output stream. Otherwise, the configuration does not take effect. You cannot set the value to an asterisk (\\*).
    // 
    // This parameter is required.
    shared_ptr<string> streamName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
