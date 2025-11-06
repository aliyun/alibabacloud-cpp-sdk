// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENACOSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENACOSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateNacosInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNacosInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(Ephemeral, ephemeral_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(Weight, weight_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNacosInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(Ephemeral, ephemeral_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(Weight, weight_);
    };
    CreateNacosInstanceRequest() = default ;
    CreateNacosInstanceRequest(const CreateNacosInstanceRequest &) = default ;
    CreateNacosInstanceRequest(CreateNacosInstanceRequest &&) = default ;
    CreateNacosInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNacosInstanceRequest() = default ;
    CreateNacosInstanceRequest& operator=(const CreateNacosInstanceRequest &) = default ;
    CreateNacosInstanceRequest& operator=(CreateNacosInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->clusterName_ == nullptr && return this->enabled_ == nullptr && return this->ephemeral_ == nullptr && return this->groupName_ == nullptr && return this->instanceId_ == nullptr
        && return this->ip_ == nullptr && return this->metadata_ == nullptr && return this->namespaceId_ == nullptr && return this->port_ == nullptr && return this->serviceName_ == nullptr
        && return this->weight_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateNacosInstanceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline CreateNacosInstanceRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline CreateNacosInstanceRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ephemeral Field Functions 
    bool hasEphemeral() const { return this->ephemeral_ != nullptr;};
    void deleteEphemeral() { this->ephemeral_ = nullptr;};
    inline bool ephemeral() const { DARABONBA_PTR_GET_DEFAULT(ephemeral_, false) };
    inline CreateNacosInstanceRequest& setEphemeral(bool ephemeral) { DARABONBA_PTR_SET_VALUE(ephemeral_, ephemeral) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateNacosInstanceRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateNacosInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline CreateNacosInstanceRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string metadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline CreateNacosInstanceRequest& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateNacosInstanceRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline CreateNacosInstanceRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateNacosInstanceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string weight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline CreateNacosInstanceRequest& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The name of the Nacos instance.
    std::shared_ptr<string> clusterName_ = nullptr;
    // Specifies whether to enable the service for the instance.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enabled_ = nullptr;
    // Specifies whether to mark the instance as a temporary node.
    // 
    // This parameter is required.
    std::shared_ptr<bool> ephemeral_ = nullptr;
    // The name of the group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address of the Nacos instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> ip_ = nullptr;
    // The node metadata of the instance.
    std::shared_ptr<string> metadata_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The port number of the Nacos instance.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The name of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
    // The weight. Valid values: 0 to 10000. The value must be an integer. A larger value indicates a higher frequency at which the instance is accessed.
    // 
    // This parameter is required.
    std::shared_ptr<string> weight_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
