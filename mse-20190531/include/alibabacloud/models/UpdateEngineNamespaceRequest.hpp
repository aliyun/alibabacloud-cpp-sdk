// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEENGINENAMESPACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEENGINENAMESPACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class UpdateEngineNamespaceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateEngineNamespaceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ServiceCount, serviceCount_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateEngineNamespaceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ServiceCount, serviceCount_);
    };
    UpdateEngineNamespaceRequest() = default ;
    UpdateEngineNamespaceRequest(const UpdateEngineNamespaceRequest &) = default ;
    UpdateEngineNamespaceRequest(UpdateEngineNamespaceRequest &&) = default ;
    UpdateEngineNamespaceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateEngineNamespaceRequest() = default ;
    UpdateEngineNamespaceRequest& operator=(const UpdateEngineNamespaceRequest &) = default ;
    UpdateEngineNamespaceRequest& operator=(UpdateEngineNamespaceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clusterId_ == nullptr && this->desc_ == nullptr && this->id_ == nullptr && this->instanceId_ == nullptr && this->name_ == nullptr
        && this->serviceCount_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateEngineNamespaceRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline UpdateEngineNamespaceRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string getDesc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline UpdateEngineNamespaceRequest& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline UpdateEngineNamespaceRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline UpdateEngineNamespaceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateEngineNamespaceRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceCount Field Functions 
    bool hasServiceCount() const { return this->serviceCount_ != nullptr;};
    void deleteServiceCount() { this->serviceCount_ = nullptr;};
    inline int32_t getServiceCount() const { DARABONBA_PTR_GET_DEFAULT(serviceCount_, 0) };
    inline UpdateEngineNamespaceRequest& setServiceCount(int32_t serviceCount) { DARABONBA_PTR_SET_VALUE(serviceCount_, serviceCount) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh: Chinese
    // *   en: English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the cluster.
    shared_ptr<string> clusterId_ {};
    // The description of the cluster.
    shared_ptr<string> desc_ {};
    // The ID of the namespace.
    // 
    // This parameter is required.
    shared_ptr<string> id_ {};
    // The ID of the instance.
    shared_ptr<string> instanceId_ {};
    // The name of the cluster.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The number of active services.
    shared_ptr<int32_t> serviceCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
