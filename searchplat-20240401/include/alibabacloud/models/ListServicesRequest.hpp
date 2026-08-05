// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSERVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTSERVICESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchplat20240401
{
namespace Models
{
  class ListServicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListServicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(modelType, modelType_);
      DARABONBA_PTR_TO_JSON(name, name_);
      DARABONBA_PTR_TO_JSON(serviceId, serviceId_);
      DARABONBA_PTR_TO_JSON(serviceType, serviceType_);
    };
    friend void from_json(const Darabonba::Json& j, ListServicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(modelType, modelType_);
      DARABONBA_PTR_FROM_JSON(name, name_);
      DARABONBA_PTR_FROM_JSON(serviceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(serviceType, serviceType_);
    };
    ListServicesRequest() = default ;
    ListServicesRequest(const ListServicesRequest &) = default ;
    ListServicesRequest(ListServicesRequest &&) = default ;
    ListServicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListServicesRequest() = default ;
    ListServicesRequest& operator=(const ListServicesRequest &) = default ;
    ListServicesRequest& operator=(ListServicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->modelType_ == nullptr
        && this->name_ == nullptr && this->serviceId_ == nullptr && this->serviceType_ == nullptr; };
    // modelType Field Functions 
    bool hasModelType() const { return this->modelType_ != nullptr;};
    void deleteModelType() { this->modelType_ = nullptr;};
    inline string getModelType() const { DARABONBA_PTR_GET_DEFAULT(modelType_, "") };
    inline ListServicesRequest& setModelType(string modelType) { DARABONBA_PTR_SET_VALUE(modelType_, modelType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListServicesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline ListServicesRequest& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceType Field Functions 
    bool hasServiceType() const { return this->serviceType_ != nullptr;};
    void deleteServiceType() { this->serviceType_ = nullptr;};
    inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
    inline ListServicesRequest& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


  protected:
    // The model type. Valid values:
    // 
    // - system: built-in model
    // - deployment: custom deployment model.
    shared_ptr<string> modelType_ {};
    // The service name.
    shared_ptr<string> name_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
    // The service type.
    shared_ptr<string> serviceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchplat20240401
#endif
