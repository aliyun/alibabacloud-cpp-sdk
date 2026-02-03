// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportCheckItemsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportCheckItemsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckItemList, checkItemList_);
      DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportCheckItemsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckItemList, checkItemList_);
      DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeNisInspectionReportCheckItemsResponseBody() = default ;
    DescribeNisInspectionReportCheckItemsResponseBody(const DescribeNisInspectionReportCheckItemsResponseBody &) = default ;
    DescribeNisInspectionReportCheckItemsResponseBody(DescribeNisInspectionReportCheckItemsResponseBody &&) = default ;
    DescribeNisInspectionReportCheckItemsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportCheckItemsResponseBody() = default ;
    DescribeNisInspectionReportCheckItemsResponseBody& operator=(const DescribeNisInspectionReportCheckItemsResponseBody &) = default ;
    DescribeNisInspectionReportCheckItemsResponseBody& operator=(DescribeNisInspectionReportCheckItemsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CheckItemList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CheckItemList& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryCode, categoryCode_);
        DARABONBA_PTR_TO_JSON(CheckItemCode, checkItemCode_);
        DARABONBA_PTR_TO_JSON(CheckItemName, checkItemName_);
        DARABONBA_PTR_TO_JSON(CheckResultList, checkResultList_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(DescriptionCode, descriptionCode_);
        DARABONBA_PTR_TO_JSON(RecommendationList, recommendationList_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, CheckItemList& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
        DARABONBA_PTR_FROM_JSON(CheckItemCode, checkItemCode_);
        DARABONBA_PTR_FROM_JSON(CheckItemName, checkItemName_);
        DARABONBA_PTR_FROM_JSON(CheckResultList, checkResultList_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(DescriptionCode, descriptionCode_);
        DARABONBA_PTR_FROM_JSON(RecommendationList, recommendationList_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      CheckItemList() = default ;
      CheckItemList(const CheckItemList &) = default ;
      CheckItemList(CheckItemList &&) = default ;
      CheckItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~CheckItemList() = default ;
      CheckItemList& operator=(const CheckItemList &) = default ;
      CheckItemList& operator=(CheckItemList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RecommendationList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RecommendationList& obj) { 
          DARABONBA_PTR_TO_JSON(Abnormality, abnormality_);
          DARABONBA_PTR_TO_JSON(Metadata, metadata_);
          DARABONBA_PTR_TO_JSON(Reason, reason_);
          DARABONBA_PTR_TO_JSON(ReasonCode, reasonCode_);
          DARABONBA_PTR_TO_JSON(RecommendationCode, recommendationCode_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_TO_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_TO_JSON(SuggestionCode, suggestionCode_);
        };
        friend void from_json(const Darabonba::Json& j, RecommendationList& obj) { 
          DARABONBA_PTR_FROM_JSON(Abnormality, abnormality_);
          DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
          DARABONBA_PTR_FROM_JSON(Reason, reason_);
          DARABONBA_PTR_FROM_JSON(ReasonCode, reasonCode_);
          DARABONBA_PTR_FROM_JSON(RecommendationCode, recommendationCode_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
          DARABONBA_PTR_FROM_JSON(Suggestion, suggestion_);
          DARABONBA_PTR_FROM_JSON(SuggestionCode, suggestionCode_);
        };
        RecommendationList() = default ;
        RecommendationList(const RecommendationList &) = default ;
        RecommendationList(RecommendationList &&) = default ;
        RecommendationList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RecommendationList() = default ;
        RecommendationList& operator=(const RecommendationList &) = default ;
        RecommendationList& operator=(RecommendationList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->abnormality_ == nullptr
        && this->metadata_ == nullptr && this->reason_ == nullptr && this->reasonCode_ == nullptr && this->recommendationCode_ == nullptr && this->riskLevel_ == nullptr
        && this->suggestion_ == nullptr && this->suggestionCode_ == nullptr; };
        // abnormality Field Functions 
        bool hasAbnormality() const { return this->abnormality_ != nullptr;};
        void deleteAbnormality() { this->abnormality_ = nullptr;};
        inline string getAbnormality() const { DARABONBA_PTR_GET_DEFAULT(abnormality_, "") };
        inline RecommendationList& setAbnormality(string abnormality) { DARABONBA_PTR_SET_VALUE(abnormality_, abnormality) };


        // metadata Field Functions 
        bool hasMetadata() const { return this->metadata_ != nullptr;};
        void deleteMetadata() { this->metadata_ = nullptr;};
        inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
        inline RecommendationList& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


        // reason Field Functions 
        bool hasReason() const { return this->reason_ != nullptr;};
        void deleteReason() { this->reason_ = nullptr;};
        inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
        inline RecommendationList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


        // reasonCode Field Functions 
        bool hasReasonCode() const { return this->reasonCode_ != nullptr;};
        void deleteReasonCode() { this->reasonCode_ = nullptr;};
        inline string getReasonCode() const { DARABONBA_PTR_GET_DEFAULT(reasonCode_, "") };
        inline RecommendationList& setReasonCode(string reasonCode) { DARABONBA_PTR_SET_VALUE(reasonCode_, reasonCode) };


        // recommendationCode Field Functions 
        bool hasRecommendationCode() const { return this->recommendationCode_ != nullptr;};
        void deleteRecommendationCode() { this->recommendationCode_ = nullptr;};
        inline string getRecommendationCode() const { DARABONBA_PTR_GET_DEFAULT(recommendationCode_, "") };
        inline RecommendationList& setRecommendationCode(string recommendationCode) { DARABONBA_PTR_SET_VALUE(recommendationCode_, recommendationCode) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline RecommendationList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


        // suggestion Field Functions 
        bool hasSuggestion() const { return this->suggestion_ != nullptr;};
        void deleteSuggestion() { this->suggestion_ = nullptr;};
        inline string getSuggestion() const { DARABONBA_PTR_GET_DEFAULT(suggestion_, "") };
        inline RecommendationList& setSuggestion(string suggestion) { DARABONBA_PTR_SET_VALUE(suggestion_, suggestion) };


        // suggestionCode Field Functions 
        bool hasSuggestionCode() const { return this->suggestionCode_ != nullptr;};
        void deleteSuggestionCode() { this->suggestionCode_ = nullptr;};
        inline string getSuggestionCode() const { DARABONBA_PTR_GET_DEFAULT(suggestionCode_, "") };
        inline RecommendationList& setSuggestionCode(string suggestionCode) { DARABONBA_PTR_SET_VALUE(suggestionCode_, suggestionCode) };


      protected:
        shared_ptr<string> abnormality_ {};
        shared_ptr<string> metadata_ {};
        shared_ptr<string> reason_ {};
        shared_ptr<string> reasonCode_ {};
        shared_ptr<string> recommendationCode_ {};
        shared_ptr<string> riskLevel_ {};
        shared_ptr<string> suggestion_ {};
        shared_ptr<string> suggestionCode_ {};
      };

      class CheckResultList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CheckResultList& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, CheckResultList& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        CheckResultList() = default ;
        CheckResultList(const CheckResultList &) = default ;
        CheckResultList(CheckResultList &&) = default ;
        CheckResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CheckResultList() = default ;
        CheckResultList& operator=(const CheckResultList &) = default ;
        CheckResultList& operator=(CheckResultList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->riskLevel_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int32_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
        inline CheckResultList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline CheckResultList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        shared_ptr<int32_t> count_ {};
        shared_ptr<string> riskLevel_ {};
      };

      virtual bool empty() const override { return this->categoryCode_ == nullptr
        && this->checkItemCode_ == nullptr && this->checkItemName_ == nullptr && this->checkResultList_ == nullptr && this->description_ == nullptr && this->descriptionCode_ == nullptr
        && this->recommendationList_ == nullptr && this->resourceType_ == nullptr; };
      // categoryCode Field Functions 
      bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
      void deleteCategoryCode() { this->categoryCode_ = nullptr;};
      inline string getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
      inline CheckItemList& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


      // checkItemCode Field Functions 
      bool hasCheckItemCode() const { return this->checkItemCode_ != nullptr;};
      void deleteCheckItemCode() { this->checkItemCode_ = nullptr;};
      inline string getCheckItemCode() const { DARABONBA_PTR_GET_DEFAULT(checkItemCode_, "") };
      inline CheckItemList& setCheckItemCode(string checkItemCode) { DARABONBA_PTR_SET_VALUE(checkItemCode_, checkItemCode) };


      // checkItemName Field Functions 
      bool hasCheckItemName() const { return this->checkItemName_ != nullptr;};
      void deleteCheckItemName() { this->checkItemName_ = nullptr;};
      inline string getCheckItemName() const { DARABONBA_PTR_GET_DEFAULT(checkItemName_, "") };
      inline CheckItemList& setCheckItemName(string checkItemName) { DARABONBA_PTR_SET_VALUE(checkItemName_, checkItemName) };


      // checkResultList Field Functions 
      bool hasCheckResultList() const { return this->checkResultList_ != nullptr;};
      void deleteCheckResultList() { this->checkResultList_ = nullptr;};
      inline const vector<CheckItemList::CheckResultList> & getCheckResultList() const { DARABONBA_PTR_GET_CONST(checkResultList_, vector<CheckItemList::CheckResultList>) };
      inline vector<CheckItemList::CheckResultList> getCheckResultList() { DARABONBA_PTR_GET(checkResultList_, vector<CheckItemList::CheckResultList>) };
      inline CheckItemList& setCheckResultList(const vector<CheckItemList::CheckResultList> & checkResultList) { DARABONBA_PTR_SET_VALUE(checkResultList_, checkResultList) };
      inline CheckItemList& setCheckResultList(vector<CheckItemList::CheckResultList> && checkResultList) { DARABONBA_PTR_SET_RVALUE(checkResultList_, checkResultList) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline CheckItemList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // descriptionCode Field Functions 
      bool hasDescriptionCode() const { return this->descriptionCode_ != nullptr;};
      void deleteDescriptionCode() { this->descriptionCode_ = nullptr;};
      inline string getDescriptionCode() const { DARABONBA_PTR_GET_DEFAULT(descriptionCode_, "") };
      inline CheckItemList& setDescriptionCode(string descriptionCode) { DARABONBA_PTR_SET_VALUE(descriptionCode_, descriptionCode) };


      // recommendationList Field Functions 
      bool hasRecommendationList() const { return this->recommendationList_ != nullptr;};
      void deleteRecommendationList() { this->recommendationList_ = nullptr;};
      inline const vector<CheckItemList::RecommendationList> & getRecommendationList() const { DARABONBA_PTR_GET_CONST(recommendationList_, vector<CheckItemList::RecommendationList>) };
      inline vector<CheckItemList::RecommendationList> getRecommendationList() { DARABONBA_PTR_GET(recommendationList_, vector<CheckItemList::RecommendationList>) };
      inline CheckItemList& setRecommendationList(const vector<CheckItemList::RecommendationList> & recommendationList) { DARABONBA_PTR_SET_VALUE(recommendationList_, recommendationList) };
      inline CheckItemList& setRecommendationList(vector<CheckItemList::RecommendationList> && recommendationList) { DARABONBA_PTR_SET_RVALUE(recommendationList_, recommendationList) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline CheckItemList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      shared_ptr<string> categoryCode_ {};
      shared_ptr<string> checkItemCode_ {};
      shared_ptr<string> checkItemName_ {};
      shared_ptr<vector<CheckItemList::CheckResultList>> checkResultList_ {};
      shared_ptr<string> description_ {};
      shared_ptr<string> descriptionCode_ {};
      shared_ptr<vector<CheckItemList::RecommendationList>> recommendationList_ {};
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->checkItemList_ == nullptr
        && this->inspectionReportId_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // checkItemList Field Functions 
    bool hasCheckItemList() const { return this->checkItemList_ != nullptr;};
    void deleteCheckItemList() { this->checkItemList_ = nullptr;};
    inline const vector<DescribeNisInspectionReportCheckItemsResponseBody::CheckItemList> & getCheckItemList() const { DARABONBA_PTR_GET_CONST(checkItemList_, vector<DescribeNisInspectionReportCheckItemsResponseBody::CheckItemList>) };
    inline vector<DescribeNisInspectionReportCheckItemsResponseBody::CheckItemList> getCheckItemList() { DARABONBA_PTR_GET(checkItemList_, vector<DescribeNisInspectionReportCheckItemsResponseBody::CheckItemList>) };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setCheckItemList(const vector<DescribeNisInspectionReportCheckItemsResponseBody::CheckItemList> & checkItemList) { DARABONBA_PTR_SET_VALUE(checkItemList_, checkItemList) };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setCheckItemList(vector<DescribeNisInspectionReportCheckItemsResponseBody::CheckItemList> && checkItemList) { DARABONBA_PTR_SET_RVALUE(checkItemList_, checkItemList) };


    // inspectionReportId Field Functions 
    bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
    void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
    inline string getInspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeNisInspectionReportCheckItemsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeNisInspectionReportCheckItemsResponseBody::CheckItemList>> checkItemList_ {};
    shared_ptr<string> inspectionReportId_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
