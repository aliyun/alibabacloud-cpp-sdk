// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(wnAccountId, wnAccountId_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(wnAccountId, wnAccountId_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    GetUserRequest() = default ;
    GetUserRequest(const GetUserRequest &) = default ;
    GetUserRequest(GetUserRequest &&) = default ;
    GetUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserRequest() = default ;
    GetUserRequest& operator=(const GetUserRequest &) = default ;
    GetUserRequest& operator=(GetUserRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tenantId_ == nullptr
        && this->wnAccountId_ == nullptr && this->wnUserId_ == nullptr; };
    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline GetUserRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // wnAccountId Field Functions 
    bool hasWnAccountId() const { return this->wnAccountId_ != nullptr;};
    void deleteWnAccountId() { this->wnAccountId_ = nullptr;};
    inline string getWnAccountId() const { DARABONBA_PTR_GET_DEFAULT(wnAccountId_, "") };
    inline GetUserRequest& setWnAccountId(string wnAccountId) { DARABONBA_PTR_SET_VALUE(wnAccountId_, wnAccountId) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline GetUserRequest& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The ID of the tenant to which the task belongs.
    shared_ptr<string> tenantId_ {};
    // The WINNEXO logon account. This is a unique identifier and cannot be empty.
    shared_ptr<string> wnAccountId_ {};
    // The WINNEXO platform user ID. Specify either this parameter or accountId.
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
