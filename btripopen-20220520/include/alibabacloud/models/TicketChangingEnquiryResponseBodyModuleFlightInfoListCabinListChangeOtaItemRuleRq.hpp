// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQ_HPP_
#define ALIBABACLOUD_MODELS_TICKETCHANGINGENQUIRYRESPONSEBODYMODULEFLIGHTINFOLISTCABINLISTCHANGEOTAITEMRULERQ_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetails.hpp>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails.hpp>
#include <alibabacloud/models/TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetails.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BtripOpen20220520
{
namespace Models
{
  class TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq& obj) { 
      DARABONBA_PTR_TO_JSON(baggage_details, baggageDetails_);
      DARABONBA_PTR_TO_JSON(change_details, changeDetails_);
      DARABONBA_PTR_TO_JSON(refund_details, refundDetails_);
    };
    friend void from_json(const Darabonba::Json& j, TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq& obj) { 
      DARABONBA_PTR_FROM_JSON(baggage_details, baggageDetails_);
      DARABONBA_PTR_FROM_JSON(change_details, changeDetails_);
      DARABONBA_PTR_FROM_JSON(refund_details, refundDetails_);
    };
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq &&) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq() = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq& operator=(const TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq &) = default ;
    TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq& operator=(TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->baggageDetails_ != nullptr
        && this->changeDetails_ != nullptr && this->refundDetails_ != nullptr; };
    // baggageDetails Field Functions 
    bool hasBaggageDetails() const { return this->baggageDetails_ != nullptr;};
    void deleteBaggageDetails() { this->baggageDetails_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetails> & baggageDetails() const { DARABONBA_PTR_GET_CONST(baggageDetails_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetails>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetails> baggageDetails() { DARABONBA_PTR_GET(baggageDetails_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetails>) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq& setBaggageDetails(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetails> & baggageDetails) { DARABONBA_PTR_SET_VALUE(baggageDetails_, baggageDetails) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq& setBaggageDetails(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetails> && baggageDetails) { DARABONBA_PTR_SET_RVALUE(baggageDetails_, baggageDetails) };


    // changeDetails Field Functions 
    bool hasChangeDetails() const { return this->changeDetails_ != nullptr;};
    void deleteChangeDetails() { this->changeDetails_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails> & changeDetails() const { DARABONBA_PTR_GET_CONST(changeDetails_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails> changeDetails() { DARABONBA_PTR_GET(changeDetails_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails>) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq& setChangeDetails(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails> & changeDetails) { DARABONBA_PTR_SET_VALUE(changeDetails_, changeDetails) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq& setChangeDetails(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails> && changeDetails) { DARABONBA_PTR_SET_RVALUE(changeDetails_, changeDetails) };


    // refundDetails Field Functions 
    bool hasRefundDetails() const { return this->refundDetails_ != nullptr;};
    void deleteRefundDetails() { this->refundDetails_ = nullptr;};
    inline const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetails> & refundDetails() const { DARABONBA_PTR_GET_CONST(refundDetails_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetails>) };
    inline vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetails> refundDetails() { DARABONBA_PTR_GET(refundDetails_, vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetails>) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq& setRefundDetails(const vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetails> & refundDetails) { DARABONBA_PTR_SET_VALUE(refundDetails_, refundDetails) };
    inline TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRq& setRefundDetails(vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetails> && refundDetails) { DARABONBA_PTR_SET_RVALUE(refundDetails_, refundDetails) };


  protected:
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqBaggageDetails>> baggageDetails_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqChangeDetails>> changeDetails_ = nullptr;
    std::shared_ptr<vector<Models::TicketChangingEnquiryResponseBodyModuleFlightInfoListCabinListChangeOtaItemRuleRqRefundDetails>> refundDetails_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BtripOpen20220520
#endif
