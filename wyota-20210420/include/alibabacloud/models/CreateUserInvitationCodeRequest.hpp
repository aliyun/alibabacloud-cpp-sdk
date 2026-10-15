// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERINVITATIONCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERINVITATIONCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class CreateUserInvitationCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUserInvitationCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(TerminalGroupId, terminalGroupId_);
      DARABONBA_PTR_TO_JSON(ValidityMinutes, validityMinutes_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUserInvitationCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(TerminalGroupId, terminalGroupId_);
      DARABONBA_PTR_FROM_JSON(ValidityMinutes, validityMinutes_);
    };
    CreateUserInvitationCodeRequest() = default ;
    CreateUserInvitationCodeRequest(const CreateUserInvitationCodeRequest &) = default ;
    CreateUserInvitationCodeRequest(CreateUserInvitationCodeRequest &&) = default ;
    CreateUserInvitationCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUserInvitationCodeRequest() = default ;
    CreateUserInvitationCodeRequest& operator=(const CreateUserInvitationCodeRequest &) = default ;
    CreateUserInvitationCodeRequest& operator=(CreateUserInvitationCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserId_ == nullptr
        && this->endUserIds_ == nullptr && this->terminalGroupId_ == nullptr && this->validityMinutes_ == nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string getEndUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline CreateUserInvitationCodeRequest& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & getEndUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> getEndUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline CreateUserInvitationCodeRequest& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline CreateUserInvitationCodeRequest& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // terminalGroupId Field Functions 
    bool hasTerminalGroupId() const { return this->terminalGroupId_ != nullptr;};
    void deleteTerminalGroupId() { this->terminalGroupId_ = nullptr;};
    inline string getTerminalGroupId() const { DARABONBA_PTR_GET_DEFAULT(terminalGroupId_, "") };
    inline CreateUserInvitationCodeRequest& setTerminalGroupId(string terminalGroupId) { DARABONBA_PTR_SET_VALUE(terminalGroupId_, terminalGroupId) };


    // validityMinutes Field Functions 
    bool hasValidityMinutes() const { return this->validityMinutes_ != nullptr;};
    void deleteValidityMinutes() { this->validityMinutes_ = nullptr;};
    inline int32_t getValidityMinutes() const { DARABONBA_PTR_GET_DEFAULT(validityMinutes_, 0) };
    inline CreateUserInvitationCodeRequest& setValidityMinutes(int32_t validityMinutes) { DARABONBA_PTR_SET_VALUE(validityMinutes_, validityMinutes) };


  protected:
    // The logon identifier (EndUserId) of a single user, used for compatibility with single-user creation. You must specify either this parameter or EndUserIds, but not both. If neither is specified, PARAMETER_MISSING is returned. If both are specified, PARAM_ERROR is returned.
    shared_ptr<string> endUserId_ {};
    // The array of user logon identifiers (EndUserIds). You must specify either this parameter or EndUserId. You can specify 1 to 100 unique, non-empty strings at a time, and a code is generated for each user. If any user does not exist, USER_NOT_FOUND is returned. If the array is empty, or contains duplicate items, empty items, or non-string items, PARAM_ERROR is returned.
    shared_ptr<vector<string>> endUserIds_ {};
    // The ID of the terminal group. The group must belong to the current account and must not be deleted. After the corresponding terminal uses the management code to complete management, it is added to this group. If the group does not exist, is deleted, or does not belong to the current account, TERMINAL_GROUP_NOT_FOUND is returned.
    // 
    // This parameter is required.
    shared_ptr<string> terminalGroupId_ {};
    // The validity period of the management code, in minutes. A value of -1 indicates that the code is permanently valid. For values between 60 and 1440, only integer multiples of 60 (1 to 24 hours) are allowed. For values greater than 1440, only integer multiples of 1440 are allowed, up to a maximum of 12960 (2 to 9 days). Other values return PARAM_ERROR. The server calculates the validity period based on this duration.
    // 
    // This parameter is required.
    shared_ptr<int32_t> validityMinutes_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
