// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDRIVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDRIVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDriveResponseBodyDrive.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDriveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDriveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Drive, drive_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDriveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Drive, drive_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateDriveResponseBody() = default ;
    CreateDriveResponseBody(const CreateDriveResponseBody &) = default ;
    CreateDriveResponseBody(CreateDriveResponseBody &&) = default ;
    CreateDriveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDriveResponseBody() = default ;
    CreateDriveResponseBody& operator=(const CreateDriveResponseBody &) = default ;
    CreateDriveResponseBody& operator=(CreateDriveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->drive_ != nullptr && this->message_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateDriveResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // drive Field Functions 
    bool hasDrive() const { return this->drive_ != nullptr;};
    void deleteDrive() { this->drive_ = nullptr;};
    inline const CreateDriveResponseBodyDrive & drive() const { DARABONBA_PTR_GET_CONST(drive_, CreateDriveResponseBodyDrive) };
    inline CreateDriveResponseBodyDrive drive() { DARABONBA_PTR_GET(drive_, CreateDriveResponseBodyDrive) };
    inline CreateDriveResponseBody& setDrive(const CreateDriveResponseBodyDrive & drive) { DARABONBA_PTR_SET_VALUE(drive_, drive) };
    inline CreateDriveResponseBody& setDrive(CreateDriveResponseBodyDrive && drive) { DARABONBA_PTR_SET_RVALUE(drive_, drive) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateDriveResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDriveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateDriveResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<CreateDriveResponseBodyDrive> drive_ = nullptr;
    std::shared_ptr<string> message_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
