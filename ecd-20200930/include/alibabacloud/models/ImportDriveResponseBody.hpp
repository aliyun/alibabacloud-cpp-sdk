// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTDRIVERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_IMPORTDRIVERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class ImportDriveResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportDriveResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(DriveId, driveId_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ImportDriveResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(DriveId, driveId_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ImportDriveResponseBody() = default ;
    ImportDriveResponseBody(const ImportDriveResponseBody &) = default ;
    ImportDriveResponseBody(ImportDriveResponseBody &&) = default ;
    ImportDriveResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportDriveResponseBody() = default ;
    ImportDriveResponseBody& operator=(const ImportDriveResponseBody &) = default ;
    ImportDriveResponseBody& operator=(ImportDriveResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->driveId_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline ImportDriveResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // driveId Field Functions 
    bool hasDriveId() const { return this->driveId_ != nullptr;};
    void deleteDriveId() { this->driveId_ = nullptr;};
    inline string getDriveId() const { DARABONBA_PTR_GET_DEFAULT(driveId_, "") };
    inline ImportDriveResponseBody& setDriveId(string driveId) { DARABONBA_PTR_SET_VALUE(driveId_, driveId) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline ImportDriveResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ImportDriveResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ImportDriveResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The modification result. A value of `success` indicates success. Otherwise, an error message is returned.
    shared_ptr<string> code_ {};
    // The newly created or reused target drive ID. A success response only indicates that the import task has been accepted.
    shared_ptr<string> driveId_ {};
    // The response message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the operation is successful. Valid values:
    // - true: Successful.
    // - false: Failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
