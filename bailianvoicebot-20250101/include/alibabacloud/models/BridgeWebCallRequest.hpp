// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BRIDGEWEBCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BRIDGEWEBCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BailianVoiceBot20250101
{
namespace Models
{
  class BridgeWebCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BridgeWebCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_TO_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, BridgeWebCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
      DARABONBA_PTR_FROM_JSON(BusinessUnitId, businessUnitId_);
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(Sandbox, sandbox_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    BridgeWebCallRequest() = default ;
    BridgeWebCallRequest(const BridgeWebCallRequest &) = default ;
    BridgeWebCallRequest(BridgeWebCallRequest &&) = default ;
    BridgeWebCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BridgeWebCallRequest() = default ;
    BridgeWebCallRequest& operator=(const BridgeWebCallRequest &) = default ;
    BridgeWebCallRequest& operator=(BridgeWebCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->businessUnitId_ == nullptr && this->caller_ == nullptr && this->deviceId_ == nullptr && this->sampleRate_ == nullptr && this->sandbox_ == nullptr
        && this->tags_ == nullptr && this->timeoutSeconds_ == nullptr; };
    // applicationId Field Functions 
    bool hasApplicationId() const { return this->applicationId_ != nullptr;};
    void deleteApplicationId() { this->applicationId_ = nullptr;};
    inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
    inline BridgeWebCallRequest& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


    // businessUnitId Field Functions 
    bool hasBusinessUnitId() const { return this->businessUnitId_ != nullptr;};
    void deleteBusinessUnitId() { this->businessUnitId_ = nullptr;};
    inline string getBusinessUnitId() const { DARABONBA_PTR_GET_DEFAULT(businessUnitId_, "") };
    inline BridgeWebCallRequest& setBusinessUnitId(string businessUnitId) { DARABONBA_PTR_SET_VALUE(businessUnitId_, businessUnitId) };


    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline BridgeWebCallRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BridgeWebCallRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline BridgeWebCallRequest& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // sandbox Field Functions 
    bool hasSandbox() const { return this->sandbox_ != nullptr;};
    void deleteSandbox() { this->sandbox_ = nullptr;};
    inline bool getSandbox() const { DARABONBA_PTR_GET_DEFAULT(sandbox_, false) };
    inline BridgeWebCallRequest& setSandbox(bool sandbox) { DARABONBA_PTR_SET_VALUE(sandbox_, sandbox) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline BridgeWebCallRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline BridgeWebCallRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


  protected:
    // This parameter is required.
    shared_ptr<string> applicationId_ {};
    // This parameter is required.
    shared_ptr<string> businessUnitId_ {};
    shared_ptr<string> caller_ {};
    // This parameter is required.
    shared_ptr<string> deviceId_ {};
    shared_ptr<int32_t> sampleRate_ {};
    shared_ptr<bool> sandbox_ {};
    shared_ptr<string> tags_ {};
    shared_ptr<int32_t> timeoutSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BailianVoiceBot20250101
#endif
