// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERGROUPLISTBYPARENTIDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERGROUPLISTBYPARENTIDRESPONSEBODY_HPP_
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
  class QueryUserGroupListByParentIdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserGroupListByParentIdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserGroupListByParentIdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUserGroupListByParentIdResponseBody() = default ;
    QueryUserGroupListByParentIdResponseBody(const QueryUserGroupListByParentIdResponseBody &) = default ;
    QueryUserGroupListByParentIdResponseBody(QueryUserGroupListByParentIdResponseBody &&) = default ;
    QueryUserGroupListByParentIdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserGroupListByParentIdResponseBody() = default ;
    QueryUserGroupListByParentIdResponseBody& operator=(const QueryUserGroupListByParentIdResponseBody &) = default ;
    QueryUserGroupListByParentIdResponseBody& operator=(QueryUserGroupListByParentIdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(CreateUser, createUser_);
        DARABONBA_PTR_TO_JSON(IdentifiedPath, identifiedPath_);
        DARABONBA_PTR_TO_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_TO_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_TO_JSON(ParentUserGroupId, parentUserGroupId_);
        DARABONBA_PTR_TO_JSON(UserGroupDescription, userGroupDescription_);
        DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
        DARABONBA_PTR_TO_JSON(UserGroupName, userGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(CreateUser, createUser_);
        DARABONBA_PTR_FROM_JSON(IdentifiedPath, identifiedPath_);
        DARABONBA_PTR_FROM_JSON(ModifiedTime, modifiedTime_);
        DARABONBA_PTR_FROM_JSON(ModifyUser, modifyUser_);
        DARABONBA_PTR_FROM_JSON(ParentUserGroupId, parentUserGroupId_);
        DARABONBA_PTR_FROM_JSON(UserGroupDescription, userGroupDescription_);
        DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
        DARABONBA_PTR_FROM_JSON(UserGroupName, userGroupName_);
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
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->createUser_ == nullptr && this->identifiedPath_ == nullptr && this->modifiedTime_ == nullptr && this->modifyUser_ == nullptr && this->parentUserGroupId_ == nullptr
        && this->userGroupDescription_ == nullptr && this->userGroupId_ == nullptr && this->userGroupName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline Result& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // createUser Field Functions 
      bool hasCreateUser() const { return this->createUser_ != nullptr;};
      void deleteCreateUser() { this->createUser_ = nullptr;};
      inline string getCreateUser() const { DARABONBA_PTR_GET_DEFAULT(createUser_, "") };
      inline Result& setCreateUser(string createUser) { DARABONBA_PTR_SET_VALUE(createUser_, createUser) };


      // identifiedPath Field Functions 
      bool hasIdentifiedPath() const { return this->identifiedPath_ != nullptr;};
      void deleteIdentifiedPath() { this->identifiedPath_ = nullptr;};
      inline string getIdentifiedPath() const { DARABONBA_PTR_GET_DEFAULT(identifiedPath_, "") };
      inline Result& setIdentifiedPath(string identifiedPath) { DARABONBA_PTR_SET_VALUE(identifiedPath_, identifiedPath) };


      // modifiedTime Field Functions 
      bool hasModifiedTime() const { return this->modifiedTime_ != nullptr;};
      void deleteModifiedTime() { this->modifiedTime_ = nullptr;};
      inline string getModifiedTime() const { DARABONBA_PTR_GET_DEFAULT(modifiedTime_, "") };
      inline Result& setModifiedTime(string modifiedTime) { DARABONBA_PTR_SET_VALUE(modifiedTime_, modifiedTime) };


      // modifyUser Field Functions 
      bool hasModifyUser() const { return this->modifyUser_ != nullptr;};
      void deleteModifyUser() { this->modifyUser_ = nullptr;};
      inline string getModifyUser() const { DARABONBA_PTR_GET_DEFAULT(modifyUser_, "") };
      inline Result& setModifyUser(string modifyUser) { DARABONBA_PTR_SET_VALUE(modifyUser_, modifyUser) };


      // parentUserGroupId Field Functions 
      bool hasParentUserGroupId() const { return this->parentUserGroupId_ != nullptr;};
      void deleteParentUserGroupId() { this->parentUserGroupId_ = nullptr;};
      inline string getParentUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUserGroupId_, "") };
      inline Result& setParentUserGroupId(string parentUserGroupId) { DARABONBA_PTR_SET_VALUE(parentUserGroupId_, parentUserGroupId) };


      // userGroupDescription Field Functions 
      bool hasUserGroupDescription() const { return this->userGroupDescription_ != nullptr;};
      void deleteUserGroupDescription() { this->userGroupDescription_ = nullptr;};
      inline string getUserGroupDescription() const { DARABONBA_PTR_GET_DEFAULT(userGroupDescription_, "") };
      inline Result& setUserGroupDescription(string userGroupDescription) { DARABONBA_PTR_SET_VALUE(userGroupDescription_, userGroupDescription) };


      // userGroupId Field Functions 
      bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
      void deleteUserGroupId() { this->userGroupId_ = nullptr;};
      inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
      inline Result& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


      // userGroupName Field Functions 
      bool hasUserGroupName() const { return this->userGroupName_ != nullptr;};
      void deleteUserGroupName() { this->userGroupName_ = nullptr;};
      inline string getUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(userGroupName_, "") };
      inline Result& setUserGroupName(string userGroupName) { DARABONBA_PTR_SET_VALUE(userGroupName_, userGroupName) };


    protected:
      // The time when the sub-user group was created.
      shared_ptr<string> createTime_ {};
      // The creator of the sub-user group. The UserID of the Quick BI is used instead of the UID of Alibaba Cloud.
      shared_ptr<string> createUser_ {};
      // Directory level of the sub-user group.
      shared_ptr<string> identifiedPath_ {};
      // The time when the sub-user group was last modified.
      shared_ptr<string> modifiedTime_ {};
      // The user who modified the subgroup. The UserID of the Quick BI is used instead of the UID of Alibaba Cloud.
      shared_ptr<string> modifyUser_ {};
      // The ID of the parent user group.
      shared_ptr<string> parentUserGroupId_ {};
      // The description of the sub-user group.
      shared_ptr<string> userGroupDescription_ {};
      // The ID of the sub-user group.
      shared_ptr<string> userGroupId_ {};
      // The name of the sub-user group.
      shared_ptr<string> userGroupName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserGroupListByParentIdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryUserGroupListByParentIdResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryUserGroupListByParentIdResponseBody::Result>) };
    inline vector<QueryUserGroupListByParentIdResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryUserGroupListByParentIdResponseBody::Result>) };
    inline QueryUserGroupListByParentIdResponseBody& setResult(const vector<QueryUserGroupListByParentIdResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryUserGroupListByParentIdResponseBody& setResult(vector<QueryUserGroupListByParentIdResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUserGroupListByParentIdResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the sub-user group.
    shared_ptr<vector<QueryUserGroupListByParentIdResponseBody::Result>> result_ {};
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
