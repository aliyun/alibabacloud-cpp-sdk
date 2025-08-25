// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LAUNCHAUTHENTICATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LAUNCHAUTHENTICATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CCC20200701
{
namespace Models
{
  class LaunchAuthenticationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LaunchAuthenticationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_TO_JSON(ContactFlowVariables, contactFlowVariables_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, LaunchAuthenticationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactFlowId, contactFlowId_);
      DARABONBA_PTR_FROM_JSON(ContactFlowVariables, contactFlowVariables_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    LaunchAuthenticationRequest() = default ;
    LaunchAuthenticationRequest(const LaunchAuthenticationRequest &) = default ;
    LaunchAuthenticationRequest(LaunchAuthenticationRequest &&) = default ;
    LaunchAuthenticationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LaunchAuthenticationRequest() = default ;
    LaunchAuthenticationRequest& operator=(const LaunchAuthenticationRequest &) = default ;
    LaunchAuthenticationRequest& operator=(LaunchAuthenticationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactFlowId_ != nullptr
        && this->contactFlowVariables_ != nullptr && this->deviceId_ != nullptr && this->instanceId_ != nullptr && this->jobId_ != nullptr && this->userId_ != nullptr; };
    // contactFlowId Field Functions 
    bool hasContactFlowId() const { return this->contactFlowId_ != nullptr;};
    void deleteContactFlowId() { this->contactFlowId_ = nullptr;};
    inline string contactFlowId() const { DARABONBA_PTR_GET_DEFAULT(contactFlowId_, "") };
    inline LaunchAuthenticationRequest& setContactFlowId(string contactFlowId) { DARABONBA_PTR_SET_VALUE(contactFlowId_, contactFlowId) };


    // contactFlowVariables Field Functions 
    bool hasContactFlowVariables() const { return this->contactFlowVariables_ != nullptr;};
    void deleteContactFlowVariables() { this->contactFlowVariables_ = nullptr;};
    inline string contactFlowVariables() const { DARABONBA_PTR_GET_DEFAULT(contactFlowVariables_, "") };
    inline LaunchAuthenticationRequest& setContactFlowVariables(string contactFlowVariables) { DARABONBA_PTR_SET_VALUE(contactFlowVariables_, contactFlowVariables) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string deviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline LaunchAuthenticationRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline LaunchAuthenticationRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline LaunchAuthenticationRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline LaunchAuthenticationRequest& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> contactFlowId_ = nullptr;
    std::shared_ptr<string> contactFlowVariables_ = nullptr;
    std::shared_ptr<string> deviceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> jobId_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CCC20200701
#endif
