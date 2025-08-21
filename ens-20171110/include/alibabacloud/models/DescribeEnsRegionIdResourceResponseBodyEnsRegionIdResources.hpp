// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDRESOURCERESPONSEBODYENSREGIONIDRESOURCES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEENSREGIONIDRESOURCERESPONSEBODYENSREGIONIDRESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources& obj) { 
      DARABONBA_PTR_TO_JSON(EnsRegionIdResource, ensRegionIdResource_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources& obj) { 
      DARABONBA_PTR_FROM_JSON(EnsRegionIdResource, ensRegionIdResource_);
    };
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources() = default ;
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources(const DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources &) = default ;
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources(DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources &&) = default ;
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources() = default ;
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources& operator=(const DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources &) = default ;
    DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources& operator=(DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ensRegionIdResource_ != nullptr; };
    // ensRegionIdResource Field Functions 
    bool hasEnsRegionIdResource() const { return this->ensRegionIdResource_ != nullptr;};
    void deleteEnsRegionIdResource() { this->ensRegionIdResource_ = nullptr;};
    inline const vector<Models::DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource> & ensRegionIdResource() const { DARABONBA_PTR_GET_CONST(ensRegionIdResource_, vector<Models::DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource>) };
    inline vector<Models::DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource> ensRegionIdResource() { DARABONBA_PTR_GET(ensRegionIdResource_, vector<Models::DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource>) };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources& setEnsRegionIdResource(const vector<Models::DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource> & ensRegionIdResource) { DARABONBA_PTR_SET_VALUE(ensRegionIdResource_, ensRegionIdResource) };
    inline DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResources& setEnsRegionIdResource(vector<Models::DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource> && ensRegionIdResource) { DARABONBA_PTR_SET_RVALUE(ensRegionIdResource_, ensRegionIdResource) };


  protected:
    std::shared_ptr<vector<Models::DescribeEnsRegionIdResourceResponseBodyEnsRegionIdResourcesEnsRegionIdResource>> ensRegionIdResource_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
