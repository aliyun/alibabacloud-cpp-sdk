// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATENACOSSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATENACOSSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class CreateNacosServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateNacosServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Ephemeral, ephemeral_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(ProtectThreshold, protectThreshold_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateNacosServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Ephemeral, ephemeral_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(ProtectThreshold, protectThreshold_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    CreateNacosServiceRequest() = default ;
    CreateNacosServiceRequest(const CreateNacosServiceRequest &) = default ;
    CreateNacosServiceRequest(CreateNacosServiceRequest &&) = default ;
    CreateNacosServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateNacosServiceRequest() = default ;
    CreateNacosServiceRequest& operator=(const CreateNacosServiceRequest &) = default ;
    CreateNacosServiceRequest& operator=(CreateNacosServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->clusterId_ == nullptr && return this->ephemeral_ == nullptr && return this->groupName_ == nullptr && return this->instanceId_ == nullptr && return this->namespaceId_ == nullptr
        && return this->protectThreshold_ == nullptr && return this->serviceName_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline CreateNacosServiceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateNacosServiceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // ephemeral Field Functions 
    bool hasEphemeral() const { return this->ephemeral_ != nullptr;};
    void deleteEphemeral() { this->ephemeral_ = nullptr;};
    inline bool ephemeral() const { DARABONBA_PTR_GET_DEFAULT(ephemeral_, false) };
    inline CreateNacosServiceRequest& setEphemeral(bool ephemeral) { DARABONBA_PTR_SET_VALUE(ephemeral_, ephemeral) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline CreateNacosServiceRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateNacosServiceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline CreateNacosServiceRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // protectThreshold Field Functions 
    bool hasProtectThreshold() const { return this->protectThreshold_ != nullptr;};
    void deleteProtectThreshold() { this->protectThreshold_ = nullptr;};
    inline string protectThreshold() const { DARABONBA_PTR_GET_DEFAULT(protectThreshold_, "") };
    inline CreateNacosServiceRequest& setProtectThreshold(string protectThreshold) { DARABONBA_PTR_SET_VALUE(protectThreshold_, protectThreshold) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline CreateNacosServiceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The ID of the cluster.
    // 
    // > This operation contains both the InstanceId and ClusterId parameters. You must specify one of them.
    std::shared_ptr<string> clusterId_ = nullptr;
    // Specifies whether the instance is marked as a temporary node. Valid values:
    // 
    // *   `true`: yes
    // *   `false`: no
    std::shared_ptr<bool> ephemeral_ = nullptr;
    // The name of the group.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the instance.
    // 
    // > This operation contains both the InstanceId and ClusterId parameters. You must specify one of them.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The protection threshold.
    std::shared_ptr<string> protectThreshold_ = nullptr;
    // The name of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
