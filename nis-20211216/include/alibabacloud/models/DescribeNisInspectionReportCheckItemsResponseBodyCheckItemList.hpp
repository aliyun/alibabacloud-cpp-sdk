// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSRESPONSEBODYCHECKITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSRESPONSEBODYCHECKITEMLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList.hpp>
#include <alibabacloud/models/DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryCode, categoryCode_);
      DARABONBA_PTR_TO_JSON(CheckItemCode, checkItemCode_);
      DARABONBA_PTR_TO_JSON(CheckItemName, checkItemName_);
      DARABONBA_PTR_TO_JSON(CheckResultList, checkResultList_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(DescriptionCode, descriptionCode_);
      DARABONBA_PTR_TO_JSON(RecommendationList, recommendationList_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryCode, categoryCode_);
      DARABONBA_PTR_FROM_JSON(CheckItemCode, checkItemCode_);
      DARABONBA_PTR_FROM_JSON(CheckItemName, checkItemName_);
      DARABONBA_PTR_FROM_JSON(CheckResultList, checkResultList_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(DescriptionCode, descriptionCode_);
      DARABONBA_PTR_FROM_JSON(RecommendationList, recommendationList_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList() = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList(const DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList &) = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList(DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList &&) = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList() = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& operator=(const DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList &) = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& operator=(DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryCode_ == nullptr
        && return this->checkItemCode_ == nullptr && return this->checkItemName_ == nullptr && return this->checkResultList_ == nullptr && return this->description_ == nullptr && return this->descriptionCode_ == nullptr
        && return this->recommendationList_ == nullptr && return this->resourceType_ == nullptr; };
    // categoryCode Field Functions 
    bool hasCategoryCode() const { return this->categoryCode_ != nullptr;};
    void deleteCategoryCode() { this->categoryCode_ = nullptr;};
    inline string categoryCode() const { DARABONBA_PTR_GET_DEFAULT(categoryCode_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& setCategoryCode(string categoryCode) { DARABONBA_PTR_SET_VALUE(categoryCode_, categoryCode) };


    // checkItemCode Field Functions 
    bool hasCheckItemCode() const { return this->checkItemCode_ != nullptr;};
    void deleteCheckItemCode() { this->checkItemCode_ = nullptr;};
    inline string checkItemCode() const { DARABONBA_PTR_GET_DEFAULT(checkItemCode_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& setCheckItemCode(string checkItemCode) { DARABONBA_PTR_SET_VALUE(checkItemCode_, checkItemCode) };


    // checkItemName Field Functions 
    bool hasCheckItemName() const { return this->checkItemName_ != nullptr;};
    void deleteCheckItemName() { this->checkItemName_ = nullptr;};
    inline string checkItemName() const { DARABONBA_PTR_GET_DEFAULT(checkItemName_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& setCheckItemName(string checkItemName) { DARABONBA_PTR_SET_VALUE(checkItemName_, checkItemName) };


    // checkResultList Field Functions 
    bool hasCheckResultList() const { return this->checkResultList_ != nullptr;};
    void deleteCheckResultList() { this->checkResultList_ = nullptr;};
    inline const vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList> & checkResultList() const { DARABONBA_PTR_GET_CONST(checkResultList_, vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList>) };
    inline vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList> checkResultList() { DARABONBA_PTR_GET(checkResultList_, vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList>) };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& setCheckResultList(const vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList> & checkResultList) { DARABONBA_PTR_SET_VALUE(checkResultList_, checkResultList) };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& setCheckResultList(vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList> && checkResultList) { DARABONBA_PTR_SET_RVALUE(checkResultList_, checkResultList) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // descriptionCode Field Functions 
    bool hasDescriptionCode() const { return this->descriptionCode_ != nullptr;};
    void deleteDescriptionCode() { this->descriptionCode_ = nullptr;};
    inline string descriptionCode() const { DARABONBA_PTR_GET_DEFAULT(descriptionCode_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& setDescriptionCode(string descriptionCode) { DARABONBA_PTR_SET_VALUE(descriptionCode_, descriptionCode) };


    // recommendationList Field Functions 
    bool hasRecommendationList() const { return this->recommendationList_ != nullptr;};
    void deleteRecommendationList() { this->recommendationList_ = nullptr;};
    inline const vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList> & recommendationList() const { DARABONBA_PTR_GET_CONST(recommendationList_, vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList>) };
    inline vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList> recommendationList() { DARABONBA_PTR_GET(recommendationList_, vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList>) };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& setRecommendationList(const vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList> & recommendationList) { DARABONBA_PTR_SET_VALUE(recommendationList_, recommendationList) };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& setRecommendationList(vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList> && recommendationList) { DARABONBA_PTR_SET_RVALUE(recommendationList_, recommendationList) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemList& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    std::shared_ptr<string> categoryCode_ = nullptr;
    std::shared_ptr<string> checkItemCode_ = nullptr;
    std::shared_ptr<string> checkItemName_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList>> checkResultList_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> descriptionCode_ = nullptr;
    std::shared_ptr<vector<Models::DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListRecommendationList>> recommendationList_ = nullptr;
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
