// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BRIDGEWEBCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BRIDGEWEBCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class BridgeWebCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BridgeWebCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Caller, caller_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TimeoutSeconds, timeoutSeconds_);
    };
    friend void from_json(const Darabonba::Json& j, BridgeWebCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Caller, caller_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(SampleRate, sampleRate_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
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
    virtual bool empty() const override { return this->caller_ == nullptr
        && this->deviceId_ == nullptr && this->draftVersion_ == nullptr && this->instanceId_ == nullptr && this->sampleRate_ == nullptr && this->scriptId_ == nullptr
        && this->tags_ == nullptr && this->timeoutSeconds_ == nullptr; };
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


    // draftVersion Field Functions 
    bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
    void deleteDraftVersion() { this->draftVersion_ = nullptr;};
    inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
    inline BridgeWebCallRequest& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BridgeWebCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // sampleRate Field Functions 
    bool hasSampleRate() const { return this->sampleRate_ != nullptr;};
    void deleteSampleRate() { this->sampleRate_ = nullptr;};
    inline int32_t getSampleRate() const { DARABONBA_PTR_GET_DEFAULT(sampleRate_, 0) };
    inline BridgeWebCallRequest& setSampleRate(int32_t sampleRate) { DARABONBA_PTR_SET_VALUE(sampleRate_, sampleRate) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline BridgeWebCallRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


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
    // The caller information used to display and associate with the web call. This is not equivalent to the actual outbound caller phone number. If not provided or left empty, the current web call implementation uses the caller identifier as the caller display information.
    shared_ptr<string> caller_ {};
    // Identifies the client device that initiates the web voice call or receives data channel events. The same client must use the same DeviceId when obtaining data channel credentials and initiating a call. The example is only a business device identifier, not a real credential assigned by the platform.
    shared_ptr<string> deviceId_ {};
    // Specifies the scenario version. A value of true indicates that the draft version is used. A value of false indicates that the published version is used. This is not a scenario publishing operation. Ensure that the selected scenario version exists before calling the operation.
    shared_ptr<bool> draftVersion_ {};
    // The instance identity of the associated product. You must use an existing instance that the invoker has permission to access. The instance must be consistent with the instance to which the scenario, channel, and session belong. The maximum length is subject to the current POP parameter definition.
    shared_ptr<string> instanceId_ {};
    // The audio sample rate for the web voice, in Hz. The backend default is 8000. The sample rate must match the client audio and gateway capabilities. The current API code does not define a complete list of allowed values, and other sample rates are not documented as guaranteed supported enumerations.
    shared_ptr<int32_t> sampleRate_ {};
    // The dialogue scenario ID under the instance. Specify an existing scenario. Subsequent dialogue and end requests for the same text session must use the scenario specified when the session is started.
    shared_ptr<string> scriptId_ {};
    // The attached data string passed to the call link in key=value format. Separate multiple key-value pairs with semicolons instead of using JSON. For example, the web call service can read the Callee key to obtain the called party information. The example number is a placeholder value. Specify actual values based on your integration agreements. Do not overwrite internal tags that do not belong to the business custom scope.
    shared_ptr<string> tags_ {};
    // The timeout for waiting for the call to be answered, in seconds. If the call is not answered within this period, it is actively hung up. The default value on the backend is 60 seconds. This does not represent the maximum duration of an answered call. The current request object does not declare additional upper and lower limits, and unverified value ranges are not added to the documentation.
    shared_ptr<int32_t> timeoutSeconds_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
