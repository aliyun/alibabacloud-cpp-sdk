// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERROLESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERROLESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListUserRolesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserRolesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PrincipalArn, principalArn_);
      DARABONBA_PTR_TO_JSON(RoleNamePattern, roleNamePattern_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserRolesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PrincipalArn, principalArn_);
      DARABONBA_PTR_FROM_JSON(RoleNamePattern, roleNamePattern_);
    };
    ListUserRolesRequest() = default ;
    ListUserRolesRequest(const ListUserRolesRequest &) = default ;
    ListUserRolesRequest(ListUserRolesRequest &&) = default ;
    ListUserRolesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserRolesRequest() = default ;
    ListUserRolesRequest& operator=(const ListUserRolesRequest &) = default ;
    ListUserRolesRequest& operator=(ListUserRolesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && return this->pageSize_ == nullptr && return this->principalArn_ == nullptr && return this->roleNamePattern_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListUserRolesRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListUserRolesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // principalArn Field Functions 
    bool hasPrincipalArn() const { return this->principalArn_ != nullptr;};
    void deletePrincipalArn() { this->principalArn_ = nullptr;};
    inline string principalArn() const { DARABONBA_PTR_GET_DEFAULT(principalArn_, "") };
    inline ListUserRolesRequest& setPrincipalArn(string principalArn) { DARABONBA_PTR_SET_VALUE(principalArn_, principalArn) };


    // roleNamePattern Field Functions 
    bool hasRoleNamePattern() const { return this->roleNamePattern_ != nullptr;};
    void deleteRoleNamePattern() { this->roleNamePattern_ = nullptr;};
    inline string roleNamePattern() const { DARABONBA_PTR_GET_DEFAULT(roleNamePattern_, "") };
    inline ListUserRolesRequest& setRoleNamePattern(string roleNamePattern) { DARABONBA_PTR_SET_VALUE(roleNamePattern_, roleNamePattern) };


  protected:
    // The page turning token, which is used to obtain the next page of data. If not provided in the response result, a string ("") or empty string (") is empty string.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The size of each page. The maximum value is 1000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // Used to uniquely identify a RAM user or RAM role. The OSS URL is in the following format:
    // 
    // *   RAM user: acs:ram::[accountId]:user/[userName].
    // *   RAM role: acs:ram::[accountId]:role/[roleName].
    std::shared_ptr<string> principalArn_ = nullptr;
    // The regular expression that matches the role name. Fuzzy search is supported.
    std::shared_ptr<string> roleNamePattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
