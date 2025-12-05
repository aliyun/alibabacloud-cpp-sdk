// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENETWORKDOMAINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENETWORKDOMAINREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateNetworkDomainRequestProxies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace YundunBastionhost20191209
{
namespace Models
{
  class CreateNetworkDomainRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNetworkDomainRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NetworkDomainName, networkDomainName_);
      DARABONBA_PTR_TO_JSON(NetworkDomainType, networkDomainType_);
      DARABONBA_PTR_TO_JSON(Proxies, proxies_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNetworkDomainRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainName, networkDomainName_);
      DARABONBA_PTR_FROM_JSON(NetworkDomainType, networkDomainType_);
      DARABONBA_PTR_FROM_JSON(Proxies, proxies_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    CreateNetworkDomainRequest() = default ;
    CreateNetworkDomainRequest(const CreateNetworkDomainRequest &) = default ;
    CreateNetworkDomainRequest(CreateNetworkDomainRequest &&) = default ;
    CreateNetworkDomainRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNetworkDomainRequest() = default ;
    CreateNetworkDomainRequest& operator=(const CreateNetworkDomainRequest &) = default ;
    CreateNetworkDomainRequest& operator=(CreateNetworkDomainRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->instanceId_ == nullptr && return this->networkDomainName_ == nullptr && return this->networkDomainType_ == nullptr && return this->proxies_ == nullptr && return this->regionId_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateNetworkDomainRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateNetworkDomainRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // networkDomainName Field Functions 
    bool hasNetworkDomainName() const { return this->networkDomainName_ != nullptr;};
    void deleteNetworkDomainName() { this->networkDomainName_ = nullptr;};
    inline string networkDomainName() const { DARABONBA_PTR_GET_DEFAULT(networkDomainName_, "") };
    inline CreateNetworkDomainRequest& setNetworkDomainName(string networkDomainName) { DARABONBA_PTR_SET_VALUE(networkDomainName_, networkDomainName) };


    // networkDomainType Field Functions 
    bool hasNetworkDomainType() const { return this->networkDomainType_ != nullptr;};
    void deleteNetworkDomainType() { this->networkDomainType_ = nullptr;};
    inline string networkDomainType() const { DARABONBA_PTR_GET_DEFAULT(networkDomainType_, "") };
    inline CreateNetworkDomainRequest& setNetworkDomainType(string networkDomainType) { DARABONBA_PTR_SET_VALUE(networkDomainType_, networkDomainType) };


    // proxies Field Functions 
    bool hasProxies() const { return this->proxies_ != nullptr;};
    void deleteProxies() { this->proxies_ = nullptr;};
    inline const vector<CreateNetworkDomainRequestProxies> & proxies() const { DARABONBA_PTR_GET_CONST(proxies_, vector<CreateNetworkDomainRequestProxies>) };
    inline vector<CreateNetworkDomainRequestProxies> proxies() { DARABONBA_PTR_GET(proxies_, vector<CreateNetworkDomainRequestProxies>) };
    inline CreateNetworkDomainRequest& setProxies(const vector<CreateNetworkDomainRequestProxies> & proxies) { DARABONBA_PTR_SET_VALUE(proxies_, proxies) };
    inline CreateNetworkDomainRequest& setProxies(vector<CreateNetworkDomainRequestProxies> && proxies) { DARABONBA_PTR_SET_RVALUE(proxies_, proxies) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateNetworkDomainRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The remarks of the network domain. The remarks can be up to 500 characters in length.
    std::shared_ptr<string> comment_ = nullptr;
    // The ID of the bastion host for which you want to create a network domain.
    // 
    // > You can call the [DescribeInstances](https://help.aliyun.com/document_detail/153281.html) operation to query the ID of the bastion host.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The name of the network domain that you want to create. The name can be up to 128 characters in length.
    // 
    // This parameter is required.
    std::shared_ptr<string> networkDomainName_ = nullptr;
    // The connection mode of the network domain to be created. Valid values:
    // 
    // *   Direct
    // *   Proxy
    // 
    // This parameter is required.
    std::shared_ptr<string> networkDomainType_ = nullptr;
    // The information about the proxy servers.
    std::shared_ptr<vector<CreateNetworkDomainRequestProxies>> proxies_ = nullptr;
    // The region ID of the bastion host for which you want to create a network domain.
    // 
    // > For more information about the mapping between region IDs and region names, see [Regions and zones](https://help.aliyun.com/document_detail/40654.html).
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace YundunBastionhost20191209
#endif
