// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSREQUEST_HPP_
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
  class DescribeNisInspectionReportCheckItemsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportCheckItemsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryCode, categoryCode_);
      DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportCheckItemsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
      DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    DescribeNisInspectionReportCheckItemsRequest() = default ;
    DescribeNisInspectionReportCheckItemsRequest(const DescribeNisInspectionReportCheckItemsRequest &) = default ;
    DescribeNisInspectionReportCheckItemsRequest(DescribeNisInspectionReportCheckItemsRequest &&) = default ;
    DescribeNisInspectionReportCheckItemsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportCheckItemsRequest() = default ;
    DescribeNisInspectionReportCheckItemsRequest& operator=(const DescribeNisInspectionReportCheckItemsRequest &) = default ;
    DescribeNisInspectionReportCheckItemsRequest& operator=(DescribeNisInspectionReportCheckItemsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryCode_ == nullptr
        && return this->inspectionReportId_ == nullptr && return this->language_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->resourceType_ == nullptr
        && return this->riskLevel_ == nullptr; };
    // categoryCode Field Functions 
    bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
    void deleteCategoryCode() { this->categoryCode_ = nullptr;};
    inline string categoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
    inline DescribeNisInspectionReportCheckItemsRequest& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


    // inspectionReportId Field Functions 
    bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
    void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
    inline string inspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
    inline DescribeNisInspectionReportCheckItemsRequest& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeNisInspectionReportCheckItemsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNisInspectionReportCheckItemsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNisInspectionReportCheckItemsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline const vector<string> & resourceType() const { DARABONBA_PTR_GET_CONST(resourceType_, vector<string>) };
    inline vector<string> resourceType() { DARABONBA_PTR_GET(resourceType_, vector<string>) };
    inline DescribeNisInspectionReportCheckItemsRequest& setResourceType(const vector<string> & resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };
    inline DescribeNisInspectionReportCheckItemsRequest& setResourceType(vector<string> && resourceType) { DARABONBA_PTR_SET_RVALUE(resourceType_, resourceType) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline const vector<string> & riskLevel() const { DARABONBA_PTR_GET_CONST(riskLevel_, vector<string>) };
    inline vector<string> riskLevel() { DARABONBA_PTR_GET(riskLevel_, vector<string>) };
    inline DescribeNisInspectionReportCheckItemsRequest& setRiskLevel(const vector<string> & riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };
    inline DescribeNisInspectionReportCheckItemsRequest& setRiskLevel(vector<string> && riskLevel) { DARABONBA_PTR_SET_RVALUE(riskLevel_, riskLevel) };


  protected:
    std::shared_ptr<string> categoryCode_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> inspectionReportId_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    std::shared_ptr<string> nextToken_ = nullptr;
    std::shared_ptr<vector<string>> resourceType_ = nullptr;
    std::shared_ptr<vector<string>> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
