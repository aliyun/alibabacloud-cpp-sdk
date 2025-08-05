// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPRESPONSEBODYDATALISTVPCSRCINFO_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKEVENTGROUPRESPONSEBODYDATALISTVPCSRCINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo& obj) { 
      DARABONBA_PTR_TO_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_TO_JSON(EcsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_TO_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(EcsInstanceId, ecsInstanceId_);
      DARABONBA_PTR_FROM_JSON(EcsInstanceName, ecsInstanceName_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceId, networkInstanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkInstanceName, networkInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
    };
    DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo() = default ;
    DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo(const DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo &) = default ;
    DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo(DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo &&) = default ;
    DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo() = default ;
    DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo& operator=(const DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo &) = default ;
    DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo& operator=(DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ecsInstanceId_ != nullptr
        && this->ecsInstanceName_ != nullptr && this->networkInstanceId_ != nullptr && this->networkInstanceName_ != nullptr && this->regionNo_ != nullptr; };
    // ecsInstanceId Field Functions 
    bool hasEcsInstanceId() const { return this->ecsInstanceId_ != nullptr;};
    void deleteEcsInstanceId() { this->ecsInstanceId_ = nullptr;};
    inline string ecsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceId_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo& setEcsInstanceId(string ecsInstanceId) { DARABONBA_PTR_SET_VALUE(ecsInstanceId_, ecsInstanceId) };


    // ecsInstanceName Field Functions 
    bool hasEcsInstanceName() const { return this->ecsInstanceName_ != nullptr;};
    void deleteEcsInstanceName() { this->ecsInstanceName_ = nullptr;};
    inline string ecsInstanceName() const { DARABONBA_PTR_GET_DEFAULT(ecsInstanceName_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo& setEcsInstanceName(string ecsInstanceName) { DARABONBA_PTR_SET_VALUE(ecsInstanceName_, ecsInstanceName) };


    // networkInstanceId Field Functions 
    bool hasNetworkInstanceId() const { return this->networkInstanceId_ != nullptr;};
    void deleteNetworkInstanceId() { this->networkInstanceId_ = nullptr;};
    inline string networkInstanceId() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceId_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo& setNetworkInstanceId(string networkInstanceId) { DARABONBA_PTR_SET_VALUE(networkInstanceId_, networkInstanceId) };


    // networkInstanceName Field Functions 
    bool hasNetworkInstanceName() const { return this->networkInstanceName_ != nullptr;};
    void deleteNetworkInstanceName() { this->networkInstanceName_ = nullptr;};
    inline string networkInstanceName() const { DARABONBA_PTR_GET_DEFAULT(networkInstanceName_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo& setNetworkInstanceName(string networkInstanceName) { DARABONBA_PTR_SET_VALUE(networkInstanceName_, networkInstanceName) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeRiskEventGroupResponseBodyDataListVpcSrcInfo& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


  protected:
    // The ID of the ECS instance.
    std::shared_ptr<string> ecsInstanceId_ = nullptr;
    // The name of the ECS instance.
    std::shared_ptr<string> ecsInstanceName_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> networkInstanceId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> networkInstanceName_ = nullptr;
    // The ID of the region in which the source VPC resides.
    std::shared_ptr<string> regionNo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
