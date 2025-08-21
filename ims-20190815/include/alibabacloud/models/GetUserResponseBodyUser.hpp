// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSER_HPP_
#define ALIBABACLOUD_MODELS_GETUSERRESPONSEBODYUSER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetUserResponseBodyUserTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class GetUserResponseBodyUser : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserResponseBodyUser& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
      DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(LastLoginDate, lastLoginDate_);
      DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_TO_JSON(ProvisionType, provisionType_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserName, userName_);
      DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserResponseBodyUser& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
      DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(LastLoginDate, lastLoginDate_);
      DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
      DARABONBA_PTR_FROM_JSON(ProvisionType, provisionType_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserName, userName_);
      DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
    };
    GetUserResponseBodyUser() = default ;
    GetUserResponseBodyUser(const GetUserResponseBodyUser &) = default ;
    GetUserResponseBodyUser(GetUserResponseBodyUser &&) = default ;
    GetUserResponseBodyUser(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserResponseBodyUser() = default ;
    GetUserResponseBodyUser& operator=(const GetUserResponseBodyUser &) = default ;
    GetUserResponseBodyUser& operator=(GetUserResponseBodyUser &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comments_ != nullptr
        && this->createDate_ != nullptr && this->displayName_ != nullptr && this->email_ != nullptr && this->lastLoginDate_ != nullptr && this->mobilePhone_ != nullptr
        && this->provisionType_ != nullptr && this->tags_ != nullptr && this->updateDate_ != nullptr && this->userId_ != nullptr && this->userName_ != nullptr
        && this->userPrincipalName_ != nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline string comments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
    inline GetUserResponseBodyUser& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


    // createDate Field Functions 
    bool hasCreateDate() const { return this->createDate_ != nullptr;};
    void deleteCreateDate() { this->createDate_ = nullptr;};
    inline string createDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
    inline GetUserResponseBodyUser& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string displayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline GetUserResponseBodyUser& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline GetUserResponseBodyUser& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // lastLoginDate Field Functions 
    bool hasLastLoginDate() const { return this->lastLoginDate_ != nullptr;};
    void deleteLastLoginDate() { this->lastLoginDate_ = nullptr;};
    inline string lastLoginDate() const { DARABONBA_PTR_GET_DEFAULT(lastLoginDate_, "") };
    inline GetUserResponseBodyUser& setLastLoginDate(string lastLoginDate) { DARABONBA_PTR_SET_VALUE(lastLoginDate_, lastLoginDate) };


    // mobilePhone Field Functions 
    bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
    void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
    inline string mobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
    inline GetUserResponseBodyUser& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


    // provisionType Field Functions 
    bool hasProvisionType() const { return this->provisionType_ != nullptr;};
    void deleteProvisionType() { this->provisionType_ = nullptr;};
    inline string provisionType() const { DARABONBA_PTR_GET_DEFAULT(provisionType_, "") };
    inline GetUserResponseBodyUser& setProvisionType(string provisionType) { DARABONBA_PTR_SET_VALUE(provisionType_, provisionType) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::GetUserResponseBodyUserTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::GetUserResponseBodyUserTags) };
    inline Models::GetUserResponseBodyUserTags tags() { DARABONBA_PTR_GET(tags_, Models::GetUserResponseBodyUserTags) };
    inline GetUserResponseBodyUser& setTags(const Models::GetUserResponseBodyUserTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetUserResponseBodyUser& setTags(Models::GetUserResponseBodyUserTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateDate Field Functions 
    bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
    void deleteUpdateDate() { this->updateDate_ = nullptr;};
    inline string updateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
    inline GetUserResponseBodyUser& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetUserResponseBodyUser& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetUserResponseBodyUser& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // userPrincipalName Field Functions 
    bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
    void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
    inline string userPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
    inline GetUserResponseBodyUser& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


  protected:
    // The description.
    std::shared_ptr<string> comments_ = nullptr;
    // The time when the RAM user was created.
    std::shared_ptr<string> createDate_ = nullptr;
    // The display name of the RAM user.
    std::shared_ptr<string> displayName_ = nullptr;
    // The email address of the RAM user.
    // 
    // > This parameter is valid only on the China site (aliyun.com).
    std::shared_ptr<string> email_ = nullptr;
    // The last time when the RAM user logged on to the Alibaba Cloud Management Console.
    std::shared_ptr<string> lastLoginDate_ = nullptr;
    // The mobile phone number of the RAM user.
    // 
    // > This parameter is valid only on the China site (aliyun.com).
    std::shared_ptr<string> mobilePhone_ = nullptr;
    // The source of the RAM user. Valid value:
    // 
    // *   Manual: The RAM user is manually created in the RAM console.
    // *   SCIM: The RAM user is mapped by using System for Cross-domain Identity Management (SCIM).
    // *   CloudSSO: The RAM user is mapped from a CloudSSO user.
    std::shared_ptr<string> provisionType_ = nullptr;
    // The tags.
    std::shared_ptr<Models::GetUserResponseBodyUserTags> tags_ = nullptr;
    // The time when the information about the RAM user was updated.
    std::shared_ptr<string> updateDate_ = nullptr;
    // The ID of the RAM user.
    std::shared_ptr<string> userId_ = nullptr;
    // The username of the RAM user, which is the prefix of the logon name of the RAM user.
    std::shared_ptr<string> userName_ = nullptr;
    // The logon name of the RAM user.
    std::shared_ptr<string> userPrincipalName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
