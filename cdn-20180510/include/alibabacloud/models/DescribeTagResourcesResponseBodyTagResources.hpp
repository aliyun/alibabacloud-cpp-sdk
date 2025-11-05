// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagResourcesResponseBodyTagResourcesTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cdn20180510
{
namespace Models
{
  class DescribeTagResourcesResponseBodyTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeTagResourcesResponseBodyTagResources() = default ;
    DescribeTagResourcesResponseBodyTagResources(const DescribeTagResourcesResponseBodyTagResources &) = default ;
    DescribeTagResourcesResponseBodyTagResources(DescribeTagResourcesResponseBodyTagResources &&) = default ;
    DescribeTagResourcesResponseBodyTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagResourcesResponseBodyTagResources() = default ;
    DescribeTagResourcesResponseBodyTagResources& operator=(const DescribeTagResourcesResponseBodyTagResources &) = default ;
    DescribeTagResourcesResponseBodyTagResources& operator=(DescribeTagResourcesResponseBodyTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resourceId_ == nullptr
        && return this->tag_ == nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeTagResourcesResponseBodyTagResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeTagResourcesResponseBodyTagResourcesTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeTagResourcesResponseBodyTagResourcesTag>) };
    inline vector<Models::DescribeTagResourcesResponseBodyTagResourcesTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeTagResourcesResponseBodyTagResourcesTag>) };
    inline DescribeTagResourcesResponseBodyTagResources& setTag(const vector<Models::DescribeTagResourcesResponseBodyTagResourcesTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeTagResourcesResponseBodyTagResources& setTag(vector<Models::DescribeTagResourcesResponseBodyTagResourcesTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The key-value pair of the tag.
    std::shared_ptr<vector<Models::DescribeTagResourcesResponseBodyTagResourcesTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cdn20180510
#endif
