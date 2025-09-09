// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LOCKUSERSRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_LOCKUSERSRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class LockUsersResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const LockUsersResponseBodyResults& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, LockUsersResponseBodyResults& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
    };
    LockUsersResponseBodyResults() = default ;
    LockUsersResponseBodyResults(const LockUsersResponseBodyResults &) = default ;
    LockUsersResponseBodyResults(LockUsersResponseBodyResults &&) = default ;
    LockUsersResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~LockUsersResponseBodyResults() = default ;
    LockUsersResponseBodyResults& operator=(const LockUsersResponseBodyResults &) = default ;
    LockUsersResponseBodyResults& operator=(LockUsersResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->userId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline LockUsersResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline LockUsersResponseBodyResults& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline LockUsersResponseBodyResults& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    // The return code that indicates whether the call was successful. Valid values:
    // 
    // *   **OK**: The call was successful.
    // 
    // *   **UNEXPECTED**: An unknown error occurred.
    // 
    // *   **INVALID_ARGUMENT**: A request parameter is invalid.
    // 
    // >Make sure that the request parameters are valid and call the operation again.
    // 
    // *   **OBJECT_NOT_FOUND**: The specified object on which you want to perform the operation does not exist.
    // 
    // >Check whether the specified ID of the bastion host exists, whether the specified hosts exist, and whether the specified host IDs are valid. Then, call the operation again.
    // 
    // *   **OBJECT_AlREADY_EXISTS**: The specified object on which you want to perform the operation already exists.
    std::shared_ptr<string> code_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the user.
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
