// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BRIDGETRIALWEBCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BRIDGETRIALWEBCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class BridgeTrialWebCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BridgeTrialWebCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_TO_JSON(VisitorToken, visitorToken_);
    };
    friend void from_json(const Darabonba::Json& j, BridgeTrialWebCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TimeoutSeconds, timeoutSeconds_);
      DARABONBA_PTR_FROM_JSON(VisitorToken, visitorToken_);
    };
    BridgeTrialWebCallRequest() = default ;
    BridgeTrialWebCallRequest(const BridgeTrialWebCallRequest &) = default ;
    BridgeTrialWebCallRequest(BridgeTrialWebCallRequest &&) = default ;
    BridgeTrialWebCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BridgeTrialWebCallRequest() = default ;
    BridgeTrialWebCallRequest& operator=(const BridgeTrialWebCallRequest &) = default ;
    BridgeTrialWebCallRequest& operator=(BridgeTrialWebCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->caller_ == nullptr
        && this->deviceId_ == nullptr && this->draftVersion_ == nullptr && this->instanceId_ == nullptr && this->sampleRate_ == nullptr && this->scriptId_ == nullptr
        && this->tags_ == nullptr && this->timeoutSeconds_ == nullptr && this->visitorToken_ == nullptr; };
    // caller Field Functions 
    bool hasCaller() const { return this->caller_ != nullptr;};
    void deleteCaller() { this->caller_ = nullptr;};
    inline string getCaller() const { DARABONBA_PTR_GET_DEFAULT(caller_, "") };
    inline BridgeTrialWebCallRequest& setCaller(string caller) { DARABONBA_PTR_SET_VALUE(caller_, caller) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline BridgeTrialWebCallRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // draftVersion Field Functions 
    bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
    void deleteDraftVersion() { this->draftVersion_ = nullptr;};
    inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
    inline BridgeTrialWebCallRequest& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BridgeTrialWebCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline BridgeTrialWebCallRequest& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline BridgeTrialWebCallRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline BridgeTrialWebCallRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // timeoutSeconds Field Functions 
    bool hasTimeoutSeconds() const { return this->timeoutSeconds_ != nullptr;};
    void deleteTimeoutSeconds() { this->timeoutSeconds_ = nullptr;};
    inline int32_t getTimeoutSeconds() const { DARABONBA_PTR_GET_DEFAULT(timeoutSeconds_, 0) };
    inline BridgeTrialWebCallRequest& setTimeoutSeconds(int32_t timeoutSeconds) { DARABONBA_PTR_SET_VALUE(timeoutSeconds_, timeoutSeconds) };


    // visitorToken Field Functions 
    bool hasVisitorToken() const { return this->visitorToken_ != nullptr;};
    void deleteVisitorToken() { this->visitorToken_ = nullptr;};
    inline string getVisitorToken() const { DARABONBA_PTR_GET_DEFAULT(visitorToken_, "") };
    inline BridgeTrialWebCallRequest& setVisitorToken(string visitorToken) { DARABONBA_PTR_SET_VALUE(visitorToken_, visitorToken) };


  protected:
    // The caller information used to display and associate with the web call. It is not equivalent to the actual outbound caller phone number. If it is not provided or is empty, the current web call implementation uses the caller identifier as the caller display information.
    shared_ptr<string> caller_ {};
    // The ID of the client device that initiates the web voice call or receives data channel events. The same DeviceId must be used when the same client obtains data channel credentials and initiates a call. The example is only a business device identifier, not a real credential assigned by the platform.
    shared_ptr<string> deviceId_ {};
    // Specifies whether to use the draft version. Valid values: true: uses the draft version. false: uses the published version. This is not a scenario publishing operation. Ensure that the selected scenario version exists before the call.
    shared_ptr<bool> draftVersion_ {};
    // The instance identity of the associated product. You must use an instance that the invoker has access to and that actually exists. The instance must be consistent with the instance to which the scenario, channel, and session belong. The maximum length is subject to the current POP parameter definition.
    shared_ptr<string> instanceId_ {};
    // The audio sampling rate for web voice, in Hz. The backend default is 8000. It must match the client audio and gateway capabilities. The current API code does not define a complete list of allowed values, and other sampling rates are not written as guaranteed supported enumerations.
    shared_ptr<int32_t> sampleRate_ {};
    // The ID of the dialogue scenario under the instance. Specify an existing scenario. Subsequent dialogues and end requests for the same text session must use the scenario specified when the session is started.
    shared_ptr<string> scriptId_ {};
    // The attached data string passed to the call link. It uses the key=value format. Multiple key-value pairs are separated by semicolons. It is not in JSON format. For example, the Callee key can be used by the web call service to read the called party information. The example number is a placeholder value. For actual business, fill it in according to the access agreement. Do not overwrite internal tags that are not within the business custom scope.
    shared_ptr<string> tags_ {};
    // The timeout period for waiting for the call to be answered, in seconds. If the call is not answered within this period, it is actively hung up. The backend default is 60 seconds. This is not the maximum duration of an answered call. The current request object does not declare additional upper and lower limits, and unverified value ranges are not added to the documentation.
    shared_ptr<int32_t> timeoutSeconds_ {};
    // The visitor token obtained from the trial link. It is used to locate the trial channel and verify the access permissions and validity period. The token is generated by the channel service and must not be constructed manually. It cannot be empty and must still be within the validity period. The example is a placeholder value that cannot be used for authentication. Do not disclose the real token to unrelated personnel.
    // 
    // This parameter is required.
    shared_ptr<string> visitorToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
