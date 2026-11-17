// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BEGINTRIALSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BEGINTRIALSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OutboundBot20251111
{
namespace Models
{
  class BeginTrialSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BeginTrialSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(VendorParams, vendorParams_);
      DARABONBA_PTR_TO_JSON(VisitorToken, visitorToken_);
    };
    friend void from_json(const Darabonba::Json& j, BeginTrialSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(VendorParams, vendorParams_);
      DARABONBA_PTR_FROM_JSON(VisitorToken, visitorToken_);
    };
    BeginTrialSessionRequest() = default ;
    BeginTrialSessionRequest(const BeginTrialSessionRequest &) = default ;
    BeginTrialSessionRequest(BeginTrialSessionRequest &&) = default ;
    BeginTrialSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BeginTrialSessionRequest() = default ;
    BeginTrialSessionRequest& operator=(const BeginTrialSessionRequest &) = default ;
    BeginTrialSessionRequest& operator=(BeginTrialSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftVersion_ == nullptr
        && this->instanceId_ == nullptr && this->scriptId_ == nullptr && this->vendorParams_ == nullptr && this->visitorToken_ == nullptr; };
    // draftVersion Field Functions 
    bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
    void deleteDraftVersion() { this->draftVersion_ = nullptr;};
    inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
    inline BeginTrialSessionRequest& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BeginTrialSessionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline BeginTrialSessionRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // vendorParams Field Functions 
    bool hasVendorParams() const { return this->vendorParams_ != nullptr;};
    void deleteVendorParams() { this->vendorParams_ = nullptr;};
    inline string getVendorParams() const { DARABONBA_PTR_GET_DEFAULT(vendorParams_, "") };
    inline BeginTrialSessionRequest& setVendorParams(string vendorParams) { DARABONBA_PTR_SET_VALUE(vendorParams_, vendorParams) };


    // visitorToken Field Functions 
    bool hasVisitorToken() const { return this->visitorToken_ != nullptr;};
    void deleteVisitorToken() { this->visitorToken_ = nullptr;};
    inline string getVisitorToken() const { DARABONBA_PTR_GET_DEFAULT(visitorToken_, "") };
    inline BeginTrialSessionRequest& setVisitorToken(string visitorToken) { DARABONBA_PTR_SET_VALUE(visitorToken_, visitorToken) };


  protected:
    // Specifies whether to use the Scenarios draft version. Valid values:
    // - true: Uses the draft version.
    // - false: Uses the published version.
    // If the draft version is unavailable but a published version exists when a text session is started, the system falls back to the published version. The required version must exist. Do not interpret this parameter as publishing Scenarios or creating a version.
    shared_ptr<bool> draftVersion_ {};
    // The instance identity of the associated product. You must use an existing instance that the invoker has permission to access. The instance must be consistent with the instance to which the scenario, channel, and session belong. The maximum length is subject to the current POP parameter definition.
    shared_ptr<string> instanceId_ {};
    // The ID of the dialogue scenario under the instance. Specify an existing scenario. Subsequent dialogues and end requests for the same text session must use the scenario specified when the session is started.
    shared_ptr<string> scriptId_ {};
    // The pass-through parameters passed to the scenario or dialogue engine. The value is a string of a JSON object, not a structured request object. Key names are defined by the scenario variables and the integrated engine. The city key in the example only demonstrates a custom variable in code testing and is not a fixed parameter for all scenarios. You can use an empty JSON object if no additional variables are required.
    shared_ptr<string> vendorParams_ {};
    // The visitor token obtained from the trial link. It is used to locate the trial channel and verify access permissions and validity period. The token is generated by the channel service and must not be constructed manually. It cannot be empty and must be within its validity period. The example is a placeholder value that cannot be used for authentication. Do not disclose actual tokens to unauthorized personnel.
    // 
    // This parameter is required.
    shared_ptr<string> visitorToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OutboundBot20251111
#endif
