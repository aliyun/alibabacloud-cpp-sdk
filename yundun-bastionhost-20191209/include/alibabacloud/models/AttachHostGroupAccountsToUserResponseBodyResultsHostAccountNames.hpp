// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTGROUPACCOUNTSTOUSERRESPONSEBODYRESULTSHOSTACCOUNTNAMES_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTGROUPACCOUNTSTOUSERRESPONSEBODYRESULTSHOSTACCOUNTNAMES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_TO_JSON(Message, message_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HostAccountName, hostAccountName_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
    };
    AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames() = default ;
    AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames(const AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames &) = default ;
    AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames(AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames &&) = default ;
    AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames() = default ;
    AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames& operator=(const AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames &) = default ;
    AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames& operator=(AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->hostAccountName_ == nullptr && return this->message_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hostAccountName Field Functions 
    bool hasHostAccountName() const { return this->hostAccountName_ != nullptr;};
    void deleteHostAccountName() { this->hostAccountName_ = nullptr;};
    inline string hostAccountName() const { DARABONBA_PTR_GET_DEFAULT(hostAccountName_, "") };
    inline AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames& setHostAccountName(string hostAccountName) { DARABONBA_PTR_SET_VALUE(hostAccountName_, hostAccountName) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AttachHostGroupAccountsToUserResponseBodyResultsHostAccountNames& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


  protected:
    // The return code that indicates whether the user was authorized to manage the host account. Valid values:
    // 
    // *   **OK**: The call was successful.
    // *   **UNEXPECTED**: An unknown error occurred.
    // *   **INVALID_ARGUMENT**: A request parameter is invalid.
    // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
    // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
    std::shared_ptr<string> code_ = nullptr;
    // The name of the host account.
    std::shared_ptr<string> hostAccountName_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> message_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
