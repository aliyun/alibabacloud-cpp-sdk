// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHHOSTGROUPACCOUNTSTOUSERGROUPRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_ATTACHHOSTGROUPACCOUNTSTOUSERGROUPRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class AttachHostGroupAccountsToUserGroupResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachHostGroupAccountsToUserGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HostAccountNames, hostAccountNames_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, AttachHostGroupAccountsToUserGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HostAccountNames, hostAccountNames_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    AttachHostGroupAccountsToUserGroupResponseBodyResults() = default ;
    AttachHostGroupAccountsToUserGroupResponseBodyResults(const AttachHostGroupAccountsToUserGroupResponseBodyResults &) = default ;
    AttachHostGroupAccountsToUserGroupResponseBodyResults(AttachHostGroupAccountsToUserGroupResponseBodyResults &&) = default ;
    AttachHostGroupAccountsToUserGroupResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachHostGroupAccountsToUserGroupResponseBodyResults() = default ;
    AttachHostGroupAccountsToUserGroupResponseBodyResults& operator=(const AttachHostGroupAccountsToUserGroupResponseBodyResults &) = default ;
    AttachHostGroupAccountsToUserGroupResponseBodyResults& operator=(AttachHostGroupAccountsToUserGroupResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->hostAccountNames_ != nullptr && this->hostGroupId_ != nullptr && this->message_ != nullptr && this->userGroupId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline AttachHostGroupAccountsToUserGroupResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hostAccountNames Field Functions 
    bool hasHostAccountNames() const { return this->hostAccountNames_ != nullptr;};
    void deleteHostAccountNames() { this->hostAccountNames_ = nullptr;};
    inline const vector<Models::AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames> & hostAccountNames() const { DARABONBA_PTR_GET_CONST(hostAccountNames_, vector<Models::AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames>) };
    inline vector<Models::AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames> hostAccountNames() { DARABONBA_PTR_GET(hostAccountNames_, vector<Models::AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames>) };
    inline AttachHostGroupAccountsToUserGroupResponseBodyResults& setHostAccountNames(const vector<Models::AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames> & hostAccountNames) { DARABONBA_PTR_SET_VALUE(hostAccountNames_, hostAccountNames) };
    inline AttachHostGroupAccountsToUserGroupResponseBodyResults& setHostAccountNames(vector<Models::AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames> && hostAccountNames) { DARABONBA_PTR_SET_RVALUE(hostAccountNames_, hostAccountNames) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline AttachHostGroupAccountsToUserGroupResponseBodyResults& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AttachHostGroupAccountsToUserGroupResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline AttachHostGroupAccountsToUserGroupResponseBodyResults& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The return code that indicates whether the call was successful. Valid values:
    // 
    // *   **OK**: The call was successful.
    // *   **UNEXPECTED**: An unknown error occurred.
    // *   **INVALID_ARGUMENT**: A request parameter is invalid.
    // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
    // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
    std::shared_ptr<string> code_ = nullptr;
    // The result of authorizing the user group to manage the specified host accounts.
    std::shared_ptr<vector<Models::AttachHostGroupAccountsToUserGroupResponseBodyResultsHostAccountNames>> hostAccountNames_ = nullptr;
    // The ID of the host group.
    std::shared_ptr<string> hostGroupId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the user group.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
