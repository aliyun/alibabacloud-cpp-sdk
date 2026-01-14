// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENACOSINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENACOSINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateNacosInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNacosInstanceRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, UpdateNacosInstanceRequest& obj) { 
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
    UpdateNacosInstanceRequest() = default ;
    UpdateNacosInstanceRequest(const UpdateNacosInstanceRequest &) = default ;
    UpdateNacosInstanceRequest(UpdateNacosInstanceRequest &&) = default ;
    UpdateNacosInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNacosInstanceRequest() = default ;
    UpdateNacosInstanceRequest& operator=(const UpdateNacosInstanceRequest &) = default ;
    UpdateNacosInstanceRequest& operator=(UpdateNacosInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clusterName_ == nullptr && this->enabled_ == nullptr && this->ephemeral_ == nullptr && this->groupName_ == nullptr && this->instanceId_ == nullptr
        && this->ip_ == nullptr && this->metadata_ == nullptr && this->namespaceId_ == nullptr && this->port_ == nullptr && this->serviceName_ == nullptr
        && this->weight_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateNacosInstanceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline UpdateNacosInstanceRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateNacosInstanceRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // ephemeral Field Functions 
    bool hasEphemeral() const { return this->ephemeral_ != nullptr;};
    void deleteEphemeral() { this->ephemeral_ = nullptr;};
    inline bool getEphemeral() const { DARABONBA_PTR_GET_DEFAULT(ephemeral_, false) };
    inline UpdateNacosInstanceRequest& setEphemeral(bool ephemeral) { DARABONBA_PTR_SET_VALUE(ephemeral_, ephemeral) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateNacosInstanceRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNacosInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline UpdateNacosInstanceRequest& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline string getMetadata() const { DARABONBA_PTR_GET_DEFAULT(metadata_, "") };
    inline UpdateNacosInstanceRequest& setMetadata(string metadata) { DARABONBA_PTR_SET_VALUE(metadata_, metadata) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateNacosInstanceRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline UpdateNacosInstanceRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline UpdateNacosInstanceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // weight Field Functions 
    bool hasWeight() const { return this->weight_ != nullptr;};
    void deleteWeight() { this->weight_ = nullptr;};
    inline string getWeight() const { DARABONBA_PTR_GET_DEFAULT(weight_, "") };
    inline UpdateNacosInstanceRequest& setWeight(string weight) { DARABONBA_PTR_SET_VALUE(weight_, weight) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The name of the Nacos instance.
    shared_ptr<string> clusterName_ {};
    // Specifies whether to disable this service. Valid values:
    // 
    // *   `true`: yes.
    // *   `false`: no.
    // 
    // This parameter is required.
    shared_ptr<bool> enabled_ {};
    // Specifies whether the node is a non-persistent node. Valid values:
    // 
    // *   `true`: yes.
    // *   `false`: no.
    // 
    // This parameter is required.
    shared_ptr<bool> ephemeral_ {};
    // The name of the group.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The IP address of the Nacos instance.
    // 
    // This parameter is required.
    shared_ptr<string> ip_ {};
    // The metadata of the instance.
    shared_ptr<string> metadata_ {};
    // The ID of the namespace.
    shared_ptr<string> namespaceId_ {};
    // The port number of the Nacos instance.
    // 
    // This parameter is required.
    shared_ptr<int32_t> port_ {};
    // The name of the service.
    // 
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
    // The weight. Valid values: 0 to 10000. The value must be an integer. A larger value indicates a higher frequency at which the instance is accessed.
    // 
    // This parameter is required.
    shared_ptr<string> weight_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
