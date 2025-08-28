// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETAGSRESPONSEBODYTAGRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeTagsResponseBodyTagResourcesTagResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeTagsResponseBodyTagResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTagsResponseBodyTagResources& obj) { 
      DARABONBA_PTR_TO_JSON(TagResource, tagResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTagsResponseBodyTagResources& obj) { 
      DARABONBA_PTR_FROM_JSON(TagResource, tagResource_);
    };
    DescribeTagsResponseBodyTagResources() = default ;
    DescribeTagsResponseBodyTagResources(const DescribeTagsResponseBodyTagResources &) = default ;
    DescribeTagsResponseBodyTagResources(DescribeTagsResponseBodyTagResources &&) = default ;
    DescribeTagsResponseBodyTagResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTagsResponseBodyTagResources() = default ;
    DescribeTagsResponseBodyTagResources& operator=(const DescribeTagsResponseBodyTagResources &) = default ;
    DescribeTagsResponseBodyTagResources& operator=(DescribeTagsResponseBodyTagResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->tagResource_ != nullptr; };
    // tagResource Field Functions 
    bool hasTagResource() const { return this->tagResource_ != nullptr;};
    void deleteTagResource() { this->tagResource_ = nullptr;};
    inline const vector<Models::DescribeTagsResponseBodyTagResourcesTagResource> & tagResource() const { DARABONBA_PTR_GET_CONST(tagResource_, vector<Models::DescribeTagsResponseBodyTagResourcesTagResource>) };
    inline vector<Models::DescribeTagsResponseBodyTagResourcesTagResource> tagResource() { DARABONBA_PTR_GET(tagResource_, vector<Models::DescribeTagsResponseBodyTagResourcesTagResource>) };
    inline DescribeTagsResponseBodyTagResources& setTagResource(const vector<Models::DescribeTagsResponseBodyTagResourcesTagResource> & tagResource) { DARABONBA_PTR_SET_VALUE(tagResource_, tagResource) };
    inline DescribeTagsResponseBodyTagResources& setTagResource(vector<Models::DescribeTagsResponseBodyTagResourcesTagResource> && tagResource) { DARABONBA_PTR_SET_RVALUE(tagResource_, tagResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeTagsResponseBodyTagResourcesTagResource>> tagResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
