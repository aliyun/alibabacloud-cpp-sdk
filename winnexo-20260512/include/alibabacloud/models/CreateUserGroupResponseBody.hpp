// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateUserGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_ANY_TO_JSON(userGroup, userGroup_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_ANY_FROM_JSON(userGroup, userGroup_);
    };
    CreateUserGroupResponseBody() = default ;
    CreateUserGroupResponseBody(const CreateUserGroupResponseBody &) = default ;
    CreateUserGroupResponseBody(CreateUserGroupResponseBody &&) = default ;
    CreateUserGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserGroupResponseBody() = default ;
    CreateUserGroupResponseBody& operator=(const CreateUserGroupResponseBody &) = default ;
    CreateUserGroupResponseBody& operator=(CreateUserGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr && this->requestId_ == nullptr && this->userGroup_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateUserGroupResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateUserGroupResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUserGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userGroup Field Functions 
    bool hasUserGroup() const { return this->userGroup_ != nullptr;};
    void deleteUserGroup() { this->userGroup_ = nullptr;};
    inline     const Darabonba::Json & getUserGroup() const { DARABONBA_GET(userGroup_) };
    Darabonba::Json & getUserGroup() { DARABONBA_GET(userGroup_) };
    inline CreateUserGroupResponseBody& setUserGroup(const Darabonba::Json & userGroup) { DARABONBA_SET_VALUE(userGroup_, userGroup) };
    inline CreateUserGroupResponseBody& setUserGroup(Darabonba::Json && userGroup) { DARABONBA_SET_RVALUE(userGroup_, userGroup) };


  protected:
    // The business status code. A value of 200 indicates success.
    shared_ptr<string> code_ {};
    // The error description. This value is empty if the request is successful.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The information about the newly created user group.
    Darabonba::Json userGroup_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
