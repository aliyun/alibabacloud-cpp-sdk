// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSERVERSRESPONSEBODYCLUSTERSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSERVERSRESPONSEBODYCLUSTERSERVERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClusterServersResponseBodyClusterServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClusterServersResponseBodyClusterServers& obj) { 
      DARABONBA_PTR_TO_JSON(Continents, continents_);
      DARABONBA_PTR_TO_JSON(ContinentsValue, continentsValue_);
      DARABONBA_PTR_TO_JSON(Cpu, cpu_);
      DARABONBA_PTR_TO_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_TO_JSON(CustomName, customName_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(GroupType, groupType_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Memory, memory_);
      DARABONBA_PTR_TO_JSON(Mid, mid_);
      DARABONBA_PTR_TO_JSON(Operator, operator_);
      DARABONBA_PTR_TO_JSON(OperatorValue, operatorValue_);
      DARABONBA_PTR_TO_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_TO_JSON(RegionCodeValue, regionCodeValue_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTimestamp, updateTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClusterServersResponseBodyClusterServers& obj) { 
      DARABONBA_PTR_FROM_JSON(Continents, continents_);
      DARABONBA_PTR_FROM_JSON(ContinentsValue, continentsValue_);
      DARABONBA_PTR_FROM_JSON(Cpu, cpu_);
      DARABONBA_PTR_FROM_JSON(CreateTimestamp, createTimestamp_);
      DARABONBA_PTR_FROM_JSON(CustomName, customName_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(GroupType, groupType_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Memory, memory_);
      DARABONBA_PTR_FROM_JSON(Mid, mid_);
      DARABONBA_PTR_FROM_JSON(Operator, operator_);
      DARABONBA_PTR_FROM_JSON(OperatorValue, operatorValue_);
      DARABONBA_PTR_FROM_JSON(RegionCode, regionCode_);
      DARABONBA_PTR_FROM_JSON(RegionCodeValue, regionCodeValue_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTimestamp, updateTimestamp_);
    };
    DescribeHybridCloudClusterServersResponseBodyClusterServers() = default ;
    DescribeHybridCloudClusterServersResponseBodyClusterServers(const DescribeHybridCloudClusterServersResponseBodyClusterServers &) = default ;
    DescribeHybridCloudClusterServersResponseBodyClusterServers(DescribeHybridCloudClusterServersResponseBodyClusterServers &&) = default ;
    DescribeHybridCloudClusterServersResponseBodyClusterServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClusterServersResponseBodyClusterServers() = default ;
    DescribeHybridCloudClusterServersResponseBodyClusterServers& operator=(const DescribeHybridCloudClusterServersResponseBodyClusterServers &) = default ;
    DescribeHybridCloudClusterServersResponseBodyClusterServers& operator=(DescribeHybridCloudClusterServersResponseBodyClusterServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->continents_ != nullptr
        && this->continentsValue_ != nullptr && this->cpu_ != nullptr && this->createTimestamp_ != nullptr && this->customName_ != nullptr && this->groupId_ != nullptr
        && this->groupName_ != nullptr && this->groupType_ != nullptr && this->hostName_ != nullptr && this->ip_ != nullptr && this->jobStatus_ != nullptr
        && this->mac_ != nullptr && this->memory_ != nullptr && this->mid_ != nullptr && this->operator_ != nullptr && this->operatorValue_ != nullptr
        && this->regionCode_ != nullptr && this->regionCodeValue_ != nullptr && this->status_ != nullptr && this->updateTimestamp_ != nullptr; };
    // continents Field Functions 
    bool hasContinents() const { return this->continents_ != nullptr;};
    void deleteContinents() { this->continents_ = nullptr;};
    inline string continents() const { DARABONBA_PTR_GET_DEFAULT(continents_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setContinents(string continents) { DARABONBA_PTR_SET_VALUE(continents_, continents) };


    // continentsValue Field Functions 
    bool hasContinentsValue() const { return this->continentsValue_ != nullptr;};
    void deleteContinentsValue() { this->continentsValue_ = nullptr;};
    inline int32_t continentsValue() const { DARABONBA_PTR_GET_DEFAULT(continentsValue_, 0) };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setContinentsValue(int32_t continentsValue) { DARABONBA_PTR_SET_VALUE(continentsValue_, continentsValue) };


    // cpu Field Functions 
    bool hasCpu() const { return this->cpu_ != nullptr;};
    void deleteCpu() { this->cpu_ = nullptr;};
    inline int32_t cpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


    // createTimestamp Field Functions 
    bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
    void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
    inline int64_t createTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


    // customName Field Functions 
    bool hasCustomName() const { return this->customName_ != nullptr;};
    void deleteCustomName() { this->customName_ = nullptr;};
    inline string customName() const { DARABONBA_PTR_GET_DEFAULT(customName_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setCustomName(string customName) { DARABONBA_PTR_SET_VALUE(customName_, customName) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // groupType Field Functions 
    bool hasGroupType() const { return this->groupType_ != nullptr;};
    void deleteGroupType() { this->groupType_ = nullptr;};
    inline string groupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string jobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // memory Field Functions 
    bool hasMemory() const { return this->memory_ != nullptr;};
    void deleteMemory() { this->memory_ = nullptr;};
    inline int64_t memory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


    // mid Field Functions 
    bool hasMid() const { return this->mid_ != nullptr;};
    void deleteMid() { this->mid_ = nullptr;};
    inline string mid() const { DARABONBA_PTR_GET_DEFAULT(mid_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setMid(string mid) { DARABONBA_PTR_SET_VALUE(mid_, mid) };


    // operator Field Functions 
    bool hasOperator() const { return this->operator_ != nullptr;};
    void deleteOperator() { this->operator_ = nullptr;};
    inline string _operator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


    // operatorValue Field Functions 
    bool hasOperatorValue() const { return this->operatorValue_ != nullptr;};
    void deleteOperatorValue() { this->operatorValue_ = nullptr;};
    inline int32_t operatorValue() const { DARABONBA_PTR_GET_DEFAULT(operatorValue_, 0) };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setOperatorValue(int32_t operatorValue) { DARABONBA_PTR_SET_VALUE(operatorValue_, operatorValue) };


    // regionCode Field Functions 
    bool hasRegionCode() const { return this->regionCode_ != nullptr;};
    void deleteRegionCode() { this->regionCode_ = nullptr;};
    inline string regionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


    // regionCodeValue Field Functions 
    bool hasRegionCodeValue() const { return this->regionCodeValue_ != nullptr;};
    void deleteRegionCodeValue() { this->regionCodeValue_ = nullptr;};
    inline int32_t regionCodeValue() const { DARABONBA_PTR_GET_DEFAULT(regionCodeValue_, 0) };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setRegionCodeValue(int32_t regionCodeValue) { DARABONBA_PTR_SET_VALUE(regionCodeValue_, regionCodeValue) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTimestamp Field Functions 
    bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
    void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
    inline int64_t updateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
    inline DescribeHybridCloudClusterServersResponseBodyClusterServers& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


  protected:
    std::shared_ptr<string> continents_ = nullptr;
    std::shared_ptr<int32_t> continentsValue_ = nullptr;
    std::shared_ptr<int32_t> cpu_ = nullptr;
    std::shared_ptr<int64_t> createTimestamp_ = nullptr;
    std::shared_ptr<string> customName_ = nullptr;
    std::shared_ptr<int64_t> groupId_ = nullptr;
    std::shared_ptr<string> groupName_ = nullptr;
    std::shared_ptr<string> groupType_ = nullptr;
    std::shared_ptr<string> hostName_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> jobStatus_ = nullptr;
    std::shared_ptr<string> mac_ = nullptr;
    std::shared_ptr<int64_t> memory_ = nullptr;
    std::shared_ptr<string> mid_ = nullptr;
    std::shared_ptr<string> operator_ = nullptr;
    std::shared_ptr<int32_t> operatorValue_ = nullptr;
    std::shared_ptr<string> regionCode_ = nullptr;
    std::shared_ptr<int32_t> regionCodeValue_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> updateTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
