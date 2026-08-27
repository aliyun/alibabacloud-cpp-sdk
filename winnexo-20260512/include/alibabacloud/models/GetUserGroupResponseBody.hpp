// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class GetUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(childGroups, childGroups_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(members, members_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_ANY_TO_JSON(parentGroup, parentGroup_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(userGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, GetUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(childGroups, childGroups_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(members, members_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_ANY_FROM_JSON(parentGroup, parentGroup_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(userGroup, userGroup_);
    };
    GetUserGroupResponseBody() = default ;
    GetUserGroupResponseBody(const GetUserGroupResponseBody &) = default ;
    GetUserGroupResponseBody(GetUserGroupResponseBody &&) = default ;
    GetUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetUserGroupResponseBody() = default ;
    GetUserGroupResponseBody& operator=(const GetUserGroupResponseBody &) = default ;
    GetUserGroupResponseBody& operator=(GetUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->childGroups_ == nullptr
        && this->code_ == nullptr && this->members_ == nullptr && this->message_ == nullptr && this->parentGroup_ == nullptr && this->requestId_ == nullptr
        && this->userGroup_ == nullptr; };
    // childGroups Field Functions 
    bool hasChildGroups() const { return this->childGroups_ != nullptr;};
    void deleteChildGroups() { this->childGroups_ = nullptr;};
    inline const vector<Darabonba::Json> & getChildGroups() const { DARABONBA_PTR_GET_CONST(childGroups_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getChildGroups() { DARABONBA_PTR_GET(childGroups_, vector<Darabonba::Json>) };
    inline GetUserGroupResponseBody& setChildGroups(const vector<Darabonba::Json> & childGroups) { DARABONBA_PTR_SET_VALUE(childGroups_, childGroups) };
    inline GetUserGroupResponseBody& setChildGroups(vector<Darabonba::Json> && childGroups) { DARABONBA_PTR_SET_RVALUE(childGroups_, childGroups) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetUserGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // members Field Functions 
    bool hasMembers() const { return this->members_ != nullptr;};
    void deleteMembers() { this->members_ = nullptr;};
    inline const vector<Darabonba::Json> & getMembers() const { DARABONBA_PTR_GET_CONST(members_, vector<Darabonba::Json>) };
    inline vector<Darabonba::Json> getMembers() { DARABONBA_PTR_GET(members_, vector<Darabonba::Json>) };
    inline GetUserGroupResponseBody& setMembers(const vector<Darabonba::Json> & members) { DARABONBA_PTR_SET_VALUE(members_, members) };
    inline GetUserGroupResponseBody& setMembers(vector<Darabonba::Json> && members) { DARABONBA_PTR_SET_RVALUE(members_, members) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetUserGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // parentGroup Field Functions 
    bool hasParentGroup() const { return this->parentGroup_ != nullptr;};
    void deleteParentGroup() { this->parentGroup_ = nullptr;};
    inline     const Darabonba::Json & getParentGroup() const { DARABONBA_GET(parentGroup_) };
    Darabonba::Json & getParentGroup() { DARABONBA_GET(parentGroup_) };
    inline GetUserGroupResponseBody& setParentGroup(const Darabonba::Json & parentGroup) { DARABONBA_SET_VALUE(parentGroup_, parentGroup) };
    inline GetUserGroupResponseBody& setParentGroup(Darabonba::Json && parentGroup) { DARABONBA_SET_RVALUE(parentGroup_, parentGroup) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline     const Darabonba::Json & getUserGroup() const { DARABONBA_GET(userGroup_) };
    Darabonba::Json & getUserGroup() { DARABONBA_GET(userGroup_) };
    inline GetUserGroupResponseBody& setUserGroup(const Darabonba::Json & userGroup) { DARABONBA_SET_VALUE(userGroup_, userGroup) };
    inline GetUserGroupResponseBody& setUserGroup(Darabonba::Json && userGroup) { DARABONBA_SET_RVALUE(userGroup_, userGroup) };


  protected:
    // **The list of direct child user groups.**
    shared_ptr<vector<Darabonba::Json>> childGroups_ {};
    // The status code.
    shared_ptr<string> code_ {};
    // **The list of direct members in the current user group.**
    shared_ptr<vector<Darabonba::Json>> members_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // **The parent user group information. This is empty for the root node.**
    Darabonba::Json parentGroup_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // **The target user group information.**
    Darabonba::Json userGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
