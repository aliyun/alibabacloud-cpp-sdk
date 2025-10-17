// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCEBYTAGSRESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCEBYTAGSRESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceByTagsResponseBodyResourcesResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class DescribeResourceByTagsResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceByTagsResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceByTagsResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeResourceByTagsResponseBodyResources() = default ;
    DescribeResourceByTagsResponseBodyResources(const DescribeResourceByTagsResponseBodyResources &) = default ;
    DescribeResourceByTagsResponseBodyResources(DescribeResourceByTagsResponseBodyResources &&) = default ;
    DescribeResourceByTagsResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceByTagsResponseBodyResources() = default ;
    DescribeResourceByTagsResponseBodyResources& operator=(const DescribeResourceByTagsResponseBodyResources &) = default ;
    DescribeResourceByTagsResponseBodyResources& operator=(DescribeResourceByTagsResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->resource_ == nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeResourceByTagsResponseBodyResourcesResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeResourceByTagsResponseBodyResourcesResource>) };
    inline vector<Models::DescribeResourceByTagsResponseBodyResourcesResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeResourceByTagsResponseBodyResourcesResource>) };
    inline DescribeResourceByTagsResponseBodyResources& setResource(const vector<Models::DescribeResourceByTagsResponseBodyResourcesResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeResourceByTagsResponseBodyResources& setResource(vector<Models::DescribeResourceByTagsResponseBodyResourcesResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeResourceByTagsResponseBodyResourcesResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
