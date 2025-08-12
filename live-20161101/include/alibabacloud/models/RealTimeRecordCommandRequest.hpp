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
    virtual bool empty() const override { this->appName_ != nullptr
        && this->command_ != nullptr && this->domainName_ != nullptr && this->ownerId_ != nullptr && this->regionId_ != nullptr && this->streamName_ != nullptr; };
    // appName Field Functions 
    bool hasAppName() const { return this->appName_ != nullptr;};
    void deleteAppName() { this->appName_ = nullptr;};
    inline string appName() const { DARABONBA_PTR_GET_DEFAULT(appName_, "") };
    inline RealTimeRecordCommandRequest& setAppName(string appName) { DARABONBA_PTR_SET_VALUE(appName_, appName) };


    // command Field Functions 
    bool hasCommand() const { return this->command_ != nullptr;};
    void deleteCommand() { this->command_ = nullptr;};
    inline string command() const { DARABONBA_PTR_GET_DEFAULT(command_, "") };
    inline RealTimeRecordCommandRequest& setCommand(string command) { DARABONBA_PTR_SET_VALUE(command_, command) };


    // domainName Field Functions 
    bool hasDomainName() const { return this->domainName_ != nullptr;};
    void deleteDomainName() { this->domainName_ = nullptr;};
    inline string domainName() const { DARABONBA_PTR_GET_DEFAULT(domainName_, "") };
    inline RealTimeRecordCommandRequest& setDomainName(string domainName) { DARABONBA_PTR_SET_VALUE(domainName_, domainName) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline RealTimeRecordCommandRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline RealTimeRecordCommandRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // streamName Field Functions 
    bool hasStreamName() const { return this->streamName_ != nullptr;};
    void deleteStreamName() { this->streamName_ = nullptr;};
    inline string streamName() const { DARABONBA_PTR_GET_DEFAULT(streamName_, "") };
    inline RealTimeRecordCommandRequest& setStreamName(string streamName) { DARABONBA_PTR_SET_VALUE(streamName_, streamName) };


  protected:
    // The name of the application to which the live stream belongs. You can view the application name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    // 
    // This parameter is required.
    std::shared_ptr<string> appName_ = nullptr;
    // The action to be performed. Valid values:
    // 
    // *   **start**: forcibly starts recording.
    // *   **stop**: forcibly stops recording. If the live stream is interrupted for longer than a specific latency, a recording is generated.
    // *   **cancel_delay**: resets the latency for stream interruption and completely stops recording. If the recording task is stopped when you perform this action, a recording is generated.
    // *   **restart**: forcibly restarts recording. If the live stream is being recorded when you perform this action, a recording is generated.
    // 
    // >  **stop** forcibly stops recording. By default, a recording is generated after 180 seconds. **cancel_delay** resets the latency for stream interruption from 180 seconds to 0 seconds. This means that a recording is generated immediately.
    // 
    // This parameter is required.
    std::shared_ptr<string> command_ = nullptr;
    // The main streaming domain.
    // 
    // This parameter is required.
    std::shared_ptr<string> domainName_ = nullptr;
    std::shared_ptr<int64_t> ownerId_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the live stream. Make sure that you specify the correct stream name. You can view the stream name on the [Stream Management](https://help.aliyun.com/document_detail/197397.html) page of the ApsaraVideo Live console.
    // 
    // This parameter is required.
    std::shared_ptr<string> streamName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
