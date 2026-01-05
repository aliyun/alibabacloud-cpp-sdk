// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSERVERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHYBRIDCLOUDCLUSTERSERVERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeHybridCloudClusterServersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHybridCloudClusterServersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterServers, clusterServers_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHybridCloudClusterServersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterServers, clusterServers_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeHybridCloudClusterServersResponseBody() = default ;
    DescribeHybridCloudClusterServersResponseBody(const DescribeHybridCloudClusterServersResponseBody &) = default ;
    DescribeHybridCloudClusterServersResponseBody(DescribeHybridCloudClusterServersResponseBody &&) = default ;
    DescribeHybridCloudClusterServersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHybridCloudClusterServersResponseBody() = default ;
    DescribeHybridCloudClusterServersResponseBody& operator=(const DescribeHybridCloudClusterServersResponseBody &) = default ;
    DescribeHybridCloudClusterServersResponseBody& operator=(DescribeHybridCloudClusterServersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterServers : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterServers& obj) { 
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
      friend void from_json(const Darabonba::Json& j, ClusterServers& obj) { 
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
      ClusterServers() = default ;
      ClusterServers(const ClusterServers &) = default ;
      ClusterServers(ClusterServers &&) = default ;
      ClusterServers(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterServers() = default ;
      ClusterServers& operator=(const ClusterServers &) = default ;
      ClusterServers& operator=(ClusterServers &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->continents_ == nullptr
        && this->continentsValue_ == nullptr && this->cpu_ == nullptr && this->createTimestamp_ == nullptr && this->customName_ == nullptr && this->groupId_ == nullptr
        && this->groupName_ == nullptr && this->groupType_ == nullptr && this->hostName_ == nullptr && this->ip_ == nullptr && this->jobStatus_ == nullptr
        && this->mac_ == nullptr && this->memory_ == nullptr && this->mid_ == nullptr && this->operator_ == nullptr && this->operatorValue_ == nullptr
        && this->regionCode_ == nullptr && this->regionCodeValue_ == nullptr && this->status_ == nullptr && this->updateTimestamp_ == nullptr; };
      // continents Field Functions 
      bool hasContinents() const { return this->continents_ != nullptr;};
      void deleteContinents() { this->continents_ = nullptr;};
      inline string getContinents() const { DARABONBA_PTR_GET_DEFAULT(continents_, "") };
      inline ClusterServers& setContinents(string continents) { DARABONBA_PTR_SET_VALUE(continents_, continents) };


      // continentsValue Field Functions 
      bool hasContinentsValue() const { return this->continentsValue_ != nullptr;};
      void deleteContinentsValue() { this->continentsValue_ = nullptr;};
      inline int32_t getContinentsValue() const { DARABONBA_PTR_GET_DEFAULT(continentsValue_, 0) };
      inline ClusterServers& setContinentsValue(int32_t continentsValue) { DARABONBA_PTR_SET_VALUE(continentsValue_, continentsValue) };


      // cpu Field Functions 
      bool hasCpu() const { return this->cpu_ != nullptr;};
      void deleteCpu() { this->cpu_ = nullptr;};
      inline int32_t getCpu() const { DARABONBA_PTR_GET_DEFAULT(cpu_, 0) };
      inline ClusterServers& setCpu(int32_t cpu) { DARABONBA_PTR_SET_VALUE(cpu_, cpu) };


      // createTimestamp Field Functions 
      bool hasCreateTimestamp() const { return this->createTimestamp_ != nullptr;};
      void deleteCreateTimestamp() { this->createTimestamp_ = nullptr;};
      inline int64_t getCreateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(createTimestamp_, 0L) };
      inline ClusterServers& setCreateTimestamp(int64_t createTimestamp) { DARABONBA_PTR_SET_VALUE(createTimestamp_, createTimestamp) };


      // customName Field Functions 
      bool hasCustomName() const { return this->customName_ != nullptr;};
      void deleteCustomName() { this->customName_ = nullptr;};
      inline string getCustomName() const { DARABONBA_PTR_GET_DEFAULT(customName_, "") };
      inline ClusterServers& setCustomName(string customName) { DARABONBA_PTR_SET_VALUE(customName_, customName) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline ClusterServers& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline ClusterServers& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // groupType Field Functions 
      bool hasGroupType() const { return this->groupType_ != nullptr;};
      void deleteGroupType() { this->groupType_ = nullptr;};
      inline string getGroupType() const { DARABONBA_PTR_GET_DEFAULT(groupType_, "") };
      inline ClusterServers& setGroupType(string groupType) { DARABONBA_PTR_SET_VALUE(groupType_, groupType) };


      // hostName Field Functions 
      bool hasHostName() const { return this->hostName_ != nullptr;};
      void deleteHostName() { this->hostName_ = nullptr;};
      inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
      inline ClusterServers& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline ClusterServers& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // jobStatus Field Functions 
      bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
      void deleteJobStatus() { this->jobStatus_ = nullptr;};
      inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
      inline ClusterServers& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


      // mac Field Functions 
      bool hasMac() const { return this->mac_ != nullptr;};
      void deleteMac() { this->mac_ = nullptr;};
      inline string getMac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
      inline ClusterServers& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


      // memory Field Functions 
      bool hasMemory() const { return this->memory_ != nullptr;};
      void deleteMemory() { this->memory_ = nullptr;};
      inline int64_t getMemory() const { DARABONBA_PTR_GET_DEFAULT(memory_, 0L) };
      inline ClusterServers& setMemory(int64_t memory) { DARABONBA_PTR_SET_VALUE(memory_, memory) };


      // mid Field Functions 
      bool hasMid() const { return this->mid_ != nullptr;};
      void deleteMid() { this->mid_ = nullptr;};
      inline string getMid() const { DARABONBA_PTR_GET_DEFAULT(mid_, "") };
      inline ClusterServers& setMid(string mid) { DARABONBA_PTR_SET_VALUE(mid_, mid) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline ClusterServers& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // operatorValue Field Functions 
      bool hasOperatorValue() const { return this->operatorValue_ != nullptr;};
      void deleteOperatorValue() { this->operatorValue_ = nullptr;};
      inline int32_t getOperatorValue() const { DARABONBA_PTR_GET_DEFAULT(operatorValue_, 0) };
      inline ClusterServers& setOperatorValue(int32_t operatorValue) { DARABONBA_PTR_SET_VALUE(operatorValue_, operatorValue) };


      // regionCode Field Functions 
      bool hasRegionCode() const { return this->regionCode_ != nullptr;};
      void deleteRegionCode() { this->regionCode_ = nullptr;};
      inline string getRegionCode() const { DARABONBA_PTR_GET_DEFAULT(regionCode_, "") };
      inline ClusterServers& setRegionCode(string regionCode) { DARABONBA_PTR_SET_VALUE(regionCode_, regionCode) };


      // regionCodeValue Field Functions 
      bool hasRegionCodeValue() const { return this->regionCodeValue_ != nullptr;};
      void deleteRegionCodeValue() { this->regionCodeValue_ = nullptr;};
      inline int32_t getRegionCodeValue() const { DARABONBA_PTR_GET_DEFAULT(regionCodeValue_, 0) };
      inline ClusterServers& setRegionCodeValue(int32_t regionCodeValue) { DARABONBA_PTR_SET_VALUE(regionCodeValue_, regionCodeValue) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline ClusterServers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // updateTimestamp Field Functions 
      bool hasUpdateTimestamp() const { return this->updateTimestamp_ != nullptr;};
      void deleteUpdateTimestamp() { this->updateTimestamp_ = nullptr;};
      inline int64_t getUpdateTimestamp() const { DARABONBA_PTR_GET_DEFAULT(updateTimestamp_, 0L) };
      inline ClusterServers& setUpdateTimestamp(int64_t updateTimestamp) { DARABONBA_PTR_SET_VALUE(updateTimestamp_, updateTimestamp) };


    protected:
      shared_ptr<string> continents_ {};
      shared_ptr<int32_t> continentsValue_ {};
      shared_ptr<int32_t> cpu_ {};
      shared_ptr<int64_t> createTimestamp_ {};
      shared_ptr<string> customName_ {};
      shared_ptr<int64_t> groupId_ {};
      shared_ptr<string> groupName_ {};
      shared_ptr<string> groupType_ {};
      shared_ptr<string> hostName_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<string> jobStatus_ {};
      shared_ptr<string> mac_ {};
      shared_ptr<int64_t> memory_ {};
      shared_ptr<string> mid_ {};
      shared_ptr<string> operator_ {};
      shared_ptr<int32_t> operatorValue_ {};
      shared_ptr<string> regionCode_ {};
      shared_ptr<int32_t> regionCodeValue_ {};
      shared_ptr<string> status_ {};
      shared_ptr<int64_t> updateTimestamp_ {};
    };

    virtual bool empty() const override { return this->clusterServers_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // clusterServers Field Functions 
    bool hasClusterServers() const { return this->clusterServers_ != nullptr;};
    void deleteClusterServers() { this->clusterServers_ = nullptr;};
    inline const vector<DescribeHybridCloudClusterServersResponseBody::ClusterServers> & getClusterServers() const { DARABONBA_PTR_GET_CONST(clusterServers_, vector<DescribeHybridCloudClusterServersResponseBody::ClusterServers>) };
    inline vector<DescribeHybridCloudClusterServersResponseBody::ClusterServers> getClusterServers() { DARABONBA_PTR_GET(clusterServers_, vector<DescribeHybridCloudClusterServersResponseBody::ClusterServers>) };
    inline DescribeHybridCloudClusterServersResponseBody& setClusterServers(const vector<DescribeHybridCloudClusterServersResponseBody::ClusterServers> & clusterServers) { DARABONBA_PTR_SET_VALUE(clusterServers_, clusterServers) };
    inline DescribeHybridCloudClusterServersResponseBody& setClusterServers(vector<DescribeHybridCloudClusterServersResponseBody::ClusterServers> && clusterServers) { DARABONBA_PTR_SET_RVALUE(clusterServers_, clusterServers) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHybridCloudClusterServersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeHybridCloudClusterServersResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeHybridCloudClusterServersResponseBody::ClusterServers>> clusterServers_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
