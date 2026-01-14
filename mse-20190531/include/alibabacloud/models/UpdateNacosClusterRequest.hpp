// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATENACOSCLUSTERREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATENACOSCLUSTERREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateNacosClusterRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateNacosClusterRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(CheckPort, checkPort_);
      DARABONBA_PTR_TO_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(HealthChecker, healthChecker_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_TO_JSON(UseInstancePortForCheck, useInstancePortForCheck_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateNacosClusterRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(CheckPort, checkPort_);
      DARABONBA_PTR_FROM_JSON(ClusterName, clusterName_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(HealthChecker, healthChecker_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
      DARABONBA_PTR_FROM_JSON(UseInstancePortForCheck, useInstancePortForCheck_);
    };
    UpdateNacosClusterRequest() = default ;
    UpdateNacosClusterRequest(const UpdateNacosClusterRequest &) = default ;
    UpdateNacosClusterRequest(UpdateNacosClusterRequest &&) = default ;
    UpdateNacosClusterRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateNacosClusterRequest() = default ;
    UpdateNacosClusterRequest& operator=(const UpdateNacosClusterRequest &) = default ;
    UpdateNacosClusterRequest& operator=(UpdateNacosClusterRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->checkPort_ == nullptr && this->clusterName_ == nullptr && this->groupName_ == nullptr && this->healthChecker_ == nullptr && this->instanceId_ == nullptr
        && this->namespaceId_ == nullptr && this->serviceName_ == nullptr && this->useInstancePortForCheck_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateNacosClusterRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // checkPort Field Functions 
    bool hasCheckPort() const { return this->checkPort_ != nullptr;};
    void deleteCheckPort() { this->checkPort_ = nullptr;};
    inline int32_t getCheckPort() const { DARABONBA_PTR_GET_DEFAULT(checkPort_, 0) };
    inline UpdateNacosClusterRequest& setCheckPort(int32_t checkPort) { DARABONBA_PTR_SET_VALUE(checkPort_, checkPort) };


    // clusterName Field Functions 
    bool hasClusterName() const { return this->clusterName_ != nullptr;};
    void deleteClusterName() { this->clusterName_ = nullptr;};
    inline string getClusterName() const { DARABONBA_PTR_GET_DEFAULT(clusterName_, "") };
    inline UpdateNacosClusterRequest& setClusterName(string clusterName) { DARABONBA_PTR_SET_VALUE(clusterName_, clusterName) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline UpdateNacosClusterRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // healthChecker Field Functions 
    bool hasHealthChecker() const { return this->healthChecker_ != nullptr;};
    void deleteHealthChecker() { this->healthChecker_ = nullptr;};
    inline string getHealthChecker() const { DARABONBA_PTR_GET_DEFAULT(healthChecker_, "") };
    inline UpdateNacosClusterRequest& setHealthChecker(string healthChecker) { DARABONBA_PTR_SET_VALUE(healthChecker_, healthChecker) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateNacosClusterRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline UpdateNacosClusterRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline UpdateNacosClusterRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


    // useInstancePortForCheck Field Functions 
    bool hasUseInstancePortForCheck() const { return this->useInstancePortForCheck_ != nullptr;};
    void deleteUseInstancePortForCheck() { this->useInstancePortForCheck_ = nullptr;};
    inline bool getUseInstancePortForCheck() const { DARABONBA_PTR_GET_DEFAULT(useInstancePortForCheck_, false) };
    inline UpdateNacosClusterRequest& setUseInstancePortForCheck(bool useInstancePortForCheck) { DARABONBA_PTR_SET_VALUE(useInstancePortForCheck_, useInstancePortForCheck) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The port used for health checks.
    shared_ptr<int32_t> checkPort_ {};
    // The name of the Nacos cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterName_ {};
    // The name of the group.
    // 
    // This parameter is required.
    shared_ptr<string> groupName_ {};
    // The type of the health check.
    shared_ptr<string> healthChecker_ {};
    // The ID of the instance.
    // 
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    // The ID of the namespace.
    shared_ptr<string> namespaceId_ {};
    // The name of the service.
    // 
    // This parameter is required.
    shared_ptr<string> serviceName_ {};
    // Specifies whether to use the port of the instance for a health check.
    shared_ptr<bool> useInstancePortForCheck_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
