// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATACORRECTORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATACORRECTORDERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreateDataCorrectOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataCorrectOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateOrderResult, createOrderResult_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataCorrectOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateOrderResult, createOrderResult_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateDataCorrectOrderResponseBody() = default ;
    CreateDataCorrectOrderResponseBody(const CreateDataCorrectOrderResponseBody &) = default ;
    CreateDataCorrectOrderResponseBody(CreateDataCorrectOrderResponseBody &&) = default ;
    CreateDataCorrectOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataCorrectOrderResponseBody() = default ;
    CreateDataCorrectOrderResponseBody& operator=(const CreateDataCorrectOrderResponseBody &) = default ;
    CreateDataCorrectOrderResponseBody& operator=(CreateDataCorrectOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createOrderResult_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // createOrderResult Field Functions 
    bool hasCreateOrderResult() const { return this->createOrderResult_ != nullptr;};
    void deleteCreateOrderResult() { this->createOrderResult_ = nullptr;};
    inline const vector<int64_t> & getCreateOrderResult() const { DARABONBA_PTR_GET_CONST(createOrderResult_, vector<int64_t>) };
    inline vector<int64_t> getCreateOrderResult() { DARABONBA_PTR_GET(createOrderResult_, vector<int64_t>) };
    inline CreateDataCorrectOrderResponseBody& setCreateOrderResult(const vector<int64_t> & createOrderResult) { DARABONBA_PTR_SET_VALUE(createOrderResult_, createOrderResult) };
    inline CreateDataCorrectOrderResponseBody& setCreateOrderResult(vector<int64_t> && createOrderResult) { DARABONBA_PTR_SET_RVALUE(createOrderResult_, createOrderResult) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateDataCorrectOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateDataCorrectOrderResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateDataCorrectOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateDataCorrectOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The IDs of the tickets.
    shared_ptr<vector<int64_t>> createOrderResult_ {};
    // The error code returned if the request fails.
    shared_ptr<string> errorCode_ {};
    // The error message returned if the request fails.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   **true**: The request is successful.
    // *   **false**: The request fails.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
