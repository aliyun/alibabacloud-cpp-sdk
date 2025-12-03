// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETORDERSUMMARYFORPARTNERRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETORDERSUMMARYFORPARTNERRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetOrderSummaryForPartnerResponseBodyDataOrderLines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class GetOrderSummaryForPartnerResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOrderSummaryForPartnerResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(EncryptedBuyerId, encryptedBuyerId_);
      DARABONBA_PTR_TO_JSON(EncryptedPayerId, encryptedPayerId_);
      DARABONBA_PTR_TO_JSON(EncryptedUserId, encryptedUserId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(OrderLines, orderLines_);
    };
    friend void from_json(const Darabonba::Json& j, GetOrderSummaryForPartnerResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(EncryptedBuyerId, encryptedBuyerId_);
      DARABONBA_PTR_FROM_JSON(EncryptedPayerId, encryptedPayerId_);
      DARABONBA_PTR_FROM_JSON(EncryptedUserId, encryptedUserId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(OrderLines, orderLines_);
    };
    GetOrderSummaryForPartnerResponseBodyData() = default ;
    GetOrderSummaryForPartnerResponseBodyData(const GetOrderSummaryForPartnerResponseBodyData &) = default ;
    GetOrderSummaryForPartnerResponseBodyData(GetOrderSummaryForPartnerResponseBodyData &&) = default ;
    GetOrderSummaryForPartnerResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOrderSummaryForPartnerResponseBodyData() = default ;
    GetOrderSummaryForPartnerResponseBodyData& operator=(const GetOrderSummaryForPartnerResponseBodyData &) = default ;
    GetOrderSummaryForPartnerResponseBodyData& operator=(GetOrderSummaryForPartnerResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->encryptedBuyerId_ == nullptr
        && return this->encryptedPayerId_ == nullptr && return this->encryptedUserId_ == nullptr && return this->orderId_ == nullptr && return this->orderLines_ == nullptr; };
    // encryptedBuyerId Field Functions 
    bool hasEncryptedBuyerId() const { return this->encryptedBuyerId_ != nullptr;};
    void deleteEncryptedBuyerId() { this->encryptedBuyerId_ = nullptr;};
    inline string encryptedBuyerId() const { DARABONBA_PTR_GET_DEFAULT(encryptedBuyerId_, "") };
    inline GetOrderSummaryForPartnerResponseBodyData& setEncryptedBuyerId(string encryptedBuyerId) { DARABONBA_PTR_SET_VALUE(encryptedBuyerId_, encryptedBuyerId) };


    // encryptedPayerId Field Functions 
    bool hasEncryptedPayerId() const { return this->encryptedPayerId_ != nullptr;};
    void deleteEncryptedPayerId() { this->encryptedPayerId_ = nullptr;};
    inline string encryptedPayerId() const { DARABONBA_PTR_GET_DEFAULT(encryptedPayerId_, "") };
    inline GetOrderSummaryForPartnerResponseBodyData& setEncryptedPayerId(string encryptedPayerId) { DARABONBA_PTR_SET_VALUE(encryptedPayerId_, encryptedPayerId) };


    // encryptedUserId Field Functions 
    bool hasEncryptedUserId() const { return this->encryptedUserId_ != nullptr;};
    void deleteEncryptedUserId() { this->encryptedUserId_ = nullptr;};
    inline string encryptedUserId() const { DARABONBA_PTR_GET_DEFAULT(encryptedUserId_, "") };
    inline GetOrderSummaryForPartnerResponseBodyData& setEncryptedUserId(string encryptedUserId) { DARABONBA_PTR_SET_VALUE(encryptedUserId_, encryptedUserId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline string orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, "") };
    inline GetOrderSummaryForPartnerResponseBodyData& setOrderId(string orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // orderLines Field Functions 
    bool hasOrderLines() const { return this->orderLines_ != nullptr;};
    void deleteOrderLines() { this->orderLines_ = nullptr;};
    inline const vector<Models::GetOrderSummaryForPartnerResponseBodyDataOrderLines> & orderLines() const { DARABONBA_PTR_GET_CONST(orderLines_, vector<Models::GetOrderSummaryForPartnerResponseBodyDataOrderLines>) };
    inline vector<Models::GetOrderSummaryForPartnerResponseBodyDataOrderLines> orderLines() { DARABONBA_PTR_GET(orderLines_, vector<Models::GetOrderSummaryForPartnerResponseBodyDataOrderLines>) };
    inline GetOrderSummaryForPartnerResponseBodyData& setOrderLines(const vector<Models::GetOrderSummaryForPartnerResponseBodyDataOrderLines> & orderLines) { DARABONBA_PTR_SET_VALUE(orderLines_, orderLines) };
    inline GetOrderSummaryForPartnerResponseBodyData& setOrderLines(vector<Models::GetOrderSummaryForPartnerResponseBodyDataOrderLines> && orderLines) { DARABONBA_PTR_SET_RVALUE(orderLines_, orderLines) };


  protected:
    std::shared_ptr<string> encryptedBuyerId_ = nullptr;
    std::shared_ptr<string> encryptedPayerId_ = nullptr;
    std::shared_ptr<string> encryptedUserId_ = nullptr;
    std::shared_ptr<string> orderId_ = nullptr;
    std::shared_ptr<vector<Models::GetOrderSummaryForPartnerResponseBodyDataOrderLines>> orderLines_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
