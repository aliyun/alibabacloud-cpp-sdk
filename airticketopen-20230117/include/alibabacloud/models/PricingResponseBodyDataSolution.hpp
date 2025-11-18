// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PRICINGRESPONSEBODYDATASOLUTION_HPP_
#define ALIBABACLOUD_MODELS_PRICINGRESPONSEBODYDATASOLUTION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PricingResponseBodyDataSolutionJourneyList.hpp>
#include <alibabacloud/models/PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList.hpp>
#include <alibabacloud/models/PricingResponseBodyDataSolutionSegmentBaggageMappingList.hpp>
#include <alibabacloud/models/PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList.hpp>
#include <alibabacloud/models/PricingResponseBodyDataSolutionSolutionAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class PricingResponseBodyDataSolution : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PricingResponseBodyDataSolution& obj) { 
      DARABONBA_PTR_TO_JSON(adult_price, adultPrice_);
      DARABONBA_PTR_TO_JSON(adult_tax, adultTax_);
      DARABONBA_PTR_TO_JSON(child_price, childPrice_);
      DARABONBA_PTR_TO_JSON(child_tax, childTax_);
      DARABONBA_PTR_TO_JSON(infant_price, infantPrice_);
      DARABONBA_PTR_TO_JSON(infant_tax, infantTax_);
      DARABONBA_PTR_TO_JSON(journey_list, journeyList_);
      DARABONBA_PTR_TO_JSON(segment_baggage_check_in_info_list, segmentBaggageCheckInInfoList_);
      DARABONBA_PTR_TO_JSON(segment_baggage_mapping_list, segmentBaggageMappingList_);
      DARABONBA_PTR_TO_JSON(segment_refund_change_rule_mapping_list, segmentRefundChangeRuleMappingList_);
      DARABONBA_PTR_TO_JSON(solution_attribute, solutionAttribute_);
      DARABONBA_PTR_TO_JSON(solution_id, solutionId_);
    };
    friend void from_json(const Darabonba::Json& j, PricingResponseBodyDataSolution& obj) { 
      DARABONBA_PTR_FROM_JSON(adult_price, adultPrice_);
      DARABONBA_PTR_FROM_JSON(adult_tax, adultTax_);
      DARABONBA_PTR_FROM_JSON(child_price, childPrice_);
      DARABONBA_PTR_FROM_JSON(child_tax, childTax_);
      DARABONBA_PTR_FROM_JSON(infant_price, infantPrice_);
      DARABONBA_PTR_FROM_JSON(infant_tax, infantTax_);
      DARABONBA_PTR_FROM_JSON(journey_list, journeyList_);
      DARABONBA_PTR_FROM_JSON(segment_baggage_check_in_info_list, segmentBaggageCheckInInfoList_);
      DARABONBA_PTR_FROM_JSON(segment_baggage_mapping_list, segmentBaggageMappingList_);
      DARABONBA_PTR_FROM_JSON(segment_refund_change_rule_mapping_list, segmentRefundChangeRuleMappingList_);
      DARABONBA_PTR_FROM_JSON(solution_attribute, solutionAttribute_);
      DARABONBA_PTR_FROM_JSON(solution_id, solutionId_);
    };
    PricingResponseBodyDataSolution() = default ;
    PricingResponseBodyDataSolution(const PricingResponseBodyDataSolution &) = default ;
    PricingResponseBodyDataSolution(PricingResponseBodyDataSolution &&) = default ;
    PricingResponseBodyDataSolution(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PricingResponseBodyDataSolution() = default ;
    PricingResponseBodyDataSolution& operator=(const PricingResponseBodyDataSolution &) = default ;
    PricingResponseBodyDataSolution& operator=(PricingResponseBodyDataSolution &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adultPrice_ == nullptr
        && return this->adultTax_ == nullptr && return this->childPrice_ == nullptr && return this->childTax_ == nullptr && return this->infantPrice_ == nullptr && return this->infantTax_ == nullptr
        && return this->journeyList_ == nullptr && return this->segmentBaggageCheckInInfoList_ == nullptr && return this->segmentBaggageMappingList_ == nullptr && return this->segmentRefundChangeRuleMappingList_ == nullptr && return this->solutionAttribute_ == nullptr
        && return this->solutionId_ == nullptr; };
    // adultPrice Field Functions 
    bool hasAdultPrice() const { return this->adultPrice_ != nullptr;};
    void deleteAdultPrice() { this->adultPrice_ = nullptr;};
    inline double adultPrice() const { DARABONBA_PTR_GET_DEFAULT(adultPrice_, 0.0) };
    inline PricingResponseBodyDataSolution& setAdultPrice(double adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


    // adultTax Field Functions 
    bool hasAdultTax() const { return this->adultTax_ != nullptr;};
    void deleteAdultTax() { this->adultTax_ = nullptr;};
    inline double adultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0.0) };
    inline PricingResponseBodyDataSolution& setAdultTax(double adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


    // childPrice Field Functions 
    bool hasChildPrice() const { return this->childPrice_ != nullptr;};
    void deleteChildPrice() { this->childPrice_ = nullptr;};
    inline double childPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0.0) };
    inline PricingResponseBodyDataSolution& setChildPrice(double childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


    // childTax Field Functions 
    bool hasChildTax() const { return this->childTax_ != nullptr;};
    void deleteChildTax() { this->childTax_ = nullptr;};
    inline double childTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0.0) };
    inline PricingResponseBodyDataSolution& setChildTax(double childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


    // infantPrice Field Functions 
    bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
    void deleteInfantPrice() { this->infantPrice_ = nullptr;};
    inline double infantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0.0) };
    inline PricingResponseBodyDataSolution& setInfantPrice(double infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


    // infantTax Field Functions 
    bool hasInfantTax() const { return this->infantTax_ != nullptr;};
    void deleteInfantTax() { this->infantTax_ = nullptr;};
    inline double infantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0.0) };
    inline PricingResponseBodyDataSolution& setInfantTax(double infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


    // journeyList Field Functions 
    bool hasJourneyList() const { return this->journeyList_ != nullptr;};
    void deleteJourneyList() { this->journeyList_ = nullptr;};
    inline const vector<Models::PricingResponseBodyDataSolutionJourneyList> & journeyList() const { DARABONBA_PTR_GET_CONST(journeyList_, vector<Models::PricingResponseBodyDataSolutionJourneyList>) };
    inline vector<Models::PricingResponseBodyDataSolutionJourneyList> journeyList() { DARABONBA_PTR_GET(journeyList_, vector<Models::PricingResponseBodyDataSolutionJourneyList>) };
    inline PricingResponseBodyDataSolution& setJourneyList(const vector<Models::PricingResponseBodyDataSolutionJourneyList> & journeyList) { DARABONBA_PTR_SET_VALUE(journeyList_, journeyList) };
    inline PricingResponseBodyDataSolution& setJourneyList(vector<Models::PricingResponseBodyDataSolutionJourneyList> && journeyList) { DARABONBA_PTR_SET_RVALUE(journeyList_, journeyList) };


    // segmentBaggageCheckInInfoList Field Functions 
    bool hasSegmentBaggageCheckInInfoList() const { return this->segmentBaggageCheckInInfoList_ != nullptr;};
    void deleteSegmentBaggageCheckInInfoList() { this->segmentBaggageCheckInInfoList_ = nullptr;};
    inline const vector<Models::PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList> & segmentBaggageCheckInInfoList() const { DARABONBA_PTR_GET_CONST(segmentBaggageCheckInInfoList_, vector<Models::PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList>) };
    inline vector<Models::PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList> segmentBaggageCheckInInfoList() { DARABONBA_PTR_GET(segmentBaggageCheckInInfoList_, vector<Models::PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList>) };
    inline PricingResponseBodyDataSolution& setSegmentBaggageCheckInInfoList(const vector<Models::PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList> & segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_VALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };
    inline PricingResponseBodyDataSolution& setSegmentBaggageCheckInInfoList(vector<Models::PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList> && segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };


    // segmentBaggageMappingList Field Functions 
    bool hasSegmentBaggageMappingList() const { return this->segmentBaggageMappingList_ != nullptr;};
    void deleteSegmentBaggageMappingList() { this->segmentBaggageMappingList_ = nullptr;};
    inline const vector<Models::PricingResponseBodyDataSolutionSegmentBaggageMappingList> & segmentBaggageMappingList() const { DARABONBA_PTR_GET_CONST(segmentBaggageMappingList_, vector<Models::PricingResponseBodyDataSolutionSegmentBaggageMappingList>) };
    inline vector<Models::PricingResponseBodyDataSolutionSegmentBaggageMappingList> segmentBaggageMappingList() { DARABONBA_PTR_GET(segmentBaggageMappingList_, vector<Models::PricingResponseBodyDataSolutionSegmentBaggageMappingList>) };
    inline PricingResponseBodyDataSolution& setSegmentBaggageMappingList(const vector<Models::PricingResponseBodyDataSolutionSegmentBaggageMappingList> & segmentBaggageMappingList) { DARABONBA_PTR_SET_VALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };
    inline PricingResponseBodyDataSolution& setSegmentBaggageMappingList(vector<Models::PricingResponseBodyDataSolutionSegmentBaggageMappingList> && segmentBaggageMappingList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };


    // segmentRefundChangeRuleMappingList Field Functions 
    bool hasSegmentRefundChangeRuleMappingList() const { return this->segmentRefundChangeRuleMappingList_ != nullptr;};
    void deleteSegmentRefundChangeRuleMappingList() { this->segmentRefundChangeRuleMappingList_ = nullptr;};
    inline const vector<Models::PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList> & segmentRefundChangeRuleMappingList() const { DARABONBA_PTR_GET_CONST(segmentRefundChangeRuleMappingList_, vector<Models::PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList>) };
    inline vector<Models::PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList> segmentRefundChangeRuleMappingList() { DARABONBA_PTR_GET(segmentRefundChangeRuleMappingList_, vector<Models::PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList>) };
    inline PricingResponseBodyDataSolution& setSegmentRefundChangeRuleMappingList(const vector<Models::PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList> & segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_VALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };
    inline PricingResponseBodyDataSolution& setSegmentRefundChangeRuleMappingList(vector<Models::PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList> && segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_RVALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };


    // solutionAttribute Field Functions 
    bool hasSolutionAttribute() const { return this->solutionAttribute_ != nullptr;};
    void deleteSolutionAttribute() { this->solutionAttribute_ = nullptr;};
    inline const Models::PricingResponseBodyDataSolutionSolutionAttribute & solutionAttribute() const { DARABONBA_PTR_GET_CONST(solutionAttribute_, Models::PricingResponseBodyDataSolutionSolutionAttribute) };
    inline Models::PricingResponseBodyDataSolutionSolutionAttribute solutionAttribute() { DARABONBA_PTR_GET(solutionAttribute_, Models::PricingResponseBodyDataSolutionSolutionAttribute) };
    inline PricingResponseBodyDataSolution& setSolutionAttribute(const Models::PricingResponseBodyDataSolutionSolutionAttribute & solutionAttribute) { DARABONBA_PTR_SET_VALUE(solutionAttribute_, solutionAttribute) };
    inline PricingResponseBodyDataSolution& setSolutionAttribute(Models::PricingResponseBodyDataSolutionSolutionAttribute && solutionAttribute) { DARABONBA_PTR_SET_RVALUE(solutionAttribute_, solutionAttribute) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline PricingResponseBodyDataSolution& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


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
    std::shared_ptr<vector<Models::PricingResponseBodyDataSolutionJourneyList>> journeyList_ = nullptr;
    // through check-in baggage policy
    std::shared_ptr<vector<Models::PricingResponseBodyDataSolutionSegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList_ = nullptr;
    // baggage rule list
    std::shared_ptr<vector<Models::PricingResponseBodyDataSolutionSegmentBaggageMappingList>> segmentBaggageMappingList_ = nullptr;
    // change and refund policy
    std::shared_ptr<vector<Models::PricingResponseBodyDataSolutionSegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList_ = nullptr;
    // Quotation attributes
    std::shared_ptr<Models::PricingResponseBodyDataSolutionSolutionAttribute> solutionAttribute_ = nullptr;
    // solution_id, equals to solution_id in request
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
