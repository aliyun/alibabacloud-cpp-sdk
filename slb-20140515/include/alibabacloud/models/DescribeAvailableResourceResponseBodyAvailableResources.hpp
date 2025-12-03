// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVAILABLERESOURCERESPONSEBODYAVAILABLERESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Slb20140515
{
namespace Models
{
  class DescribeAvailableResourceResponseBodyAvailableResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvailableResourceResponseBodyAvailableResources& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableResource, availableResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvailableResourceResponseBodyAvailableResources& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableResource, availableResource_);
    };
    DescribeAvailableResourceResponseBodyAvailableResources() = default ;
    DescribeAvailableResourceResponseBodyAvailableResources(const DescribeAvailableResourceResponseBodyAvailableResources &) = default ;
    DescribeAvailableResourceResponseBodyAvailableResources(DescribeAvailableResourceResponseBodyAvailableResources &&) = default ;
    DescribeAvailableResourceResponseBodyAvailableResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvailableResourceResponseBodyAvailableResources() = default ;
    DescribeAvailableResourceResponseBodyAvailableResources& operator=(const DescribeAvailableResourceResponseBodyAvailableResources &) = default ;
    DescribeAvailableResourceResponseBodyAvailableResources& operator=(DescribeAvailableResourceResponseBodyAvailableResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->availableResource_ == nullptr; };
    // availableResource Field Functions 
    bool hasAvailableResource() const { return this->availableResource_ != nullptr;};
    void deleteAvailableResource() { this->availableResource_ = nullptr;};
    inline const vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource> & availableResource() const { DARABONBA_PTR_GET_CONST(availableResource_, vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource>) };
    inline vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource> availableResource() { DARABONBA_PTR_GET(availableResource_, vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource>) };
    inline DescribeAvailableResourceResponseBodyAvailableResources& setAvailableResource(const vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource> & availableResource) { DARABONBA_PTR_SET_VALUE(availableResource_, availableResource) };
    inline DescribeAvailableResourceResponseBodyAvailableResources& setAvailableResource(vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource> && availableResource) { DARABONBA_PTR_SET_RVALUE(availableResource_, availableResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeAvailableResourceResponseBodyAvailableResourcesAvailableResource>> availableResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Slb20140515
#endif
