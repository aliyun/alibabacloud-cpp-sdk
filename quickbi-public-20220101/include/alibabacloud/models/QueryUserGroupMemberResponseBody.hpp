// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYUSERGROUPMEMBERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYUSERGROUPMEMBERRESPONSEBODY_HPP_
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
  class QueryUserGroupMemberResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryUserGroupMemberResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryUserGroupMemberResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryUserGroupMemberResponseBody() = default ;
    QueryUserGroupMemberResponseBody(const QueryUserGroupMemberResponseBody &) = default ;
    QueryUserGroupMemberResponseBody(QueryUserGroupMemberResponseBody &&) = default ;
    QueryUserGroupMemberResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryUserGroupMemberResponseBody() = default ;
    QueryUserGroupMemberResponseBody& operator=(const QueryUserGroupMemberResponseBody &) = default ;
    QueryUserGroupMemberResponseBody& operator=(QueryUserGroupMemberResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(IsUserGroup, isUserGroup_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ParentUserGroupId, parentUserGroupId_);
        DARABONBA_PTR_TO_JSON(ParentUserGroupName, parentUserGroupName_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(IsUserGroup, isUserGroup_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ParentUserGroupId, parentUserGroupId_);
        DARABONBA_PTR_FROM_JSON(ParentUserGroupName, parentUserGroupName_);
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
      virtual bool empty() const override { return this->id_ == nullptr
        && this->isUserGroup_ == nullptr && this->name_ == nullptr && this->parentUserGroupId_ == nullptr && this->parentUserGroupName_ == nullptr; };
      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline Result& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // isUserGroup Field Functions 
      bool hasIsUserGroup() const { return this->isUserGroup_ != nullptr;};
      void deleteIsUserGroup() { this->isUserGroup_ = nullptr;};
      inline bool getIsUserGroup() const { DARABONBA_PTR_GET_DEFAULT(isUserGroup_, false) };
      inline Result& setIsUserGroup(bool isUserGroup) { DARABONBA_PTR_SET_VALUE(isUserGroup_, isUserGroup) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Result& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // parentUserGroupId Field Functions 
      bool hasParentUserGroupId() const { return this->parentUserGroupId_ != nullptr;};
      void deleteParentUserGroupId() { this->parentUserGroupId_ = nullptr;};
      inline string getParentUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(parentUserGroupId_, "") };
      inline Result& setParentUserGroupId(string parentUserGroupId) { DARABONBA_PTR_SET_VALUE(parentUserGroupId_, parentUserGroupId) };


      // parentUserGroupName Field Functions 
      bool hasParentUserGroupName() const { return this->parentUserGroupName_ != nullptr;};
      void deleteParentUserGroupName() { this->parentUserGroupName_ = nullptr;};
      inline string getParentUserGroupName() const { DARABONBA_PTR_GET_DEFAULT(parentUserGroupName_, "") };
      inline Result& setParentUserGroupName(string parentUserGroupName) { DARABONBA_PTR_SET_VALUE(parentUserGroupName_, parentUserGroupName) };


    protected:
      // ID of the user group or the user group member.
      shared_ptr<string> id_ {};
      // Indicates whether it is a user group. Possible values:
      // 
      // - true: It is a user group.
      // - false: It is a user.
      shared_ptr<bool> isUserGroup_ {};
      // Name or nickname of the user group or its member.
      shared_ptr<string> name_ {};
      // ID of the parent user group.
      shared_ptr<string> parentUserGroupId_ {};
      // Name of the parent user group.
      shared_ptr<string> parentUserGroupName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryUserGroupMemberResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<QueryUserGroupMemberResponseBody::Result> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<QueryUserGroupMemberResponseBody::Result>) };
    inline vector<QueryUserGroupMemberResponseBody::Result> getResult() { DARABONBA_PTR_GET(result_, vector<QueryUserGroupMemberResponseBody::Result>) };
    inline QueryUserGroupMemberResponseBody& setResult(const vector<QueryUserGroupMemberResponseBody::Result> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryUserGroupMemberResponseBody& setResult(vector<QueryUserGroupMemberResponseBody::Result> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryUserGroupMemberResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Request ID.
    shared_ptr<string> requestId_ {};
    // The result of the request for the user group member list.
    shared_ptr<vector<QueryUserGroupMemberResponseBody::Result>> result_ {};
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
