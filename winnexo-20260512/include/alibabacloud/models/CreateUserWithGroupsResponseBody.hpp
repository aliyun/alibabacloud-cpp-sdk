// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERWITHGROUPSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERWITHGROUPSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class CreateUserWithGroupsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserWithGroupsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(accountId, accountId_);
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(isNewUser, isNewUser_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(wnUserId, wnUserId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserWithGroupsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(accountId, accountId_);
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(isNewUser, isNewUser_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(wnUserId, wnUserId_);
    };
    CreateUserWithGroupsResponseBody() = default ;
    CreateUserWithGroupsResponseBody(const CreateUserWithGroupsResponseBody &) = default ;
    CreateUserWithGroupsResponseBody(CreateUserWithGroupsResponseBody &&) = default ;
    CreateUserWithGroupsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserWithGroupsResponseBody() = default ;
    CreateUserWithGroupsResponseBody& operator=(const CreateUserWithGroupsResponseBody &) = default ;
    CreateUserWithGroupsResponseBody& operator=(CreateUserWithGroupsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accountId_ == nullptr
        && this->code_ == nullptr && this->displayName_ == nullptr && this->isNewUser_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr
        && this->wnUserId_ == nullptr; };
    // accountId Field Functions 
    bool hasAccountId() const { return this->accountId_ != nullptr;};
    void deleteAccountId() { this->accountId_ = nullptr;};
    inline string getAccountId() const { DARABONBA_PTR_GET_DEFAULT(accountId_, "") };
    inline CreateUserWithGroupsResponseBody& setAccountId(string accountId) { DARABONBA_PTR_SET_VALUE(accountId_, accountId) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateUserWithGroupsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline string getDisplayName() const { DARABONBA_PTR_GET_DEFAULT(displayName_, "") };
    inline CreateUserWithGroupsResponseBody& setDisplayName(string displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };


    // isNewUser Field Functions 
    bool hasIsNewUser() const { return this->isNewUser_ != nullptr;};
    void deleteIsNewUser() { this->isNewUser_ = nullptr;};
    inline bool getIsNewUser() const { DARABONBA_PTR_GET_DEFAULT(isNewUser_, false) };
    inline CreateUserWithGroupsResponseBody& setIsNewUser(bool isNewUser) { DARABONBA_PTR_SET_VALUE(isNewUser_, isNewUser) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateUserWithGroupsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateUserWithGroupsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // wnUserId Field Functions 
    bool hasWnUserId() const { return this->wnUserId_ != nullptr;};
    void deleteWnUserId() { this->wnUserId_ = nullptr;};
    inline string getWnUserId() const { DARABONBA_PTR_GET_DEFAULT(wnUserId_, "") };
    inline CreateUserWithGroupsResponseBody& setWnUserId(string wnUserId) { DARABONBA_PTR_SET_VALUE(wnUserId_, wnUserId) };


  protected:
    // The WINNEXO logon account.
    shared_ptr<string> accountId_ {};
    // The business status code. A value of 200 indicates success. A failure returns a backend error code (ERR.* or InvalidParameter.*).
    shared_ptr<string> code_ {};
    // The display name of the user.
    shared_ptr<string> displayName_ {};
    // Indicates whether the user is newly created. A value of false indicates that an existing user joined the tenant.
    shared_ptr<bool> isNewUser_ {};
    // The error description. This parameter is empty when the request succeeds.
    shared_ptr<string> message_ {};
    // The request trace ID.
    shared_ptr<string> requestId_ {};
    // The WINNEXO platform user ID.
    shared_ptr<string> wnUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
