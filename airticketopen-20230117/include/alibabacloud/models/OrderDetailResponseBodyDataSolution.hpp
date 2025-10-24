// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATASOLUTION_HPP_
#define ALIBABACLOUD_MODELS_ORDERDETAILRESPONSEBODYDATASOLUTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/OrderDetailResponseBodyDataSolutionJourneyList.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList.hpp>
#include <alibabacloud/models/OrderDetailResponseBodyDataSolutionSolutionAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class OrderDetailResponseBodyDataSolution : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const OrderDetailResponseBodyDataSolution& obj) { 
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
    friend void from_json(const Darabonba::Json& j, OrderDetailResponseBodyDataSolution& obj) { 
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
    OrderDetailResponseBodyDataSolution() = default ;
    OrderDetailResponseBodyDataSolution(const OrderDetailResponseBodyDataSolution &) = default ;
    OrderDetailResponseBodyDataSolution(OrderDetailResponseBodyDataSolution &&) = default ;
    OrderDetailResponseBodyDataSolution(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~OrderDetailResponseBodyDataSolution() = default ;
    OrderDetailResponseBodyDataSolution& operator=(const OrderDetailResponseBodyDataSolution &) = default ;
    OrderDetailResponseBodyDataSolution& operator=(OrderDetailResponseBodyDataSolution &&) = default ;
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
    inline OrderDetailResponseBodyDataSolution& setAdultPrice(double adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


    // adultTax Field Functions 
    bool hasAdultTax() const { return this->adultTax_ != nullptr;};
    void deleteAdultTax() { this->adultTax_ = nullptr;};
    inline double adultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0.0) };
    inline OrderDetailResponseBodyDataSolution& setAdultTax(double adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


    // childPrice Field Functions 
    bool hasChildPrice() const { return this->childPrice_ != nullptr;};
    void deleteChildPrice() { this->childPrice_ = nullptr;};
    inline double childPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0.0) };
    inline OrderDetailResponseBodyDataSolution& setChildPrice(double childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


    // childTax Field Functions 
    bool hasChildTax() const { return this->childTax_ != nullptr;};
    void deleteChildTax() { this->childTax_ = nullptr;};
    inline double childTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0.0) };
    inline OrderDetailResponseBodyDataSolution& setChildTax(double childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


    // infantPrice Field Functions 
    bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
    void deleteInfantPrice() { this->infantPrice_ = nullptr;};
    inline double infantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0.0) };
    inline OrderDetailResponseBodyDataSolution& setInfantPrice(double infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


    // infantTax Field Functions 
    bool hasInfantTax() const { return this->infantTax_ != nullptr;};
    void deleteInfantTax() { this->infantTax_ = nullptr;};
    inline double infantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0.0) };
    inline OrderDetailResponseBodyDataSolution& setInfantTax(double infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


    // journeyList Field Functions 
    bool hasJourneyList() const { return this->journeyList_ != nullptr;};
    void deleteJourneyList() { this->journeyList_ = nullptr;};
    inline const vector<Models::OrderDetailResponseBodyDataSolutionJourneyList> & journeyList() const { DARABONBA_PTR_GET_CONST(journeyList_, vector<Models::OrderDetailResponseBodyDataSolutionJourneyList>) };
    inline vector<Models::OrderDetailResponseBodyDataSolutionJourneyList> journeyList() { DARABONBA_PTR_GET(journeyList_, vector<Models::OrderDetailResponseBodyDataSolutionJourneyList>) };
    inline OrderDetailResponseBodyDataSolution& setJourneyList(const vector<Models::OrderDetailResponseBodyDataSolutionJourneyList> & journeyList) { DARABONBA_PTR_SET_VALUE(journeyList_, journeyList) };
    inline OrderDetailResponseBodyDataSolution& setJourneyList(vector<Models::OrderDetailResponseBodyDataSolutionJourneyList> && journeyList) { DARABONBA_PTR_SET_RVALUE(journeyList_, journeyList) };


    // productTypeDescription Field Functions 
    bool hasProductTypeDescription() const { return this->productTypeDescription_ != nullptr;};
    void deleteProductTypeDescription() { this->productTypeDescription_ = nullptr;};
    inline string productTypeDescription() const { DARABONBA_PTR_GET_DEFAULT(productTypeDescription_, "") };
    inline OrderDetailResponseBodyDataSolution& setProductTypeDescription(string productTypeDescription) { DARABONBA_PTR_SET_VALUE(productTypeDescription_, productTypeDescription) };


    // refundTicketCouponDescription Field Functions 
    bool hasRefundTicketCouponDescription() const { return this->refundTicketCouponDescription_ != nullptr;};
    void deleteRefundTicketCouponDescription() { this->refundTicketCouponDescription_ = nullptr;};
    inline string refundTicketCouponDescription() const { DARABONBA_PTR_GET_DEFAULT(refundTicketCouponDescription_, "") };
    inline OrderDetailResponseBodyDataSolution& setRefundTicketCouponDescription(string refundTicketCouponDescription) { DARABONBA_PTR_SET_VALUE(refundTicketCouponDescription_, refundTicketCouponDescription) };


    // segmentBaggageCheckInInfoList Field Functions 
    bool hasSegmentBaggageCheckInInfoList() const { return this->segmentBaggageCheckInInfoList_ != nullptr;};
    void deleteSegmentBaggageCheckInInfoList() { this->segmentBaggageCheckInInfoList_ = nullptr;};
    inline const vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList> & segmentBaggageCheckInInfoList() const { DARABONBA_PTR_GET_CONST(segmentBaggageCheckInInfoList_, vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList>) };
    inline vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList> segmentBaggageCheckInInfoList() { DARABONBA_PTR_GET(segmentBaggageCheckInInfoList_, vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList>) };
    inline OrderDetailResponseBodyDataSolution& setSegmentBaggageCheckInInfoList(const vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList> & segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_VALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };
    inline OrderDetailResponseBodyDataSolution& setSegmentBaggageCheckInInfoList(vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList> && segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };


    // segmentBaggageMappingList Field Functions 
    bool hasSegmentBaggageMappingList() const { return this->segmentBaggageMappingList_ != nullptr;};
    void deleteSegmentBaggageMappingList() { this->segmentBaggageMappingList_ = nullptr;};
    inline const vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList> & segmentBaggageMappingList() const { DARABONBA_PTR_GET_CONST(segmentBaggageMappingList_, vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList>) };
    inline vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList> segmentBaggageMappingList() { DARABONBA_PTR_GET(segmentBaggageMappingList_, vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList>) };
    inline OrderDetailResponseBodyDataSolution& setSegmentBaggageMappingList(const vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList> & segmentBaggageMappingList) { DARABONBA_PTR_SET_VALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };
    inline OrderDetailResponseBodyDataSolution& setSegmentBaggageMappingList(vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList> && segmentBaggageMappingList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };


    // segmentRefundChangeRuleMappingList Field Functions 
    bool hasSegmentRefundChangeRuleMappingList() const { return this->segmentRefundChangeRuleMappingList_ != nullptr;};
    void deleteSegmentRefundChangeRuleMappingList() { this->segmentRefundChangeRuleMappingList_ = nullptr;};
    inline const vector<Models::OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList> & segmentRefundChangeRuleMappingList() const { DARABONBA_PTR_GET_CONST(segmentRefundChangeRuleMappingList_, vector<Models::OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList>) };
    inline vector<Models::OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList> segmentRefundChangeRuleMappingList() { DARABONBA_PTR_GET(segmentRefundChangeRuleMappingList_, vector<Models::OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList>) };
    inline OrderDetailResponseBodyDataSolution& setSegmentRefundChangeRuleMappingList(const vector<Models::OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList> & segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_VALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };
    inline OrderDetailResponseBodyDataSolution& setSegmentRefundChangeRuleMappingList(vector<Models::OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList> && segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_RVALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };


    // solutionAttribute Field Functions 
    bool hasSolutionAttribute() const { return this->solutionAttribute_ != nullptr;};
    void deleteSolutionAttribute() { this->solutionAttribute_ = nullptr;};
    inline const Models::OrderDetailResponseBodyDataSolutionSolutionAttribute & solutionAttribute() const { DARABONBA_PTR_GET_CONST(solutionAttribute_, Models::OrderDetailResponseBodyDataSolutionSolutionAttribute) };
    inline Models::OrderDetailResponseBodyDataSolutionSolutionAttribute solutionAttribute() { DARABONBA_PTR_GET(solutionAttribute_, Models::OrderDetailResponseBodyDataSolutionSolutionAttribute) };
    inline OrderDetailResponseBodyDataSolution& setSolutionAttribute(const Models::OrderDetailResponseBodyDataSolutionSolutionAttribute & solutionAttribute) { DARABONBA_PTR_SET_VALUE(solutionAttribute_, solutionAttribute) };
    inline OrderDetailResponseBodyDataSolution& setSolutionAttribute(Models::OrderDetailResponseBodyDataSolutionSolutionAttribute && solutionAttribute) { DARABONBA_PTR_SET_RVALUE(solutionAttribute_, solutionAttribute) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline OrderDetailResponseBodyDataSolution& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


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
    std::shared_ptr<vector<Models::OrderDetailResponseBodyDataSolutionJourneyList>> journeyList_ = nullptr;
    // product type description
    std::shared_ptr<string> productTypeDescription_ = nullptr;
    // refund coupon description
    std::shared_ptr<string> refundTicketCouponDescription_ = nullptr;
    // through check-in baggage policy
    std::shared_ptr<vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList_ = nullptr;
    // baggage rule list
    std::shared_ptr<vector<Models::OrderDetailResponseBodyDataSolutionSegmentBaggageMappingList>> segmentBaggageMappingList_ = nullptr;
    // change and refund policy
    std::shared_ptr<vector<Models::OrderDetailResponseBodyDataSolutionSegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList_ = nullptr;
    std::shared_ptr<Models::OrderDetailResponseBodyDataSolutionSolutionAttribute> solutionAttribute_ = nullptr;
    // solution_id
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
