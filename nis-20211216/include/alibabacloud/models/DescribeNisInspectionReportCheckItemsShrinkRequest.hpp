// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportCheckItemsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportCheckItemsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryCode, categoryCode_);
      DARABONBA_PTR_TO_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceTypeShrink_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevelShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportCheckItemsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
      DARABONBA_PTR_FROM_JSON(InspectionReportId, inspectionReportId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceTypeShrink_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevelShrink_);
    };
    DescribeNisInspectionReportCheckItemsShrinkRequest() = default ;
    DescribeNisInspectionReportCheckItemsShrinkRequest(const DescribeNisInspectionReportCheckItemsShrinkRequest &) = default ;
    DescribeNisInspectionReportCheckItemsShrinkRequest(DescribeNisInspectionReportCheckItemsShrinkRequest &&) = default ;
    DescribeNisInspectionReportCheckItemsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportCheckItemsShrinkRequest() = default ;
    DescribeNisInspectionReportCheckItemsShrinkRequest& operator=(const DescribeNisInspectionReportCheckItemsShrinkRequest &) = default ;
    DescribeNisInspectionReportCheckItemsShrinkRequest& operator=(DescribeNisInspectionReportCheckItemsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryCode_ == nullptr
        && this->inspectionReportId_ == nullptr && this->language_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->resourceTypeShrink_ == nullptr
        && this->riskLevelShrink_ == nullptr; };
    // categoryCode Field Functions 
    bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
    void deleteCategoryCode() { this->categoryCode_ = nullptr;};
    inline string getCategoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
    inline DescribeNisInspectionReportCheckItemsShrinkRequest& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


    // inspectionReportId Field Functions 
    bool hasInspectionReportId() const { return this->inspectionReportId_ != nullptr;};
    void deleteInspectionReportId() { this->inspectionReportId_ = nullptr;};
    inline string getInspectionReportId() const { DARABONBA_PTR_GET_DEFAULT(inspectionReportId_, "") };
    inline DescribeNisInspectionReportCheckItemsShrinkRequest& setInspectionReportId(string inspectionReportId) { DARABONBA_PTR_SET_VALUE(inspectionReportId_, inspectionReportId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeNisInspectionReportCheckItemsShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribeNisInspectionReportCheckItemsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeNisInspectionReportCheckItemsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // resourceTypeShrink Field Functions 
    bool hasResourceTypeShrink() const { return this->resourceTypeShrink_ != nullptr;};
    void deleteResourceTypeShrink() { this->resourceTypeShrink_ = nullptr;};
    inline string getResourceTypeShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceTypeShrink_, "") };
    inline DescribeNisInspectionReportCheckItemsShrinkRequest& setResourceTypeShrink(string resourceTypeShrink) { DARABONBA_PTR_SET_VALUE(resourceTypeShrink_, resourceTypeShrink) };


    // riskLevelShrink Field Functions 
    bool hasRiskLevelShrink() const { return this->riskLevelShrink_ != nullptr;};
    void deleteRiskLevelShrink() { this->riskLevelShrink_ = nullptr;};
    inline string getRiskLevelShrink() const { DARABONBA_PTR_GET_DEFAULT(riskLevelShrink_, "") };
    inline DescribeNisInspectionReportCheckItemsShrinkRequest& setRiskLevelShrink(string riskLevelShrink) { DARABONBA_PTR_SET_VALUE(riskLevelShrink_, riskLevelShrink) };


  protected:
    shared_ptr<string> categoryCode_ {};
    // This parameter is required.
    shared_ptr<string> inspectionReportId_ {};
    shared_ptr<string> language_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    shared_ptr<string> resourceTypeShrink_ {};
    shared_ptr<string> riskLevelShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
