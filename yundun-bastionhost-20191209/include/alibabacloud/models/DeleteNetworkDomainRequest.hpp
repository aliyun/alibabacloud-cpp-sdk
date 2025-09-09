// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENETWORKDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENETWORKDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class DeleteNetworkDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNetworkDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNetworkDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DeleteNetworkDomainRequest() = default ;
    DeleteNetworkDomainRequest(const DeleteNetworkDomainRequest &) = default ;
    DeleteNetworkDomainRequest(DeleteNetworkDomainRequest &&) = default ;
    DeleteNetworkDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNetworkDomainRequest() = default ;
    DeleteNetworkDomainRequest& operator=(const DeleteNetworkDomainRequest &) = default ;
    DeleteNetworkDomainRequest& operator=(DeleteNetworkDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceId_ != nullptr
        && this->networkDomainId_ != nullptr && this->regionId_ != nullptr; };
    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteNetworkDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string networkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline DeleteNetworkDomainRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteNetworkDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the bastion host whose network domain you want to delete.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the network domain to be deleted.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkDomainId_ = nullptr;
    // The region ID of the bastion host whose network domain you want to delete.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
