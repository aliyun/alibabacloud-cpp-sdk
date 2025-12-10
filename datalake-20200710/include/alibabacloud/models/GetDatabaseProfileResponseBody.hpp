// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATABASEPROFILERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDATABASEPROFILERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DatabaseProfile.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataLake20200710
{
namespace Models
{
  class GetDatabaseProfileResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDatabaseProfileResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DatabaseProfile, databaseProfile_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDatabaseProfileResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DatabaseProfile, databaseProfile_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDatabaseProfileResponseBody() = default ;
    GetDatabaseProfileResponseBody(const GetDatabaseProfileResponseBody &) = default ;
    GetDatabaseProfileResponseBody(GetDatabaseProfileResponseBody &&) = default ;
    GetDatabaseProfileResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDatabaseProfileResponseBody() = default ;
    GetDatabaseProfileResponseBody& operator=(const GetDatabaseProfileResponseBody &) = default ;
    GetDatabaseProfileResponseBody& operator=(GetDatabaseProfileResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && return this->databaseProfile_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetDatabaseProfileResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // databaseProfile Field Functions 
    bool hasDatabaseProfile() const { return this->databaseProfile_ != nullptr;};
    void deleteDatabaseProfile() { this->databaseProfile_ = nullptr;};
    inline const DatabaseProfile & databaseProfile() const { DARABONBA_PTR_GET_CONST(databaseProfile_, DatabaseProfile) };
    inline DatabaseProfile databaseProfile() { DARABONBA_PTR_GET(databaseProfile_, DatabaseProfile) };
    inline GetDatabaseProfileResponseBody& setDatabaseProfile(const DatabaseProfile & databaseProfile) { DARABONBA_PTR_SET_VALUE(databaseProfile_, databaseProfile) };
    inline GetDatabaseProfileResponseBody& setDatabaseProfile(DatabaseProfile && databaseProfile) { DARABONBA_PTR_SET_RVALUE(databaseProfile_, databaseProfile) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetDatabaseProfileResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDatabaseProfileResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDatabaseProfileResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    std::shared_ptr<string> code_ = nullptr;
    // The data profile of the database.
    std::shared_ptr<DatabaseProfile> databaseProfile_ = nullptr;
    // The error message.
    std::shared_ptr<string> message_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataLake20200710
#endif
