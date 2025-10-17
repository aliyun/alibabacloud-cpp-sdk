// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMANAGEDINSTANCESRESPONSEBODYINSTANCESTAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMANAGEDINSTANCESRESPONSEBODYINSTANCESTAGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeManagedInstancesResponseBodyInstancesTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeManagedInstancesResponseBodyInstancesTags& obj) { 
      DARABONBA_PTR_TO_JSON(TagKey, tagKey_);
      DARABONBA_PTR_TO_JSON(TagValue, tagValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeManagedInstancesResponseBodyInstancesTags& obj) { 
      DARABONBA_PTR_FROM_JSON(TagKey, tagKey_);
      DARABONBA_PTR_FROM_JSON(TagValue, tagValue_);
    };
    DescribeManagedInstancesResponseBodyInstancesTags() = default ;
    DescribeManagedInstancesResponseBodyInstancesTags(const DescribeManagedInstancesResponseBodyInstancesTags &) = default ;
    DescribeManagedInstancesResponseBodyInstancesTags(DescribeManagedInstancesResponseBodyInstancesTags &&) = default ;
    DescribeManagedInstancesResponseBodyInstancesTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeManagedInstancesResponseBodyInstancesTags() = default ;
    DescribeManagedInstancesResponseBodyInstancesTags& operator=(const DescribeManagedInstancesResponseBodyInstancesTags &) = default ;
    DescribeManagedInstancesResponseBodyInstancesTags& operator=(DescribeManagedInstancesResponseBodyInstancesTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tagKey_ == nullptr
        && return this->tagValue_ == nullptr; };
    // tagKey Field Functions 
    bool hasTagKey() const { return this->tagKey_ != nullptr;};
    void deleteTagKey() { this->tagKey_ = nullptr;};
    inline string tagKey() const { DARABONBA_PTR_GET_DEFAULT(tagKey_, "") };
    inline DescribeManagedInstancesResponseBodyInstancesTags& setTagKey(string tagKey) { DARABONBA_PTR_SET_VALUE(tagKey_, tagKey) };


    // tagValue Field Functions 
    bool hasTagValue() const { return this->tagValue_ != nullptr;};
    void deleteTagValue() { this->tagValue_ = nullptr;};
    inline string tagValue() const { DARABONBA_PTR_GET_DEFAULT(tagValue_, "") };
    inline DescribeManagedInstancesResponseBodyInstancesTags& setTagValue(string tagValue) { DARABONBA_PTR_SET_VALUE(tagValue_, tagValue) };


  protected:
    // The key of tag N of the managed instance. Valid values of N: 1 to 20. The tag key cannot be an empty string.
    // 
    // If a single tag is specified to query resources, up to 1,000 resources that have this tag added are returned. If multiple tags are specified to query resources, up to 1,000 resources that have all these tags added are returned. To query more than 1,000 resources that have the specified tags, call the [ListTagResources](https://help.aliyun.com/document_detail/110425.html) operation.
    // 
    // The tag key can be up to 64 characters in length and cannot contain `http://` or `https://`. The tag key cannot start with `acs:` or `aliyun`.
    std::shared_ptr<string> tagKey_ = nullptr;
    // The value of tag N of the managed instance. Valid values of N: 1 to 20. The tag value can be an empty string.
    // 
    // The tag value can be up to 128 characters in length and cannot contain `http://` or `https://`.
    std::shared_ptr<string> tagValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
