// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTHOSTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEMONITORINGAGENTHOSTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeMonitoringAgentHostsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeMonitoringAgentHostsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AliyunHost, aliyunHost_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(InstanceRegionId, instanceRegionId_);
      DARABONBA_PTR_TO_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SerialNumbers, serialNumbers_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SysomStatus, sysomStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeMonitoringAgentHostsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AliyunHost, aliyunHost_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(InstanceRegionId, instanceRegionId_);
      DARABONBA_PTR_FROM_JSON(KeyWord, keyWord_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SerialNumbers, serialNumbers_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SysomStatus, sysomStatus_);
    };
    DescribeMonitoringAgentHostsRequest() = default ;
    DescribeMonitoringAgentHostsRequest(const DescribeMonitoringAgentHostsRequest &) = default ;
    DescribeMonitoringAgentHostsRequest(DescribeMonitoringAgentHostsRequest &&) = default ;
    DescribeMonitoringAgentHostsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeMonitoringAgentHostsRequest() = default ;
    DescribeMonitoringAgentHostsRequest& operator=(const DescribeMonitoringAgentHostsRequest &) = default ;
    DescribeMonitoringAgentHostsRequest& operator=(DescribeMonitoringAgentHostsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunHost_ == nullptr
        && this->hostName_ == nullptr && this->instanceIds_ == nullptr && this->instanceRegionId_ == nullptr && this->keyWord_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->regionId_ == nullptr && this->serialNumbers_ == nullptr && this->status_ == nullptr && this->sysomStatus_ == nullptr; };
    // aliyunHost Field Functions 
    bool hasAliyunHost() const { return this->aliyunHost_ != nullptr;};
    void deleteAliyunHost() { this->aliyunHost_ = nullptr;};
    inline bool getAliyunHost() const { DARABONBA_PTR_GET_DEFAULT(aliyunHost_, false) };
    inline DescribeMonitoringAgentHostsRequest& setAliyunHost(bool aliyunHost) { DARABONBA_PTR_SET_VALUE(aliyunHost_, aliyunHost) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline DescribeMonitoringAgentHostsRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline string getInstanceIds() const { DARABONBA_PTR_GET_DEFAULT(instanceIds_, "") };
    inline DescribeMonitoringAgentHostsRequest& setInstanceIds(string instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };


    // instanceRegionId Field Functions 
    bool hasInstanceRegionId() const { return this->instanceRegionId_ != nullptr;};
    void deleteInstanceRegionId() { this->instanceRegionId_ = nullptr;};
    inline string getInstanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(instanceRegionId_, "") };
    inline DescribeMonitoringAgentHostsRequest& setInstanceRegionId(string instanceRegionId) { DARABONBA_PTR_SET_VALUE(instanceRegionId_, instanceRegionId) };


    // keyWord Field Functions 
    bool hasKeyWord() const { return this->keyWord_ != nullptr;};
    void deleteKeyWord() { this->keyWord_ = nullptr;};
    inline string getKeyWord() const { DARABONBA_PTR_GET_DEFAULT(keyWord_, "") };
    inline DescribeMonitoringAgentHostsRequest& setKeyWord(string keyWord) { DARABONBA_PTR_SET_VALUE(keyWord_, keyWord) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeMonitoringAgentHostsRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeMonitoringAgentHostsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeMonitoringAgentHostsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // serialNumbers Field Functions 
    bool hasSerialNumbers() const { return this->serialNumbers_ != nullptr;};
    void deleteSerialNumbers() { this->serialNumbers_ = nullptr;};
    inline string getSerialNumbers() const { DARABONBA_PTR_GET_DEFAULT(serialNumbers_, "") };
    inline DescribeMonitoringAgentHostsRequest& setSerialNumbers(string serialNumbers) { DARABONBA_PTR_SET_VALUE(serialNumbers_, serialNumbers) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeMonitoringAgentHostsRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // sysomStatus Field Functions 
    bool hasSysomStatus() const { return this->sysomStatus_ != nullptr;};
    void deleteSysomStatus() { this->sysomStatus_ = nullptr;};
    inline string getSysomStatus() const { DARABONBA_PTR_GET_DEFAULT(sysomStatus_, "") };
    inline DescribeMonitoringAgentHostsRequest& setSysomStatus(string sysomStatus) { DARABONBA_PTR_SET_VALUE(sysomStatus_, sysomStatus) };


  protected:
    // Specifies whether to query Elastic Compute Service (ECS) instances that are provided by Alibaba Cloud or to query hosts that are not provided by Alibaba Cloud. Valid values:
    // 
    // *   true (default value): queries all the ECS instances that are provided by Alibaba Cloud.
    // *   false: queries all the hosts that are not provided by Alibaba Cloud.
    shared_ptr<bool> aliyunHost_ {};
    // The name of the host.
    shared_ptr<string> hostName_ {};
    // The ID of the instance.
    shared_ptr<string> instanceIds_ {};
    // The region ID of the instance.
    shared_ptr<string> instanceRegionId_ {};
    // The keyword that is used in fuzzy match.
    shared_ptr<string> keyWord_ {};
    // The number of the page to return.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries to return on each page. Valid values:
    // 
    // *   10
    // *   20
    // *   50
    // *   100
    // 
    // > Although Alibaba Cloud does not limit the maximum value of this parameter, we recommend that you do not set it to an excessively large value. If you set it to an excessively large value, a timeout error may occur.
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> regionId_ {};
    // The serial number of the host.
    // 
    // After the CloudMonitor agent is installed on a host, a globally unique serial number is generated. A host that is not provided by Alibaba Cloud has a serial number instead of an instance ID.
    // 
    // > This parameter can be used to accurately search for a monitored host.
    shared_ptr<string> serialNumbers_ {};
    // The status of the hosts that you want to query. Valid values:
    // 
    // *   Running: queries the hosts that are running.
    // *   Stopped: queries the hosts that are stopped, are not installed, or fail to be installed.
    shared_ptr<string> status_ {};
    // The status of SysOM. Valid values:
    // 
    // *   installing: SysOM is being installed.
    // *   running: SysOM is running.
    // *   stopped: SysOM is stopped.
    // *   uninstalling: SysOM is being uninstalled.
    shared_ptr<string> sysomStatus_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
