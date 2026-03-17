// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSMARTACCESSGATEWAYUSELIMITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSMARTACCESSGATEWAYUSELIMITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class GetSmartAccessGatewayUseLimitResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSmartAccessGatewayUseLimitResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_TO_JSON(UsedAmount, usedAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetSmartAccessGatewayUseLimitResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
      DARABONBA_PTR_FROM_JSON(UsedAmount, usedAmount_);
    };
    GetSmartAccessGatewayUseLimitResponseBody() = default ;
    GetSmartAccessGatewayUseLimitResponseBody(const GetSmartAccessGatewayUseLimitResponseBody &) = default ;
    GetSmartAccessGatewayUseLimitResponseBody(GetSmartAccessGatewayUseLimitResponseBody &&) = default ;
    GetSmartAccessGatewayUseLimitResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSmartAccessGatewayUseLimitResponseBody() = default ;
    GetSmartAccessGatewayUseLimitResponseBody& operator=(const GetSmartAccessGatewayUseLimitResponseBody &) = default ;
    GetSmartAccessGatewayUseLimitResponseBody& operator=(GetSmartAccessGatewayUseLimitResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalAmount_ == nullptr && this->usedAmount_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSmartAccessGatewayUseLimitResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline int32_t getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0) };
    inline GetSmartAccessGatewayUseLimitResponseBody& setTotalAmount(int32_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


    // usedAmount Field Functions 
    bool hasUsedAmount() const { return this->usedAmount_ != nullptr;};
    void deleteUsedAmount() { this->usedAmount_ = nullptr;};
    inline int32_t getUsedAmount() const { DARABONBA_PTR_GET_DEFAULT(usedAmount_, 0) };
    inline GetSmartAccessGatewayUseLimitResponseBody& setUsedAmount(int32_t usedAmount) { DARABONBA_PTR_SET_VALUE(usedAmount_, usedAmount) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The total number of SAG instances that you can purchase.
    shared_ptr<int32_t> totalAmount_ {};
    // The number of SAG instances that you have purchased.
    shared_ptr<int32_t> usedAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
