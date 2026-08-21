// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class DisableTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    DisableTokenRequest() = default ;
    DisableTokenRequest(const DisableTokenRequest &) = default ;
    DisableTokenRequest(DisableTokenRequest &&) = default ;
    DisableTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableTokenRequest() = default ;
    DisableTokenRequest& operator=(const DisableTokenRequest &) = default ;
    DisableTokenRequest& operator=(DisableTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr
        && this->wnUserId_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline DisableTokenRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline DisableTokenRequest& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The ID of the effective tenant.
    shared_ptr<string> tenantId_ {};
    // The ID of the target user (WINNEXO platform user ID). If left empty, the operation is performed on the caller. Administrators can specify another user\\"s ID to perform the operation on their behalf.
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
