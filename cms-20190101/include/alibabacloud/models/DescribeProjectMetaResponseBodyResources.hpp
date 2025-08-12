// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPROJECTMETARESPONSEBODYRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPROJECTMETARESPONSEBODYRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeProjectMetaResponseBodyResourcesResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeProjectMetaResponseBodyResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeProjectMetaResponseBodyResources& obj) { 
      DARABONBA_PTR_TO_JSON(Resource, resource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeProjectMetaResponseBodyResources& obj) { 
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
    };
    DescribeProjectMetaResponseBodyResources() = default ;
    DescribeProjectMetaResponseBodyResources(const DescribeProjectMetaResponseBodyResources &) = default ;
    DescribeProjectMetaResponseBodyResources(DescribeProjectMetaResponseBodyResources &&) = default ;
    DescribeProjectMetaResponseBodyResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeProjectMetaResponseBodyResources() = default ;
    DescribeProjectMetaResponseBodyResources& operator=(const DescribeProjectMetaResponseBodyResources &) = default ;
    DescribeProjectMetaResponseBodyResources& operator=(DescribeProjectMetaResponseBodyResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resource_ != nullptr; };
    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const vector<Models::DescribeProjectMetaResponseBodyResourcesResource> & resource() const { DARABONBA_PTR_GET_CONST(resource_, vector<Models::DescribeProjectMetaResponseBodyResourcesResource>) };
    inline vector<Models::DescribeProjectMetaResponseBodyResourcesResource> resource() { DARABONBA_PTR_GET(resource_, vector<Models::DescribeProjectMetaResponseBodyResourcesResource>) };
    inline DescribeProjectMetaResponseBodyResources& setResource(const vector<Models::DescribeProjectMetaResponseBodyResourcesResource> & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline DescribeProjectMetaResponseBodyResources& setResource(vector<Models::DescribeProjectMetaResponseBodyResourcesResource> && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


  protected:
    std::shared_ptr<vector<Models::DescribeProjectMetaResponseBodyResourcesResource>> resource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
