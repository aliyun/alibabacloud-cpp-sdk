// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MOVEHOSTSTONETWORKDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MOVEHOSTSTONETWORKDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class MoveHostsToNetworkDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MoveHostsToNetworkDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(HostIds, hostIds_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveHostsToNetworkDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostIds, hostIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    MoveHostsToNetworkDomainRequest() = default ;
    MoveHostsToNetworkDomainRequest(const MoveHostsToNetworkDomainRequest &) = default ;
    MoveHostsToNetworkDomainRequest(MoveHostsToNetworkDomainRequest &&) = default ;
    MoveHostsToNetworkDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MoveHostsToNetworkDomainRequest() = default ;
    MoveHostsToNetworkDomainRequest& operator=(const MoveHostsToNetworkDomainRequest &) = default ;
    MoveHostsToNetworkDomainRequest& operator=(MoveHostsToNetworkDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->hostIds_ == nullptr
        && return this->instanceId_ == nullptr && return this->networkDomainId_ == nullptr && return this->regionId_ == nullptr; };
    // hostIds Field Functions 
    bool hasHostIds() const { return this->hostIds_ != nullptr;};
    void deleteHostIds() { this->hostIds_ = nullptr;};
    inline const vector<string> & hostIds() const { DARABONBA_PTR_GET_CONST(hostIds_, vector<string>) };
    inline vector<string> hostIds() { DARABONBA_PTR_GET(hostIds_, vector<string>) };
    inline MoveHostsToNetworkDomainRequest& setHostIds(const vector<string> & hostIds) { DARABONBA_PTR_SET_VALUE(hostIds_, hostIds) };
    inline MoveHostsToNetworkDomainRequest& setHostIds(vector<string> && hostIds) { DARABONBA_PTR_SET_RVALUE(hostIds_, hostIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MoveHostsToNetworkDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string networkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline MoveHostsToNetworkDomainRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MoveHostsToNetworkDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the hosts that you want to add to the network domain.
    // 
    // This parameter is required.
    std::shared_ptr<vector<string>> hostIds_ = nullptr;
    // The bastion host ID.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the network domain to which you want to add hosts.
    // 
    // >  You can call the [ListNetworkDomains](https://help.aliyun.com/document_detail/2758827.html) operation to query the network domain ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkDomainId_ = nullptr;
    // The region ID of the bastion host.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
