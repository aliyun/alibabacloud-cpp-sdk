// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYHOSTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYHOSTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyHostRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyHostRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(HostId, hostId_);
      DARABONBA_PTR_TO_JSON(HostName, hostName_);
      DARABONBA_PTR_TO_JSON(HostPrivateAddress, hostPrivateAddress_);
      DARABONBA_PTR_TO_JSON(HostPublicAddress, hostPublicAddress_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(OSType, OSType_);
      DARABONBA_PTR_TO_JSON(PrefKex, prefKex_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyHostRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(HostId, hostId_);
      DARABONBA_PTR_FROM_JSON(HostName, hostName_);
      DARABONBA_PTR_FROM_JSON(HostPrivateAddress, hostPrivateAddress_);
      DARABONBA_PTR_FROM_JSON(HostPublicAddress, hostPublicAddress_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(OSType, OSType_);
      DARABONBA_PTR_FROM_JSON(PrefKex, prefKex_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyHostRequest() = default ;
    ModifyHostRequest(const ModifyHostRequest &) = default ;
    ModifyHostRequest(ModifyHostRequest &&) = default ;
    ModifyHostRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyHostRequest() = default ;
    ModifyHostRequest& operator=(const ModifyHostRequest &) = default ;
    ModifyHostRequest& operator=(ModifyHostRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->hostId_ == nullptr && this->hostName_ == nullptr && this->hostPrivateAddress_ == nullptr && this->hostPublicAddress_ == nullptr && this->instanceId_ == nullptr
        && this->networkDomainId_ == nullptr && this->OSType_ == nullptr && this->prefKex_ == nullptr && this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyHostRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // hostId Field Functions 
    bool hasHostId() const { return this->hostId_ != nullptr;};
    void deleteHostId() { this->hostId_ = nullptr;};
    inline string getHostId() const { DARABONBA_PTR_GET_DEFAULT(hostId_, "") };
    inline ModifyHostRequest& setHostId(string hostId) { DARABONBA_PTR_SET_VALUE(hostId_, hostId) };


    // hostName Field Functions 
    bool hasHostName() const { return this->hostName_ != nullptr;};
    void deleteHostName() { this->hostName_ = nullptr;};
    inline string getHostName() const { DARABONBA_PTR_GET_DEFAULT(hostName_, "") };
    inline ModifyHostRequest& setHostName(string hostName) { DARABONBA_PTR_SET_VALUE(hostName_, hostName) };


    // hostPrivateAddress Field Functions 
    bool hasHostPrivateAddress() const { return this->hostPrivateAddress_ != nullptr;};
    void deleteHostPrivateAddress() { this->hostPrivateAddress_ = nullptr;};
    inline string getHostPrivateAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPrivateAddress_, "") };
    inline ModifyHostRequest& setHostPrivateAddress(string hostPrivateAddress) { DARABONBA_PTR_SET_VALUE(hostPrivateAddress_, hostPrivateAddress) };


    // hostPublicAddress Field Functions 
    bool hasHostPublicAddress() const { return this->hostPublicAddress_ != nullptr;};
    void deleteHostPublicAddress() { this->hostPublicAddress_ = nullptr;};
    inline string getHostPublicAddress() const { DARABONBA_PTR_GET_DEFAULT(hostPublicAddress_, "") };
    inline ModifyHostRequest& setHostPublicAddress(string hostPublicAddress) { DARABONBA_PTR_SET_VALUE(hostPublicAddress_, hostPublicAddress) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyHostRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline ModifyHostRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // OSType Field Functions 
    bool hasOSType() const { return this->OSType_ != nullptr;};
    void deleteOSType() { this->OSType_ = nullptr;};
    inline string getOSType() const { DARABONBA_PTR_GET_DEFAULT(OSType_, "") };
    inline ModifyHostRequest& setOSType(string OSType) { DARABONBA_PTR_SET_VALUE(OSType_, OSType) };


    // prefKex Field Functions 
    bool hasPrefKex() const { return this->prefKex_ != nullptr;};
    void deletePrefKex() { this->prefKex_ = nullptr;};
    inline string getPrefKex() const { DARABONBA_PTR_GET_DEFAULT(prefKex_, "") };
    inline ModifyHostRequest& setPrefKex(string prefKex) { DARABONBA_PTR_SET_VALUE(prefKex_, prefKex) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyHostRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The new description of the host. The description can be up to 500 characters in length.
    shared_ptr<string> comment_ {};
    // The ID of the host.
    // 
    // > You can call the [ListHosts](https://help.aliyun.com/document_detail/200665.html) operation to query the ID of the host.
    // 
    // This parameter is required.
    shared_ptr<string> hostId_ {};
    // The new name of the host. The name can be up to 128 characters.
    shared_ptr<string> hostName_ {};
    // The new internal endpoint of the host. You can set this parameter to a domain name or an IP address.
    shared_ptr<string> hostPrivateAddress_ {};
    // The new public endpoint of the host. You can set this parameter to a domain name or an IP address.
    shared_ptr<string> hostPublicAddress_ {};
    // The ID of the bastion host on which you want to modify the information about the host.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the new network domain to which the host belongs.
    // 
    // > You can call the [ListNetworkDomains](https://help.aliyun.com/document_detail/2758827.html) operation to query the network domain ID.
    shared_ptr<string> networkDomainId_ {};
    // The new operating system of the host. Valid values:
    // 
    // *   **Linux**
    // *   **Windows**
    shared_ptr<string> OSType_ {};
    // The preferred key exchange algorithm of the host. If you set OSType to Linux, you can modify this parameter. Valid values:
    // 
    // *   **default**
    // *   **diffie-hellman-group1-sha1**
    // *   **diffie-hellman-group14-sha1**
    // *   **diffie-hellman-group-exchange-sha1**
    shared_ptr<string> prefKex_ {};
    // The region ID of the bastion host on which you want to modify the information about the host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
