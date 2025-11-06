// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDMIGRATIONTASKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_ADDMIGRATIONTASKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddMigrationTaskResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class AddMigrationTaskResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddMigrationTaskResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, AddMigrationTaskResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    AddMigrationTaskResponseBody() = default ;
    AddMigrationTaskResponseBody(const AddMigrationTaskResponseBody &) = default ;
    AddMigrationTaskResponseBody(AddMigrationTaskResponseBody &&) = default ;
    AddMigrationTaskResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddMigrationTaskResponseBody() = default ;
    AddMigrationTaskResponseBody& operator=(const AddMigrationTaskResponseBody &) = default ;
    AddMigrationTaskResponseBody& operator=(AddMigrationTaskResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && return this->errorCode_ == nullptr && return this->message_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const AddMigrationTaskResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, AddMigrationTaskResponseBodyData) };
    inline AddMigrationTaskResponseBodyData data() { DARABONBA_PTR_GET(data_, AddMigrationTaskResponseBodyData) };
    inline AddMigrationTaskResponseBody& setData(const AddMigrationTaskResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline AddMigrationTaskResponseBody& setData(AddMigrationTaskResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline AddMigrationTaskResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string message() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline AddMigrationTaskResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline AddMigrationTaskResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline AddMigrationTaskResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Data structure.
    std::shared_ptr<AddMigrationTaskResponseBodyData> data_ = nullptr;
    // Error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // Message.
    std::shared_ptr<string> message_ = nullptr;
    // Request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // 请求结果，取值如下：
    // - `true`：请求成功。
    // - `false`：请求失败。
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
