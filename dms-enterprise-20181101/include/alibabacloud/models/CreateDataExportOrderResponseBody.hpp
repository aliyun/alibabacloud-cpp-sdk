// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAEXPORTORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateDataExportOrderResponseBodyCreateOrderResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataExportOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataExportOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateOrderResult, createOrderResult_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataExportOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateOrderResult, createOrderResult_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateDataExportOrderResponseBody() = default ;
    CreateDataExportOrderResponseBody(const CreateDataExportOrderResponseBody &) = default ;
    CreateDataExportOrderResponseBody(CreateDataExportOrderResponseBody &&) = default ;
    CreateDataExportOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataExportOrderResponseBody() = default ;
    CreateDataExportOrderResponseBody& operator=(const CreateDataExportOrderResponseBody &) = default ;
    CreateDataExportOrderResponseBody& operator=(CreateDataExportOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createOrderResult_ != nullptr
        && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // createOrderResult Field Functions 
    bool hasCreateOrderResult() const { return this->createOrderResult_ != nullptr;};
    void deleteCreateOrderResult() { this->createOrderResult_ = nullptr;};
    inline const CreateDataExportOrderResponseBodyCreateOrderResult & createOrderResult() const { DARABONBA_PTR_GET_CONST(createOrderResult_, CreateDataExportOrderResponseBodyCreateOrderResult) };
    inline CreateDataExportOrderResponseBodyCreateOrderResult createOrderResult() { DARABONBA_PTR_GET(createOrderResult_, CreateDataExportOrderResponseBodyCreateOrderResult) };
    inline CreateDataExportOrderResponseBody& setCreateOrderResult(const CreateDataExportOrderResponseBodyCreateOrderResult & createOrderResult) { DARABONBA_PTR_SET_VALUE(createOrderResult_, createOrderResult) };
    inline CreateDataExportOrderResponseBody& setCreateOrderResult(CreateDataExportOrderResponseBodyCreateOrderResult && createOrderResult) { DARABONBA_PTR_SET_RVALUE(createOrderResult_, createOrderResult) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateDataExportOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateDataExportOrderResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataExportOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateDataExportOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The content of the ticket.
    std::shared_ptr<CreateDataExportOrderResponseBodyCreateOrderResult> createOrderResult_ = nullptr;
    // The error code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
