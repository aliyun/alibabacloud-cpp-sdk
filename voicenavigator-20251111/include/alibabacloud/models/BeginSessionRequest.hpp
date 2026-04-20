// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BEGINSESSIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BEGINSESSIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20251111
{
namespace Models
{
  class BeginSessionRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BeginSessionRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_TO_JSON(VendorParams, vendorParams_);
    };
    friend void from_json(const Darabonba::Json& j, BeginSessionRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DraftVersion, draftVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(ScriptId, scriptId_);
      DARABONBA_PTR_FROM_JSON(VendorParams, vendorParams_);
    };
    BeginSessionRequest() = default ;
    BeginSessionRequest(const BeginSessionRequest &) = default ;
    BeginSessionRequest(BeginSessionRequest &&) = default ;
    BeginSessionRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BeginSessionRequest() = default ;
    BeginSessionRequest& operator=(const BeginSessionRequest &) = default ;
    BeginSessionRequest& operator=(BeginSessionRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->draftVersion_ == nullptr
        && this->instanceId_ == nullptr && this->scriptId_ == nullptr && this->vendorParams_ == nullptr; };
    // draftVersion Field Functions 
    bool hasDraftVersion() const { return this->draftVersion_ != nullptr;};
    void deleteDraftVersion() { this->draftVersion_ = nullptr;};
    inline bool getDraftVersion() const { DARABONBA_PTR_GET_DEFAULT(draftVersion_, false) };
    inline BeginSessionRequest& setDraftVersion(bool draftVersion) { DARABONBA_PTR_SET_VALUE(draftVersion_, draftVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline BeginSessionRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // scriptId Field Functions 
    bool hasScriptId() const { return this->scriptId_ != nullptr;};
    void deleteScriptId() { this->scriptId_ = nullptr;};
    inline string getScriptId() const { DARABONBA_PTR_GET_DEFAULT(scriptId_, "") };
    inline BeginSessionRequest& setScriptId(string scriptId) { DARABONBA_PTR_SET_VALUE(scriptId_, scriptId) };


    // vendorParams Field Functions 
    bool hasVendorParams() const { return this->vendorParams_ != nullptr;};
    void deleteVendorParams() { this->vendorParams_ = nullptr;};
    inline string getVendorParams() const { DARABONBA_PTR_GET_DEFAULT(vendorParams_, "") };
    inline BeginSessionRequest& setVendorParams(string vendorParams) { DARABONBA_PTR_SET_VALUE(vendorParams_, vendorParams) };


  protected:
    shared_ptr<bool> draftVersion_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> scriptId_ {};
    shared_ptr<string> vendorParams_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20251111
#endif
