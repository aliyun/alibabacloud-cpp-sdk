// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOSTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTHOSTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ListHostsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHostsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_TO_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_TO_JSON(SourceInstanceState, sourceInstanceState_);
    };
    friend void from_json(const Darabonba::Json& j, ListHostsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostAddress, hostAddress_);
      DARABONBA_PTR_FROM_JSON(HostGroupId, hostGroupId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceState, sourceInstanceState_);
    };
    ListHostsRequest() = default ;
    ListHostsRequest(const ListHostsRequest &) = default ;
    ListHostsRequest(ListHostsRequest &&) = default ;
    ListHostsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHostsRequest() = default ;
    ListHostsRequest& operator=(const ListHostsRequest &) = default ;
    ListHostsRequest& operator=(ListHostsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostAddress_ == nullptr
        && this->hostGroupId_ == nullptr && this->hostName_ == nullptr && this->instanceId_ == nullptr && this->OSType_ == nullptr && this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr && this->source_ == nullptr && this->sourceInstanceId_ == nullptr
        && this->sourceInstanceState_ == nullptr; };
    // hostAddress Field Functions 
    bool hasHostAddress() const { return this->hostAddress_ != nullptr;};
    void deleteHostAddress() { this->hostAddress_ = nullptr;};
    inline string getHostAddress() const { DARABONBA_PTR_GET_DEFAULT(hostAddress_, "") };
    inline ListHostsRequest& setHostAddress(string hostAddress) { DARABONBA_PTR_SET_VALUE(hostAddress_, hostAddress) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline string getHostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, "") };
    inline ListHostsRequest& setHostGroupId(string hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ListHostsRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListHostsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline ListHostsRequest& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListHostsRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListHostsRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline string getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, "") };
    inline ListHostsRequest& setProjectId(string projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListHostsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListHostsRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline ListHostsRequest& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // sourceInstanceState Field Functions 
    bool hasSourceInstanceState() const { return this->sourceInstanceState_ != nullptr;};
    void deleteSourceInstanceState() { this->sourceInstanceState_ = nullptr;};
    inline string getSourceInstanceState() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceState_, "") };
    inline ListHostsRequest& setSourceInstanceState(string sourceInstanceState) { DARABONBA_PTR_SET_VALUE(sourceInstanceState_, sourceInstanceState) };


  protected:
    // The address of the host. You can use a domain name or an IP address. Fuzzy match is not supported. Only exact match is supported.
    shared_ptr<string> hostAddress_ {};
    // The ID of the host group to which the host belongs.
    // > You can call the [ListHostGroups](https://help.aliyun.com/document_detail/201307.html) operation to obtain the host group ID.
    shared_ptr<string> hostGroupId_ {};
    // The name of the host. Fuzzy match is not supported. Only exact match is supported.
    shared_ptr<string> hostName_ {};
    // The instance ID of the Bastionhost instance whose hosts you want to query.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to obtain this parameter.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The operating system of the host. Valid values:
    // - **Linux**
    // - **Windows**
    shared_ptr<string> OSType_ {};
    // The number of the page to return. Default value: **1**.
    shared_ptr<string> pageNumber_ {};
    // Specifies the number of hosts to return per page in a paged query. Default value: **10**, which indicates that 10 hosts are returned per page.
    // > Do not leave PageSize empty.
    shared_ptr<string> pageSize_ {};
    // The project ID.
    shared_ptr<string> projectId_ {};
    // The region ID of the Bastionhost instance.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
    // The source of the host. Valid values:
    // - **Local**: local host
    // - **Ecs**: ECS instance
    // - **Rds**: RDS dedicated cluster host
    shared_ptr<string> source_ {};
    // The ECS instance ID or the dedicated cluster host ID to which the host corresponds. Fuzzy match is not supported. Only exact match is supported.
    shared_ptr<string> sourceInstanceId_ {};
    // The status of the host. Valid values:
    // - **Normal**: normal
    // - **Release**: released
    shared_ptr<string> sourceInstanceState_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
