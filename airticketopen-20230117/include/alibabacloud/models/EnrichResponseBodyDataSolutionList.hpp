// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_ENRICHRESPONSEBODYDATASOLUTIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/EnrichResponseBodyDataSolutionListJourneyList.hpp>
#include <alibabacloud/models/EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList.hpp>
#include <alibabacloud/models/EnrichResponseBodyDataSolutionListSegmentBaggageMappingList.hpp>
#include <alibabacloud/models/EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList.hpp>
#include <alibabacloud/models/EnrichResponseBodyDataSolutionListSolutionAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class EnrichResponseBodyDataSolutionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnrichResponseBodyDataSolutionList& obj) { 
      DARABONBA_PTR_TO_JSON(adult_price, adultPrice_);
      DARABONBA_PTR_TO_JSON(adult_tax, adultTax_);
      DARABONBA_PTR_TO_JSON(child_price, childPrice_);
      DARABONBA_PTR_TO_JSON(child_tax, childTax_);
      DARABONBA_PTR_TO_JSON(infant_price, infantPrice_);
      DARABONBA_PTR_TO_JSON(infant_tax, infantTax_);
      DARABONBA_PTR_TO_JSON(journey_list, journeyList_);
      DARABONBA_PTR_TO_JSON(product_type_description, productTypeDescription_);
      DARABONBA_PTR_TO_JSON(refund_ticket_coupon_description, refundTicketCouponDescription_);
      DARABONBA_PTR_TO_JSON(segment_baggage_check_in_info_list, segmentBaggageCheckInInfoList_);
      DARABONBA_PTR_TO_JSON(segment_baggage_mapping_list, segmentBaggageMappingList_);
      DARABONBA_PTR_TO_JSON(segment_refund_change_rule_mapping_list, segmentRefundChangeRuleMappingList_);
      DARABONBA_PTR_TO_JSON(solution_attribute, solutionAttribute_);
      DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnrichResponseBodyDataSolutionList& obj) { 
      DARABONBA_PTR_FROM_JSON(adult_price, adultPrice_);
      DARABONBA_PTR_FROM_JSON(adult_tax, adultTax_);
      DARABONBA_PTR_FROM_JSON(child_price, childPrice_);
      DARABONBA_PTR_FROM_JSON(child_tax, childTax_);
      DARABONBA_PTR_FROM_JSON(infant_price, infantPrice_);
      DARABONBA_PTR_FROM_JSON(infant_tax, infantTax_);
      DARABONBA_PTR_FROM_JSON(journey_list, journeyList_);
      DARABONBA_PTR_FROM_JSON(product_type_description, productTypeDescription_);
      DARABONBA_PTR_FROM_JSON(refund_ticket_coupon_description, refundTicketCouponDescription_);
      DARABONBA_PTR_FROM_JSON(segment_baggage_check_in_info_list, segmentBaggageCheckInInfoList_);
      DARABONBA_PTR_FROM_JSON(segment_baggage_mapping_list, segmentBaggageMappingList_);
      DARABONBA_PTR_FROM_JSON(segment_refund_change_rule_mapping_list, segmentRefundChangeRuleMappingList_);
      DARABONBA_PTR_FROM_JSON(solution_attribute, solutionAttribute_);
      DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
    };
    EnrichResponseBodyDataSolutionList() = default ;
    EnrichResponseBodyDataSolutionList(const EnrichResponseBodyDataSolutionList &) = default ;
    EnrichResponseBodyDataSolutionList(EnrichResponseBodyDataSolutionList &&) = default ;
    EnrichResponseBodyDataSolutionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnrichResponseBodyDataSolutionList() = default ;
    EnrichResponseBodyDataSolutionList& operator=(const EnrichResponseBodyDataSolutionList &) = default ;
    EnrichResponseBodyDataSolutionList& operator=(EnrichResponseBodyDataSolutionList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adultPrice_ == nullptr
        && return this->adultTax_ == nullptr && return this->childPrice_ == nullptr && return this->childTax_ == nullptr && return this->infantPrice_ == nullptr && return this->infantTax_ == nullptr
        && return this->journeyList_ == nullptr && return this->productTypeDescription_ == nullptr && return this->refundTicketCouponDescription_ == nullptr && return this->segmentBaggageCheckInInfoList_ == nullptr && return this->segmentBaggageMappingList_ == nullptr
        && return this->segmentRefundChangeRuleMappingList_ == nullptr && return this->solutionAttribute_ == nullptr && return this->solutionId_ == nullptr; };
    // adultPrice Field Functions 
    bool hasAdultPrice() const { return this->adultPrice_ != nullptr;};
    void deleteAdultPrice() { this->adultPrice_ = nullptr;};
    inline double adultPrice() const { DARABONBA_PTR_GET_DEFAULT(adultPrice_, 0.0) };
    inline EnrichResponseBodyDataSolutionList& setAdultPrice(double adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


    // adultTax Field Functions 
    bool hasAdultTax() const { return this->adultTax_ != nullptr;};
    void deleteAdultTax() { this->adultTax_ = nullptr;};
    inline double adultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0.0) };
    inline EnrichResponseBodyDataSolutionList& setAdultTax(double adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


    // childPrice Field Functions 
    bool hasChildPrice() const { return this->childPrice_ != nullptr;};
    void deleteChildPrice() { this->childPrice_ = nullptr;};
    inline double childPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0.0) };
    inline EnrichResponseBodyDataSolutionList& setChildPrice(double childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


    // childTax Field Functions 
    bool hasChildTax() const { return this->childTax_ != nullptr;};
    void deleteChildTax() { this->childTax_ = nullptr;};
    inline double childTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0.0) };
    inline EnrichResponseBodyDataSolutionList& setChildTax(double childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


    // infantPrice Field Functions 
    bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
    void deleteInfantPrice() { this->infantPrice_ = nullptr;};
    inline double infantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0.0) };
    inline EnrichResponseBodyDataSolutionList& setInfantPrice(double infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


    // infantTax Field Functions 
    bool hasInfantTax() const { return this->infantTax_ != nullptr;};
    void deleteInfantTax() { this->infantTax_ = nullptr;};
    inline double infantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0.0) };
    inline EnrichResponseBodyDataSolutionList& setInfantTax(double infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


    // journeyList Field Functions 
    bool hasJourneyList() const { return this->journeyList_ != nullptr;};
    void deleteJourneyList() { this->journeyList_ = nullptr;};
    inline const vector<Models::EnrichResponseBodyDataSolutionListJourneyList> & journeyList() const { DARABONBA_PTR_GET_CONST(journeyList_, vector<Models::EnrichResponseBodyDataSolutionListJourneyList>) };
    inline vector<Models::EnrichResponseBodyDataSolutionListJourneyList> journeyList() { DARABONBA_PTR_GET(journeyList_, vector<Models::EnrichResponseBodyDataSolutionListJourneyList>) };
    inline EnrichResponseBodyDataSolutionList& setJourneyList(const vector<Models::EnrichResponseBodyDataSolutionListJourneyList> & journeyList) { DARABONBA_PTR_SET_VALUE(journeyList_, journeyList) };
    inline EnrichResponseBodyDataSolutionList& setJourneyList(vector<Models::EnrichResponseBodyDataSolutionListJourneyList> && journeyList) { DARABONBA_PTR_SET_RVALUE(journeyList_, journeyList) };


    // productTypeDescription Field Functions 
    bool hasProductTypeDescription() const { return this->productTypeDescription_ != nullptr;};
    void deleteProductTypeDescription() { this->productTypeDescription_ = nullptr;};
    inline string productTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(productTypeDescription_, "") };
    inline EnrichResponseBodyDataSolutionList& setProductTypeDescription(string productTypeDescription) { DARABONBA_PTR_SET_VALUE(productTypeDescription_, productTypeDescription) };


    // refundTicketCouponDescription Field Functions 
    bool hasRefundTicketCouponDescription() const { return this->refundTicketCouponDescription_ != nullptr;};
    void deleteRefundTicketCouponDescription() { this->refundTicketCouponDescription_ = nullptr;};
    inline string refundTicketCouponDescription() const { DARABONBA_PTR_GET_DEFAULT(refundTicketCouponDescription_, "") };
    inline EnrichResponseBodyDataSolutionList& setRefundTicketCouponDescription(string refundTicketCouponDescription) { DARABONBA_PTR_SET_VALUE(refundTicketCouponDescription_, refundTicketCouponDescription) };


    // segmentBaggageCheckInInfoList Field Functions 
    bool hasSegmentBaggageCheckInInfoList() const { return this->segmentBaggageCheckInInfoList_ != nullptr;};
    void deleteSegmentBaggageCheckInInfoList() { this->segmentBaggageCheckInInfoList_ = nullptr;};
    inline const vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList> & segmentBaggageCheckInInfoList() const { DARABONBA_PTR_GET_CONST(segmentBaggageCheckInInfoList_, vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList>) };
    inline vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList> segmentBaggageCheckInInfoList() { DARABONBA_PTR_GET(segmentBaggageCheckInInfoList_, vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList>) };
    inline EnrichResponseBodyDataSolutionList& setSegmentBaggageCheckInInfoList(const vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList> & segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_VALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };
    inline EnrichResponseBodyDataSolutionList& setSegmentBaggageCheckInInfoList(vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList> && segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };


    // segmentBaggageMappingList Field Functions 
    bool hasSegmentBaggageMappingList() const { return this->segmentBaggageMappingList_ != nullptr;};
    void deleteSegmentBaggageMappingList() { this->segmentBaggageMappingList_ = nullptr;};
    inline const vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageMappingList> & segmentBaggageMappingList() const { DARABONBA_PTR_GET_CONST(segmentBaggageMappingList_, vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageMappingList>) };
    inline vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageMappingList> segmentBaggageMappingList() { DARABONBA_PTR_GET(segmentBaggageMappingList_, vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageMappingList>) };
    inline EnrichResponseBodyDataSolutionList& setSegmentBaggageMappingList(const vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageMappingList> & segmentBaggageMappingList) { DARABONBA_PTR_SET_VALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };
    inline EnrichResponseBodyDataSolutionList& setSegmentBaggageMappingList(vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageMappingList> && segmentBaggageMappingList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };


    // segmentRefundChangeRuleMappingList Field Functions 
    bool hasSegmentRefundChangeRuleMappingList() const { return this->segmentRefundChangeRuleMappingList_ != nullptr;};
    void deleteSegmentRefundChangeRuleMappingList() { this->segmentRefundChangeRuleMappingList_ = nullptr;};
    inline const vector<Models::EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList> & segmentRefundChangeRuleMappingList() const { DARABONBA_PTR_GET_CONST(segmentRefundChangeRuleMappingList_, vector<Models::EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList>) };
    inline vector<Models::EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList> segmentRefundChangeRuleMappingList() { DARABONBA_PTR_GET(segmentRefundChangeRuleMappingList_, vector<Models::EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList>) };
    inline EnrichResponseBodyDataSolutionList& setSegmentRefundChangeRuleMappingList(const vector<Models::EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList> & segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_VALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };
    inline EnrichResponseBodyDataSolutionList& setSegmentRefundChangeRuleMappingList(vector<Models::EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList> && segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_RVALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };


    // solutionAttribute Field Functions 
    bool hasSolutionAttribute() const { return this->solutionAttribute_ != nullptr;};
    void deleteSolutionAttribute() { this->solutionAttribute_ = nullptr;};
    inline const Models::EnrichResponseBodyDataSolutionListSolutionAttribute & solutionAttribute() const { DARABONBA_PTR_GET_CONST(solutionAttribute_, Models::EnrichResponseBodyDataSolutionListSolutionAttribute) };
    inline Models::EnrichResponseBodyDataSolutionListSolutionAttribute solutionAttribute() { DARABONBA_PTR_GET(solutionAttribute_, Models::EnrichResponseBodyDataSolutionListSolutionAttribute) };
    inline EnrichResponseBodyDataSolutionList& setSolutionAttribute(const Models::EnrichResponseBodyDataSolutionListSolutionAttribute & solutionAttribute) { DARABONBA_PTR_SET_VALUE(solutionAttribute_, solutionAttribute) };
    inline EnrichResponseBodyDataSolutionList& setSolutionAttribute(Models::EnrichResponseBodyDataSolutionListSolutionAttribute && solutionAttribute) { DARABONBA_PTR_SET_RVALUE(solutionAttribute_, solutionAttribute) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline EnrichResponseBodyDataSolutionList& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


  protected:
    // adult fare
    std::shared_ptr<double> adultPrice_ = nullptr;
    // adult tax
    std::shared_ptr<double> adultTax_ = nullptr;
    // child fare
    std::shared_ptr<double> childPrice_ = nullptr;
    // child tax
    std::shared_ptr<double> childTax_ = nullptr;
    // infant fare
    std::shared_ptr<double> infantPrice_ = nullptr;
    // infant tax
    std::shared_ptr<double> infantTax_ = nullptr;
    // journey list
    std::shared_ptr<vector<Models::EnrichResponseBodyDataSolutionListJourneyList>> journeyList_ = nullptr;
    // product type description
    std::shared_ptr<string> productTypeDescription_ = nullptr;
    // refund airline coupon description
    std::shared_ptr<string> refundTicketCouponDescription_ = nullptr;
    // through check-in baggage  policy
    std::shared_ptr<vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList_ = nullptr;
    // baggage rule
    std::shared_ptr<vector<Models::EnrichResponseBodyDataSolutionListSegmentBaggageMappingList>> segmentBaggageMappingList_ = nullptr;
    // change and refund policy
    std::shared_ptr<vector<Models::EnrichResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList_ = nullptr;
    std::shared_ptr<Models::EnrichResponseBodyDataSolutionListSolutionAttribute> solutionAttribute_ = nullptr;
    // solution ID
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
