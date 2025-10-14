// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESPONSEBODYRESOURCESRESOURCE_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORGROUPINSTANCEATTRIBUTERESPONSEBODYRESOURCESRESOURCE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion.hpp>
#include <alibabacloud/models/DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags.hpp>
#include <alibabacloud/models/DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& obj) { 
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Dimension, dimension_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(NetworkType, networkType_);
      DARABONBA_PTR_TO_JSON(Region, region_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(Vpc, vpc_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& obj) { 
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Dimension, dimension_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(NetworkType, networkType_);
      DARABONBA_PTR_FROM_JSON(Region, region_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(Vpc, vpc_);
    };
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource() = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource(const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource &) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource(DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource &&) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource() = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& operator=(const DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource &) = default ;
    DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& operator=(DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->category_ == nullptr
        && return this->desc_ == nullptr && return this->dimension_ == nullptr && return this->instanceId_ == nullptr && return this->instanceName_ == nullptr && return this->networkType_ == nullptr
        && return this->region_ == nullptr && return this->tags_ == nullptr && return this->vpc_ == nullptr; };
    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string category() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // dimension Field Functions 
    bool hasDimension() const { return this->dimension_ != nullptr;};
    void deleteDimension() { this->dimension_ = nullptr;};
    inline string dimension() const { DARABONBA_PTR_GET_DEFAULT(dimension_, "") };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setDimension(string dimension) { DARABONBA_PTR_SET_VALUE(dimension_, dimension) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // networkType Field Functions 
    bool hasNetworkType() const { return this->networkType_ != nullptr;};
    void deleteNetworkType() { this->networkType_ = nullptr;};
    inline string networkType() const { DARABONBA_PTR_GET_DEFAULT(networkType_, "") };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setNetworkType(string networkType) { DARABONBA_PTR_SET_VALUE(networkType_, networkType) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline const Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion & region() const { DARABONBA_PTR_GET_CONST(region_, Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion) };
    inline Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion region() { DARABONBA_PTR_GET(region_, Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion) };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setRegion(const Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion & region) { DARABONBA_PTR_SET_VALUE(region_, region) };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setRegion(Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion && region) { DARABONBA_PTR_SET_RVALUE(region_, region) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags & tags() const { DARABONBA_PTR_GET_CONST(tags_, Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags) };
    inline Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags tags() { DARABONBA_PTR_GET(tags_, Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags) };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setTags(const Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setTags(Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // vpc Field Functions 
    bool hasVpc() const { return this->vpc_ != nullptr;};
    void deleteVpc() { this->vpc_ = nullptr;};
    inline const Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc & vpc() const { DARABONBA_PTR_GET_CONST(vpc_, Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc) };
    inline Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc vpc() { DARABONBA_PTR_GET(vpc_, Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc) };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setVpc(const Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc & vpc) { DARABONBA_PTR_SET_VALUE(vpc_, vpc) };
    inline DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResource& setVpc(Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc && vpc) { DARABONBA_PTR_SET_RVALUE(vpc_, vpc) };


  protected:
    // The name of the cloud service.
    std::shared_ptr<string> category_ = nullptr;
    // The resource description.
    std::shared_ptr<string> desc_ = nullptr;
    // The dimensions of the resource that is associated with the application group.
    std::shared_ptr<string> dimension_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The network type.
    std::shared_ptr<string> networkType_ = nullptr;
    // The region.
    std::shared_ptr<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceRegion> region_ = nullptr;
    // The tag of the resource.
    std::shared_ptr<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceTags> tags_ = nullptr;
    // The VPC description.
    std::shared_ptr<Models::DescribeMonitorGroupInstanceAttributeResponseBodyResourcesResourceVpc> vpc_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
