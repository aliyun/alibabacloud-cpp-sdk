// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATASOLUTIONLIST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHRESPONSEBODYDATASOLUTIONLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchResponseBodyDataSolutionListJourneyList.hpp>
#include <alibabacloud/models/SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList.hpp>
#include <alibabacloud/models/SearchResponseBodyDataSolutionListSegmentBaggageMappingList.hpp>
#include <alibabacloud/models/SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList.hpp>
#include <alibabacloud/models/SearchResponseBodyDataSolutionListSolutionAttribute.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class SearchResponseBodyDataSolutionList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchResponseBodyDataSolutionList& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SearchResponseBodyDataSolutionList& obj) { 
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
    SearchResponseBodyDataSolutionList() = default ;
    SearchResponseBodyDataSolutionList(const SearchResponseBodyDataSolutionList &) = default ;
    SearchResponseBodyDataSolutionList(SearchResponseBodyDataSolutionList &&) = default ;
    SearchResponseBodyDataSolutionList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchResponseBodyDataSolutionList() = default ;
    SearchResponseBodyDataSolutionList& operator=(const SearchResponseBodyDataSolutionList &) = default ;
    SearchResponseBodyDataSolutionList& operator=(SearchResponseBodyDataSolutionList &&) = default ;
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
    inline SearchResponseBodyDataSolutionList& setAdultPrice(double adultPrice) { DARABONBA_PTR_SET_VALUE(adultPrice_, adultPrice) };


    // adultTax Field Functions 
    bool hasAdultTax() const { return this->adultTax_ != nullptr;};
    void deleteAdultTax() { this->adultTax_ = nullptr;};
    inline double adultTax() const { DARABONBA_PTR_GET_DEFAULT(adultTax_, 0.0) };
    inline SearchResponseBodyDataSolutionList& setAdultTax(double adultTax) { DARABONBA_PTR_SET_VALUE(adultTax_, adultTax) };


    // childPrice Field Functions 
    bool hasChildPrice() const { return this->childPrice_ != nullptr;};
    void deleteChildPrice() { this->childPrice_ = nullptr;};
    inline double childPrice() const { DARABONBA_PTR_GET_DEFAULT(childPrice_, 0.0) };
    inline SearchResponseBodyDataSolutionList& setChildPrice(double childPrice) { DARABONBA_PTR_SET_VALUE(childPrice_, childPrice) };


    // childTax Field Functions 
    bool hasChildTax() const { return this->childTax_ != nullptr;};
    void deleteChildTax() { this->childTax_ = nullptr;};
    inline double childTax() const { DARABONBA_PTR_GET_DEFAULT(childTax_, 0.0) };
    inline SearchResponseBodyDataSolutionList& setChildTax(double childTax) { DARABONBA_PTR_SET_VALUE(childTax_, childTax) };


    // infantPrice Field Functions 
    bool hasInfantPrice() const { return this->infantPrice_ != nullptr;};
    void deleteInfantPrice() { this->infantPrice_ = nullptr;};
    inline double infantPrice() const { DARABONBA_PTR_GET_DEFAULT(infantPrice_, 0.0) };
    inline SearchResponseBodyDataSolutionList& setInfantPrice(double infantPrice) { DARABONBA_PTR_SET_VALUE(infantPrice_, infantPrice) };


    // infantTax Field Functions 
    bool hasInfantTax() const { return this->infantTax_ != nullptr;};
    void deleteInfantTax() { this->infantTax_ = nullptr;};
    inline double infantTax() const { DARABONBA_PTR_GET_DEFAULT(infantTax_, 0.0) };
    inline SearchResponseBodyDataSolutionList& setInfantTax(double infantTax) { DARABONBA_PTR_SET_VALUE(infantTax_, infantTax) };


    // journeyList Field Functions 
    bool hasJourneyList() const { return this->journeyList_ != nullptr;};
    void deleteJourneyList() { this->journeyList_ = nullptr;};
    inline const vector<Models::SearchResponseBodyDataSolutionListJourneyList> & journeyList() const { DARABONBA_PTR_GET_CONST(journeyList_, vector<Models::SearchResponseBodyDataSolutionListJourneyList>) };
    inline vector<Models::SearchResponseBodyDataSolutionListJourneyList> journeyList() { DARABONBA_PTR_GET(journeyList_, vector<Models::SearchResponseBodyDataSolutionListJourneyList>) };
    inline SearchResponseBodyDataSolutionList& setJourneyList(const vector<Models::SearchResponseBodyDataSolutionListJourneyList> & journeyList) { DARABONBA_PTR_SET_VALUE(journeyList_, journeyList) };
    inline SearchResponseBodyDataSolutionList& setJourneyList(vector<Models::SearchResponseBodyDataSolutionListJourneyList> && journeyList) { DARABONBA_PTR_SET_RVALUE(journeyList_, journeyList) };


    // segmentBaggageCheckInInfoList Field Functions 
    bool hasSegmentBaggageCheckInInfoList() const { return this->segmentBaggageCheckInInfoList_ != nullptr;};
    void deleteSegmentBaggageCheckInInfoList() { this->segmentBaggageCheckInInfoList_ = nullptr;};
    inline const vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList> & segmentBaggageCheckInInfoList() const { DARABONBA_PTR_GET_CONST(segmentBaggageCheckInInfoList_, vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList>) };
    inline vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList> segmentBaggageCheckInInfoList() { DARABONBA_PTR_GET(segmentBaggageCheckInInfoList_, vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList>) };
    inline SearchResponseBodyDataSolutionList& setSegmentBaggageCheckInInfoList(const vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList> & segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_VALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };
    inline SearchResponseBodyDataSolutionList& setSegmentBaggageCheckInInfoList(vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList> && segmentBaggageCheckInInfoList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageCheckInInfoList_, segmentBaggageCheckInInfoList) };


    // segmentBaggageMappingList Field Functions 
    bool hasSegmentBaggageMappingList() const { return this->segmentBaggageMappingList_ != nullptr;};
    void deleteSegmentBaggageMappingList() { this->segmentBaggageMappingList_ = nullptr;};
    inline const vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageMappingList> & segmentBaggageMappingList() const { DARABONBA_PTR_GET_CONST(segmentBaggageMappingList_, vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageMappingList>) };
    inline vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageMappingList> segmentBaggageMappingList() { DARABONBA_PTR_GET(segmentBaggageMappingList_, vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageMappingList>) };
    inline SearchResponseBodyDataSolutionList& setSegmentBaggageMappingList(const vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageMappingList> & segmentBaggageMappingList) { DARABONBA_PTR_SET_VALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };
    inline SearchResponseBodyDataSolutionList& setSegmentBaggageMappingList(vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageMappingList> && segmentBaggageMappingList) { DARABONBA_PTR_SET_RVALUE(segmentBaggageMappingList_, segmentBaggageMappingList) };


    // segmentRefundChangeRuleMappingList Field Functions 
    bool hasSegmentRefundChangeRuleMappingList() const { return this->segmentRefundChangeRuleMappingList_ != nullptr;};
    void deleteSegmentRefundChangeRuleMappingList() { this->segmentRefundChangeRuleMappingList_ = nullptr;};
    inline const vector<Models::SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList> & segmentRefundChangeRuleMappingList() const { DARABONBA_PTR_GET_CONST(segmentRefundChangeRuleMappingList_, vector<Models::SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList>) };
    inline vector<Models::SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList> segmentRefundChangeRuleMappingList() { DARABONBA_PTR_GET(segmentRefundChangeRuleMappingList_, vector<Models::SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList>) };
    inline SearchResponseBodyDataSolutionList& setSegmentRefundChangeRuleMappingList(const vector<Models::SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList> & segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_VALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };
    inline SearchResponseBodyDataSolutionList& setSegmentRefundChangeRuleMappingList(vector<Models::SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList> && segmentRefundChangeRuleMappingList) { DARABONBA_PTR_SET_RVALUE(segmentRefundChangeRuleMappingList_, segmentRefundChangeRuleMappingList) };


    // solutionAttribute Field Functions 
    bool hasSolutionAttribute() const { return this->solutionAttribute_ != nullptr;};
    void deleteSolutionAttribute() { this->solutionAttribute_ = nullptr;};
    inline const Models::SearchResponseBodyDataSolutionListSolutionAttribute & solutionAttribute() const { DARABONBA_PTR_GET_CONST(solutionAttribute_, Models::SearchResponseBodyDataSolutionListSolutionAttribute) };
    inline Models::SearchResponseBodyDataSolutionListSolutionAttribute solutionAttribute() { DARABONBA_PTR_GET(solutionAttribute_, Models::SearchResponseBodyDataSolutionListSolutionAttribute) };
    inline SearchResponseBodyDataSolutionList& setSolutionAttribute(const Models::SearchResponseBodyDataSolutionListSolutionAttribute & solutionAttribute) { DARABONBA_PTR_SET_VALUE(solutionAttribute_, solutionAttribute) };
    inline SearchResponseBodyDataSolutionList& setSolutionAttribute(Models::SearchResponseBodyDataSolutionListSolutionAttribute && solutionAttribute) { DARABONBA_PTR_SET_RVALUE(solutionAttribute_, solutionAttribute) };


    // solutionId Field Functions 
    bool hasSolutionId() const { return this->solutionId_ != nullptr;};
    void deleteSolutionId() { this->solutionId_ = nullptr;};
    inline string solutionId() const { DARABONBA_PTR_GET_DEFAULT(solutionId_, "") };
    inline SearchResponseBodyDataSolutionList& setSolutionId(string solutionId) { DARABONBA_PTR_SET_VALUE(solutionId_, solutionId) };


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
    // segment list
    std::shared_ptr<vector<Models::SearchResponseBodyDataSolutionListJourneyList>> journeyList_ = nullptr;
    // through check-in baggage policy
    std::shared_ptr<vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageCheckInInfoList>> segmentBaggageCheckInInfoList_ = nullptr;
    // baggage rule
    std::shared_ptr<vector<Models::SearchResponseBodyDataSolutionListSegmentBaggageMappingList>> segmentBaggageMappingList_ = nullptr;
    // change and refund policy
    std::shared_ptr<vector<Models::SearchResponseBodyDataSolutionListSegmentRefundChangeRuleMappingList>> segmentRefundChangeRuleMappingList_ = nullptr;
    // supply source type
    std::shared_ptr<Models::SearchResponseBodyDataSolutionListSolutionAttribute> solutionAttribute_ = nullptr;
    // solution ID
    std::shared_ptr<string> solutionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
