// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOUSERGROUPRESPONSEBODYRESULTSHOSTACCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOUSERGROUPRESPONSEBODYRESULTSHOSTACCOUNTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HostAccountId, hostAccountId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts() = default ;
    AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts(const AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts &) = default ;
    AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts(AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts &&) = default ;
    AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts() = default ;
    AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts& operator=(const AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts &) = default ;
    AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts& operator=(AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->hostAccountId_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hostAccountId Field Functions 
    bool hasHostAccountId() const { return this->hostAccountId_ != nullptr;};
    void deleteHostAccountId() { this->hostAccountId_ = nullptr;};
    inline string hostAccountId() const { DARABONBA_PTR_GET_DEFAULT(hostAccountId_, "") };
    inline AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts& setHostAccountId(string hostAccountId) { DARABONBA_PTR_SET_VALUE(hostAccountId_, hostAccountId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The return code that indicates whether the user group was authorized to manage the specified host account. Valid values:
    // 
    // *   **OK**: The call was successful.
    // *   **UNEXPECTED**: An unknown error occurred.
    // *   **INVALID_ARGUMENT**: A request parameter is invalid.
    // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
    // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
    std::shared_ptr<string> code_ = nullptr;
    // The ID of the host account.
    std::shared_ptr<string> hostAccountId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
