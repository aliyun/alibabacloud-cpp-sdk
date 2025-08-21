// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGRESOURCESRESPONSEBODYTAGRESOURCESTAGRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGRESOURCESRESPONSEBODYTAGRESOURCESTAGRESOURCE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeTagResourcesResponseBodyTagResourcesTagResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagResourcesResponseBodyTagResourcesTagResource& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagResourcesResponseBodyTagResourcesTagResource& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeTagResourcesResponseBodyTagResourcesTagResource() = default ;
    DescribeTagResourcesResponseBodyTagResourcesTagResource(const DescribeTagResourcesResponseBodyTagResourcesTagResource &) = default ;
    DescribeTagResourcesResponseBodyTagResourcesTagResource(DescribeTagResourcesResponseBodyTagResourcesTagResource &&) = default ;
    DescribeTagResourcesResponseBodyTagResourcesTagResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagResourcesResponseBodyTagResourcesTagResource() = default ;
    DescribeTagResourcesResponseBodyTagResourcesTagResource& operator=(const DescribeTagResourcesResponseBodyTagResourcesTagResource &) = default ;
    DescribeTagResourcesResponseBodyTagResourcesTagResource& operator=(DescribeTagResourcesResponseBodyTagResourcesTagResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->resourceType_ != nullptr && this->tagKey_ != nullptr && this->tagValue_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeTagResourcesResponseBodyTagResourcesTagResource& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeTagResourcesResponseBodyTagResourcesTagResource& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeTagResourcesResponseBodyTagResourcesTagResource& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeTagResourcesResponseBodyTagResourcesTagResource& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The ID of the Anti-DDoS Proxy (Chinese Mainland) instance.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource type. The value is fixed as **INSTANCE**, which indicates an Anti-DDoS Proxy instance.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The key of the tag that is added to the Anti-DDoS Proxy (Chinese Mainland) instance.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The value of the tag that is added to the Anti-DDoS Proxy (Chinese Mainland) instance.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
