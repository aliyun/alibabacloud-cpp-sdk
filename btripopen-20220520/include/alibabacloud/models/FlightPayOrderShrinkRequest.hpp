// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_FLIGHTPAYORDERSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_FLIGHTPAYORDERSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class FlightPayOrderShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const FlightPayOrderShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(extra, extraShrink_);
      DARABONBA_PTR_TO_JSON(personal_pay_price, personalPayPrice_);
      DARABONBA_PTR_TO_JSON(total_pay_price, totalPayPrice_);
    };
    friend void from_json(const Darabonba::Json& j, FlightPayOrderShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(extra, extraShrink_);
      DARABONBA_PTR_FROM_JSON(personal_pay_price, personalPayPrice_);
      DARABONBA_PTR_FROM_JSON(total_pay_price, totalPayPrice_);
    };
    FlightPayOrderShrinkRequest() = default ;
    FlightPayOrderShrinkRequest(const FlightPayOrderShrinkRequest &) = default ;
    FlightPayOrderShrinkRequest(FlightPayOrderShrinkRequest &&) = default ;
    FlightPayOrderShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~FlightPayOrderShrinkRequest() = default ;
    FlightPayOrderShrinkRequest& operator=(const FlightPayOrderShrinkRequest &) = default ;
    FlightPayOrderShrinkRequest& operator=(FlightPayOrderShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpPayPrice_ != nullptr
        && this->disOrderId_ != nullptr && this->extraShrink_ != nullptr && this->personalPayPrice_ != nullptr && this->totalPayPrice_ != nullptr; };
    // corpPayPrice Field Functions 
    bool hasCorpPayPrice() const { return this->corpPayPrice_ != nullptr;};
    void deleteCorpPayPrice() { this->corpPayPrice_ = nullptr;};
    inline int64_t corpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(corpPayPrice_, 0L) };
    inline FlightPayOrderShrinkRequest& setCorpPayPrice(int64_t corpPayPrice) { DARABONBA_PTR_SET_VALUE(corpPayPrice_, corpPayPrice) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline FlightPayOrderShrinkRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // extraShrink Field Functions 
    bool hasExtraShrink() const { return this->extraShrink_ != nullptr;};
    void deleteExtraShrink() { this->extraShrink_ = nullptr;};
    inline string extraShrink() const { DARABONBA_PTR_GET_DEFAULT(extraShrink_, "") };
    inline FlightPayOrderShrinkRequest& setExtraShrink(string extraShrink) { DARABONBA_PTR_SET_VALUE(extraShrink_, extraShrink) };


    // personalPayPrice Field Functions 
    bool hasPersonalPayPrice() const { return this->personalPayPrice_ != nullptr;};
    void deletePersonalPayPrice() { this->personalPayPrice_ = nullptr;};
    inline int64_t personalPayPrice() const { DARABONBA_PTR_GET_DEFAULT(personalPayPrice_, 0L) };
    inline FlightPayOrderShrinkRequest& setPersonalPayPrice(int64_t personalPayPrice) { DARABONBA_PTR_SET_VALUE(personalPayPrice_, personalPayPrice) };


    // totalPayPrice Field Functions 
    bool hasTotalPayPrice() const { return this->totalPayPrice_ != nullptr;};
    void deleteTotalPayPrice() { this->totalPayPrice_ = nullptr;};
    inline int64_t totalPayPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPayPrice_, 0L) };
    inline FlightPayOrderShrinkRequest& setTotalPayPrice(int64_t totalPayPrice) { DARABONBA_PTR_SET_VALUE(totalPayPrice_, totalPayPrice) };


  protected:
    // This parameter is required.
    std::shared_ptr<int64_t> corpPayPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    std::shared_ptr<string> extraShrink_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> personalPayPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> totalPayPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
