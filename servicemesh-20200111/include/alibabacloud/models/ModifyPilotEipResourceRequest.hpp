// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYPILOTEIPRESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYPILOTEIPRESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ModifyPilotEipResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyPilotEipResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EipId, eipId_);
      DARABONBA_PTR_TO_JSON(IsCanary, isCanary_);
      DARABONBA_PTR_TO_JSON(Operation, operation_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyPilotEipResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EipId, eipId_);
      DARABONBA_PTR_FROM_JSON(IsCanary, isCanary_);
      DARABONBA_PTR_FROM_JSON(Operation, operation_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    ModifyPilotEipResourceRequest() = default ;
    ModifyPilotEipResourceRequest(const ModifyPilotEipResourceRequest &) = default ;
    ModifyPilotEipResourceRequest(ModifyPilotEipResourceRequest &&) = default ;
    ModifyPilotEipResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyPilotEipResourceRequest() = default ;
    ModifyPilotEipResourceRequest& operator=(const ModifyPilotEipResourceRequest &) = default ;
    ModifyPilotEipResourceRequest& operator=(ModifyPilotEipResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipId_ == nullptr
        && return this->isCanary_ == nullptr && return this->operation_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // eipId Field Functions 
    bool hasEipId() const { return this->eipId_ != nullptr;};
    void deleteEipId() { this->eipId_ = nullptr;};
    inline string eipId() const { DARABONBA_PTR_GET_DEFAULT(eipId_, "") };
    inline ModifyPilotEipResourceRequest& setEipId(string eipId) { DARABONBA_PTR_SET_VALUE(eipId_, eipId) };


    // isCanary Field Functions 
    bool hasIsCanary() const { return this->isCanary_ != nullptr;};
    void deleteIsCanary() { this->isCanary_ = nullptr;};
    inline bool isCanary() const { DARABONBA_PTR_GET_DEFAULT(isCanary_, false) };
    inline ModifyPilotEipResourceRequest& setIsCanary(bool isCanary) { DARABONBA_PTR_SET_VALUE(isCanary_, isCanary) };


    // operation Field Functions 
    bool hasOperation() const { return this->operation_ != nullptr;};
    void deleteOperation() { this->operation_ = nullptr;};
    inline string operation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
    inline ModifyPilotEipResourceRequest& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline ModifyPilotEipResourceRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    std::shared_ptr<string> eipId_ = nullptr;
    // The type of the Istio Pilot with which you want to associate the EIPs. Valid values:
    // 
    // *   `true`: Bind an EIP to the Istio Pilot during canary release (only valid during the canary release).
    // *   `false`: Bind an EIP to the Istio Pilot in stable state.
    std::shared_ptr<bool> isCanary_ = nullptr;
    // The type of the operation that you want to perform. Valid values:
    // 
    // *   `UnBindEip`: unbinds an elastic IP address (EIP) from the Istio Pilot.
    // *   `BindEip`: binds an EIP to the Istio Pilot.
    std::shared_ptr<string> operation_ = nullptr;
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
