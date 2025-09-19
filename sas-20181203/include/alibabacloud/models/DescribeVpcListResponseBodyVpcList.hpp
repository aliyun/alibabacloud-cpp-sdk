// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCLISTRESPONSEBODYVPCLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCLISTRESPONSEBODYVPCLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVpcListResponseBodyVpcList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcListResponseBodyVpcList& obj) { 
      DARABONBA_PTR_TO_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_TO_JSON(InstanceDesc, instanceDesc_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcListResponseBodyVpcList& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsCount, ecsCount_);
      DARABONBA_PTR_FROM_JSON(InstanceDesc, instanceDesc_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeVpcListResponseBodyVpcList() = default ;
    DescribeVpcListResponseBodyVpcList(const DescribeVpcListResponseBodyVpcList &) = default ;
    DescribeVpcListResponseBodyVpcList(DescribeVpcListResponseBodyVpcList &&) = default ;
    DescribeVpcListResponseBodyVpcList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcListResponseBodyVpcList() = default ;
    DescribeVpcListResponseBodyVpcList& operator=(const DescribeVpcListResponseBodyVpcList &) = default ;
    DescribeVpcListResponseBodyVpcList& operator=(DescribeVpcListResponseBodyVpcList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecsCount_ != nullptr
        && this->instanceDesc_ != nullptr && this->instanceId_ != nullptr && this->instanceName_ != nullptr && this->regionId_ != nullptr; };
    // ecsCount Field Functions 
    bool hasEcsCount() const { return this->ecsCount_ != nullptr;};
    void deleteEcsCount() { this->ecsCount_ = nullptr;};
    inline int32_t ecsCount() const { DARABONBA_PTR_GET_DEFAULT(ecsCount_, 0) };
    inline DescribeVpcListResponseBodyVpcList& setEcsCount(int32_t ecsCount) { DARABONBA_PTR_SET_VALUE(ecsCount_, ecsCount) };


    // instanceDesc Field Functions 
    bool hasInstanceDesc() const { return this->instanceDesc_ != nullptr;};
    void deleteInstanceDesc() { this->instanceDesc_ = nullptr;};
    inline string instanceDesc() const { DARABONBA_PTR_GET_DEFAULT(instanceDesc_, "") };
    inline DescribeVpcListResponseBodyVpcList& setInstanceDesc(string instanceDesc) { DARABONBA_PTR_SET_VALUE(instanceDesc_, instanceDesc) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DescribeVpcListResponseBodyVpcList& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeVpcListResponseBodyVpcList& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeVpcListResponseBodyVpcList& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The number of Elastic Compute Service (ECS) instances.
    std::shared_ptr<int32_t> ecsCount_ = nullptr;
    // The information about the virtual private cloud (VPC).
    std::shared_ptr<string> instanceDesc_ = nullptr;
    // The ID of the ECS instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The region in which the server resides.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
