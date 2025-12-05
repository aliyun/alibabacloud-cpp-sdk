// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYNETWORKDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYNETWORKDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ModifyNetworkDomainRequestProxies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class ModifyNetworkDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyNetworkDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainName, networkDomainName_);
      DARABONBA_PTR_TO_JSON(NetworkDomainType, networkDomainType_);
      DARABONBA_PTR_TO_JSON(Proxies, proxies_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyNetworkDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainId, networkDomainId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainName, networkDomainName_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainType, networkDomainType_);
      DARABONBA_PTR_FROM_JSON(Proxies, proxies_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ModifyNetworkDomainRequest() = default ;
    ModifyNetworkDomainRequest(const ModifyNetworkDomainRequest &) = default ;
    ModifyNetworkDomainRequest(ModifyNetworkDomainRequest &&) = default ;
    ModifyNetworkDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyNetworkDomainRequest() = default ;
    ModifyNetworkDomainRequest& operator=(const ModifyNetworkDomainRequest &) = default ;
    ModifyNetworkDomainRequest& operator=(ModifyNetworkDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->instanceId_ == nullptr && return this->networkDomainId_ == nullptr && return this->networkDomainName_ == nullptr && return this->networkDomainType_ == nullptr && return this->proxies_ == nullptr
        && return this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline ModifyNetworkDomainRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ModifyNetworkDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainId Field Functions 
    bool hasNetworkDomainId() const { return this->networkDomainId_ != nullptr;};
    void deleteNetworkDomainId() { this->networkDomainId_ = nullptr;};
    inline string networkDomainId() const { DARABONBA_PTR_GET_DEFAULT(networkDomainId_, "") };
    inline ModifyNetworkDomainRequest& setNetworkDomainId(string networkDomainId) { DARABONBA_PTR_SET_VALUE(networkDomainId_, networkDomainId) };


    // networkDomainName Field Functions 
    bool hasNetworkDomainName() const { return this->networkDomainName_ != nullptr;};
    void deleteNetworkDomainName() { this->networkDomainName_ = nullptr;};
    inline string networkDomainName() const { DARABONBA_PTR_GET_DEFAULT(networkDomainName_, "") };
    inline ModifyNetworkDomainRequest& setNetworkDomainName(string networkDomainName) { DARABONBA_PTR_SET_VALUE(networkDomainName_, networkDomainName) };


    // networkDomainType Field Functions 
    bool hasNetworkDomainType() const { return this->networkDomainType_ != nullptr;};
    void deleteNetworkDomainType() { this->networkDomainType_ = nullptr;};
    inline string networkDomainType() const { DARABONBA_PTR_GET_DEFAULT(networkDomainType_, "") };
    inline ModifyNetworkDomainRequest& setNetworkDomainType(string networkDomainType) { DARABONBA_PTR_SET_VALUE(networkDomainType_, networkDomainType) };


    // proxies Field Functions 
    bool hasProxies() const { return this->proxies_ != nullptr;};
    void deleteProxies() { this->proxies_ = nullptr;};
    inline const vector<ModifyNetworkDomainRequestProxies> & proxies() const { DARABONBA_PTR_GET_CONST(proxies_, vector<ModifyNetworkDomainRequestProxies>) };
    inline vector<ModifyNetworkDomainRequestProxies> proxies() { DARABONBA_PTR_GET(proxies_, vector<ModifyNetworkDomainRequestProxies>) };
    inline ModifyNetworkDomainRequest& setProxies(const vector<ModifyNetworkDomainRequestProxies> & proxies) { DARABONBA_PTR_SET_VALUE(proxies_, proxies) };
    inline ModifyNetworkDomainRequest& setProxies(vector<ModifyNetworkDomainRequestProxies> && proxies) { DARABONBA_PTR_SET_RVALUE(proxies_, proxies) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyNetworkDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The new remarks of the network domain.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the bastion host to which the network domain to modify belongs.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the bastion host ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the network domain to modify.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkDomainId_ = nullptr;
    // The new name of the network domain.
    std::shared_ptr<string> networkDomainName_ = nullptr;
    // The new connection mode of the network domain. Valid values:
    // 
    // *   **Direct**
    // *   **Proxy**
    std::shared_ptr<string> networkDomainType_ = nullptr;
    // The information about the proxy servers in the network domain.
    std::shared_ptr<vector<ModifyNetworkDomainRequestProxies>> proxies_ = nullptr;
    // The region ID of the bastion host to which the network domain to modify belongs.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
