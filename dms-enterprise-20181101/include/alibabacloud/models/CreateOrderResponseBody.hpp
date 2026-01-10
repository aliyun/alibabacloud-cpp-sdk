// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEORDERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEORDERRESPONSEBODY_HPP_
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
  class CreateOrderResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateOrderResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CreateOrderResult, createOrderResult_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, CreateOrderResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateOrderResult, createOrderResult_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    CreateOrderResponseBody() = default ;
    CreateOrderResponseBody(const CreateOrderResponseBody &) = default ;
    CreateOrderResponseBody(CreateOrderResponseBody &&) = default ;
    CreateOrderResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateOrderResponseBody() = default ;
    CreateOrderResponseBody& operator=(const CreateOrderResponseBody &) = default ;
    CreateOrderResponseBody& operator=(CreateOrderResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CreateOrderResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CreateOrderResult& obj) { 
        DARABONBA_PTR_TO_JSON(OrderIds, orderIds_);
      };
      friend void from_json(const Darabonba::Json& j, CreateOrderResult& obj) { 
        DARABONBA_PTR_FROM_JSON(OrderIds, orderIds_);
      };
      CreateOrderResult() = default ;
      CreateOrderResult(const CreateOrderResult &) = default ;
      CreateOrderResult(CreateOrderResult &&) = default ;
      CreateOrderResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CreateOrderResult() = default ;
      CreateOrderResult& operator=(const CreateOrderResult &) = default ;
      CreateOrderResult& operator=(CreateOrderResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->orderIds_ == nullptr; };
      // orderIds Field Functions 
      bool hasOrderIds() const { return this->orderIds_ != nullptr;};
      void deleteOrderIds() { this->orderIds_ = nullptr;};
      inline const vector<int64_t> & getOrderIds() const { DARABONBA_PTR_GET_CONST(orderIds_, vector<int64_t>) };
      inline vector<int64_t> getOrderIds() { DARABONBA_PTR_GET(orderIds_, vector<int64_t>) };
      inline CreateOrderResult& setOrderIds(const vector<int64_t> & orderIds) { DARABONBA_PTR_SET_VALUE(orderIds_, orderIds) };
      inline CreateOrderResult& setOrderIds(vector<int64_t> && orderIds) { DARABONBA_PTR_SET_RVALUE(orderIds_, orderIds) };


    protected:
      shared_ptr<vector<int64_t>> orderIds_ {};
    };

    virtual bool empty() const override { return this->createOrderResult_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // createOrderResult Field Functions 
    bool hasCreateOrderResult() const { return this->createOrderResult_ != nullptr;};
    void deleteCreateOrderResult() { this->createOrderResult_ = nullptr;};
    inline const CreateOrderResponseBody::CreateOrderResult & getCreateOrderResult() const { DARABONBA_PTR_GET_CONST(createOrderResult_, CreateOrderResponseBody::CreateOrderResult) };
    inline CreateOrderResponseBody::CreateOrderResult getCreateOrderResult() { DARABONBA_PTR_GET(createOrderResult_, CreateOrderResponseBody::CreateOrderResult) };
    inline CreateOrderResponseBody& setCreateOrderResult(const CreateOrderResponseBody::CreateOrderResult & createOrderResult) { DARABONBA_PTR_SET_VALUE(createOrderResult_, createOrderResult) };
    inline CreateOrderResponseBody& setCreateOrderResult(CreateOrderResponseBody::CreateOrderResult && createOrderResult) { DARABONBA_PTR_SET_RVALUE(createOrderResult_, createOrderResult) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline CreateOrderResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline CreateOrderResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateOrderResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline CreateOrderResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the ticket.
    shared_ptr<CreateOrderResponseBody::CreateOrderResult> createOrderResult_ {};
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
