// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEHOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEHOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateHostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateHostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HostPrivateAddress, hostPrivateAddress_);
      DARABONBA_PTR_TO_JSON(HostPublicAddress, hostPublicAddress_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceMemberId, instanceMemberId_);
      DARABONBA_PTR_TO_JSON(InstanceRegionId, instanceRegionId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateHostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveAddressType, activeAddressType_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HostPrivateAddress, hostPrivateAddress_);
      DARABONBA_PTR_FROM_JSON(HostPublicAddress, hostPublicAddress_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceMemberId, instanceMemberId_);
      DARABONBA_PTR_FROM_JSON(InstanceRegionId, instanceRegionId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
    };
    CreateHostRequest() = default ;
    CreateHostRequest(const CreateHostRequest &) = default ;
    CreateHostRequest(CreateHostRequest &&) = default ;
    CreateHostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateHostRequest() = default ;
    CreateHostRequest& operator=(const CreateHostRequest &) = default ;
    CreateHostRequest& operator=(CreateHostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeAddressType_ == nullptr
        && return this->comment_ == nullptr && return this->hostName_ == nullptr && return this->hostPrivateAddress_ == nullptr && return this->hostPublicAddress_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceMemberId_ == nullptr && return this->instanceRegionId_ == nullptr && return this->networkDomainId_ == nullptr && return this->OSType_ == nullptr && return this->regionId_ == nullptr
        && return this->source_ == nullptr && return this->sourceInstanceId_ == nullptr; };
    // activeAddressType Field Functions 
    bool hasActiveAddressType() const { return this->activeAddressType_ != nullptr;};
    void deleteActiveAddressType() { this->activeAddressType_ = nullptr;};
    inline string activeAddressType() const { DARABONBA_PTR_GET_DEFAULT(activeAddressType_, "") };
    inline CreateHostRequest& setActiveAddressType(string activeAddressType) { DARABONBA_PTR_SET_VALUE(activeAddressType_, activeAddressType) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateHostRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string hostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline CreateHostRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hostPrivateAddress Field Functions 
    bool hasHostPrivateAddress() const { return this->hostPrivateAddress_ != nullptr;};
    void deleteHostPrivateAddress() { this->hostPrivateAddress_ = nullptr;};
    inline string hostPrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPrivateAddress_, "") };
    inline CreateHostRequest& setHostPrivateAddress(string hostPrivateAddress) { DARABONBA_PTR_SET_VALUE(hostPrivateAddress_, hostPrivateAddress) };


    // hostPublicAddress Field Functions 
    bool hasHostPublicAddress() const { return this->hostPublicAddress_ != nullptr;};
    void deleteHostPublicAddress() { this->hostPublicAddress_ = nullptr;};
    inline string hostPublicAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPublicAddress_, "") };
    inline CreateHostRequest& setHostPublicAddress(string hostPublicAddress) { DARABONBA_PTR_SET_VALUE(hostPublicAddress_, hostPublicAddress) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateHostRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceMemberId Field Functions 
    bool hasInstanceMemberId() const { return this->instanceMemberId_ != nullptr;};
    void deleteInstanceMemberId() { this->instanceMemberId_ = nullptr;};
    inline int64_t instanceMemberId() const { DARABONBA_PTR_GET_DEFAULT(instanceMemberId_, 0L) };
    inline CreateHostRequest& setInstanceMemberId(int64_t instanceMemberId) { DARABONBA_PTR_SET_VALUE(instanceMemberId_, instanceMemberId) };


    // instanceRegionId Field Functions 
    bool hasInstanceRegionId() const { return this->instanceRegionId_ != nullptr;};
    void deleteInstanceRegionId() { this->instanceRegionId_ = nullptr;};
    inline string instanceRegionId() const { DARABONBA_PTR_GET_DEFAULT(instanceRegionId_, "") };
    inline CreateHostRequest& setInstanceRegionId(string instanceRegionId) { DARABONBA_PTR_SET_VALUE(instanceRegionId_, instanceRegionId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string networkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline CreateHostRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string OSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline CreateHostRequest& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateHostRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline CreateHostRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string sourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline CreateHostRequest& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


  protected:
    // The endpoint type of the host that you want to create. Valid values:
    // 
    // *   **Public**: public endpoint
    // *   **Private**: internal endpoint
    // 
    // This parameter is required.
    std::shared_ptr<string> activeAddressType_ = nullptr;
    // The description of the host that you want to create. The value can be up to 500 characters in length.
    std::shared_ptr<string> comment_ = nullptr;
    // The name of the host that you want to create. The name can be up to 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> hostName_ = nullptr;
    // The internal endpoint of the host that you want to create. You can set this parameter to a domain name or an IP address.
    // 
    // > This parameter is required if the **ActiveAddressType** parameter is set to **Private**.
    std::shared_ptr<string> hostPrivateAddress_ = nullptr;
    // The public endpoint of the host that you want to create. You can set this parameter to a domain name or an IP address.
    // 
    // > This parameter is required if the **ActiveAddressType** parameter is set to **Public**.
    std::shared_ptr<string> hostPublicAddress_ = nullptr;
    // The ID of the bastion host in which you want to create the host.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<int64_t> instanceMemberId_ = nullptr;
    // The ID of the region to which the ECS instance or the host in an ApsaraDB MyBase dedicated cluster belongs.
    // 
    // > This parameter is required if the **Source** parameter is set to **Ecs** or **Rds**.
    std::shared_ptr<string> instanceRegionId_ = nullptr;
    // The ID of the network domain to which the host to be imported belongs.
    // 
    // > You can call the [ListNetworkDomains](https://help.aliyun.com/document_detail/2758827.html) operation to query the network domain ID.
    std::shared_ptr<string> networkDomainId_ = nullptr;
    // The operating system of the host that you want to create. Valid values:
    // 
    // *   **Linux**
    // *   **Windows**
    // 
    // This parameter is required.
    std::shared_ptr<string> OSType_ = nullptr;
    // The region ID of the bastion host to which you want to import the host.
    // 
    // > For information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The source of the host that you want to create. Valid values:
    // 
    // *   **Local**: a host in a data center
    // *   **Ecs**: an Elastic Compute Service (ECS) instance
    // *   **Rds**: a host in an ApsaraDB MyBase dedicated cluster
    // 
    // This parameter is required.
    std::shared_ptr<string> source_ = nullptr;
    // The ID of the ECS instance or the host in an ApsaraDB MyBase dedicated cluster.
    // 
    // > This parameter is required if the **Source** parameter is set to **Ecs** or **Rds**.
    std::shared_ptr<string> sourceInstanceId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
