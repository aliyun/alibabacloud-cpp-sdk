// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SETKNOWLEDGEBASEVISIBILITYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SETKNOWLEDGEBASEVISIBILITYRESPONSEBODY_HPP_
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
  class SetKnowledgeBaseVisibilityResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SetKnowledgeBaseVisibilityResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(targetId, targetId_);
      DARABONBA_PTR_TO_JSON(targetType, targetType_);
      DARABONBA_PTR_TO_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_TO_JSON(userIds, userIds_);
      DARABONBA_PTR_TO_JSON(visibilityMode, visibilityMode_);
    };
    friend void from_json(const Darabonba::Json& j, SetKnowledgeBaseVisibilityResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(targetId, targetId_);
      DARABONBA_PTR_FROM_JSON(targetType, targetType_);
      DARABONBA_PTR_FROM_JSON(userGroupIds, userGroupIds_);
      DARABONBA_PTR_FROM_JSON(userIds, userIds_);
      DARABONBA_PTR_FROM_JSON(visibilityMode, visibilityMode_);
    };
    SetKnowledgeBaseVisibilityResponseBody() = default ;
    SetKnowledgeBaseVisibilityResponseBody(const SetKnowledgeBaseVisibilityResponseBody &) = default ;
    SetKnowledgeBaseVisibilityResponseBody(SetKnowledgeBaseVisibilityResponseBody &&) = default ;
    SetKnowledgeBaseVisibilityResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SetKnowledgeBaseVisibilityResponseBody() = default ;
    SetKnowledgeBaseVisibilityResponseBody& operator=(const SetKnowledgeBaseVisibilityResponseBody &) = default ;
    SetKnowledgeBaseVisibilityResponseBody& operator=(SetKnowledgeBaseVisibilityResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->targetId_ == nullptr && this->targetType_ == nullptr && this->userGroupIds_ == nullptr
        && this->userIds_ == nullptr && this->visibilityMode_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline SetKnowledgeBaseVisibilityResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline SetKnowledgeBaseVisibilityResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SetKnowledgeBaseVisibilityResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // targetId Field Functions 
    bool hasTargetId() const { return this->targetId_ != nullptr;};
    void deleteTargetId() { this->targetId_ = nullptr;};
    inline string getTargetId() const { DARABONBA_PTR_GET_DEFAULT(targetId_, "") };
    inline SetKnowledgeBaseVisibilityResponseBody& setTargetId(string targetId) { DARABONBA_PTR_SET_VALUE(targetId_, targetId) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string getTargetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline SetKnowledgeBaseVisibilityResponseBody& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // userGroupIds Field Functions 
    bool hasUserGroupIds() const { return this->userGroupIds_ != nullptr;};
    void deleteUserGroupIds() { this->userGroupIds_ = nullptr;};
    inline const vector<string> & getUserGroupIds() const { DARABONBA_PTR_GET_CONST(userGroupIds_, vector<string>) };
    inline vector<string> getUserGroupIds() { DARABONBA_PTR_GET(userGroupIds_, vector<string>) };
    inline SetKnowledgeBaseVisibilityResponseBody& setUserGroupIds(const vector<string> & userGroupIds) { DARABONBA_PTR_SET_VALUE(userGroupIds_, userGroupIds) };
    inline SetKnowledgeBaseVisibilityResponseBody& setUserGroupIds(vector<string> && userGroupIds) { DARABONBA_PTR_SET_RVALUE(userGroupIds_, userGroupIds) };


    // userIds Field Functions 
    bool hasUserIds() const { return this->userIds_ != nullptr;};
    void deleteUserIds() { this->userIds_ = nullptr;};
    inline const vector<string> & getUserIds() const { DARABONBA_PTR_GET_CONST(userIds_, vector<string>) };
    inline vector<string> getUserIds() { DARABONBA_PTR_GET(userIds_, vector<string>) };
    inline SetKnowledgeBaseVisibilityResponseBody& setUserIds(const vector<string> & userIds) { DARABONBA_PTR_SET_VALUE(userIds_, userIds) };
    inline SetKnowledgeBaseVisibilityResponseBody& setUserIds(vector<string> && userIds) { DARABONBA_PTR_SET_RVALUE(userIds_, userIds) };


    // visibilityMode Field Functions 
    bool hasVisibilityMode() const { return this->visibilityMode_ != nullptr;};
    void deleteVisibilityMode() { this->visibilityMode_ = nullptr;};
    inline string getVisibilityMode() const { DARABONBA_PTR_GET_DEFAULT(visibilityMode_, "") };
    inline SetKnowledgeBaseVisibilityResponseBody& setVisibilityMode(string visibilityMode) { DARABONBA_PTR_SET_VALUE(visibilityMode_, visibilityMode) };


  protected:
    // The status code.
    shared_ptr<string> code_ {};
    // The status code description.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The target ID, which varies based on the target type.
    // - If the type is period, specify the period ID.
    // - If the type is objective, specify the objective ID.
    // - If the type is kr, specify the keyResult ID.
    shared_ptr<string> targetId_ {};
    // The type of the current permission. Valid values:
    // - period: period type
    // - objective: objective type
    // - kr: keyResult type
    shared_ptr<string> targetType_ {};
    // The collection of user groups.
    shared_ptr<vector<string>> userGroupIds_ {};
    // The collection of users.
    shared_ptr<vector<string>> userIds_ {};
    // The visibility scope mode.
    shared_ptr<string> visibilityMode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
