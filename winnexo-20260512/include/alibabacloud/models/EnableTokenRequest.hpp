// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLETOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLETOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class EnableTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    EnableTokenRequest() = default ;
    EnableTokenRequest(const EnableTokenRequest &) = default ;
    EnableTokenRequest(EnableTokenRequest &&) = default ;
    EnableTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableTokenRequest() = default ;
    EnableTokenRequest& operator=(const EnableTokenRequest &) = default ;
    EnableTokenRequest& operator=(EnableTokenRequest &&) = default ;
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
    inline EnableTokenRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline EnableTokenRequest& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The ID of the effective tenant.
    shared_ptr<string> tenantId_ {};
    // The ID of the target user (WINNEXO platform user ID). If this parameter is left empty, the operation is performed on the caller. Administrators can specify another user\\"s ID to perform the operation on behalf of that user.
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
