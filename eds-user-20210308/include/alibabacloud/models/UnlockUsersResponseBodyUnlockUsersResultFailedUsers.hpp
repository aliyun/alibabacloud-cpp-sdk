// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNLOCKUSERSRESPONSEBODYUNLOCKUSERSRESULTFAILEDUSERS_HPP_
#define ALIBABACLOUD_MODELS_UNLOCKUSERSRESPONSEBODYUNLOCKUSERSRESULTFAILEDUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class UnlockUsersResponseBodyUnlockUsersResultFailedUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnlockUsersResponseBodyUnlockUsersResultFailedUsers& obj) { 
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
    };
    friend void from_json(const Darabonba::Json& j, UnlockUsersResponseBodyUnlockUsersResultFailedUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
    };
    UnlockUsersResponseBodyUnlockUsersResultFailedUsers() = default ;
    UnlockUsersResponseBodyUnlockUsersResultFailedUsers(const UnlockUsersResponseBodyUnlockUsersResultFailedUsers &) = default ;
    UnlockUsersResponseBodyUnlockUsersResultFailedUsers(UnlockUsersResponseBodyUnlockUsersResultFailedUsers &&) = default ;
    UnlockUsersResponseBodyUnlockUsersResultFailedUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnlockUsersResponseBodyUnlockUsersResultFailedUsers() = default ;
    UnlockUsersResponseBodyUnlockUsersResultFailedUsers& operator=(const UnlockUsersResponseBodyUnlockUsersResultFailedUsers &) = default ;
    UnlockUsersResponseBodyUnlockUsersResultFailedUsers& operator=(UnlockUsersResponseBodyUnlockUsersResultFailedUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endUserId_ == nullptr
        && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr; };
    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline UnlockUsersResponseBodyUnlockUsersResultFailedUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline UnlockUsersResponseBodyUnlockUsersResultFailedUsers& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline UnlockUsersResponseBodyUnlockUsersResultFailedUsers& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


  protected:
    // The ID of the convenience user that failed to be unlocked.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
