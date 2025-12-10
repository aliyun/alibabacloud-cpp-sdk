// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTROLEUSERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTROLEUSERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class ListRoleUsersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListRoleUsersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RoleName, roleName_);
      DARABONBA_PTR_TO_JSON(UserNamePattern, userNamePattern_);
    };
    friend void from_json(const Darabonba::Json& j, ListRoleUsersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(NextPageToken, nextPageToken_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RoleName, roleName_);
      DARABONBA_PTR_FROM_JSON(UserNamePattern, userNamePattern_);
    };
    ListRoleUsersRequest() = default ;
    ListRoleUsersRequest(const ListRoleUsersRequest &) = default ;
    ListRoleUsersRequest(ListRoleUsersRequest &&) = default ;
    ListRoleUsersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListRoleUsersRequest() = default ;
    ListRoleUsersRequest& operator=(const ListRoleUsersRequest &) = default ;
    ListRoleUsersRequest& operator=(ListRoleUsersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextPageToken_ == nullptr
        && return this->pageSize_ == nullptr && return this->roleName_ == nullptr && return this->userNamePattern_ == nullptr; };
    // nextPageToken Field Functions 
    bool hasNextPageToken() const { return this->nextPageToken_ != nullptr;};
    void deleteNextPageToken() { this->nextPageToken_ = nullptr;};
    inline string nextPageToken() const { DARABONBA_PTR_GET_DEFAULT(nextPageToken_, "") };
    inline ListRoleUsersRequest& setNextPageToken(string nextPageToken) { DARABONBA_PTR_SET_VALUE(nextPageToken_, nextPageToken) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListRoleUsersRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // roleName Field Functions 
    bool hasRoleName() const { return this->roleName_ != nullptr;};
    void deleteRoleName() { this->roleName_ = nullptr;};
    inline string roleName() const { DARABONBA_PTR_GET_DEFAULT(roleName_, "") };
    inline ListRoleUsersRequest& setRoleName(string roleName) { DARABONBA_PTR_SET_VALUE(roleName_, roleName) };


    // userNamePattern Field Functions 
    bool hasUserNamePattern() const { return this->userNamePattern_ != nullptr;};
    void deleteUserNamePattern() { this->userNamePattern_ = nullptr;};
    inline string userNamePattern() const { DARABONBA_PTR_GET_DEFAULT(userNamePattern_, "") };
    inline ListRoleUsersRequest& setUserNamePattern(string userNamePattern) { DARABONBA_PTR_SET_VALUE(userNamePattern_, userNamePattern) };


  protected:
    // The pagination token, which is returned from the returned result. If none is returned, an empty string or \\"\\"is passed.
    std::shared_ptr<string> nextPageToken_ = nullptr;
    // The size of each page. The maximum value is 1000.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The name of the role.
    std::shared_ptr<string> roleName_ = nullptr;
    // The regular expression that matches the user name.
    std::shared_ptr<string> userNamePattern_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
