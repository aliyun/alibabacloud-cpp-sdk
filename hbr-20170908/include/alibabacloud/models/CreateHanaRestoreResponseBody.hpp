// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHANARESTORERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEHANARESTORERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class CreateHanaRestoreResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHanaRestoreResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHanaRestoreResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RestoreId, restoreId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateHanaRestoreResponseBody() = default ;
    CreateHanaRestoreResponseBody(const CreateHanaRestoreResponseBody &) = default ;
    CreateHanaRestoreResponseBody(CreateHanaRestoreResponseBody &&) = default ;
    CreateHanaRestoreResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHanaRestoreResponseBody() = default ;
    CreateHanaRestoreResponseBody& operator=(const CreateHanaRestoreResponseBody &) = default ;
    CreateHanaRestoreResponseBody& operator=(CreateHanaRestoreResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->message_ != nullptr && this->requestId_ != nullptr && this->restoreId_ != nullptr && this->success_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CreateHanaRestoreResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CreateHanaRestoreResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateHanaRestoreResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // restoreId Field Functions 
    bool hasRestoreId() const { return this->restoreId_ != nullptr;};
    void deleteRestoreId() { this->restoreId_ = nullptr;};
    inline string restoreId() const { DARABONBA_PTR_GET_DEFAULT(restoreId_, "") };
    inline CreateHanaRestoreResponseBody& setRestoreId(string restoreId) { DARABONBA_PTR_SET_VALUE(restoreId_, restoreId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateHanaRestoreResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The HTTP status code. The status code 200 indicates that the call is successful.
    std::shared_ptr<string> code_ = nullptr;
    // The message that is returned. If the call is successful, "successful" is returned. If the call fails, an error message is returned.
    std::shared_ptr<string> message_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the restore job.
    std::shared_ptr<string> restoreId_ = nullptr;
    // Indicates whether the call is successful. Valid values:
    // 
    // *   true: The call is successful.
    // *   false: The call fails.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
