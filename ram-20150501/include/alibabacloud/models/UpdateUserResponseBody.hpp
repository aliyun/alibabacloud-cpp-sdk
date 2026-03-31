// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class UpdateUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    UpdateUserResponseBody() = default ;
    UpdateUserResponseBody(const UpdateUserResponseBody &) = default ;
    UpdateUserResponseBody(UpdateUserResponseBody &&) = default ;
    UpdateUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserResponseBody() = default ;
    UpdateUserResponseBody& operator=(const UpdateUserResponseBody &) = default ;
    UpdateUserResponseBody& operator=(UpdateUserResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class User : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const User& obj) { 
        DARABONBA_PTR_TO_JSON(Comments, comments_);
        DARABONBA_PTR_TO_JSON(CreateDate, createDate_);
        DARABONBA_PTR_TO_JSON(DisplayName, displayName_);
        DARABONBA_PTR_TO_JSON(Email, email_);
        DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserName, userName_);
      };
      friend void from_json(const Darabonba::Json& j, User& obj) { 
        DARABONBA_PTR_FROM_JSON(Comments, comments_);
        DARABONBA_PTR_FROM_JSON(CreateDate, createDate_);
        DARABONBA_PTR_FROM_JSON(DisplayName, displayName_);
        DARABONBA_PTR_FROM_JSON(Email, email_);
        DARABONBA_PTR_FROM_JSON(MobilePhone, mobilePhone_);
        DARABONBA_PTR_FROM_JSON(UpdateDate, updateDate_);
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
        DARABONBA_PTR_FROM_JSON(UserName, userName_);
      };
      User() = default ;
      User(const User &) = default ;
      User(User &&) = default ;
      User(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~User() = default ;
      User& operator=(const User &) = default ;
      User& operator=(User &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->comments_ == nullptr
        && this->createDate_ == nullptr && this->displayName_ == nullptr && this->email_ == nullptr && this->mobilePhone_ == nullptr && this->updateDate_ == nullptr
        && this->userId_ == nullptr && this->userName_ == nullptr; };
      // comments Field Functions 
      bool hasComments() const { return this->comments_ != nullptr;};
      void deleteComments() { this->comments_ = nullptr;};
      inline string getComments() const { DARABONBA_PTR_GET_DEFAULT(comments_, "") };
      inline User& setComments(string comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };


      // createDate Field Functions 
      bool hasCreateDate() const { return this->createDate_ != nullptr;};
      void deleteCreateDate() { this->createDate_ = nullptr;};
      inline string getCreateDate() const { DARABONBA_PTR_GET_DEFAULT(createDate_, "") };
      inline User& setCreateDate(string createDate) { DARABONBA_PTR_SET_VALUE(createDate_, createDate) };


      // displayName Field Functions 
      bool hasDisplayName() const { return this->displayName_ != nullptr;};
      void deleteDisplayName() { this->displayName_ = nullptr;};
      inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
      inline User& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


      // email Field Functions 
      bool hasEmail() const { return this->email_ != nullptr;};
      void deleteEmail() { this->email_ = nullptr;};
      inline string getEmail() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
      inline User& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


      // mobilePhone Field Functions 
      bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
      void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
      inline string getMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
      inline User& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


      // updateDate Field Functions 
      bool hasUpdateDate() const { return this->updateDate_ != nullptr;};
      void deleteUpdateDate() { this->updateDate_ = nullptr;};
      inline string getUpdateDate() const { DARABONBA_PTR_GET_DEFAULT(updateDate_, "") };
      inline User& setUpdateDate(string updateDate) { DARABONBA_PTR_SET_VALUE(updateDate_, updateDate) };


      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline User& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


      // userName Field Functions 
      bool hasUserName() const { return this->userName_ != nullptr;};
      void deleteUserName() { this->userName_ = nullptr;};
      inline string getUserName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
      inline User& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    protected:
      // The description of the RAM user.
      shared_ptr<string> comments_ {};
      // The point in time when the RAM user was created. The time is displayed in UTC.
      shared_ptr<string> createDate_ {};
      // The display name of the RAM user.
      shared_ptr<string> displayName_ {};
      // The email address of the RAM user.
      // 
      // >  This parameter can be returned only on the China site (aliyun.com).
      shared_ptr<string> email_ {};
      // The mobile phone number of the RAM user.
      // 
      // >  This parameter can be returned only on the China site (aliyun.com).
      shared_ptr<string> mobilePhone_ {};
      // The point in time when the information about the RAM user was last modified. The time is displayed in UTC.
      shared_ptr<string> updateDate_ {};
      // The ID of the RAM user.
      shared_ptr<string> userId_ {};
      // The username of the RAM user.
      shared_ptr<string> userName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->user_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const UpdateUserResponseBody::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, UpdateUserResponseBody::User) };
    inline UpdateUserResponseBody::User getUser() { DARABONBA_PTR_GET(user_, UpdateUserResponseBody::User) };
    inline UpdateUserResponseBody& setUser(const UpdateUserResponseBody::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline UpdateUserResponseBody& setUser(UpdateUserResponseBody::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the RAM user.
    shared_ptr<UpdateUserResponseBody::User> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
