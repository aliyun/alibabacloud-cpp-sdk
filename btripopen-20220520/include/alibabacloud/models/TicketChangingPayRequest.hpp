// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGPAYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGPAYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingPayRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingPayRequest& obj) { 
      DARABONBA_PTR_TO_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_TO_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_TO_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_TO_JSON(extra, extra_);
      DARABONBA_PTR_TO_JSON(personal_pay_price, personalPayPrice_);
      DARABONBA_PTR_TO_JSON(total_pay_price, totalPayPrice_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingPayRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(corp_pay_price, corpPayPrice_);
      DARABONBA_PTR_FROM_JSON(dis_order_id, disOrderId_);
      DARABONBA_PTR_FROM_JSON(dis_sub_order_id, disSubOrderId_);
      DARABONBA_PTR_FROM_JSON(extra, extra_);
      DARABONBA_PTR_FROM_JSON(personal_pay_price, personalPayPrice_);
      DARABONBA_PTR_FROM_JSON(total_pay_price, totalPayPrice_);
    };
    TicketChangingPayRequest() = default ;
    TicketChangingPayRequest(const TicketChangingPayRequest &) = default ;
    TicketChangingPayRequest(TicketChangingPayRequest &&) = default ;
    TicketChangingPayRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingPayRequest() = default ;
    TicketChangingPayRequest& operator=(const TicketChangingPayRequest &) = default ;
    TicketChangingPayRequest& operator=(TicketChangingPayRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->corpPayPrice_ != nullptr
        && this->disOrderId_ != nullptr && this->disSubOrderId_ != nullptr && this->extra_ != nullptr && this->personalPayPrice_ != nullptr && this->totalPayPrice_ != nullptr; };
    // corpPayPrice Field Functions 
    bool hasCorpPayPrice() const { return this->corpPayPrice_ != nullptr;};
    void deleteCorpPayPrice() { this->corpPayPrice_ = nullptr;};
    inline int64_t corpPayPrice() const { DARABONBA_PTR_GET_DEFAULT(corpPayPrice_, 0L) };
    inline TicketChangingPayRequest& setCorpPayPrice(int64_t corpPayPrice) { DARABONBA_PTR_SET_VALUE(corpPayPrice_, corpPayPrice) };


    // disOrderId Field Functions 
    bool hasDisOrderId() const { return this->disOrderId_ != nullptr;};
    void deleteDisOrderId() { this->disOrderId_ = nullptr;};
    inline string disOrderId() const { DARABONBA_PTR_GET_DEFAULT(disOrderId_, "") };
    inline TicketChangingPayRequest& setDisOrderId(string disOrderId) { DARABONBA_PTR_SET_VALUE(disOrderId_, disOrderId) };


    // disSubOrderId Field Functions 
    bool hasDisSubOrderId() const { return this->disSubOrderId_ != nullptr;};
    void deleteDisSubOrderId() { this->disSubOrderId_ = nullptr;};
    inline string disSubOrderId() const { DARABONBA_PTR_GET_DEFAULT(disSubOrderId_, "") };
    inline TicketChangingPayRequest& setDisSubOrderId(string disSubOrderId) { DARABONBA_PTR_SET_VALUE(disSubOrderId_, disSubOrderId) };


    // extra Field Functions 
    bool hasExtra() const { return this->extra_ != nullptr;};
    void deleteExtra() { this->extra_ = nullptr;};
    inline const map<string, string> & extra() const { DARABONBA_PTR_GET_CONST(extra_, map<string, string>) };
    inline map<string, string> extra() { DARABONBA_PTR_GET(extra_, map<string, string>) };
    inline TicketChangingPayRequest& setExtra(const map<string, string> & extra) { DARABONBA_PTR_SET_VALUE(extra_, extra) };
    inline TicketChangingPayRequest& setExtra(map<string, string> && extra) { DARABONBA_PTR_SET_RVALUE(extra_, extra) };


    // personalPayPrice Field Functions 
    bool hasPersonalPayPrice() const { return this->personalPayPrice_ != nullptr;};
    void deletePersonalPayPrice() { this->personalPayPrice_ = nullptr;};
    inline int64_t personalPayPrice() const { DARABONBA_PTR_GET_DEFAULT(personalPayPrice_, 0L) };
    inline TicketChangingPayRequest& setPersonalPayPrice(int64_t personalPayPrice) { DARABONBA_PTR_SET_VALUE(personalPayPrice_, personalPayPrice) };


    // totalPayPrice Field Functions 
    bool hasTotalPayPrice() const { return this->totalPayPrice_ != nullptr;};
    void deleteTotalPayPrice() { this->totalPayPrice_ = nullptr;};
    inline int64_t totalPayPrice() const { DARABONBA_PTR_GET_DEFAULT(totalPayPrice_, 0L) };
    inline TicketChangingPayRequest& setTotalPayPrice(int64_t totalPayPrice) { DARABONBA_PTR_SET_VALUE(totalPayPrice_, totalPayPrice) };


  protected:
    std::shared_ptr<int64_t> corpPayPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disOrderId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> disSubOrderId_ = nullptr;
    std::shared_ptr<map<string, string>> extra_ = nullptr;
    std::shared_ptr<int64_t> personalPayPrice_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> totalPayPrice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
