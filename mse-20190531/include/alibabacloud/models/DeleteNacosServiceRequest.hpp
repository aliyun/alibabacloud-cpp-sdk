// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENACOSSERVICEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETENACOSSERVICEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class DeleteNacosServiceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNacosServiceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNacosServiceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
    };
    DeleteNacosServiceRequest() = default ;
    DeleteNacosServiceRequest(const DeleteNacosServiceRequest &) = default ;
    DeleteNacosServiceRequest(DeleteNacosServiceRequest &&) = default ;
    DeleteNacosServiceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNacosServiceRequest() = default ;
    DeleteNacosServiceRequest& operator=(const DeleteNacosServiceRequest &) = default ;
    DeleteNacosServiceRequest& operator=(DeleteNacosServiceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && return this->groupName_ == nullptr && return this->instanceId_ == nullptr && return this->namespaceId_ == nullptr && return this->serviceName_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DeleteNacosServiceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DeleteNacosServiceRequest& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline DeleteNacosServiceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline DeleteNacosServiceRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // serviceName Field Functions 
    bool hasServiceName() const { return this->serviceName_ != nullptr;};
    void deleteServiceName() { this->serviceName_ = nullptr;};
    inline string serviceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
    inline DeleteNacosServiceRequest& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    std::shared_ptr<string> acceptLanguage_ = nullptr;
    // The name of the group.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupName_ = nullptr;
    // The ID of the instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the namespace.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The name of the service.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
