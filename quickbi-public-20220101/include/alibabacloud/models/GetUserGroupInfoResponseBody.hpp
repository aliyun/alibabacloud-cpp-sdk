// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERGROUPINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERGROUPINFORESPONSEBODY_HPP_
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
  class GetUserGroupInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserGroupInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserGroupInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetUserGroupInfoResponseBody() = default ;
    GetUserGroupInfoResponseBody(const GetUserGroupInfoResponseBody &) = default ;
    GetUserGroupInfoResponseBody(GetUserGroupInfoResponseBody &&) = default ;
    GetUserGroupInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserGroupInfoResponseBody() = default ;
    GetUserGroupInfoResponseBody& operator=(const GetUserGroupInfoResponseBody &) = default ;
    GetUserGroupInfoResponseBody& operator=(GetUserGroupInfoResponseBody &&) = default ;
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
        DARABONBA_PTR_TO_JSON(ParentUsergroupId, parentUsergroupId_);
        DARABONBA_PTR_TO_JSON(UsergroupDesc, usergroupDesc_);
        DARABONBA_PTR_TO_JSON(UsergroupId, usergroupId_);
        DARABONBA_PTR_TO_JSON(UsergroupName, usergroupName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
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
        && this->createUser_ == nullptr && this->identifiedPath_ == nullptr && this->modifiedTime_ == nullptr && this->modifyUser_ == nullptr && this->parentUsergroupId_ == nullptr
        && this->usergroupDesc_ == nullptr && this->usergroupId_ == nullptr && this->usergroupName_ == nullptr; };
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


      // parentUsergroupId Field Functions 
      bool hasParentUsergroupId() const { return this->parentUsergroupId_ != nullptr;};
      void deleteParentUsergroupId() { this->parentUsergroupId_ = nullptr;};
      inline string getParentUsergroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUsergroupId_, "") };
      inline Result& setParentUsergroupId(string parentUsergroupId) { DARABONBA_PTR_SET_VALUE(parentUsergroupId_, parentUsergroupId) };


      // usergroupDesc Field Functions 
      bool hasUsergroupDesc() const { return this->usergroupDesc_ != nullptr;};
      void deleteUsergroupDesc() { this->usergroupDesc_ = nullptr;};
      inline string getUsergroupDesc() const { DARABONBA_PTR_GET_DEFAULT(usergroupDesc_, "") };
      inline Result& setUsergroupDesc(string usergroupDesc) { DARABONBA_PTR_SET_VALUE(usergroupDesc_, usergroupDesc) };


      // usergroupId Field Functions 
      bool hasUsergroupId() const { return this->usergroupId_ != nullptr;};
      void deleteUsergroupId() { this->usergroupId_ = nullptr;};
      inline string getUsergroupId() const { DARABONBA_PTR_GET_DEFAULT(usergroupId_, "") };
      inline Result& setUsergroupId(string usergroupId) { DARABONBA_PTR_SET_VALUE(usergroupId_, usergroupId) };


      // usergroupName Field Functions 
      bool hasUsergroupName() const { return this->usergroupName_ != nullptr;};
      void deleteUsergroupName() { this->usergroupName_ = nullptr;};
      inline string getUsergroupName() const { DARABONBA_PTR_GET_DEFAULT(usergroupName_, "") };
      inline Result& setUsergroupName(string usergroupName) { DARABONBA_PTR_SET_VALUE(usergroupName_, usergroupName) };


    protected:
      // Creation time of the user group.
      shared_ptr<string> createTime_ {};
      // Creator of the sub-user group. This is the UserID in Quick BI, not the UID in Alibaba Cloud.
      shared_ptr<string> createUser_ {};
      // Directory level of the user group.
      shared_ptr<string> identifiedPath_ {};
      // Last modified time of the user group.
      shared_ptr<string> modifiedTime_ {};
      // Modifier of the user group. This is the UserID in Quick BI, not the UID in Alibaba Cloud.
      shared_ptr<string> modifyUser_ {};
      // Parent user group ID.
      shared_ptr<string> parentUsergroupId_ {};
      // Description of the user group.
      shared_ptr<string> usergroupDesc_ {};
      // User group ID.
      shared_ptr<string> usergroupId_ {};
      // Name of the user group.
      shared_ptr<string> usergroupName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserGroupInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<GetUserGroupInfoResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<GetUserGroupInfoResponseBody::Result>) };
    inline vector<GetUserGroupInfoResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<GetUserGroupInfoResponseBody::Result>) };
    inline GetUserGroupInfoResponseBody& setResult(const vector<GetUserGroupInfoResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline GetUserGroupInfoResponseBody& setResult(vector<GetUserGroupInfoResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetUserGroupInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // User group information.
    shared_ptr<vector<GetUserGroupInfoResponseBody::Result>> result_ {};
    // Indicates whether the request was successful. Possible values:
    // 
    // - true: The request was successful.
    // - false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
