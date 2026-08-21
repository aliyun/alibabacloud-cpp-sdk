// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RemoveUserRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserRequest& obj) { 
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    RemoveUserRequest() = default ;
    RemoveUserRequest(const RemoveUserRequest &) = default ;
    RemoveUserRequest(RemoveUserRequest &&) = default ;
    RemoveUserRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserRequest() = default ;
    RemoveUserRequest& operator=(const RemoveUserRequest &) = default ;
    RemoveUserRequest& operator=(RemoveUserRequest &&) = default ;
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
    inline RemoveUserRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline RemoveUserRequest& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
    // The ID of the target user (WINNEXO platform user ID).
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
