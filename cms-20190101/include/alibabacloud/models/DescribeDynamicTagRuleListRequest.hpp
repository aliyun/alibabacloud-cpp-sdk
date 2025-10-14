// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDYNAMICTAGRULELISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeDynamicTagRuleListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDynamicTagRuleListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DynamicTagRuleId, dynamicTagRuleId_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagRegionId, tagRegionId_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDynamicTagRuleListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DynamicTagRuleId, dynamicTagRuleId_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagRegionId, tagRegionId_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeDynamicTagRuleListRequest() = default ;
    DescribeDynamicTagRuleListRequest(const DescribeDynamicTagRuleListRequest &) = default ;
    DescribeDynamicTagRuleListRequest(DescribeDynamicTagRuleListRequest &&) = default ;
    DescribeDynamicTagRuleListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDynamicTagRuleListRequest() = default ;
    DescribeDynamicTagRuleListRequest& operator=(const DescribeDynamicTagRuleListRequest &) = default ;
    DescribeDynamicTagRuleListRequest& operator=(DescribeDynamicTagRuleListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dynamicTagRuleId_ == nullptr
        && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->tagKey_ == nullptr && return this->tagRegionId_ == nullptr && return this->tagValue_ == nullptr; };
    // dynamicTagRuleId Field Functions 
    bool hasDynamicTagRuleId() const { return this->dynamicTagRuleId_ != nullptr;};
    void deleteDynamicTagRuleId() { this->dynamicTagRuleId_ = nullptr;};
    inline string dynamicTagRuleId() const { DARABONBA_PTR_GET_DEFAULT(dynamicTagRuleId_, "") };
    inline DescribeDynamicTagRuleListRequest& setDynamicTagRuleId(string dynamicTagRuleId) { DARABONBA_PTR_SET_VALUE(dynamicTagRuleId_, dynamicTagRuleId) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline DescribeDynamicTagRuleListRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeDynamicTagRuleListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeDynamicTagRuleListRequest& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagRegionId Field Functions 
    bool hasTagRegionId() const { return this->tagRegionId_ != nullptr;};
    void deleteTagRegionId() { this->tagRegionId_ = nullptr;};
    inline string tagRegionId() const { DARABONBA_PTR_GET_DEFAULT(tagRegionId_, "") };
    inline DescribeDynamicTagRuleListRequest& setTagRegionId(string tagRegionId) { DARABONBA_PTR_SET_VALUE(tagRegionId_, tagRegionId) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeDynamicTagRuleListRequest& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The ID of the tag rule.
    std::shared_ptr<string> dynamicTagRuleId_ = nullptr;
    // The number of the page to return.
    // 
    // Pages start from page 1. Default value: 1.
    std::shared_ptr<string> pageNumber_ = nullptr;
    // The number of entries to return on each page.
    // 
    // Minimum value: 1. Default value: 30.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The tag key.
    // 
    // For more information about how to obtain a tag key, see [DescribeTagKeyList](https://help.aliyun.com/document_detail/145558.html).
    std::shared_ptr<string> tagKey_ = nullptr;
    // The ID of the region to which the tags belong.
    std::shared_ptr<string> tagRegionId_ = nullptr;
    // The tag value.
    // 
    // For more information about how to obtain a tag value, see [DescribeTagKeyList](https://help.aliyun.com/document_detail/145557.html).
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
