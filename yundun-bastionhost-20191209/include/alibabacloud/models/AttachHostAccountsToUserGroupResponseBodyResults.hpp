// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOUSERGROUPRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTACCOUNTSTOUSERGROUPRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachHostAccountsToUserGroupResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostAccountsToUserGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostAccountsToUserGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HostAccounts, hostAccounts_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    AttachHostAccountsToUserGroupResponseBodyResults() = default ;
    AttachHostAccountsToUserGroupResponseBodyResults(const AttachHostAccountsToUserGroupResponseBodyResults &) = default ;
    AttachHostAccountsToUserGroupResponseBodyResults(AttachHostAccountsToUserGroupResponseBodyResults &&) = default ;
    AttachHostAccountsToUserGroupResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostAccountsToUserGroupResponseBodyResults() = default ;
    AttachHostAccountsToUserGroupResponseBodyResults& operator=(const AttachHostAccountsToUserGroupResponseBodyResults &) = default ;
    AttachHostAccountsToUserGroupResponseBodyResults& operator=(AttachHostAccountsToUserGroupResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->hostAccounts_ == nullptr && return this->hostId_ == nullptr && return this->message_ == nullptr && return this->userGroupId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttachHostAccountsToUserGroupResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hostAccounts Field Functions 
    bool hasHostAccounts() const { return this->hostAccounts_ != nullptr;};
    void deleteHostAccounts() { this->hostAccounts_ = nullptr;};
    inline const vector<Models::AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts> & hostAccounts() const { DARABONBA_PTR_GET_CONST(hostAccounts_, vector<Models::AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts>) };
    inline vector<Models::AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts> hostAccounts() { DARABONBA_PTR_GET(hostAccounts_, vector<Models::AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts>) };
    inline AttachHostAccountsToUserGroupResponseBodyResults& setHostAccounts(const vector<Models::AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts> & hostAccounts) { DARABONBA_PTR_SET_VALUE(hostAccounts_, hostAccounts) };
    inline AttachHostAccountsToUserGroupResponseBodyResults& setHostAccounts(vector<Models::AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts> && hostAccounts) { DARABONBA_PTR_SET_RVALUE(hostAccounts_, hostAccounts) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string hostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline AttachHostAccountsToUserGroupResponseBodyResults& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AttachHostAccountsToUserGroupResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AttachHostAccountsToUserGroupResponseBodyResults& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The return code that indicates whether the call was successful. Valid values:
    // 
    // *   **OK**: The call was successful.
    // *   **UNEXPECTED**: An unknown error occurred.
    // *   **INVALID_ARGUMENT**: A request parameter is invalid.
    // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
    // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
    std::shared_ptr<string> code_ = nullptr;
    // The result of authorizing the specified user group to manage the specified host accounts.
    std::shared_ptr<vector<Models::AttachHostAccountsToUserGroupResponseBodyResultsHostAccounts>> hostAccounts_ = nullptr;
    // The ID of the host.
    std::shared_ptr<string> hostId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the user group.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
