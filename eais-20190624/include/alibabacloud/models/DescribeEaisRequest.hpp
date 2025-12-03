// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEAISREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEAISREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEaisRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eais20190624
{
namespace Models
{
  class DescribeEaisRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEaisRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientInstanceId, clientInstanceId_);
      DARABONBA_PTR_TO_JSON(ElasticAcceleratedInstanceIds, elasticAcceleratedInstanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEaisRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientInstanceId, clientInstanceId_);
      DARABONBA_PTR_FROM_JSON(ElasticAcceleratedInstanceIds, elasticAcceleratedInstanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(InstanceType, instanceType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
    };
    DescribeEaisRequest() = default ;
    DescribeEaisRequest(const DescribeEaisRequest &) = default ;
    DescribeEaisRequest(DescribeEaisRequest &&) = default ;
    DescribeEaisRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEaisRequest() = default ;
    DescribeEaisRequest& operator=(const DescribeEaisRequest &) = default ;
    DescribeEaisRequest& operator=(DescribeEaisRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientInstanceId_ == nullptr
        && return this->elasticAcceleratedInstanceIds_ == nullptr && return this->instanceName_ == nullptr && return this->instanceType_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr
        && return this->regionId_ == nullptr && return this->resourceGroupId_ == nullptr && return this->status_ == nullptr && return this->tag_ == nullptr; };
    // clientInstanceId Field Functions 
    bool hasClientInstanceId() const { return this->clientInstanceId_ != nullptr;};
    void deleteClientInstanceId() { this->clientInstanceId_ = nullptr;};
    inline string clientInstanceId() const { DARABONBA_PTR_GET_DEFAULT(clientInstanceId_, "") };
    inline DescribeEaisRequest& setClientInstanceId(string clientInstanceId) { DARABONBA_PTR_SET_VALUE(clientInstanceId_, clientInstanceId) };


    // elasticAcceleratedInstanceIds Field Functions 
    bool hasElasticAcceleratedInstanceIds() const { return this->elasticAcceleratedInstanceIds_ != nullptr;};
    void deleteElasticAcceleratedInstanceIds() { this->elasticAcceleratedInstanceIds_ = nullptr;};
    inline string elasticAcceleratedInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(elasticAcceleratedInstanceIds_, "") };
    inline DescribeEaisRequest& setElasticAcceleratedInstanceIds(string elasticAcceleratedInstanceIds) { DARABONBA_PTR_SET_VALUE(elasticAcceleratedInstanceIds_, elasticAcceleratedInstanceIds) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeEaisRequest& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // instanceType Field Functions 
    bool hasInstanceType() const { return this->instanceType_ != nullptr;};
    void deleteInstanceType() { this->instanceType_ = nullptr;};
    inline string instanceType() const { DARABONBA_PTR_GET_DEFAULT(instanceType_, "") };
    inline DescribeEaisRequest& setInstanceType(string instanceType) { DARABONBA_PTR_SET_VALUE(instanceType_, instanceType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeEaisRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeEaisRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeEaisRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline DescribeEaisRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeEaisRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<DescribeEaisRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<DescribeEaisRequestTag>) };
    inline vector<DescribeEaisRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<DescribeEaisRequestTag>) };
    inline DescribeEaisRequest& setTag(const vector<DescribeEaisRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline DescribeEaisRequest& setTag(vector<DescribeEaisRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


  protected:
    std::shared_ptr<string> clientInstanceId_ = nullptr;
    std::shared_ptr<string> elasticAcceleratedInstanceIds_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<string> instanceType_ = nullptr;
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<DescribeEaisRequestTag>> tag_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eais20190624
#endif
