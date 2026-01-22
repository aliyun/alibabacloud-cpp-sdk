// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class CreateUserResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    CreateUserResponseBody() = default ;
    CreateUserResponseBody(const CreateUserResponseBody &) = default ;
    CreateUserResponseBody(CreateUserResponseBody &&) = default ;
    CreateUserResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserResponseBody() = default ;
    CreateUserResponseBody& operator=(const CreateUserResponseBody &) = default ;
    CreateUserResponseBody& operator=(CreateUserResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(LastLoginDate, lastLoginDate_);
        DARABONBA_PTR_TO_JSON(MobilePhone, mobilePhone_);
        DARABONBA_PTR_TO_JSON(ProvisionType, provisionType_);
        DARABONBA_PTR_TO_JSON(Tags, tags_);
        DARABONBA_PTR_TO_JSON(UpdateDate, updateDate_);
        DARABONBA_PTR_TO_JSON(UserId, userId_);
        DARABONBA_PTR_TO_JSON(UserPrincipalName, userPrincipalName_);
      };
      friend void from_json(const Darabonba::Json& j, User& obj) { 
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
        DARABONBA_PTR_FROM_JSON(UserPrincipalName, userPrincipalName_);
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
      class Tags : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Tags& obj) { 
          DARABONBA_PTR_TO_JSON(Tag, tag_);
        };
        friend void from_json(const Darabonba::Json& j, Tags& obj) { 
          DARABONBA_PTR_FROM_JSON(Tag, tag_);
        };
        Tags() = default ;
        Tags(const Tags &) = default ;
        Tags(Tags &&) = default ;
        Tags(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Tags() = default ;
        Tags& operator=(const Tags &) = default ;
        Tags& operator=(Tags &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Tag : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Tag& obj) { 
            DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
            DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
          };
          friend void from_json(const Darabonba::Json& j, Tag& obj) { 
            DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
            DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
          };
          Tag() = default ;
          Tag(const Tag &) = default ;
          Tag(Tag &&) = default ;
          Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Tag() = default ;
          Tag& operator=(const Tag &) = default ;
          Tag& operator=(Tag &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
          // tagKey Field Functions 
          bool hasTagKey() const { return this->tagKey_ != nullptr;};
          void deleteTagKey() { this->tagKey_ = nullptr;};
          inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
          inline Tag& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


          // tagValue Field Functions 
          bool hasTagValue() const { return this->tagValue_ != nullptr;};
          void deleteTagValue() { this->tagValue_ = nullptr;};
          inline string getTagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
          inline Tag& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


        protected:
          // The tag key.
          shared_ptr<string> tagKey_ {};
          // The tag value.
          shared_ptr<string> tagValue_ {};
        };

        virtual bool empty() const override { return this->tag_ == nullptr; };
        // tag Field Functions 
        bool hasTag() const { return this->tag_ != nullptr;};
        void deleteTag() { this->tag_ = nullptr;};
        inline const vector<Tags::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Tags::Tag>) };
        inline vector<Tags::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<Tags::Tag>) };
        inline Tags& setTag(const vector<Tags::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
        inline Tags& setTag(vector<Tags::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


      protected:
        shared_ptr<vector<Tags::Tag>> tag_ {};
      };

      virtual bool empty() const override { return this->comments_ == nullptr
        && this->createDate_ == nullptr && this->displayName_ == nullptr && this->email_ == nullptr && this->lastLoginDate_ == nullptr && this->mobilePhone_ == nullptr
        && this->provisionType_ == nullptr && this->tags_ == nullptr && this->updateDate_ == nullptr && this->userId_ == nullptr && this->userPrincipalName_ == nullptr; };
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


      // lastLoginDate Field Functions 
      bool hasLastLoginDate() const { return this->lastLoginDate_ != nullptr;};
      void deleteLastLoginDate() { this->lastLoginDate_ = nullptr;};
      inline string getLastLoginDate() const { DARABONBA_PTR_GET_DEFAULT(lastLoginDate_, "") };
      inline User& setLastLoginDate(string lastLoginDate) { DARABONBA_PTR_SET_VALUE(lastLoginDate_, lastLoginDate) };


      // mobilePhone Field Functions 
      bool hasMobilePhone() const { return this->mobilePhone_ != nullptr;};
      void deleteMobilePhone() { this->mobilePhone_ = nullptr;};
      inline string getMobilePhone() const { DARABONBA_PTR_GET_DEFAULT(mobilePhone_, "") };
      inline User& setMobilePhone(string mobilePhone) { DARABONBA_PTR_SET_VALUE(mobilePhone_, mobilePhone) };


      // provisionType Field Functions 
      bool hasProvisionType() const { return this->provisionType_ != nullptr;};
      void deleteProvisionType() { this->provisionType_ = nullptr;};
      inline string getProvisionType() const { DARABONBA_PTR_GET_DEFAULT(provisionType_, "") };
      inline User& setProvisionType(string provisionType) { DARABONBA_PTR_SET_VALUE(provisionType_, provisionType) };


      // tags Field Functions 
      bool hasTags() const { return this->tags_ != nullptr;};
      void deleteTags() { this->tags_ = nullptr;};
      inline const User::Tags & getTags() const { DARABONBA_PTR_GET_CONST(tags_, User::Tags) };
      inline User::Tags getTags() { DARABONBA_PTR_GET(tags_, User::Tags) };
      inline User& setTags(const User::Tags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
      inline User& setTags(User::Tags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


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


      // userPrincipalName Field Functions 
      bool hasUserPrincipalName() const { return this->userPrincipalName_ != nullptr;};
      void deleteUserPrincipalName() { this->userPrincipalName_ = nullptr;};
      inline string getUserPrincipalName() const { DARABONBA_PTR_GET_DEFAULT(userPrincipalName_, "") };
      inline User& setUserPrincipalName(string userPrincipalName) { DARABONBA_PTR_SET_VALUE(userPrincipalName_, userPrincipalName) };


    protected:
      // The description.
      shared_ptr<string> comments_ {};
      // The time when the RAM user was created.
      shared_ptr<string> createDate_ {};
      // The display name of the RAM user.
      shared_ptr<string> displayName_ {};
      // The email address of the RAM user.
      // 
      // > This parameter is valid only on the China site (aliyun.com).
      shared_ptr<string> email_ {};
      // The last time when the RAM user logged on to the Alibaba Cloud Management Console.
      shared_ptr<string> lastLoginDate_ {};
      // The mobile phone number of the RAM user.
      // 
      // > This parameter is valid only on the China site (aliyun.com).
      shared_ptr<string> mobilePhone_ {};
      // The source of the RAM user. Valid values:
      // 
      // *   Manual: The RAM user is manually created in the RAM console.
      // *   SCIM: The RAM user is mapped by using System for Cross-domain Identity Management (SCIM).
      // *   CloudSSO: The RAM user is mapped from a CloudSSO user.
      shared_ptr<string> provisionType_ {};
      // The tag value.
      shared_ptr<User::Tags> tags_ {};
      // The time when the information about the RAM user was updated.
      shared_ptr<string> updateDate_ {};
      // The ID of the RAM user.
      shared_ptr<string> userId_ {};
      // The logon name of the RAM user.
      shared_ptr<string> userPrincipalName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->user_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUserResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline const CreateUserResponseBody::User & getUser() const { DARABONBA_PTR_GET_CONST(user_, CreateUserResponseBody::User) };
    inline CreateUserResponseBody::User getUser() { DARABONBA_PTR_GET(user_, CreateUserResponseBody::User) };
    inline CreateUserResponseBody& setUser(const CreateUserResponseBody::User & user) { DARABONBA_PTR_SET_VALUE(user_, user) };
    inline CreateUserResponseBody& setUser(CreateUserResponseBody::User && user) { DARABONBA_PTR_SET_RVALUE(user_, user) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The information about the RAM user.
    shared_ptr<CreateUserResponseBody::User> user_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
