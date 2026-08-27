// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REMOVEUSERGROUPMEMBERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_REMOVEUSERGROUPMEMBERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class RemoveUserGroupMembersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RemoveUserGroupMembersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(affectedCount, affectedCount_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(requestedCount, requestedCount_);
      DARABONBA_PTR_TO_JSON(userGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, RemoveUserGroupMembersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(affectedCount, affectedCount_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(requestedCount, requestedCount_);
      DARABONBA_PTR_FROM_JSON(userGroupId, userGroupId_);
    };
    RemoveUserGroupMembersResponseBody() = default ;
    RemoveUserGroupMembersResponseBody(const RemoveUserGroupMembersResponseBody &) = default ;
    RemoveUserGroupMembersResponseBody(RemoveUserGroupMembersResponseBody &&) = default ;
    RemoveUserGroupMembersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RemoveUserGroupMembersResponseBody() = default ;
    RemoveUserGroupMembersResponseBody& operator=(const RemoveUserGroupMembersResponseBody &) = default ;
    RemoveUserGroupMembersResponseBody& operator=(RemoveUserGroupMembersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->affectedCount_ == nullptr
        && this->code_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->requestedCount_ == nullptr && this->userGroupId_ == nullptr; };
    // affectedCount Field Functions 
    bool hasAffectedCount() const { return this->affectedCount_ != nullptr;};
    void deleteAffectedCount() { this->affectedCount_ = nullptr;};
    inline int64_t getAffectedCount() const { DARABONBA_PTR_GET_DEFAULT(affectedCount_, 0L) };
    inline RemoveUserGroupMembersResponseBody& setAffectedCount(int64_t affectedCount) { DARABONBA_PTR_SET_VALUE(affectedCount_, affectedCount) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline RemoveUserGroupMembersResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline RemoveUserGroupMembersResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RemoveUserGroupMembersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // requestedCount Field Functions 
    bool hasRequestedCount() const { return this->requestedCount_ != nullptr;};
    void deleteRequestedCount() { this->requestedCount_ = nullptr;};
    inline int64_t getRequestedCount() const { DARABONBA_PTR_GET_DEFAULT(requestedCount_, 0L) };
    inline RemoveUserGroupMembersResponseBody& setRequestedCount(int64_t requestedCount) { DARABONBA_PTR_SET_VALUE(requestedCount_, requestedCount) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string getUserGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline RemoveUserGroupMembersResponseBody& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The number of member relationships actually removed.
    shared_ptr<int64_t> affectedCount_ {};
    // The status code.
    shared_ptr<string> code_ {};
    // The description of the status code.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of requested members before deduplication.
    shared_ptr<int64_t> requestedCount_ {};
    // The ID of the target user group.
    shared_ptr<string> userGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
