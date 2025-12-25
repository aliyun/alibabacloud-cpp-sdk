// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUESTDESCRIBEINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESREQUESTDESCRIBEINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInstancesRequestDescribeInstancesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Foasconsole20190601
{
namespace Models
{
  class DescribeInstancesRequestDescribeInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstancesRequestDescribeInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstancesRequestDescribeInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ArchitectureType, architectureType_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PageIndex, pageIndex_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeInstancesRequestDescribeInstancesRequest() = default ;
    DescribeInstancesRequestDescribeInstancesRequest(const DescribeInstancesRequestDescribeInstancesRequest &) = default ;
    DescribeInstancesRequestDescribeInstancesRequest(DescribeInstancesRequestDescribeInstancesRequest &&) = default ;
    DescribeInstancesRequestDescribeInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstancesRequestDescribeInstancesRequest() = default ;
    DescribeInstancesRequestDescribeInstancesRequest& operator=(const DescribeInstancesRequestDescribeInstancesRequest &) = default ;
    DescribeInstancesRequestDescribeInstancesRequest& operator=(DescribeInstancesRequestDescribeInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->architectureType_ == nullptr
        && return this->chargeType_ == nullptr && return this->instanceId_ == nullptr && return this->pageIndex_ == nullptr && return this->pageSize_ == nullptr && return this->region_ == nullptr
        && return this->resourceGroupId_ == nullptr && return this->tags_ == nullptr; };
    // architectureType Field Functions 
    bool hasArchitectureType() const { return this->architectureType_ != nullptr;};
    void deleteArchitectureType() { this->architectureType_ = nullptr;};
    inline string architectureType() const { DARABONBA_PTR_GET_DEFAULT(architectureType_, "") };
    inline DescribeInstancesRequestDescribeInstancesRequest& setArchitectureType(string architectureType) { DARABONBA_PTR_SET_VALUE(architectureType_, architectureType) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline DescribeInstancesRequestDescribeInstancesRequest& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeInstancesRequestDescribeInstancesRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // pageIndex Field Functions 
    bool hasPageIndex() const { return this->pageIndex_ != nullptr;};
    void deletePageIndex() { this->pageIndex_ = nullptr;};
    inline int32_t pageIndex() const { DARABONBA_PTR_GET_DEFAULT(pageIndex_, 0) };
    inline DescribeInstancesRequestDescribeInstancesRequest& setPageIndex(int32_t pageIndex) { DARABONBA_PTR_SET_VALUE(pageIndex_, pageIndex) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeInstancesRequestDescribeInstancesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline DescribeInstancesRequestDescribeInstancesRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeInstancesRequestDescribeInstancesRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeInstancesRequestDescribeInstancesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeInstancesRequestDescribeInstancesRequestTags>) };
    inline vector<Models::DescribeInstancesRequestDescribeInstancesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeInstancesRequestDescribeInstancesRequestTags>) };
    inline DescribeInstancesRequestDescribeInstancesRequest& setTags(const vector<Models::DescribeInstancesRequestDescribeInstancesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeInstancesRequestDescribeInstancesRequest& setTags(vector<Models::DescribeInstancesRequestDescribeInstancesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    std::shared_ptr<string> architectureType_ = nullptr;
    std::shared_ptr<string> chargeType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int32_t> pageIndex_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> region_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<vector<Models::DescribeInstancesRequestDescribeInstancesRequestTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Foasconsole20190601
#endif
