// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSRESPONSEBODYCHECKITEMLISTRECOMMENDATIONLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSRESPONSEBODYCHECKITEMLISTRECOMMENDATIONLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& obj) { 
      DARABONBA_PTR_TO_JSON(Abnormality, abnormality_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_TO_JSON(RecommendationCode, recommendationCode_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_TO_JSON(SuggestionCode, suggestionCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& obj) { 
      DARABONBA_PTR_FROM_JSON(Abnormality, abnormality_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
      DARABONBA_PTR_FROM_JSON(RecommendationCode, recommendationCode_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
      DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
      DARABONBA_PTR_FROM_JSON(SuggestionCode, suggestionCode_);
    };
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList() = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList(const DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList &) = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList(DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList &&) = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList() = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& operator=(const DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList &) = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& operator=(DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abnormality_ == nullptr
        && return this->metadata_ == nullptr && return this->reason_ == nullptr && return this->reasonCode_ == nullptr && return this->recommendationCode_ == nullptr && return this->riskLevel_ == nullptr
        && return this->suggestion_ == nullptr && return this->suggestionCode_ == nullptr; };
    // abnormality Field Functions 
    bool hasAbnormality() const { return this->abnormality_ != nullptr;};
    void deleteAbnormality() { this->abnormality_ = nullptr;};
    inline string abnormality() const { DARABONBA_PTR_GET_DEFAULT(abnormality_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& setAbnormality(string abnormality) { DARABONBA_PTR_SET_VALUE(abnormality_, abnormality) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string metadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // reasonCode Field Functions 
    bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
    void deleteReasonCode() { this->reasonCode_ = nullptr;};
    inline string reasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


    // recommendationCode Field Functions 
    bool hasRecommendationCode() const { return this->recommendationCode_ != nullptr;};
    void deleteRecommendationCode() { this->recommendationCode_ = nullptr;};
    inline string recommendationCode() const { DARABONBA_PTR_GET_DEFAULT(recommendationCode_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& setRecommendationCode(string recommendationCode) { DARABONBA_PTR_SET_VALUE(recommendationCode_, recommendationCode) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


    // suggestion Field Functions 
    bool hasSuggestion() const { return this->suggestion_ != nullptr;};
    void deleteSuggestion() { this->suggestion_ = nullptr;};
    inline string suggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


    // suggestionCode Field Functions 
    bool hasSuggestionCode() const { return this->suggestionCode_ != nullptr;};
    void deleteSuggestionCode() { this->suggestionCode_ = nullptr;};
    inline string suggestionCode() const { DARABONBA_PTR_GET_DEFAULT(suggestionCode_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList& setSuggestionCode(string suggestionCode) { DARABONBA_PTR_SET_VALUE(suggestionCode_, suggestionCode) };


  protected:
    std::shared_ptr<string> abnormality_ = nullptr;
    std::shared_ptr<string> metadata_ = nullptr;
    std::shared_ptr<string> reason_ = nullptr;
    std::shared_ptr<string> reasonCode_ = nullptr;
    std::shared_ptr<string> recommendationCode_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
    std::shared_ptr<string> suggestion_ = nullptr;
    std::shared_ptr<string> suggestionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
