// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODYCREATERESULTFAILEDUSERS_HPP_
#define ALIBABACLOUD_MODELS_CREATEUSERSRESPONSEBODYCREATERESULTFAILEDUSERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EdsUser20210308
{
namespace Models
{
  class CreateUsersResponseBodyCreateResultFailedUsers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateUsersResponseBodyCreateResultFailedUsers& obj) { 
      DARABONBA_PTR_TO_JSON(Email, email_);
      DARABONBA_PTR_TO_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Phone, phone_);
    };
    friend void from_json(const Darabonba::Json& j, CreateUsersResponseBodyCreateResultFailedUsers& obj) { 
      DARABONBA_PTR_FROM_JSON(Email, email_);
      DARABONBA_PTR_FROM_JSON(EndUserId, endUserId_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Phone, phone_);
    };
    CreateUsersResponseBodyCreateResultFailedUsers() = default ;
    CreateUsersResponseBodyCreateResultFailedUsers(const CreateUsersResponseBodyCreateResultFailedUsers &) = default ;
    CreateUsersResponseBodyCreateResultFailedUsers(CreateUsersResponseBodyCreateResultFailedUsers &&) = default ;
    CreateUsersResponseBodyCreateResultFailedUsers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateUsersResponseBodyCreateResultFailedUsers() = default ;
    CreateUsersResponseBodyCreateResultFailedUsers& operator=(const CreateUsersResponseBodyCreateResultFailedUsers &) = default ;
    CreateUsersResponseBodyCreateResultFailedUsers& operator=(CreateUsersResponseBodyCreateResultFailedUsers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->email_ == nullptr
        && return this->endUserId_ == nullptr && return this->errorCode_ == nullptr && return this->errorMessage_ == nullptr && return this->phone_ == nullptr; };
    // email Field Functions 
    bool hasEmail() const { return this->email_ != nullptr;};
    void deleteEmail() { this->email_ = nullptr;};
    inline string email() const { DARABONBA_PTR_GET_DEFAULT(email_, "") };
    inline CreateUsersResponseBodyCreateResultFailedUsers& setEmail(string email) { DARABONBA_PTR_SET_VALUE(email_, email) };


    // endUserId Field Functions 
    bool hasEndUserId() const { return this->endUserId_ != nullptr;};
    void deleteEndUserId() { this->endUserId_ = nullptr;};
    inline string endUserId() const { DARABONBA_PTR_GET_DEFAULT(endUserId_, "") };
    inline CreateUsersResponseBodyCreateResultFailedUsers& setEndUserId(string endUserId) { DARABONBA_PTR_SET_VALUE(endUserId_, endUserId) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateUsersResponseBodyCreateResultFailedUsers& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateUsersResponseBodyCreateResultFailedUsers& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // phone Field Functions 
    bool hasPhone() const { return this->phone_ != nullptr;};
    void deletePhone() { this->phone_ = nullptr;};
    inline string phone() const { DARABONBA_PTR_GET_DEFAULT(phone_, "") };
    inline CreateUsersResponseBodyCreateResultFailedUsers& setPhone(string phone) { DARABONBA_PTR_SET_VALUE(phone_, phone) };


  protected:
    // The email address of the end user.
    std::shared_ptr<string> email_ = nullptr;
    // The name of the end user.
    std::shared_ptr<string> endUserId_ = nullptr;
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The mobile number of the end user.
    std::shared_ptr<string> phone_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EdsUser20210308
#endif
