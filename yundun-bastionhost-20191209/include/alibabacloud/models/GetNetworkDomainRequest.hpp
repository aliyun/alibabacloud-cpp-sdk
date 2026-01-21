// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETNETWORKDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETNETWORKDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class GetNetworkDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetNetworkDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CheckProxyState, checkProxyState_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetNetworkDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckProxyState, checkProxyState_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    GetNetworkDomainRequest() = default ;
    GetNetworkDomainRequest(const GetNetworkDomainRequest &) = default ;
    GetNetworkDomainRequest(GetNetworkDomainRequest &&) = default ;
    GetNetworkDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetNetworkDomainRequest() = default ;
    GetNetworkDomainRequest& operator=(const GetNetworkDomainRequest &) = default ;
    GetNetworkDomainRequest& operator=(GetNetworkDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->checkProxyState_ == nullptr
        && this->instanceId_ == nullptr && this->networkDomainId_ == nullptr && this->regionId_ == nullptr; };
    // checkProxyState Field Functions 
    bool hasCheckProxyState() const { return this->checkProxyState_ != nullptr;};
    void deleteCheckProxyState() { this->checkProxyState_ = nullptr;};
    inline string getCheckProxyState() const { DARABONBA_PTR_GET_DEFAULT(checkProxyState_, "") };
    inline GetNetworkDomainRequest& setCheckProxyState(string checkProxyState) { DARABONBA_PTR_SET_VALUE(checkProxyState_, checkProxyState) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetNetworkDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline GetNetworkDomainRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetNetworkDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> checkProxyState_ {};
    // The bastion host ID.
    // > You can call the [DescribeInstances ](https://help.aliyun.com/document_detail/153281.html)operation to query the bastion host ID.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the network domain to query.
    // > You can call the [ListNetworkDomains ](https://help.aliyun.com/document_detail/2758827.html)operation to query the network domain ID.
    // 
    // This parameter is required.
    shared_ptr<string> networkDomainId_ {};
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
