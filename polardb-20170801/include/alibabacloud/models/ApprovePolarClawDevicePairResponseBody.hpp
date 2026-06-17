// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_APPROVEPOLARCLAWDEVICEPAIRRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_APPROVEPOLARCLAWDEVICEPAIRRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class ApprovePolarClawDevicePairResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ApprovePolarClawDevicePairResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Device, device_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(PairRequestId, pairRequestId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ApprovePolarClawDevicePairResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Device, device_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(PairRequestId, pairRequestId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ApprovePolarClawDevicePairResponseBody() = default ;
    ApprovePolarClawDevicePairResponseBody(const ApprovePolarClawDevicePairResponseBody &) = default ;
    ApprovePolarClawDevicePairResponseBody(ApprovePolarClawDevicePairResponseBody &&) = default ;
    ApprovePolarClawDevicePairResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ApprovePolarClawDevicePairResponseBody() = default ;
    ApprovePolarClawDevicePairResponseBody& operator=(const ApprovePolarClawDevicePairResponseBody &) = default ;
    ApprovePolarClawDevicePairResponseBody& operator=(ApprovePolarClawDevicePairResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Device : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Device& obj) { 
        DARABONBA_PTR_TO_JSON(CreatedAtMs, createdAtMs_);
        DARABONBA_PTR_TO_JSON(DeviceFamily, deviceFamily_);
        DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Platform, platform_);
        DARABONBA_PTR_TO_JSON(Role, role_);
        DARABONBA_PTR_TO_JSON(Scopes, scopes_);
      };
      friend void from_json(const Darabonba::Json& j, Device& obj) { 
        DARABONBA_PTR_FROM_JSON(CreatedAtMs, createdAtMs_);
        DARABONBA_PTR_FROM_JSON(DeviceFamily, deviceFamily_);
        DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Platform, platform_);
        DARABONBA_PTR_FROM_JSON(Role, role_);
        DARABONBA_PTR_FROM_JSON(Scopes, scopes_);
      };
      Device() = default ;
      Device(const Device &) = default ;
      Device(Device &&) = default ;
      Device(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Device() = default ;
      Device& operator=(const Device &) = default ;
      Device& operator=(Device &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createdAtMs_ == nullptr
        && this->deviceFamily_ == nullptr && this->deviceId_ == nullptr && this->displayName_ == nullptr && this->platform_ == nullptr && this->role_ == nullptr
        && this->scopes_ == nullptr; };
      // createdAtMs Field Functions 
      bool hasCreatedAtMs() const { return this->createdAtMs_ != nullptr;};
      void deleteCreatedAtMs() { this->createdAtMs_ = nullptr;};
      inline int64_t getCreatedAtMs() const { DARABONBA_PTR_GET_DEFAULT(createdAtMs_, 0L) };
      inline Device& setCreatedAtMs(int64_t createdAtMs) { DARABONBA_PTR_SET_VALUE(createdAtMs_, createdAtMs) };


      // deviceFamily Field Functions 
      bool hasDeviceFamily() const { return this->deviceFamily_ != nullptr;};
      void deleteDeviceFamily() { this->deviceFamily_ = nullptr;};
      inline string getDeviceFamily() const { DARABONBA_PTR_GET_DEFAULT(deviceFamily_, "") };
      inline Device& setDeviceFamily(string deviceFamily) { DARABONBA_PTR_SET_VALUE(deviceFamily_, deviceFamily) };


      // deviceId Field Functions 
      bool hasDeviceId() const { return this->deviceId_ != nullptr;};
      void deleteDeviceId() { this->deviceId_ = nullptr;};
      inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
      inline Device& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline Device& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // platform Field Functions 
      bool hasPlatform() const { return this->platform_ != nullptr;};
      void deletePlatform() { this->platform_ = nullptr;};
      inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
      inline Device& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


      // role Field Functions 
      bool hasRole() const { return this->role_ != nullptr;};
      void deleteRole() { this->role_ = nullptr;};
      inline string getRole() const { DARABONBA_PTR_GET_DEFAULT(role_, "") };
      inline Device& setRole(string role) { DARABONBA_PTR_SET_VALUE(role_, role) };


      // scopes Field Functions 
      bool hasScopes() const { return this->scopes_ != nullptr;};
      void deleteScopes() { this->scopes_ = nullptr;};
      inline const vector<string> & getScopes() const { DARABONBA_PTR_GET_CONST(scopes_, vector<string>) };
      inline vector<string> getScopes() { DARABONBA_PTR_GET(scopes_, vector<string>) };
      inline Device& setScopes(const vector<string> & scopes) { DARABONBA_PTR_SET_VALUE(scopes_, scopes) };
      inline Device& setScopes(vector<string> && scopes) { DARABONBA_PTR_SET_RVALUE(scopes_, scopes) };


    protected:
      // The creation time of the device pairing, in Unix milliseconds.
      shared_ptr<int64_t> createdAtMs_ {};
      // The device family.
      shared_ptr<string> deviceFamily_ {};
      // The unique ID of the device.
      shared_ptr<string> deviceId_ {};
      // The display name of the device.
      shared_ptr<string> displayName_ {};
      // The operating system of the device.
      shared_ptr<string> platform_ {};
      // The role of the device.
      shared_ptr<string> role_ {};
      // A list of permission scopes.
      shared_ptr<vector<string>> scopes_ {};
    };

    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->code_ == nullptr && this->device_ == nullptr && this->message_ == nullptr && this->pairRequestId_ == nullptr && this->requestId_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline ApprovePolarClawDevicePairResponseBody& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline ApprovePolarClawDevicePairResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // device Field Functions 
    bool hasDevice() const { return this->device_ != nullptr;};
    void deleteDevice() { this->device_ = nullptr;};
    inline const ApprovePolarClawDevicePairResponseBody::Device & getDevice() const { DARABONBA_PTR_GET_CONST(device_, ApprovePolarClawDevicePairResponseBody::Device) };
    inline ApprovePolarClawDevicePairResponseBody::Device getDevice() { DARABONBA_PTR_GET(device_, ApprovePolarClawDevicePairResponseBody::Device) };
    inline ApprovePolarClawDevicePairResponseBody& setDevice(const ApprovePolarClawDevicePairResponseBody::Device & device) { DARABONBA_PTR_SET_VALUE(device_, device) };
    inline ApprovePolarClawDevicePairResponseBody& setDevice(ApprovePolarClawDevicePairResponseBody::Device && device) { DARABONBA_PTR_SET_RVALUE(device_, device) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ApprovePolarClawDevicePairResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // pairRequestId Field Functions 
    bool hasPairRequestId() const { return this->pairRequestId_ != nullptr;};
    void deletePairRequestId() { this->pairRequestId_ = nullptr;};
    inline string getPairRequestId() const { DARABONBA_PTR_GET_DEFAULT(pairRequestId_, "") };
    inline ApprovePolarClawDevicePairResponseBody& setPairRequestId(string pairRequestId) { DARABONBA_PTR_SET_VALUE(pairRequestId_, pairRequestId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ApprovePolarClawDevicePairResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The application ID.
    shared_ptr<string> applicationId_ {};
    // The response status code.
    shared_ptr<int32_t> code_ {};
    // The paired device information.
    shared_ptr<ApprovePolarClawDevicePairResponseBody::Device> device_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The pairing request ID.
    shared_ptr<string> pairRequestId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
