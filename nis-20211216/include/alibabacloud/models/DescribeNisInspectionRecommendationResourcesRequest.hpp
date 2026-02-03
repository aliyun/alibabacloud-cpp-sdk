// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONRECOMMENDATIONRESOURCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONRECOMMENDATIONRESOURCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionRecommendationResourcesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionRecommendationResourcesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RecommendationCode, recommendationCode_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionRecommendationResourcesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RecommendationCode, recommendationCode_);
    };
    DescribeNisInspectionRecommendationResourcesRequest() = default ;
    DescribeNisInspectionRecommendationResourcesRequest(const DescribeNisInspectionRecommendationResourcesRequest &) = default ;
    DescribeNisInspectionRecommendationResourcesRequest(DescribeNisInspectionRecommendationResourcesRequest &&) = default ;
    DescribeNisInspectionRecommendationResourcesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionRecommendationResourcesRequest() = default ;
    DescribeNisInspectionRecommendationResourcesRequest& operator=(const DescribeNisInspectionRecommendationResourcesRequest &) = default ;
    DescribeNisInspectionRecommendationResourcesRequest& operator=(DescribeNisInspectionRecommendationResourcesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inspectionReportId_ == nullptr
        && this->language_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->recommendationCode_ == nullptr; };
    // inspectionReportId Field Functions 
    bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
    void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
    inline string getInspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
    inline DescribeNisInspectionRecommendationResourcesRequest& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeNisInspectionRecommendationResourcesRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNisInspectionRecommendationResourcesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNisInspectionRecommendationResourcesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // recommendationCode Field Functions 
    bool hasRecommendationCode() const { return this->recommendationCode_ != nullptr;};
    void deleteRecommendationCode() { this->recommendationCode_ = nullptr;};
    inline string getRecommendationCode() const { DARABONBA_PTR_GET_DEFAULT(recommendationCode_, "") };
    inline DescribeNisInspectionRecommendationResourcesRequest& setRecommendationCode(string recommendationCode) { DARABONBA_PTR_SET_VALUE(recommendationCode_, recommendationCode) };


  protected:
    // This parameter is required.
    shared_ptr<string> inspectionReportId_ {};
    shared_ptr<string> language_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> recommendationCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
