// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_STARTTERMINALSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_STARTTERMINALSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class StartTerminalSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const StartTerminalSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CommandLine, commandLine_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, StartTerminalSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CommandLine, commandLine_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    StartTerminalSessionRequest() = default ;
    StartTerminalSessionRequest(const StartTerminalSessionRequest &) = default ;
    StartTerminalSessionRequest(StartTerminalSessionRequest &&) = default ;
    StartTerminalSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~StartTerminalSessionRequest() = default ;
    StartTerminalSessionRequest& operator=(const StartTerminalSessionRequest &) = default ;
    StartTerminalSessionRequest& operator=(StartTerminalSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->commandLine_ == nullptr
        && this->instanceId_ == nullptr && this->regionId_ == nullptr; };
    // commandLine Field Functions 
    bool hasCommandLine() const { return this->commandLine_ != nullptr;};
    void deleteCommandLine() { this->commandLine_ = nullptr;};
    inline string getCommandLine() const { DARABONBA_PTR_GET_DEFAULT(commandLine_, "") };
    inline StartTerminalSessionRequest& setCommandLine(string commandLine) { DARABONBA_PTR_SET_VALUE(commandLine_, commandLine) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline StartTerminalSessionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline StartTerminalSessionRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The command to run after the session is started. The command can be up to 512 characters in length.
    shared_ptr<string> commandLine_ {};
    // The ID of the Simple Application Server instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The region ID of the Simple Application Server instance. You can call the [ListRegions](https://help.aliyun.com/document_detail/189315.html) operation to query the most recent list of Alibaba Cloud regions.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
