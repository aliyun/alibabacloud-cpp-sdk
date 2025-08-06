// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVODTAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVODTAGRESOURCESRESPONSEBODYTAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVodTagResourcesResponseBodyTagResourcesTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribeVodTagResourcesResponseBodyTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVodTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVodTagResourcesResponseBodyTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeVodTagResourcesResponseBodyTagResources() = default ;
    DescribeVodTagResourcesResponseBodyTagResources(const DescribeVodTagResourcesResponseBodyTagResources &) = default ;
    DescribeVodTagResourcesResponseBodyTagResources(DescribeVodTagResourcesResponseBodyTagResources &&) = default ;
    DescribeVodTagResourcesResponseBodyTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVodTagResourcesResponseBodyTagResources() = default ;
    DescribeVodTagResourcesResponseBodyTagResources& operator=(const DescribeVodTagResourcesResponseBodyTagResources &) = default ;
    DescribeVodTagResourcesResponseBodyTagResources& operator=(DescribeVodTagResourcesResponseBodyTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceId_ != nullptr
        && this->tag_ != nullptr; };
    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeVodTagResourcesResponseBodyTagResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<Models::DescribeVodTagResourcesResponseBodyTagResourcesTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<Models::DescribeVodTagResourcesResponseBodyTagResourcesTag>) };
    inline vector<Models::DescribeVodTagResourcesResponseBodyTagResourcesTag> tag() { DARABONBA_PTR_GET(tag_, vector<Models::DescribeVodTagResourcesResponseBodyTagResourcesTag>) };
    inline DescribeVodTagResourcesResponseBodyTagResources& setTag(const vector<Models::DescribeVodTagResourcesResponseBodyTagResourcesTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeVodTagResourcesResponseBodyTagResources& setTag(vector<Models::DescribeVodTagResourcesResponseBodyTagResourcesTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<string> resourceId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeVodTagResourcesResponseBodyTagResourcesTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
