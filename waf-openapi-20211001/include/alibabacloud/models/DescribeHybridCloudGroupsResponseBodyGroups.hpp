// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDGROUPSRESPONSEBODYGROUPS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDGROUPSRESPONSEBODYGROUPS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudGroupsResponseBodyGroups : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudGroupsResponseBodyGroups& obj) { 
      DARABONBA_PTR_TO_JSON(BackSourceMark, backSourceMark_);
      DARABONBA_PTR_TO_JSON(ContinentsValue, continentsValue_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(LoadBalanceIp, loadBalanceIp_);
      DARABONBA_PTR_TO_JSON(LocationId, locationId_);
      DARABONBA_PTR_TO_JSON(OperatorValue, operatorValue_);
      DARABONBA_PTR_TO_JSON(Ports, ports_);
      DARABONBA_PTR_TO_JSON(RegionCodeValue, regionCodeValue_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudGroupsResponseBodyGroups& obj) { 
      DARABONBA_PTR_FROM_JSON(BackSourceMark, backSourceMark_);
      DARABONBA_PTR_FROM_JSON(ContinentsValue, continentsValue_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(LoadBalanceIp, loadBalanceIp_);
      DARABONBA_PTR_FROM_JSON(LocationId, locationId_);
      DARABONBA_PTR_FROM_JSON(OperatorValue, operatorValue_);
      DARABONBA_PTR_FROM_JSON(Ports, ports_);
      DARABONBA_PTR_FROM_JSON(RegionCodeValue, regionCodeValue_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    DescribeHybridCloudGroupsResponseBodyGroups() = default ;
    DescribeHybridCloudGroupsResponseBodyGroups(const DescribeHybridCloudGroupsResponseBodyGroups &) = default ;
    DescribeHybridCloudGroupsResponseBodyGroups(DescribeHybridCloudGroupsResponseBodyGroups &&) = default ;
    DescribeHybridCloudGroupsResponseBodyGroups(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudGroupsResponseBodyGroups() = default ;
    DescribeHybridCloudGroupsResponseBodyGroups& operator=(const DescribeHybridCloudGroupsResponseBodyGroups &) = default ;
    DescribeHybridCloudGroupsResponseBodyGroups& operator=(DescribeHybridCloudGroupsResponseBodyGroups &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->backSourceMark_ == nullptr
        && return this->continentsValue_ == nullptr && return this->groupId_ == nullptr && return this->groupName_ == nullptr && return this->groupType_ == nullptr && return this->loadBalanceIp_ == nullptr
        && return this->locationId_ == nullptr && return this->operatorValue_ == nullptr && return this->ports_ == nullptr && return this->regionCodeValue_ == nullptr && return this->remark_ == nullptr; };
    // backSourceMark Field Functions 
    bool hasBackSourceMark() const { return this->backSourceMark_ != nullptr;};
    void deleteBackSourceMark() { this->backSourceMark_ = nullptr;};
    inline string backSourceMark() const { DARABONBA_PTR_GET_DEFAULT(backSourceMark_, "") };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setBackSourceMark(string backSourceMark) { DARABONBA_PTR_SET_VALUE(backSourceMark_, backSourceMark) };


    // continentsValue Field Functions 
    bool hasContinentsValue() const { return this->continentsValue_ != nullptr;};
    void deleteContinentsValue() { this->continentsValue_ = nullptr;};
    inline int32_t continentsValue() const { DARABONBA_PTR_GET_DEFAULT(continentsValue_, 0) };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setContinentsValue(int32_t continentsValue) { DARABONBA_PTR_SET_VALUE(continentsValue_, continentsValue) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int32_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0) };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setGroupId(int32_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // loadBalanceIp Field Functions 
    bool hasLoadBalanceIp() const { return this->loadBalanceIp_ != nullptr;};
    void deleteLoadBalanceIp() { this->loadBalanceIp_ = nullptr;};
    inline string loadBalanceIp() const { DARABONBA_PTR_GET_DEFAULT(loadBalanceIp_, "") };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setLoadBalanceIp(string loadBalanceIp) { DARABONBA_PTR_SET_VALUE(loadBalanceIp_, loadBalanceIp) };


    // locationId Field Functions 
    bool hasLocationId() const { return this->locationId_ != nullptr;};
    void deleteLocationId() { this->locationId_ = nullptr;};
    inline int64_t locationId() const { DARABONBA_PTR_GET_DEFAULT(locationId_, 0L) };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setLocationId(int64_t locationId) { DARABONBA_PTR_SET_VALUE(locationId_, locationId) };


    // operatorValue Field Functions 
    bool hasOperatorValue() const { return this->operatorValue_ != nullptr;};
    void deleteOperatorValue() { this->operatorValue_ = nullptr;};
    inline int32_t operatorValue() const { DARABONBA_PTR_GET_DEFAULT(operatorValue_, 0) };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setOperatorValue(int32_t operatorValue) { DARABONBA_PTR_SET_VALUE(operatorValue_, operatorValue) };


    // ports Field Functions 
    bool hasPorts() const { return this->ports_ != nullptr;};
    void deletePorts() { this->ports_ = nullptr;};
    inline string ports() const { DARABONBA_PTR_GET_DEFAULT(ports_, "") };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setPorts(string ports) { DARABONBA_PTR_SET_VALUE(ports_, ports) };


    // regionCodeValue Field Functions 
    bool hasRegionCodeValue() const { return this->regionCodeValue_ != nullptr;};
    void deleteRegionCodeValue() { this->regionCodeValue_ = nullptr;};
    inline int32_t regionCodeValue() const { DARABONBA_PTR_GET_DEFAULT(regionCodeValue_, 0) };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setRegionCodeValue(int32_t regionCodeValue) { DARABONBA_PTR_SET_VALUE(regionCodeValue_, regionCodeValue) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string remark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline DescribeHybridCloudGroupsResponseBodyGroups& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    // The back-to-origin mark of the protected cluster. The value is in the {ISP name}-{Continent name}-{City name}-{Back-to-origin identifier} format. The back-to-origin identifier is optional.
    // 
    // >  For more information about ISP names, continent names, city names, and back-to-origin identifiers, see the following sections.
    std::shared_ptr<string> backSourceMark_ = nullptr;
    // The continent code of the protected cluster.
    // 
    // >  For more information about continent codes, see Continent codes in this topic.
    std::shared_ptr<int32_t> continentsValue_ = nullptr;
    // The ID of the node group.
    std::shared_ptr<int32_t> groupId_ = nullptr;
    // The name of the node group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The type of the node group. Valid values:
    // 
    // *   **protect**
    // *   **control**
    // *   **storage**
    // *   **controlStorage**
    std::shared_ptr<string> groupType_ = nullptr;
    // The IP address of the server used for load balancing.
    std::shared_ptr<string> loadBalanceIp_ = nullptr;
    // The ID of the protection node.
    std::shared_ptr<int64_t> locationId_ = nullptr;
    // The ISP code of the protected cluster.
    // 
    // >  For more information about ISP codes, see ISP codes in this topic.
    std::shared_ptr<int32_t> operatorValue_ = nullptr;
    // The port that is used by the hybrid cloud cluster. The value of this parameter is a string. If multiple ports are returned, the value is in the **port1,port2,port3** format.
    std::shared_ptr<string> ports_ = nullptr;
    // The city code of the protected cluster.
    // 
    // >  For more information about city codes, see City codes in this topic.
    std::shared_ptr<int32_t> regionCodeValue_ = nullptr;
    // The description of the node group.
    std::shared_ptr<string> remark_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
