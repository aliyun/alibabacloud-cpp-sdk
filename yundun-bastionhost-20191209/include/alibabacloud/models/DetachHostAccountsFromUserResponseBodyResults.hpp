// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMUSERRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DETACHHOSTACCOUNTSFROMUSERRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachHostAccountsFromUserResponseBodyResultsHostAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachHostAccountsFromUserResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachHostAccountsFromUserResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachHostAccountsFromUserResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    DetachHostAccountsFromUserResponseBodyResults() = default ;
    DetachHostAccountsFromUserResponseBodyResults(const DetachHostAccountsFromUserResponseBodyResults &) = default ;
    DetachHostAccountsFromUserResponseBodyResults(DetachHostAccountsFromUserResponseBodyResults &&) = default ;
    DetachHostAccountsFromUserResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachHostAccountsFromUserResponseBodyResults() = default ;
    DetachHostAccountsFromUserResponseBodyResults& operator=(const DetachHostAccountsFromUserResponseBodyResults &) = default ;
    DetachHostAccountsFromUserResponseBodyResults& operator=(DetachHostAccountsFromUserResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->hostAccounts_ != nullptr && this->hostId_ != nullptr && this->message_ != nullptr && this->userId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DetachHostAccountsFromUserResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hostAccounts Field Functions 
    bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
    void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
    inline const vector<Models::DetachHostAccountsFromUserResponseBodyResultsHostAccounts> & hostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<Models::DetachHostAccountsFromUserResponseBodyResultsHostAccounts>) };
    inline vector<Models::DetachHostAccountsFromUserResponseBodyResultsHostAccounts> hostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<Models::DetachHostAccountsFromUserResponseBodyResultsHostAccounts>) };
    inline DetachHostAccountsFromUserResponseBodyResults& setHostAccounts(const vector<Models::DetachHostAccountsFromUserResponseBodyResultsHostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
    inline DetachHostAccountsFromUserResponseBodyResults& setHostAccounts(vector<Models::DetachHostAccountsFromUserResponseBodyResultsHostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline DetachHostAccountsFromUserResponseBodyResults& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DetachHostAccountsFromUserResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline DetachHostAccountsFromUserResponseBodyResults& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The return code that indicates whether the call was successful. Valid values:
    // 
    // *   **OK**: The call was successful.
    // *   **UNEXPECTED**: An unknown error occurred.
    // *   **INVALID_ARGUMENT**: A request parameter is invalid.
    // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
    // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
    std::shared_ptr<string> code_ = nullptr;
    // The result of revoking permissions on the specified host accounts from the user.
    std::shared_ptr<vector<Models::DetachHostAccountsFromUserResponseBodyResultsHostAccounts>> hostAccounts_ = nullptr;
    // The host ID.
    std::shared_ptr<string> hostId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> message_ = nullptr;
    // The user ID.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
