// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROLESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class ListRolesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRolesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(authorizerId, authorizerId_);
      DARABONBA_PTR_TO_JSON(authorizerType, authorizerType_);
      DARABONBA_PTR_TO_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(platform, platform_);
      DARABONBA_PTR_TO_JSON(roleIds, roleIds_);
      DARABONBA_PTR_TO_JSON(roleType, roleType_);
    };
    friend void from_json(const Darabonba::Json& j, ListRolesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(authorizerId, authorizerId_);
      DARABONBA_PTR_FROM_JSON(authorizerType, authorizerType_);
      DARABONBA_PTR_FROM_JSON(enterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(platform, platform_);
      DARABONBA_PTR_FROM_JSON(roleIds, roleIds_);
      DARABONBA_PTR_FROM_JSON(roleType, roleType_);
    };
    ListRolesRequest() = default ;
    ListRolesRequest(const ListRolesRequest &) = default ;
    ListRolesRequest(ListRolesRequest &&) = default ;
    ListRolesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRolesRequest() = default ;
    ListRolesRequest& operator=(const ListRolesRequest &) = default ;
    ListRolesRequest& operator=(ListRolesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authorizerId_ == nullptr
        && this->authorizerType_ == nullptr && this->enterpriseId_ == nullptr && this->name_ == nullptr && this->orderBy_ == nullptr && this->orderDirection_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->platform_ == nullptr && this->roleIds_ == nullptr && this->roleType_ == nullptr; };
    // authorizerId Field Functions 
    bool hasAuthorizerId() const { return this->authorizerId_ != nullptr;};
    void deleteAuthorizerId() { this->authorizerId_ = nullptr;};
    inline string getAuthorizerId() const { DARABONBA_PTR_GET_DEFAULT(authorizerId_, "") };
    inline ListRolesRequest& setAuthorizerId(string authorizerId) { DARABONBA_PTR_SET_VALUE(authorizerId_, authorizerId) };


    // authorizerType Field Functions 
    bool hasAuthorizerType() const { return this->authorizerType_ != nullptr;};
    void deleteAuthorizerType() { this->authorizerType_ = nullptr;};
    inline string getAuthorizerType() const { DARABONBA_PTR_GET_DEFAULT(authorizerType_, "") };
    inline ListRolesRequest& setAuthorizerType(string authorizerType) { DARABONBA_PTR_SET_VALUE(authorizerType_, authorizerType) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ListRolesRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListRolesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline ListRolesRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline ListRolesRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListRolesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRolesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // platform Field Functions 
    bool hasPlatform() const { return this->platform_ != nullptr;};
    void deletePlatform() { this->platform_ = nullptr;};
    inline string getPlatform() const { DARABONBA_PTR_GET_DEFAULT(platform_, "") };
    inline ListRolesRequest& setPlatform(string platform) { DARABONBA_PTR_SET_VALUE(platform_, platform) };


    // roleIds Field Functions 
    bool hasRoleIds() const { return this->roleIds_ != nullptr;};
    void deleteRoleIds() { this->roleIds_ = nullptr;};
    inline const vector<int64_t> & getRoleIds() const { DARABONBA_PTR_GET_CONST(roleIds_, vector<int64_t>) };
    inline vector<int64_t> getRoleIds() { DARABONBA_PTR_GET(roleIds_, vector<int64_t>) };
    inline ListRolesRequest& setRoleIds(const vector<int64_t> & roleIds) { DARABONBA_PTR_SET_VALUE(roleIds_, roleIds) };
    inline ListRolesRequest& setRoleIds(vector<int64_t> && roleIds) { DARABONBA_PTR_SET_RVALUE(roleIds_, roleIds) };


    // roleType Field Functions 
    bool hasRoleType() const { return this->roleType_ != nullptr;};
    void deleteRoleType() { this->roleType_ = nullptr;};
    inline string getRoleType() const { DARABONBA_PTR_GET_DEFAULT(roleType_, "") };
    inline ListRolesRequest& setRoleType(string roleType) { DARABONBA_PTR_SET_VALUE(roleType_, roleType) };


  protected:
    shared_ptr<string> authorizerId_ {};
    shared_ptr<string> authorizerType_ {};
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> platform_ {};
    shared_ptr<vector<int64_t>> roleIds_ {};
    shared_ptr<string> roleType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
