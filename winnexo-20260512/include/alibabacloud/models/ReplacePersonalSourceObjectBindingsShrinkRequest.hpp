// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REPLACEPERSONALSOURCEOBJECTBINDINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REPLACEPERSONALSOURCEOBJECTBINDINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ReplacePersonalSourceObjectBindingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReplacePersonalSourceObjectBindingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(appToken, appToken_);
      DARABONBA_PTR_TO_JSON(objectBindings, objectBindingsShrink_);
      DARABONBA_PTR_TO_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_TO_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ReplacePersonalSourceObjectBindingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(appToken, appToken_);
      DARABONBA_PTR_FROM_JSON(objectBindings, objectBindingsShrink_);
      DARABONBA_PTR_FROM_JSON(opsUserCode, opsUserCode_);
      DARABONBA_PTR_FROM_JSON(opsUserId, opsUserId_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ReplacePersonalSourceObjectBindingsShrinkRequest() = default ;
    ReplacePersonalSourceObjectBindingsShrinkRequest(const ReplacePersonalSourceObjectBindingsShrinkRequest &) = default ;
    ReplacePersonalSourceObjectBindingsShrinkRequest(ReplacePersonalSourceObjectBindingsShrinkRequest &&) = default ;
    ReplacePersonalSourceObjectBindingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReplacePersonalSourceObjectBindingsShrinkRequest() = default ;
    ReplacePersonalSourceObjectBindingsShrinkRequest& operator=(const ReplacePersonalSourceObjectBindingsShrinkRequest &) = default ;
    ReplacePersonalSourceObjectBindingsShrinkRequest& operator=(ReplacePersonalSourceObjectBindingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appToken_ == nullptr
        && this->objectBindingsShrink_ == nullptr && this->opsUserCode_ == nullptr && this->opsUserId_ == nullptr && this->sourceId_ == nullptr && this->tenantId_ == nullptr; };
    // appToken Field Functions 
    bool hasAppToken() const { return this->appToken_ != nullptr;};
    void deleteAppToken() { this->appToken_ = nullptr;};
    inline string getAppToken() const { DARABONBA_PTR_GET_DEFAULT(appToken_, "") };
    inline ReplacePersonalSourceObjectBindingsShrinkRequest& setAppToken(string appToken) { DARABONBA_PTR_SET_VALUE(appToken_, appToken) };


    // objectBindingsShrink Field Functions 
    bool hasObjectBindingsShrink() const { return this->objectBindingsShrink_ != nullptr;};
    void deleteObjectBindingsShrink() { this->objectBindingsShrink_ = nullptr;};
    inline string getObjectBindingsShrink() const { DARABONBA_PTR_GET_DEFAULT(objectBindingsShrink_, "") };
    inline ReplacePersonalSourceObjectBindingsShrinkRequest& setObjectBindingsShrink(string objectBindingsShrink) { DARABONBA_PTR_SET_VALUE(objectBindingsShrink_, objectBindingsShrink) };


    // opsUserCode Field Functions 
    bool hasOpsUserCode() const { return this->opsUserCode_ != nullptr;};
    void deleteOpsUserCode() { this->opsUserCode_ = nullptr;};
    inline string getOpsUserCode() const { DARABONBA_PTR_GET_DEFAULT(opsUserCode_, "") };
    inline ReplacePersonalSourceObjectBindingsShrinkRequest& setOpsUserCode(string opsUserCode) { DARABONBA_PTR_SET_VALUE(opsUserCode_, opsUserCode) };


    // opsUserId Field Functions 
    bool hasOpsUserId() const { return this->opsUserId_ != nullptr;};
    void deleteOpsUserId() { this->opsUserId_ = nullptr;};
    inline string getOpsUserId() const { DARABONBA_PTR_GET_DEFAULT(opsUserId_, "") };
    inline ReplacePersonalSourceObjectBindingsShrinkRequest& setOpsUserId(string opsUserId) { DARABONBA_PTR_SET_VALUE(opsUserId_, opsUserId) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline string getSourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, "") };
    inline ReplacePersonalSourceObjectBindingsShrinkRequest& setSourceId(string sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ReplacePersonalSourceObjectBindingsShrinkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // token
    shared_ptr<string> appToken_ {};
    // The object bindings.
    // 
    // This parameter is required.
    shared_ptr<string> objectBindingsShrink_ {};
    // The code of the operator.
    shared_ptr<string> opsUserCode_ {};
    // The ID of the operator.
    shared_ptr<string> opsUserId_ {};
    // The ID of the data source. The ID is unique within the tenant.
    // 
    // This parameter is required.
    shared_ptr<string> sourceId_ {};
    // The ID of the tenant.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
