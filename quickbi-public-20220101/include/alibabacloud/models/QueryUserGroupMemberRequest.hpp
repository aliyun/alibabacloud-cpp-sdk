// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERGROUPMEMBERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERGROUPMEMBERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryUserGroupMemberRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserGroupMemberRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Keyword, keyword_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserGroupMemberRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Keyword, keyword_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    QueryUserGroupMemberRequest() = default ;
    QueryUserGroupMemberRequest(const QueryUserGroupMemberRequest &) = default ;
    QueryUserGroupMemberRequest(QueryUserGroupMemberRequest &&) = default ;
    QueryUserGroupMemberRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserGroupMemberRequest() = default ;
    QueryUserGroupMemberRequest& operator=(const QueryUserGroupMemberRequest &) = default ;
    QueryUserGroupMemberRequest& operator=(QueryUserGroupMemberRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->keyword_ != nullptr
        && this->userGroupId_ != nullptr; };
    // keyword Field Functions 
    bool hasKeyword() const { return this->keyword_ != nullptr;};
    void deleteKeyword() { this->keyword_ = nullptr;};
    inline string keyword() const { DARABONBA_PTR_GET_DEFAULT(keyword_, "") };
    inline QueryUserGroupMemberRequest& setKeyword(string keyword) { DARABONBA_PTR_SET_VALUE(keyword_, keyword) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline QueryUserGroupMemberRequest& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // Keyword for the username or nickname of the user group member.
    std::shared_ptr<string> keyword_ = nullptr;
    // User group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
