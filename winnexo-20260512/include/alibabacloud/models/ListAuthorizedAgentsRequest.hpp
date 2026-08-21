// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDAGENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDAGENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAuthorizedAgentsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedAgentsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(permission, permission_);
      DARABONBA_PTR_TO_JSON(targetUserId, targetUserId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedAgentsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(permission, permission_);
      DARABONBA_PTR_FROM_JSON(targetUserId, targetUserId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListAuthorizedAgentsRequest() = default ;
    ListAuthorizedAgentsRequest(const ListAuthorizedAgentsRequest &) = default ;
    ListAuthorizedAgentsRequest(ListAuthorizedAgentsRequest &&) = default ;
    ListAuthorizedAgentsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedAgentsRequest() = default ;
    ListAuthorizedAgentsRequest& operator=(const ListAuthorizedAgentsRequest &) = default ;
    ListAuthorizedAgentsRequest& operator=(ListAuthorizedAgentsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->permission_ == nullptr
        && this->targetUserId_ == nullptr && this->tenantId_ == nullptr; };
    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline ListAuthorizedAgentsRequest& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // targetUserId Field Functions 
    bool hasTargetUserId() const { return this->targetUserId_ != nullptr;};
    void deleteTargetUserId() { this->targetUserId_ = nullptr;};
    inline int64_t getTargetUserId() const { DARABONBA_PTR_GET_DEFAULT(targetUserId_, 0L) };
    inline ListAuthorizedAgentsRequest& setTargetUserId(int64_t targetUserId) { DARABONBA_PTR_SET_VALUE(targetUserId_, targetUserId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListAuthorizedAgentsRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The userId of the responsible user.
    shared_ptr<string> permission_ {};
    // The target user ID.
    shared_ptr<int64_t> targetUserId_ {};
    // The tenant ID. This is a common parameter. If not specified, the default tenant of the caller is used.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
