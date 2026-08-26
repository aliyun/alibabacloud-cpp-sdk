// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REALTIMERECORDCOMMANDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REALTIMERECORDCOMMANDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class RealTimeRecordCommandRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RealTimeRecordCommandRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppName, appName_);
      DARABONBA_PTR_TO_JSON(Command, command_);
      DARABONBA_PTR_TO_JSON(DomainName, domainName_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(StreamName, streamName_);
    };
    friend void from_json(const Darabonba::Json& j, RealTimeRecordCommandRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppName, appName_);
      DARABONBA_PTR_FROM_JSON(Command, command_);
      DARABONBA_PTR_FROM_JSON(DomainName, domainName_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(StreamName, streamName_);
    };
    RealTimeRecordCommandRequest() = default ;
    RealTimeRecordCommandRequest(const RealTimeRecordCommandRequest &) = default ;
    RealTimeRecordCommandRequest(RealTimeRecordCommandRequest &&) = default ;
    RealTimeRecordCommandRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RealTimeRecordCommandRequest() = default ;
    RealTimeRecordCommandRequest& operator=(const RealTimeRecordCommandRequest &) = default ;
    RealTimeRecordCommandRequest& operator=(RealTimeRecordCommandRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appName_ == nullptr
        && this->command_ == nullptr && this->domainName_ == nullptr && this->ownerId_ == nullptr && this->regionId_ == nullptr && this->streamName_ == nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string getAppName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline RealTimeRecordCommandRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string getCommand() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline RealTimeRecordCommandRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string getDomainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline RealTimeRecordCommandRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RealTimeRecordCommandRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RealTimeRecordCommandRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string getStreamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline RealTimeRecordCommandRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the stream belongs. You can view the AppName on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page.
    // 
    // This parameter is required.
    shared_ptr<string> appName_ {};
    // The operation action. Valid values:
    // 
    // - **start**: forcibly starts recording. This must be called as the first operation and cannot be called again before stopping.
    // - **stop**: forcibly pauses recording. After the stream interruption delay (180 seconds by default) elapses, a recording is generated. This can only be called after start or restart. To generate the file immediately after calling stop, call cancel_delay.
    // - **cancel_delay**: immediately terminates the wait and generates a recording, completely stopping recording. This must be called after stop to generate the file in advance.
    // - **restart**: forcibly restarts recording. If recording is in progress before restart, a file is immediately generated. This can only be called when the task is in the started or stopped state.
    // 
    // This parameter is required.
    shared_ptr<string> command_ {};
    // The streamer\\"s streaming domain.
    // 
    // This parameter is required.
    shared_ptr<string> domainName_ {};
    shared_ptr<int64_t> ownerId_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The stream name. Make sure that the StreamName is correct. You can view the StreamName on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page.
    // 
    // > This operation supports only single-stream operations and does not support wildcards.
    // 
    // This parameter is required.
    shared_ptr<string> streamName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
