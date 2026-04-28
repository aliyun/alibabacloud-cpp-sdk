// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTCHECKADVICESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTCHECKADVICESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeCostCheckAdvicesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostCheckAdvicesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeAliyunIdList, assumeAliyunIdListShrink_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdList, resourceGroupIdListShrink_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeysShrink_);
      DARABONBA_PTR_TO_JSON(TagList, tagListShrink_);
      DARABONBA_PTR_TO_JSON(TagValues, tagValuesShrink_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostCheckAdvicesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeAliyunIdList, assumeAliyunIdListShrink_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdList, resourceGroupIdListShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeysShrink_);
      DARABONBA_PTR_FROM_JSON(TagList, tagListShrink_);
      DARABONBA_PTR_FROM_JSON(TagValues, tagValuesShrink_);
    };
    DescribeCostCheckAdvicesShrinkRequest() = default ;
    DescribeCostCheckAdvicesShrinkRequest(const DescribeCostCheckAdvicesShrinkRequest &) = default ;
    DescribeCostCheckAdvicesShrinkRequest(DescribeCostCheckAdvicesShrinkRequest &&) = default ;
    DescribeCostCheckAdvicesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostCheckAdvicesShrinkRequest() = default ;
    DescribeCostCheckAdvicesShrinkRequest& operator=(const DescribeCostCheckAdvicesShrinkRequest &) = default ;
    DescribeCostCheckAdvicesShrinkRequest& operator=(DescribeCostCheckAdvicesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeAliyunIdListShrink_ == nullptr
        && this->checkId_ == nullptr && this->checkPlanId_ == nullptr && this->language_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr
        && this->regionIdsShrink_ == nullptr && this->resourceGroupIdListShrink_ == nullptr && this->resourceId_ == nullptr && this->resourceIdsShrink_ == nullptr && this->resourceName_ == nullptr
        && this->severity_ == nullptr && this->tagKeysShrink_ == nullptr && this->tagListShrink_ == nullptr && this->tagValuesShrink_ == nullptr; };
    // assumeAliyunIdListShrink Field Functions 
    bool hasAssumeAliyunIdListShrink() const { return this->assumeAliyunIdListShrink_ != nullptr;};
    void deleteAssumeAliyunIdListShrink() { this->assumeAliyunIdListShrink_ = nullptr;};
    inline string getAssumeAliyunIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(assumeAliyunIdListShrink_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setAssumeAliyunIdListShrink(string assumeAliyunIdListShrink) { DARABONBA_PTR_SET_VALUE(assumeAliyunIdListShrink_, assumeAliyunIdListShrink) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // checkPlanId Field Functions 
    bool hasCheckPlanId() const { return this->checkPlanId_ != nullptr;};
    void deleteCheckPlanId() { this->checkPlanId_ = nullptr;};
    inline int64_t getCheckPlanId() const { DARABONBA_PTR_GET_DEFAULT(checkPlanId_, 0L) };
    inline DescribeCostCheckAdvicesShrinkRequest& setCheckPlanId(int64_t checkPlanId) { DARABONBA_PTR_SET_VALUE(checkPlanId_, checkPlanId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeCostCheckAdvicesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeCostCheckAdvicesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionIdsShrink Field Functions 
    bool hasRegionIdsShrink() const { return this->regionIdsShrink_ != nullptr;};
    void deleteRegionIdsShrink() { this->regionIdsShrink_ = nullptr;};
    inline string getRegionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(regionIdsShrink_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setRegionIdsShrink(string regionIdsShrink) { DARABONBA_PTR_SET_VALUE(regionIdsShrink_, regionIdsShrink) };


    // resourceGroupIdListShrink Field Functions 
    bool hasResourceGroupIdListShrink() const { return this->resourceGroupIdListShrink_ != nullptr;};
    void deleteResourceGroupIdListShrink() { this->resourceGroupIdListShrink_ = nullptr;};
    inline string getResourceGroupIdListShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupIdListShrink_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setResourceGroupIdListShrink(string resourceGroupIdListShrink) { DARABONBA_PTR_SET_VALUE(resourceGroupIdListShrink_, resourceGroupIdListShrink) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceIdsShrink Field Functions 
    bool hasResourceIdsShrink() const { return this->resourceIdsShrink_ != nullptr;};
    void deleteResourceIdsShrink() { this->resourceIdsShrink_ = nullptr;};
    inline string getResourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(resourceIdsShrink_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setResourceIdsShrink(string resourceIdsShrink) { DARABONBA_PTR_SET_VALUE(resourceIdsShrink_, resourceIdsShrink) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // tagKeysShrink Field Functions 
    bool hasTagKeysShrink() const { return this->tagKeysShrink_ != nullptr;};
    void deleteTagKeysShrink() { this->tagKeysShrink_ = nullptr;};
    inline string getTagKeysShrink() const { DARABONBA_PTR_GET_DEFAULT(tagKeysShrink_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setTagKeysShrink(string tagKeysShrink) { DARABONBA_PTR_SET_VALUE(tagKeysShrink_, tagKeysShrink) };


    // tagListShrink Field Functions 
    bool hasTagListShrink() const { return this->tagListShrink_ != nullptr;};
    void deleteTagListShrink() { this->tagListShrink_ = nullptr;};
    inline string getTagListShrink() const { DARABONBA_PTR_GET_DEFAULT(tagListShrink_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setTagListShrink(string tagListShrink) { DARABONBA_PTR_SET_VALUE(tagListShrink_, tagListShrink) };


    // tagValuesShrink Field Functions 
    bool hasTagValuesShrink() const { return this->tagValuesShrink_ != nullptr;};
    void deleteTagValuesShrink() { this->tagValuesShrink_ = nullptr;};
    inline string getTagValuesShrink() const { DARABONBA_PTR_GET_DEFAULT(tagValuesShrink_, "") };
    inline DescribeCostCheckAdvicesShrinkRequest& setTagValuesShrink(string tagValuesShrink) { DARABONBA_PTR_SET_VALUE(tagValuesShrink_, tagValuesShrink) };


  protected:
    shared_ptr<string> assumeAliyunIdListShrink_ {};
    shared_ptr<string> checkId_ {};
    shared_ptr<int64_t> checkPlanId_ {};
    shared_ptr<string> language_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionIdsShrink_ {};
    shared_ptr<string> resourceGroupIdListShrink_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<string> resourceIdsShrink_ {};
    shared_ptr<string> resourceName_ {};
    shared_ptr<string> severity_ {};
    shared_ptr<string> tagKeysShrink_ {};
    shared_ptr<string> tagListShrink_ {};
    shared_ptr<string> tagValuesShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
