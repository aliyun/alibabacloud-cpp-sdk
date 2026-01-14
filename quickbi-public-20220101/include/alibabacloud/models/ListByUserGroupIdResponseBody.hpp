// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBYUSERGROUPIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBYUSERGROUPIDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class ListByUserGroupIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListByUserGroupIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListByUserGroupIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListByUserGroupIdResponseBody() = default ;
    ListByUserGroupIdResponseBody(const ListByUserGroupIdResponseBody &) = default ;
    ListByUserGroupIdResponseBody(ListByUserGroupIdResponseBody &&) = default ;
    ListByUserGroupIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListByUserGroupIdResponseBody() = default ;
    ListByUserGroupIdResponseBody& operator=(const ListByUserGroupIdResponseBody &) = default ;
    ListByUserGroupIdResponseBody& operator=(ListByUserGroupIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(FailedUserGroupIds, failedUserGroupIds_);
        DARABONBA_PTR_TO_JSON(UserGroupModels, userGroupModels_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(FailedUserGroupIds, failedUserGroupIds_);
        DARABONBA_PTR_FROM_JSON(UserGroupModels, userGroupModels_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class UserGroupModels : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const UserGroupModels& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
          DARABONBA_PTR_TO_JSON(IdentifiedPath, identifiedPath_);
          DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_TO_JSON(ParentUsergroupId, parentUsergroupId_);
          DARABONBA_PTR_TO_JSON(UsergroupDesc, usergroupDesc_);
          DARABONBA_PTR_TO_JSON(UsergroupId, usergroupId_);
          DARABONBA_PTR_TO_JSON(UsergroupName, usergroupName_);
        };
        friend void from_json(const Darabonba::Json& j, UserGroupModels& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
          DARABONBA_PTR_FROM_JSON(IdentifiedPath, identifiedPath_);
          DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
          DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
          DARABONBA_PTR_FROM_JSON(ParentUsergroupId, parentUsergroupId_);
          DARABONBA_PTR_FROM_JSON(UsergroupDesc, usergroupDesc_);
          DARABONBA_PTR_FROM_JSON(UsergroupId, usergroupId_);
          DARABONBA_PTR_FROM_JSON(UsergroupName, usergroupName_);
        };
        UserGroupModels() = default ;
        UserGroupModels(const UserGroupModels &) = default ;
        UserGroupModels(UserGroupModels &&) = default ;
        UserGroupModels(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~UserGroupModels() = default ;
        UserGroupModels& operator=(const UserGroupModels &) = default ;
        UserGroupModels& operator=(UserGroupModels &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUser_ == nullptr && this->identifiedPath_ == nullptr && this->modifiedTime_ == nullptr && this->modifyUser_ == nullptr && this->parentUsergroupId_ == nullptr
        && this->usergroupDesc_ == nullptr && this->usergroupId_ == nullptr && this->usergroupName_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
        inline UserGroupModels& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // createUser Field Functions 
        bool hasCreateUser() const { return this->createUser_ != nullptr;};
        void deleteCreateUser() { this->createUser_ = nullptr;};
        inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
        inline UserGroupModels& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


        // identifiedPath Field Functions 
        bool hasIdentifiedPath() const { return this->identifiedPath_ != nullptr;};
        void deleteIdentifiedPath() { this->identifiedPath_ = nullptr;};
        inline string getIdentifiedPath() const { DARABONBA_PTR_GET_DEFAULT(identifiedPath_, "") };
        inline UserGroupModels& setIdentifiedPath(string identifiedPath) { DARABONBA_PTR_SET_VALUE(identifiedPath_, identifiedPath) };


        // modifiedTime Field Functions 
        bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
        void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
        inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
        inline UserGroupModels& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


        // modifyUser Field Functions 
        bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
        void deleteModifyUser() { this->modifyUser_ = nullptr;};
        inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
        inline UserGroupModels& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


        // parentUsergroupId Field Functions 
        bool hasParentUsergroupId() const { return this->parentUsergroupId_ != nullptr;};
        void deleteParentUsergroupId() { this->parentUsergroupId_ = nullptr;};
        inline string getParentUsergroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUsergroupId_, "") };
        inline UserGroupModels& setParentUsergroupId(string parentUsergroupId) { DARABONBA_PTR_SET_VALUE(parentUsergroupId_, parentUsergroupId) };


        // usergroupDesc Field Functions 
        bool hasUsergroupDesc() const { return this->usergroupDesc_ != nullptr;};
        void deleteUsergroupDesc() { this->usergroupDesc_ = nullptr;};
        inline string getUsergroupDesc() const { DARABONBA_PTR_GET_DEFAULT(usergroupDesc_, "") };
        inline UserGroupModels& setUsergroupDesc(string usergroupDesc) { DARABONBA_PTR_SET_VALUE(usergroupDesc_, usergroupDesc) };


        // usergroupId Field Functions 
        bool hasUsergroupId() const { return this->usergroupId_ != nullptr;};
        void deleteUsergroupId() { this->usergroupId_ = nullptr;};
        inline string getUsergroupId() const { DARABONBA_PTR_GET_DEFAULT(usergroupId_, "") };
        inline UserGroupModels& setUsergroupId(string usergroupId) { DARABONBA_PTR_SET_VALUE(usergroupId_, usergroupId) };


        // usergroupName Field Functions 
        bool hasUsergroupName() const { return this->usergroupName_ != nullptr;};
        void deleteUsergroupName() { this->usergroupName_ = nullptr;};
        inline string getUsergroupName() const { DARABONBA_PTR_GET_DEFAULT(usergroupName_, "") };
        inline UserGroupModels& setUsergroupName(string usergroupName) { DARABONBA_PTR_SET_VALUE(usergroupName_, usergroupName) };


      protected:
        // The time when the Secret was created.
        shared_ptr<string> createTime_ {};
        // The UserID of the creator in the Quick BI.
        shared_ptr<string> createUser_ {};
        // The path of the user group.
        shared_ptr<string> identifiedPath_ {};
        // The time when the protection policy was last modified.
        shared_ptr<string> modifiedTime_ {};
        // The UserID of the modifier in the Quick BI.
        shared_ptr<string> modifyUser_ {};
        // The ID of the parent user group.
        shared_ptr<string> parentUsergroupId_ {};
        // The description of the user group.
        shared_ptr<string> usergroupDesc_ {};
        // The ID of the user group.
        shared_ptr<string> usergroupId_ {};
        // The name of the user group.
        shared_ptr<string> usergroupName_ {};
      };

      virtual bool empty() const override { return this->failedUserGroupIds_ == nullptr
        && this->userGroupModels_ == nullptr; };
      // failedUserGroupIds Field Functions 
      bool hasFailedUserGroupIds() const { return this->failedUserGroupIds_ != nullptr;};
      void deleteFailedUserGroupIds() { this->failedUserGroupIds_ = nullptr;};
      inline const vector<string> & getFailedUserGroupIds() const { DARABONBA_PTR_GET_CONST(failedUserGroupIds_, vector<string>) };
      inline vector<string> getFailedUserGroupIds() { DARABONBA_PTR_GET(failedUserGroupIds_, vector<string>) };
      inline Result& setFailedUserGroupIds(const vector<string> & failedUserGroupIds) { DARABONBA_PTR_SET_VALUE(failedUserGroupIds_, failedUserGroupIds) };
      inline Result& setFailedUserGroupIds(vector<string> && failedUserGroupIds) { DARABONBA_PTR_SET_RVALUE(failedUserGroupIds_, failedUserGroupIds) };


      // userGroupModels Field Functions 
      bool hasUserGroupModels() const { return this->userGroupModels_ != nullptr;};
      void deleteUserGroupModels() { this->userGroupModels_ = nullptr;};
      inline const vector<Result::UserGroupModels> & getUserGroupModels() const { DARABONBA_PTR_GET_CONST(userGroupModels_, vector<Result::UserGroupModels>) };
      inline vector<Result::UserGroupModels> getUserGroupModels() { DARABONBA_PTR_GET(userGroupModels_, vector<Result::UserGroupModels>) };
      inline Result& setUserGroupModels(const vector<Result::UserGroupModels> & userGroupModels) { DARABONBA_PTR_SET_VALUE(userGroupModels_, userGroupModels) };
      inline Result& setUserGroupModels(vector<Result::UserGroupModels> && userGroupModels) { DARABONBA_PTR_SET_RVALUE(userGroupModels_, userGroupModels) };


    protected:
      // List of failed user groups.
      shared_ptr<vector<string>> failedUserGroupIds_ {};
      // The details of the user group that was queried.
      shared_ptr<vector<Result::UserGroupModels>> userGroupModels_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListByUserGroupIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListByUserGroupIdResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListByUserGroupIdResponseBody::Result) };
    inline ListByUserGroupIdResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListByUserGroupIdResponseBody::Result) };
    inline ListByUserGroupIdResponseBody& setResult(const ListByUserGroupIdResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListByUserGroupIdResponseBody& setResult(ListByUserGroupIdResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListByUserGroupIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The user group query result is returned.
    shared_ptr<ListByUserGroupIdResponseBody::Result> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
