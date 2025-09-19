// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTLISTRESPONSEBODYVPCHONEYPOTDTOLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCHONEYPOTLISTRESPONSEBODYVPCHONEYPOTDTOLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& obj) { 
      DARABONBA_PTR_TO_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(HoneyPotEcsInstanceStatus, honeyPotEcsInstanceStatus_);
      DARABONBA_PTR_TO_JSON(HoneyPotEniInstanceId, honeyPotEniInstanceId_);
      DARABONBA_PTR_TO_JSON(HoneyPotExistence, honeyPotExistence_);
      DARABONBA_PTR_TO_JSON(HoneyPotInstanceStatus, honeyPotInstanceStatus_);
      DARABONBA_PTR_TO_JSON(HoneyPotVpcSwitchId, honeyPotVpcSwitchId_);
      DARABONBA_PTR_TO_JSON(VpcId, vpcId_);
      DARABONBA_PTR_TO_JSON(VpcName, vpcName_);
      DARABONBA_PTR_TO_JSON(VpcRegionId, vpcRegionId_);
      DARABONBA_PTR_TO_JSON(VpcStatus, vpcStatus_);
      DARABONBA_PTR_TO_JSON(VpcSwitchIdList, vpcSwitchIdList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& obj) { 
      DARABONBA_PTR_FROM_JSON(CidrBlock, cidrBlock_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(HoneyPotEcsInstanceStatus, honeyPotEcsInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(HoneyPotEniInstanceId, honeyPotEniInstanceId_);
      DARABONBA_PTR_FROM_JSON(HoneyPotExistence, honeyPotExistence_);
      DARABONBA_PTR_FROM_JSON(HoneyPotInstanceStatus, honeyPotInstanceStatus_);
      DARABONBA_PTR_FROM_JSON(HoneyPotVpcSwitchId, honeyPotVpcSwitchId_);
      DARABONBA_PTR_FROM_JSON(VpcId, vpcId_);
      DARABONBA_PTR_FROM_JSON(VpcName, vpcName_);
      DARABONBA_PTR_FROM_JSON(VpcRegionId, vpcRegionId_);
      DARABONBA_PTR_FROM_JSON(VpcStatus, vpcStatus_);
      DARABONBA_PTR_FROM_JSON(VpcSwitchIdList, vpcSwitchIdList_);
    };
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList() = default ;
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList(const DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList &) = default ;
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList(DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList &&) = default ;
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList() = default ;
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& operator=(const DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList &) = default ;
    DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& operator=(DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cidrBlock_ != nullptr
        && this->createTime_ != nullptr && this->honeyPotEcsInstanceStatus_ != nullptr && this->honeyPotEniInstanceId_ != nullptr && this->honeyPotExistence_ != nullptr && this->honeyPotInstanceStatus_ != nullptr
        && this->honeyPotVpcSwitchId_ != nullptr && this->vpcId_ != nullptr && this->vpcName_ != nullptr && this->vpcRegionId_ != nullptr && this->vpcStatus_ != nullptr
        && this->vpcSwitchIdList_ != nullptr; };
    // cidrBlock Field Functions 
    bool hasCidrBlock() const { return this->cidrBlock_ != nullptr;};
    void deleteCidrBlock() { this->cidrBlock_ = nullptr;};
    inline string cidrBlock() const { DARABONBA_PTR_GET_DEFAULT(cidrBlock_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setCidrBlock(string cidrBlock) { DARABONBA_PTR_SET_VALUE(cidrBlock_, cidrBlock) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // honeyPotEcsInstanceStatus Field Functions 
    bool hasHoneyPotEcsInstanceStatus() const { return this->honeyPotEcsInstanceStatus_ != nullptr;};
    void deleteHoneyPotEcsInstanceStatus() { this->honeyPotEcsInstanceStatus_ = nullptr;};
    inline string honeyPotEcsInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(honeyPotEcsInstanceStatus_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setHoneyPotEcsInstanceStatus(string honeyPotEcsInstanceStatus) { DARABONBA_PTR_SET_VALUE(honeyPotEcsInstanceStatus_, honeyPotEcsInstanceStatus) };


    // honeyPotEniInstanceId Field Functions 
    bool hasHoneyPotEniInstanceId() const { return this->honeyPotEniInstanceId_ != nullptr;};
    void deleteHoneyPotEniInstanceId() { this->honeyPotEniInstanceId_ = nullptr;};
    inline string honeyPotEniInstanceId() const { DARABONBA_PTR_GET_DEFAULT(honeyPotEniInstanceId_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setHoneyPotEniInstanceId(string honeyPotEniInstanceId) { DARABONBA_PTR_SET_VALUE(honeyPotEniInstanceId_, honeyPotEniInstanceId) };


    // honeyPotExistence Field Functions 
    bool hasHoneyPotExistence() const { return this->honeyPotExistence_ != nullptr;};
    void deleteHoneyPotExistence() { this->honeyPotExistence_ = nullptr;};
    inline bool honeyPotExistence() const { DARABONBA_PTR_GET_DEFAULT(honeyPotExistence_, false) };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setHoneyPotExistence(bool honeyPotExistence) { DARABONBA_PTR_SET_VALUE(honeyPotExistence_, honeyPotExistence) };


    // honeyPotInstanceStatus Field Functions 
    bool hasHoneyPotInstanceStatus() const { return this->honeyPotInstanceStatus_ != nullptr;};
    void deleteHoneyPotInstanceStatus() { this->honeyPotInstanceStatus_ = nullptr;};
    inline string honeyPotInstanceStatus() const { DARABONBA_PTR_GET_DEFAULT(honeyPotInstanceStatus_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setHoneyPotInstanceStatus(string honeyPotInstanceStatus) { DARABONBA_PTR_SET_VALUE(honeyPotInstanceStatus_, honeyPotInstanceStatus) };


    // honeyPotVpcSwitchId Field Functions 
    bool hasHoneyPotVpcSwitchId() const { return this->honeyPotVpcSwitchId_ != nullptr;};
    void deleteHoneyPotVpcSwitchId() { this->honeyPotVpcSwitchId_ = nullptr;};
    inline string honeyPotVpcSwitchId() const { DARABONBA_PTR_GET_DEFAULT(honeyPotVpcSwitchId_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setHoneyPotVpcSwitchId(string honeyPotVpcSwitchId) { DARABONBA_PTR_SET_VALUE(honeyPotVpcSwitchId_, honeyPotVpcSwitchId) };


    // vpcId Field Functions 
    bool hasVpcId() const { return this->vpcId_ != nullptr;};
    void deleteVpcId() { this->vpcId_ = nullptr;};
    inline string vpcId() const { DARABONBA_PTR_GET_DEFAULT(vpcId_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setVpcId(string vpcId) { DARABONBA_PTR_SET_VALUE(vpcId_, vpcId) };


    // vpcName Field Functions 
    bool hasVpcName() const { return this->vpcName_ != nullptr;};
    void deleteVpcName() { this->vpcName_ = nullptr;};
    inline string vpcName() const { DARABONBA_PTR_GET_DEFAULT(vpcName_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setVpcName(string vpcName) { DARABONBA_PTR_SET_VALUE(vpcName_, vpcName) };


    // vpcRegionId Field Functions 
    bool hasVpcRegionId() const { return this->vpcRegionId_ != nullptr;};
    void deleteVpcRegionId() { this->vpcRegionId_ = nullptr;};
    inline string vpcRegionId() const { DARABONBA_PTR_GET_DEFAULT(vpcRegionId_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setVpcRegionId(string vpcRegionId) { DARABONBA_PTR_SET_VALUE(vpcRegionId_, vpcRegionId) };


    // vpcStatus Field Functions 
    bool hasVpcStatus() const { return this->vpcStatus_ != nullptr;};
    void deleteVpcStatus() { this->vpcStatus_ = nullptr;};
    inline string vpcStatus() const { DARABONBA_PTR_GET_DEFAULT(vpcStatus_, "") };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setVpcStatus(string vpcStatus) { DARABONBA_PTR_SET_VALUE(vpcStatus_, vpcStatus) };


    // vpcSwitchIdList Field Functions 
    bool hasVpcSwitchIdList() const { return this->vpcSwitchIdList_ != nullptr;};
    void deleteVpcSwitchIdList() { this->vpcSwitchIdList_ = nullptr;};
    inline const vector<Models::DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList> & vpcSwitchIdList() const { DARABONBA_PTR_GET_CONST(vpcSwitchIdList_, vector<Models::DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList>) };
    inline vector<Models::DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList> vpcSwitchIdList() { DARABONBA_PTR_GET(vpcSwitchIdList_, vector<Models::DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList>) };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setVpcSwitchIdList(const vector<Models::DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList> & vpcSwitchIdList) { DARABONBA_PTR_SET_VALUE(vpcSwitchIdList_, vpcSwitchIdList) };
    inline DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOList& setVpcSwitchIdList(vector<Models::DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList> && vpcSwitchIdList) { DARABONBA_PTR_SET_RVALUE(vpcSwitchIdList_, vpcSwitchIdList) };


  protected:
    // The CIDR block of the VPC.
    std::shared_ptr<string> cidrBlock_ = nullptr;
    // The time at which the VPC was created. Unit: milliseconds.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The status of the server on which the honeypot is deployed. Valid values:
    // 
    // *   **Pending**: The server is being created.
    // *   **Running**: The server is running.
    // *   **Starting**: The server is being started.
    // *   **Stopping**: The server is being stopped.
    // *   **Stopped**: The server is stopped.
    std::shared_ptr<string> honeyPotEcsInstanceStatus_ = nullptr;
    // The ID of the elastic network interface (ENI) used by the honeypot in the VPC.
    std::shared_ptr<string> honeyPotEniInstanceId_ = nullptr;
    // Indicates whether the cloud honeypot feature is enabled for the VPC. Valid values:
    // 
    // *   **true**: yes
    // *   **false**: no
    std::shared_ptr<bool> honeyPotExistence_ = nullptr;
    // The status of the honeypot. Valid values:
    // 
    // *   **pending**: The honeypot is being created.
    // *   **deleting**: The honeypot is being deleted.
    // *   **off**: The honeypot is disabled.
    // *   **suspending**: The honeypot is suspended.
    // *   **on**: The honeypot is enabled.
    std::shared_ptr<string> honeyPotInstanceStatus_ = nullptr;
    // The ID of the vSwitch to which the ENI used by the honeypot is connected.
    std::shared_ptr<string> honeyPotVpcSwitchId_ = nullptr;
    // The ID of the VPC.
    std::shared_ptr<string> vpcId_ = nullptr;
    // The name of the VPC.
    std::shared_ptr<string> vpcName_ = nullptr;
    // The region ID of the VPC.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> vpcRegionId_ = nullptr;
    // The status of the VPC. Valid values:
    // 
    // *   **Available**: The VPC is normal and available.
    // *   **Pending**: The VPC is being configured.
    std::shared_ptr<string> vpcStatus_ = nullptr;
    // An array that consists of the vSwitches in the VPC.
    std::shared_ptr<vector<Models::DescribeVpcHoneyPotListResponseBodyVpcHoneyPotDTOListVpcSwitchIdList>> vpcSwitchIdList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
