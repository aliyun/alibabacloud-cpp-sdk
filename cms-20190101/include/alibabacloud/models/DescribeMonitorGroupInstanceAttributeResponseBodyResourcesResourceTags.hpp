// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESPONSEBODYRESOURCESRESOURCETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESPONSEBODYRESOURCESRESOURCETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags() = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags(const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags &) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags(DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags &&) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags() = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags& operator=(const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags &) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags& operator=(DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tag_ != nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTagsTag>) };
    inline vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTagsTag>) };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags& setTag(const vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags& setTag(vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
