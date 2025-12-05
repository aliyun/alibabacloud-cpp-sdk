// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHHOSTGROUPACCOUNTSFROMUSERGROUPRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DETACHHOSTGROUPACCOUNTSFROMUSERGROUPRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DetachHostGroupAccountsFromUserGroupResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachHostGroupAccountsFromUserGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(HostAccountNames, hostAccountNames_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(UserGroupId, userGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachHostGroupAccountsFromUserGroupResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(HostAccountNames, hostAccountNames_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(UserGroupId, userGroupId_);
    };
    DetachHostGroupAccountsFromUserGroupResponseBodyResults() = default ;
    DetachHostGroupAccountsFromUserGroupResponseBodyResults(const DetachHostGroupAccountsFromUserGroupResponseBodyResults &) = default ;
    DetachHostGroupAccountsFromUserGroupResponseBodyResults(DetachHostGroupAccountsFromUserGroupResponseBodyResults &&) = default ;
    DetachHostGroupAccountsFromUserGroupResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachHostGroupAccountsFromUserGroupResponseBodyResults() = default ;
    DetachHostGroupAccountsFromUserGroupResponseBodyResults& operator=(const DetachHostGroupAccountsFromUserGroupResponseBodyResults &) = default ;
    DetachHostGroupAccountsFromUserGroupResponseBodyResults& operator=(DetachHostGroupAccountsFromUserGroupResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->hostAccountNames_ == nullptr && return this->hostGroupId_ == nullptr && return this->message_ == nullptr && return this->userGroupId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DetachHostGroupAccountsFromUserGroupResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // hostAccountNames Field Functions 
    bool hasHostAccountNames() const { return this->hostAccountNames_ != nullptr;};
    void deleteHostAccountNames() { this->hostAccountNames_ = nullptr;};
    inline const vector<Models::DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames> & hostAccountNames() const { DARABONBA_PTR_GET_CONST(hostAccountNames_, vector<Models::DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames>) };
    inline vector<Models::DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames> hostAccountNames() { DARABONBA_PTR_GET(hostAccountNames_, vector<Models::DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames>) };
    inline DetachHostGroupAccountsFromUserGroupResponseBodyResults& setHostAccountNames(const vector<Models::DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames> & hostAccountNames) { DARABONBA_PTR_SET_VALUE(hostAccountNames_, hostAccountNames) };
    inline DetachHostGroupAccountsFromUserGroupResponseBodyResults& setHostAccountNames(vector<Models::DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames> && hostAccountNames) { DARABONBA_PTR_SET_RVALUE(hostAccountNames_, hostAccountNames) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline DetachHostGroupAccountsFromUserGroupResponseBodyResults& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DetachHostGroupAccountsFromUserGroupResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // userGroupId Field Functions 
    bool hasUserGroupId() const { return this->userGroupId_ != nullptr;};
    void deleteUserGroupId() { this->userGroupId_ = nullptr;};
    inline string userGroupId() const { DARABONBA_PTR_GET_DEFAULT(userGroupId_, "") };
    inline DetachHostGroupAccountsFromUserGroupResponseBodyResults& setUserGroupId(string userGroupId) { DARABONBA_PTR_SET_VALUE(userGroupId_, userGroupId) };


  protected:
    // The return code that indicates whether the call was successful. Valid values:
    // 
    // *   **OK**: The call was successful.
    // *   **UNEXPECTED**: An unknown error occurred.
    // *   **INVALID_ARGUMENT**: A request parameter is invalid.
    // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
    // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
    std::shared_ptr<string> code_ = nullptr;
    // The result of revoking permissions on the specified host accounts from the user group.
    std::shared_ptr<vector<Models::DetachHostGroupAccountsFromUserGroupResponseBodyResultsHostAccountNames>> hostAccountNames_ = nullptr;
    // The ID of the host group.
    std::shared_ptr<string> hostGroupId_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the group.
    std::shared_ptr<string> userGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
