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
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, MoveHostsToNetworkDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(HostIds, hostIds_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
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
        && this->instanceId_ == nullptr && this->networkDomainId_ == nullptr && this->projectId_ == nullptr && this->regionId_ == nullptr; };
    // hostIds Field Functions 
    bool hasHostIds() const { return this->hostIds_ != nullptr;};
    void deleteHostIds() { this->hostIds_ = nullptr;};
    inline const vector<string> & getHostIds() const { DARABONBA_PTR_GET_CONST(hostIds_, vector<string>) };
    inline vector<string> getHostIds() { DARABONBA_PTR_GET(hostIds_, vector<string>) };
    inline MoveHostsToNetworkDomainRequest& setHostIds(const vector<string> & hostIds) { DARABONBA_PTR_SET_VALUE(hostIds_, hostIds) };
    inline MoveHostsToNetworkDomainRequest& setHostIds(vector<string> && hostIds) { DARABONBA_PTR_SET_RVALUE(hostIds_, hostIds) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline MoveHostsToNetworkDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string getNetworkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline MoveHostsToNetworkDomainRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline MoveHostsToNetworkDomainRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline MoveHostsToNetworkDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The IDs of the hosts to move to the network domain.
    shared_ptr<vector<string>> hostIds_ {};
    // The instance ID of the Bastionhost.
    // > You can invoke the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the parameter value.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the destination network domain.
    // > You can call the [ListNetworkDomains](https://help.aliyun.com/document_detail/2758827.html) operation to query the parameter value.
    // 
    // This parameter is required.
    shared_ptr<string> networkDomainId_ {};
    // The project ID.
    shared_ptr<int64_t> projectId_ {};
    // The region ID of the Bastionhost instance.
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
