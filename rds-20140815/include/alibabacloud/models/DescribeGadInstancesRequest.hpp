// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGADINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class DescribeGadInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGadInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GadInstanceName, gadInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGadInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GadInstanceName, gadInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
    };
    DescribeGadInstancesRequest() = default ;
    DescribeGadInstancesRequest(const DescribeGadInstancesRequest &) = default ;
    DescribeGadInstancesRequest(DescribeGadInstancesRequest &&) = default ;
    DescribeGadInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGadInstancesRequest() = default ;
    DescribeGadInstancesRequest& operator=(const DescribeGadInstancesRequest &) = default ;
    DescribeGadInstancesRequest& operator=(DescribeGadInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gadInstanceName_ == nullptr
        && this->regionId_ == nullptr && this->resourceGroupId_ == nullptr; };
    // gadInstanceName Field Functions 
    bool hasGadInstanceName() const { return this->gadInstanceName_ != nullptr;};
    void deleteGadInstanceName() { this->gadInstanceName_ = nullptr;};
    inline string getGadInstanceName() const { DARABONBA_PTR_GET_DEFAULT(gadInstanceName_, "") };
    inline DescribeGadInstancesRequest& setGadInstanceName(string gadInstanceName) { DARABONBA_PTR_SET_VALUE(gadInstanceName_, gadInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeGadInstancesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeGadInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


  protected:
    // The ID of the global active database cluster.
    // 
    // *   If you leave this parameter empty, this operation returns the details about all global active database clusters that are created within your Alibaba Cloud account.
    // *   If you specify this parameter, this operation returns the details about the global active database cluster that you specify.
    // 
    // >  If you do not specify this parameter when you call this operation for the first time, the IDs of all clusters that are created by using the current account are returned. Then, you can specify the cluster ID to view the cluster details.
    shared_ptr<string> gadInstanceName_ {};
    // The region ID. You can call the DescribeRegions operation to query the most recent region list.
    shared_ptr<string> regionId_ {};
    // The ID of the resource group.
    shared_ptr<string> resourceGroupId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
