// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCETAGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPSRESPONSEBODYRESOURCESRESOURCETAGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeMonitorGroupsResponseBodyResourcesResourceTagsTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupsResponseBodyResourcesResourceTags : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupsResponseBodyResourcesResourceTags& obj) { 
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupsResponseBodyResourcesResourceTags& obj) { 
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeMonitorGroupsResponseBodyResourcesResourceTags() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTags(const DescribeMonitorGroupsResponseBodyResourcesResourceTags &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTags(DescribeMonitorGroupsResponseBodyResourcesResourceTags &&) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTags(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupsResponseBodyResourcesResourceTags() = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTags& operator=(const DescribeMonitorGroupsResponseBodyResourcesResourceTags &) = default ;
    DescribeMonitorGroupsResponseBodyResourcesResourceTags& operator=(DescribeMonitorGroupsResponseBodyResourcesResourceTags &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->tag_ == nullptr; };
    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTagsTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTagsTag>) };
    inline vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTagsTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTagsTag>) };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceTags& setTag(const vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTagsTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeMonitorGroupsResponseBodyResourcesResourceTags& setTag(vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTagsTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<vector<Models::DescribeMonitorGroupsResponseBodyResourcesResourceTagsTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
