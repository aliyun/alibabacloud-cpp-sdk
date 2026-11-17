// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MAKEPILOTCALLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MAKEPILOTCALLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class MakePilotCallRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MakePilotCallRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CallVariables, callVariables_);
      DARABONBA_PTR_TO_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Number, number_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(VerificationCode, verificationCode_);
    };
    friend void from_json(const Darabonba::Json& j, MakePilotCallRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CallVariables, callVariables_);
      DARABONBA_PTR_FROM_JSON(DeviceId, deviceId_);
      DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Number, number_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(VerificationCode, verificationCode_);
    };
    MakePilotCallRequest() = default ;
    MakePilotCallRequest(const MakePilotCallRequest &) = default ;
    MakePilotCallRequest(MakePilotCallRequest &&) = default ;
    MakePilotCallRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MakePilotCallRequest() = default ;
    MakePilotCallRequest& operator=(const MakePilotCallRequest &) = default ;
    MakePilotCallRequest& operator=(MakePilotCallRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callVariables_ == nullptr
        && this->deviceId_ == nullptr && this->draftVersion_ == nullptr && this->instanceId_ == nullptr && this->number_ == nullptr && this->scriptId_ == nullptr
        && this->tags_ == nullptr && this->verificationCode_ == nullptr; };
    // callVariables Field Functions 
    bool hasCallVariables() const { return this->callVariables_ != nullptr;};
    void deleteCallVariables() { this->callVariables_ = nullptr;};
    inline string getCallVariables() const { DARABONBA_PTR_GET_DEFAULT(callVariables_, "") };
    inline MakePilotCallRequest& setCallVariables(string callVariables) { DARABONBA_PTR_SET_VALUE(callVariables_, callVariables) };


    // deviceId Field Functions 
    bool hasDeviceId() const { return this->deviceId_ != nullptr;};
    void deleteDeviceId() { this->deviceId_ = nullptr;};
    inline string getDeviceId() const { DARABONBA_PTR_GET_DEFAULT(deviceId_, "") };
    inline MakePilotCallRequest& setDeviceId(string deviceId) { DARABONBA_PTR_SET_VALUE(deviceId_, deviceId) };


    // draftVersion Field Functions 
    bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
    void deleteDraftVersion() { this->draftVersion_ = nullptr;};
    inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
    inline MakePilotCallRequest& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MakePilotCallRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // number Field Functions 
    bool hasNumber() const { return this->number_ != nullptr;};
    void deleteNumber() { this->number_ = nullptr;};
    inline string getNumber() const { DARABONBA_PTR_GET_DEFAULT(number_, "") };
    inline MakePilotCallRequest& setNumber(string number) { DARABONBA_PTR_SET_VALUE(number_, number) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline MakePilotCallRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline string getTags() const { DARABONBA_PTR_GET_DEFAULT(tags_, "") };
    inline MakePilotCallRequest& setTags(string tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };


    // verificationCode Field Functions 
    bool hasVerificationCode() const { return this->verificationCode_ != nullptr;};
    void deleteVerificationCode() { this->verificationCode_ = nullptr;};
    inline string getVerificationCode() const { DARABONBA_PTR_GET_DEFAULT(verificationCode_, "") };
    inline MakePilotCallRequest& setVerificationCode(string verificationCode) { DARABONBA_PTR_SET_VALUE(verificationCode_, verificationCode) };


  protected:
    // The variables passed to the phone call link. The value is a JSON object string, and variable values are processed as strings. Specific variable names are agreed upon by the call link and business scenario. This parameter is not semicolon-separated Tags. The example uses an empty object when no custom variables are defined.
    shared_ptr<string> callVariables_ {};
    // The ID of the client device that initiates the web voice or receives data channel events. The same client must use the same DeviceId when obtaining data channel credentials and initiating a call. The example is only a business device ID and not a real credential assigned by the platform.
    // 
    // This parameter is required.
    shared_ptr<string> deviceId_ {};
    // Specifies whether to use the draft version. Valid values:
    // - true: Uses the draft version.
    // - false: Uses the published version.
    // This parameter does not publish the scenario. Ensure that the selected scenario version exists before you call this operation.
    // 
    // This parameter is required.
    shared_ptr<bool> draftVersion_ {};
    // The instance identity of the product. You must use an instance that the invoker has access to and that actually exists. The instance must be consistent with the instance to which the scenario, channel, and session belong. The maximum length is subject to the current POP parameter definition.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The called phone number for the current real-number outbound call test. The number must be the same as the one used to obtain the SMS verification code. Specify a number that is actually supported by the business and authorized. The current request object only requires this parameter to be non-empty. This document does not fabricate number formats or international number support scopes.
    // 
    // This parameter is required.
    shared_ptr<string> number_ {};
    // The dialog scenario ID of the instance. Specify an existing scenario. Subsequent dialog and end requests for the same text session must use the scenario specified when the session is started.
    // 
    // This parameter is required.
    shared_ptr<string> scriptId_ {};
    // The attached data string passed to the call link. Use the key=value format. Separate multiple key-value pairs with semicolons. Do not use JSON. For example, the Callee key can be used by the web call service to read the called party information. The example number is a placeholder value. Specify the actual value based on the access conventions of your business. Do not overwrite internal tags that do not belong to the business custom scope.
    shared_ptr<string> tags_ {};
    // The SMS verification code sent to the number specified by Number for the verification of the OutboundCallTest scenario. The request must use a valid verification code actually received by the number. The example only demonstrates a string parameter and cannot be used to pass the verification. It also does not declare undefined length rules for the code.
    // 
    // This parameter is required.
    shared_ptr<string> verificationCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
