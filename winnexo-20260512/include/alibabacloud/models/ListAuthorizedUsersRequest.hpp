// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAUTHORIZEDUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ListAuthorizedUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAuthorizedUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(granteeType, granteeType_);
      DARABONBA_PTR_TO_JSON(keyword, keyword_);
      DARABONBA_PTR_TO_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_TO_JSON(permission, permission_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAuthorizedUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(granteeType, granteeType_);
      DARABONBA_PTR_FROM_JSON(keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(operatingObjectName, operatingObjectName_);
      DARABONBA_PTR_FROM_JSON(permission, permission_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ListAuthorizedUsersRequest() = default ;
    ListAuthorizedUsersRequest(const ListAuthorizedUsersRequest &) = default ;
    ListAuthorizedUsersRequest(ListAuthorizedUsersRequest &&) = default ;
    ListAuthorizedUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAuthorizedUsersRequest() = default ;
    ListAuthorizedUsersRequest& operator=(const ListAuthorizedUsersRequest &) = default ;
    ListAuthorizedUsersRequest& operator=(ListAuthorizedUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->granteeType_ == nullptr
        && this->keyword_ == nullptr && this->operatingObjectName_ == nullptr && this->permission_ == nullptr && this->tenantId_ == nullptr; };
    // granteeType Field Functions 
    bool hasGranteeType() const { return this->granteeType_ != nullptr;};
    void deleteGranteeType() { this->granteeType_ = nullptr;};
    inline string getGranteeType() const { DARABONBA_PTR_GET_DEFAULT(granteeType_, "") };
    inline ListAuthorizedUsersRequest& setGranteeType(string granteeType) { DARABONBA_PTR_SET_VALUE(granteeType_, granteeType) };


    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string getKeyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline ListAuthorizedUsersRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // operatingObjectName Field Functions 
    bool hasOperatingObjectName() const { return this->operatingObjectName_ != nullptr;};
    void deleteOperatingObjectName() { this->operatingObjectName_ = nullptr;};
    inline string getOperatingObjectName() const { DARABONBA_PTR_GET_DEFAULT(operatingObjectName_, "") };
    inline ListAuthorizedUsersRequest& setOperatingObjectName(string operatingObjectName) { DARABONBA_PTR_SET_VALUE(operatingObjectName_, operatingObjectName) };


    // permission Field Functions 
    bool hasPermission() const { return this->permission_ != nullptr;};
    void deletePermission() { this->permission_ = nullptr;};
    inline string getPermission() const { DARABONBA_PTR_GET_DEFAULT(permission_, "") };
    inline ListAuthorizedUsersRequest& setPermission(string permission) { DARABONBA_PTR_SET_VALUE(permission_, permission) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ListAuthorizedUsersRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // 筛选类型：USER / USER_GROUP / 不传则返回全部
    shared_ptr<string> granteeType_ {};
    // 搜索关键词，按用户名或组名模糊匹配
    shared_ptr<string> keyword_ {};
    // 数字员工名称
    // 
    // This parameter is required.
    shared_ptr<string> operatingObjectName_ {};
    // 权限类型过滤：USE=使用权限 / MANAGE=管理权限
    shared_ptr<string> permission_ {};
    // 租户ID，公共参数，缺省时使用调用方默认租户
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
