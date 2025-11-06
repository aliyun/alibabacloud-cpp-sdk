// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENACOSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENACOSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteNacosInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNacosInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(Ephemeral, ephemeral_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNacosInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(Ephemeral, ephemeral_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    DeleteNacosInstanceRequest() = default ;
    DeleteNacosInstanceRequest(const DeleteNacosInstanceRequest &) = default ;
    DeleteNacosInstanceRequest(DeleteNacosInstanceRequest &&) = default ;
    DeleteNacosInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNacosInstanceRequest() = default ;
    DeleteNacosInstanceRequest& operator=(const DeleteNacosInstanceRequest &) = default ;
    DeleteNacosInstanceRequest& operator=(DeleteNacosInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->clusterName_ == nullptr && return this->ephemeral_ == nullptr && return this->groupName_ == nullptr && return this->instanceId_ == nullptr && return this->ip_ == nullptr
        && return this->namespaceId_ == nullptr && return this->port_ == nullptr && return this->serviceName_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DeleteNacosInstanceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string clusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline DeleteNacosInstanceRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // ephemeral Field Functions 
    bool hasEphemeral() const { return this->ephemeral_ != nullptr;};
    void deleteEphemeral() { this->ephemeral_ = nullptr;};
    inline bool ephemeral() const { DARABONBA_PTR_GET_DEFAULT(ephemeral_, false) };
    inline DeleteNacosInstanceRequest& setEphemeral(bool ephemeral) { DARABONBA_PTR_SET_VALUE(ephemeral_, ephemeral) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DeleteNacosInstanceRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteNacosInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DeleteNacosInstanceRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DeleteNacosInstanceRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t port() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline DeleteNacosInstanceRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DeleteNacosInstanceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The alias of the cluster.
    std::shared_ptr<string> clusterName_ = nullptr;
    // Specifies whether the node is an ephemeral node. Valid values:
    // 
    // *   `true`: yes
    // *   `false`: no
    // 
    // This parameter is required.
    std::shared_ptr<bool> ephemeral_ = nullptr;
    // The name of the group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the Nacos instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The IP address of the Nacos instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> ip_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The port of the Nacos instance.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> port_ = nullptr;
    // The name of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
