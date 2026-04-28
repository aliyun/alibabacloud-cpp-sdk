// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECOSTCHECKRESULTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECOSTCHECKRESULTSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeCostCheckResultsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCostCheckResultsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeAliyunIdList, assumeAliyunIdList_);
      DARABONBA_PTR_TO_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_TO_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_TO_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_TO_JSON(ResourceGroupIdList, resourceGroupIdList_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_TO_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_TO_JSON(Severity, severity_);
      DARABONBA_PTR_TO_JSON(TagKeys, tagKeys_);
      DARABONBA_PTR_TO_JSON(TagList, tagList_);
      DARABONBA_PTR_TO_JSON(TagValues, tagValues_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCostCheckResultsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeAliyunIdList, assumeAliyunIdList_);
      DARABONBA_PTR_FROM_JSON(CheckIds, checkIds_);
      DARABONBA_PTR_FROM_JSON(CheckPlanId, checkPlanId_);
      DARABONBA_PTR_FROM_JSON(GroupBy, groupBy_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionIds, regionIds_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupIdList, resourceGroupIdList_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceIds, resourceIds_);
      DARABONBA_PTR_FROM_JSON(ResourceName, resourceName_);
      DARABONBA_PTR_FROM_JSON(Severity, severity_);
      DARABONBA_PTR_FROM_JSON(TagKeys, tagKeys_);
      DARABONBA_PTR_FROM_JSON(TagList, tagList_);
      DARABONBA_PTR_FROM_JSON(TagValues, tagValues_);
    };
    DescribeCostCheckResultsRequest() = default ;
    DescribeCostCheckResultsRequest(const DescribeCostCheckResultsRequest &) = default ;
    DescribeCostCheckResultsRequest(DescribeCostCheckResultsRequest &&) = default ;
    DescribeCostCheckResultsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCostCheckResultsRequest() = default ;
    DescribeCostCheckResultsRequest& operator=(const DescribeCostCheckResultsRequest &) = default ;
    DescribeCostCheckResultsRequest& operator=(DescribeCostCheckResultsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TagList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TagList& obj) { 
        DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
        DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
      };
      friend void from_json(const Darabonba::Json& j, TagList& obj) { 
        DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
        DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
      };
      TagList() = default ;
      TagList(const TagList &) = default ;
      TagList(TagList &&) = default ;
      TagList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TagList() = default ;
      TagList& operator=(const TagList &) = default ;
      TagList& operator=(TagList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tagKey_ == nullptr
        && this->tagValue_ == nullptr; };
      // tagKey Field Functions 
      bool hasTagKey() const { return this->tagKey_ != nullptr;};
      void deleteTagKey() { this->tagKey_ = nullptr;};
      inline string getTagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
      inline TagList& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


      // tagValue Field Functions 
      bool hasTagValue() const { return this->tagValue_ != nullptr;};
      void deleteTagValue() { this->tagValue_ = nullptr;};
      inline const vector<string> & getTagValue() const { DARABONBA_PTR_GET_CONST(tagValue_, vector<string>) };
      inline vector<string> getTagValue() { DARABONBA_PTR_GET(tagValue_, vector<string>) };
      inline TagList& setTagValue(const vector<string> & tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };
      inline TagList& setTagValue(vector<string> && tagValue) { DARABONBA_PTR_SET_RVALUE(tagValue_, tagValue) };


    protected:
      shared_ptr<string> tagKey_ {};
      shared_ptr<vector<string>> tagValue_ {};
    };

    virtual bool empty() const override { return this->assumeAliyunIdList_ == nullptr
        && this->checkIds_ == nullptr && this->checkPlanId_ == nullptr && this->groupBy_ == nullptr && this->language_ == nullptr && this->product_ == nullptr
        && this->regionIds_ == nullptr && this->resourceGroupIdList_ == nullptr && this->resourceId_ == nullptr && this->resourceIds_ == nullptr && this->resourceName_ == nullptr
        && this->severity_ == nullptr && this->tagKeys_ == nullptr && this->tagList_ == nullptr && this->tagValues_ == nullptr; };
    // assumeAliyunIdList Field Functions 
    bool hasAssumeAliyunIdList() const { return this->assumeAliyunIdList_ != nullptr;};
    void deleteAssumeAliyunIdList() { this->assumeAliyunIdList_ = nullptr;};
    inline const vector<int64_t> & getAssumeAliyunIdList() const { DARABONBA_PTR_GET_CONST(assumeAliyunIdList_, vector<int64_t>) };
    inline vector<int64_t> getAssumeAliyunIdList() { DARABONBA_PTR_GET(assumeAliyunIdList_, vector<int64_t>) };
    inline DescribeCostCheckResultsRequest& setAssumeAliyunIdList(const vector<int64_t> & assumeAliyunIdList) { DARABONBA_PTR_SET_VALUE(assumeAliyunIdList_, assumeAliyunIdList) };
    inline DescribeCostCheckResultsRequest& setAssumeAliyunIdList(vector<int64_t> && assumeAliyunIdList) { DARABONBA_PTR_SET_RVALUE(assumeAliyunIdList_, assumeAliyunIdList) };


    // checkIds Field Functions 
    bool hasCheckIds() const { return this->checkIds_ != nullptr;};
    void deleteCheckIds() { this->checkIds_ = nullptr;};
    inline const vector<string> & getCheckIds() const { DARABONBA_PTR_GET_CONST(checkIds_, vector<string>) };
    inline vector<string> getCheckIds() { DARABONBA_PTR_GET(checkIds_, vector<string>) };
    inline DescribeCostCheckResultsRequest& setCheckIds(const vector<string> & checkIds) { DARABONBA_PTR_SET_VALUE(checkIds_, checkIds) };
    inline DescribeCostCheckResultsRequest& setCheckIds(vector<string> && checkIds) { DARABONBA_PTR_SET_RVALUE(checkIds_, checkIds) };


    // checkPlanId Field Functions 
    bool hasCheckPlanId() const { return this->checkPlanId_ != nullptr;};
    void deleteCheckPlanId() { this->checkPlanId_ = nullptr;};
    inline int64_t getCheckPlanId() const { DARABONBA_PTR_GET_DEFAULT(checkPlanId_, 0L) };
    inline DescribeCostCheckResultsRequest& setCheckPlanId(int64_t checkPlanId) { DARABONBA_PTR_SET_VALUE(checkPlanId_, checkPlanId) };


    // groupBy Field Functions 
    bool hasGroupBy() const { return this->groupBy_ != nullptr;};
    void deleteGroupBy() { this->groupBy_ = nullptr;};
    inline string getGroupBy() const { DARABONBA_PTR_GET_DEFAULT(groupBy_, "") };
    inline DescribeCostCheckResultsRequest& setGroupBy(string groupBy) { DARABONBA_PTR_SET_VALUE(groupBy_, groupBy) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeCostCheckResultsRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeCostCheckResultsRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionIds Field Functions 
    bool hasRegionIds() const { return this->regionIds_ != nullptr;};
    void deleteRegionIds() { this->regionIds_ = nullptr;};
    inline const vector<string> & getRegionIds() const { DARABONBA_PTR_GET_CONST(regionIds_, vector<string>) };
    inline vector<string> getRegionIds() { DARABONBA_PTR_GET(regionIds_, vector<string>) };
    inline DescribeCostCheckResultsRequest& setRegionIds(const vector<string> & regionIds) { DARABONBA_PTR_SET_VALUE(regionIds_, regionIds) };
    inline DescribeCostCheckResultsRequest& setRegionIds(vector<string> && regionIds) { DARABONBA_PTR_SET_RVALUE(regionIds_, regionIds) };


    // resourceGroupIdList Field Functions 
    bool hasResourceGroupIdList() const { return this->resourceGroupIdList_ != nullptr;};
    void deleteResourceGroupIdList() { this->resourceGroupIdList_ = nullptr;};
    inline const vector<string> & getResourceGroupIdList() const { DARABONBA_PTR_GET_CONST(resourceGroupIdList_, vector<string>) };
    inline vector<string> getResourceGroupIdList() { DARABONBA_PTR_GET(resourceGroupIdList_, vector<string>) };
    inline DescribeCostCheckResultsRequest& setResourceGroupIdList(const vector<string> & resourceGroupIdList) { DARABONBA_PTR_SET_VALUE(resourceGroupIdList_, resourceGroupIdList) };
    inline DescribeCostCheckResultsRequest& setResourceGroupIdList(vector<string> && resourceGroupIdList) { DARABONBA_PTR_SET_RVALUE(resourceGroupIdList_, resourceGroupIdList) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeCostCheckResultsRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceIds Field Functions 
    bool hasResourceIds() const { return this->resourceIds_ != nullptr;};
    void deleteResourceIds() { this->resourceIds_ = nullptr;};
    inline const vector<string> & getResourceIds() const { DARABONBA_PTR_GET_CONST(resourceIds_, vector<string>) };
    inline vector<string> getResourceIds() { DARABONBA_PTR_GET(resourceIds_, vector<string>) };
    inline DescribeCostCheckResultsRequest& setResourceIds(const vector<string> & resourceIds) { DARABONBA_PTR_SET_VALUE(resourceIds_, resourceIds) };
    inline DescribeCostCheckResultsRequest& setResourceIds(vector<string> && resourceIds) { DARABONBA_PTR_SET_RVALUE(resourceIds_, resourceIds) };


    // resourceName Field Functions 
    bool hasResourceName() const { return this->resourceName_ != nullptr;};
    void deleteResourceName() { this->resourceName_ = nullptr;};
    inline string getResourceName() const { DARABONBA_PTR_GET_DEFAULT(resourceName_, "") };
    inline DescribeCostCheckResultsRequest& setResourceName(string resourceName) { DARABONBA_PTR_SET_VALUE(resourceName_, resourceName) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline int32_t getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, 0) };
    inline DescribeCostCheckResultsRequest& setSeverity(int32_t severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // tagKeys Field Functions 
    bool hasTagKeys() const { return this->tagKeys_ != nullptr;};
    void deleteTagKeys() { this->tagKeys_ = nullptr;};
    inline const vector<string> & getTagKeys() const { DARABONBA_PTR_GET_CONST(tagKeys_, vector<string>) };
    inline vector<string> getTagKeys() { DARABONBA_PTR_GET(tagKeys_, vector<string>) };
    inline DescribeCostCheckResultsRequest& setTagKeys(const vector<string> & tagKeys) { DARABONBA_PTR_SET_VALUE(tagKeys_, tagKeys) };
    inline DescribeCostCheckResultsRequest& setTagKeys(vector<string> && tagKeys) { DARABONBA_PTR_SET_RVALUE(tagKeys_, tagKeys) };


    // tagList Field Functions 
    bool hasTagList() const { return this->tagList_ != nullptr;};
    void deleteTagList() { this->tagList_ = nullptr;};
    inline const vector<DescribeCostCheckResultsRequest::TagList> & getTagList() const { DARABONBA_PTR_GET_CONST(tagList_, vector<DescribeCostCheckResultsRequest::TagList>) };
    inline vector<DescribeCostCheckResultsRequest::TagList> getTagList() { DARABONBA_PTR_GET(tagList_, vector<DescribeCostCheckResultsRequest::TagList>) };
    inline DescribeCostCheckResultsRequest& setTagList(const vector<DescribeCostCheckResultsRequest::TagList> & tagList) { DARABONBA_PTR_SET_VALUE(tagList_, tagList) };
    inline DescribeCostCheckResultsRequest& setTagList(vector<DescribeCostCheckResultsRequest::TagList> && tagList) { DARABONBA_PTR_SET_RVALUE(tagList_, tagList) };


    // tagValues Field Functions 
    bool hasTagValues() const { return this->tagValues_ != nullptr;};
    void deleteTagValues() { this->tagValues_ = nullptr;};
    inline const vector<string> & getTagValues() const { DARABONBA_PTR_GET_CONST(tagValues_, vector<string>) };
    inline vector<string> getTagValues() { DARABONBA_PTR_GET(tagValues_, vector<string>) };
    inline DescribeCostCheckResultsRequest& setTagValues(const vector<string> & tagValues) { DARABONBA_PTR_SET_VALUE(tagValues_, tagValues) };
    inline DescribeCostCheckResultsRequest& setTagValues(vector<string> && tagValues) { DARABONBA_PTR_SET_RVALUE(tagValues_, tagValues) };


  protected:
    shared_ptr<vector<int64_t>> assumeAliyunIdList_ {};
    shared_ptr<vector<string>> checkIds_ {};
    shared_ptr<int64_t> checkPlanId_ {};
    shared_ptr<string> groupBy_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> product_ {};
    shared_ptr<vector<string>> regionIds_ {};
    shared_ptr<vector<string>> resourceGroupIdList_ {};
    shared_ptr<string> resourceId_ {};
    shared_ptr<vector<string>> resourceIds_ {};
    shared_ptr<string> resourceName_ {};
    shared_ptr<int32_t> severity_ {};
    shared_ptr<vector<string>> tagKeys_ {};
    shared_ptr<vector<DescribeCostCheckResultsRequest::TagList>> tagList_ {};
    shared_ptr<vector<string>> tagValues_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
