// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEFFECTIVEORDERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTEFFECTIVEORDERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListEffectiveOrdersResponseBodyOrderSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ListEffectiveOrdersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEffectiveOrdersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(OrderSummary, orderSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, ListEffectiveOrdersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(OrderSummary, orderSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    ListEffectiveOrdersResponseBody() = default ;
    ListEffectiveOrdersResponseBody(const ListEffectiveOrdersResponseBody &) = default ;
    ListEffectiveOrdersResponseBody(ListEffectiveOrdersResponseBody &&) = default ;
    ListEffectiveOrdersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEffectiveOrdersResponseBody() = default ;
    ListEffectiveOrdersResponseBody& operator=(const ListEffectiveOrdersResponseBody &) = default ;
    ListEffectiveOrdersResponseBody& operator=(ListEffectiveOrdersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->errorCode_ == nullptr
        && return this->errorMessage_ == nullptr && return this->orderSummary_ == nullptr && return this->requestId_ == nullptr && return this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListEffectiveOrdersResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListEffectiveOrdersResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // orderSummary Field Functions 
    bool hasOrderSummary() const { return this->orderSummary_ != nullptr;};
    void deleteOrderSummary() { this->orderSummary_ = nullptr;};
    inline const vector<ListEffectiveOrdersResponseBodyOrderSummary> & orderSummary() const { DARABONBA_PTR_GET_CONST(orderSummary_, vector<ListEffectiveOrdersResponseBodyOrderSummary>) };
    inline vector<ListEffectiveOrdersResponseBodyOrderSummary> orderSummary() { DARABONBA_PTR_GET(orderSummary_, vector<ListEffectiveOrdersResponseBodyOrderSummary>) };
    inline ListEffectiveOrdersResponseBody& setOrderSummary(const vector<ListEffectiveOrdersResponseBodyOrderSummary> & orderSummary) { DARABONBA_PTR_SET_VALUE(orderSummary_, orderSummary) };
    inline ListEffectiveOrdersResponseBody& setOrderSummary(vector<ListEffectiveOrdersResponseBodyOrderSummary> && orderSummary) { DARABONBA_PTR_SET_RVALUE(orderSummary_, orderSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListEffectiveOrdersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline ListEffectiveOrdersResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code returned if the request failed.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message returned if the request failed.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The information about orders.
    std::shared_ptr<vector<ListEffectiveOrdersResponseBodyOrderSummary>> orderSummary_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
