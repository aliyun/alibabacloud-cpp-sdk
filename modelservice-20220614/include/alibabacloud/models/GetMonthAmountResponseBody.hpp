// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMONTHAMOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETMONTHAMOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ModelService20220614
{
namespace Models
{
  class GetMonthAmountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMonthAmountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BackgroundAmount, backgroundAmount_);
      DARABONBA_PTR_TO_JSON(PostpayAmount, postpayAmount_);
      DARABONBA_PTR_TO_JSON(PrepayAmount, prepayAmount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalAmount, totalAmount_);
    };
    friend void from_json(const Darabonba::Json& j, GetMonthAmountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BackgroundAmount, backgroundAmount_);
      DARABONBA_PTR_FROM_JSON(PostpayAmount, postpayAmount_);
      DARABONBA_PTR_FROM_JSON(PrepayAmount, prepayAmount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalAmount, totalAmount_);
    };
    GetMonthAmountResponseBody() = default ;
    GetMonthAmountResponseBody(const GetMonthAmountResponseBody &) = default ;
    GetMonthAmountResponseBody(GetMonthAmountResponseBody &&) = default ;
    GetMonthAmountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMonthAmountResponseBody() = default ;
    GetMonthAmountResponseBody& operator=(const GetMonthAmountResponseBody &) = default ;
    GetMonthAmountResponseBody& operator=(GetMonthAmountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backgroundAmount_ == nullptr
        && this->postpayAmount_ == nullptr && this->prepayAmount_ == nullptr && this->requestId_ == nullptr && this->totalAmount_ == nullptr; };
    // backgroundAmount Field Functions 
    bool hasBackgroundAmount() const { return this->backgroundAmount_ != nullptr;};
    void deleteBackgroundAmount() { this->backgroundAmount_ = nullptr;};
    inline int32_t getBackgroundAmount() const { DARABONBA_PTR_GET_DEFAULT(backgroundAmount_, 0) };
    inline GetMonthAmountResponseBody& setBackgroundAmount(int32_t backgroundAmount) { DARABONBA_PTR_SET_VALUE(backgroundAmount_, backgroundAmount) };


    // postpayAmount Field Functions 
    bool hasPostpayAmount() const { return this->postpayAmount_ != nullptr;};
    void deletePostpayAmount() { this->postpayAmount_ = nullptr;};
    inline int32_t getPostpayAmount() const { DARABONBA_PTR_GET_DEFAULT(postpayAmount_, 0) };
    inline GetMonthAmountResponseBody& setPostpayAmount(int32_t postpayAmount) { DARABONBA_PTR_SET_VALUE(postpayAmount_, postpayAmount) };


    // prepayAmount Field Functions 
    bool hasPrepayAmount() const { return this->prepayAmount_ != nullptr;};
    void deletePrepayAmount() { this->prepayAmount_ = nullptr;};
    inline int32_t getPrepayAmount() const { DARABONBA_PTR_GET_DEFAULT(prepayAmount_, 0) };
    inline GetMonthAmountResponseBody& setPrepayAmount(int32_t prepayAmount) { DARABONBA_PTR_SET_VALUE(prepayAmount_, prepayAmount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetMonthAmountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalAmount Field Functions 
    bool hasTotalAmount() const { return this->totalAmount_ != nullptr;};
    void deleteTotalAmount() { this->totalAmount_ = nullptr;};
    inline int32_t getTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(totalAmount_, 0) };
    inline GetMonthAmountResponseBody& setTotalAmount(int32_t totalAmount) { DARABONBA_PTR_SET_VALUE(totalAmount_, totalAmount) };


  protected:
    shared_ptr<int32_t> backgroundAmount_ {};
    shared_ptr<int32_t> postpayAmount_ {};
    shared_ptr<int32_t> prepayAmount_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalAmount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ModelService20220614
#endif
