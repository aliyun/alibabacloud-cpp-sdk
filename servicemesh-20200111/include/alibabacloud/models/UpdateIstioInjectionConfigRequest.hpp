// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEISTIOINJECTIONCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEISTIOINJECTIONCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateIstioInjectionConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateIstioInjectionConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataPlaneMode, dataPlaneMode_);
      DARABONBA_PTR_TO_JSON(EnableIstioInjection, enableIstioInjection_);
      DARABONBA_PTR_TO_JSON(EnableSidecarSetInjection, enableSidecarSetInjection_);
      DARABONBA_PTR_TO_JSON(IstioRev, istioRev_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateIstioInjectionConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataPlaneMode, dataPlaneMode_);
      DARABONBA_PTR_FROM_JSON(EnableIstioInjection, enableIstioInjection_);
      DARABONBA_PTR_FROM_JSON(EnableSidecarSetInjection, enableSidecarSetInjection_);
      DARABONBA_PTR_FROM_JSON(IstioRev, istioRev_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    UpdateIstioInjectionConfigRequest() = default ;
    UpdateIstioInjectionConfigRequest(const UpdateIstioInjectionConfigRequest &) = default ;
    UpdateIstioInjectionConfigRequest(UpdateIstioInjectionConfigRequest &&) = default ;
    UpdateIstioInjectionConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateIstioInjectionConfigRequest() = default ;
    UpdateIstioInjectionConfigRequest& operator=(const UpdateIstioInjectionConfigRequest &) = default ;
    UpdateIstioInjectionConfigRequest& operator=(UpdateIstioInjectionConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataPlaneMode_ == nullptr
        && return this->enableIstioInjection_ == nullptr && return this->enableSidecarSetInjection_ == nullptr && return this->istioRev_ == nullptr && return this->namespace_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // dataPlaneMode Field Functions 
    bool hasDataPlaneMode() const { return this->dataPlaneMode_ != nullptr;};
    void deleteDataPlaneMode() { this->dataPlaneMode_ = nullptr;};
    inline string dataPlaneMode() const { DARABONBA_PTR_GET_DEFAULT(dataPlaneMode_, "") };
    inline UpdateIstioInjectionConfigRequest& setDataPlaneMode(string dataPlaneMode) { DARABONBA_PTR_SET_VALUE(dataPlaneMode_, dataPlaneMode) };


    // enableIstioInjection Field Functions 
    bool hasEnableIstioInjection() const { return this->enableIstioInjection_ != nullptr;};
    void deleteEnableIstioInjection() { this->enableIstioInjection_ = nullptr;};
    inline bool enableIstioInjection() const { DARABONBA_PTR_GET_DEFAULT(enableIstioInjection_, false) };
    inline UpdateIstioInjectionConfigRequest& setEnableIstioInjection(bool enableIstioInjection) { DARABONBA_PTR_SET_VALUE(enableIstioInjection_, enableIstioInjection) };


    // enableSidecarSetInjection Field Functions 
    bool hasEnableSidecarSetInjection() const { return this->enableSidecarSetInjection_ != nullptr;};
    void deleteEnableSidecarSetInjection() { this->enableSidecarSetInjection_ = nullptr;};
    inline bool enableSidecarSetInjection() const { DARABONBA_PTR_GET_DEFAULT(enableSidecarSetInjection_, false) };
    inline UpdateIstioInjectionConfigRequest& setEnableSidecarSetInjection(bool enableSidecarSetInjection) { DARABONBA_PTR_SET_VALUE(enableSidecarSetInjection_, enableSidecarSetInjection) };


    // istioRev Field Functions 
    bool hasIstioRev() const { return this->istioRev_ != nullptr;};
    void deleteIstioRev() { this->istioRev_ = nullptr;};
    inline string istioRev() const { DARABONBA_PTR_GET_DEFAULT(istioRev_, "") };
    inline UpdateIstioInjectionConfigRequest& setIstioRev(string istioRev) { DARABONBA_PTR_SET_VALUE(istioRev_, istioRev) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline UpdateIstioInjectionConfigRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateIstioInjectionConfigRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // The data plane mode of the namespace. This parameter is valid only when the Ambient Mesh mode is enabled for the current Service Mesh (ASM) instance. Valid values:
    // 
    // *   ambient: sets the data plane mode of the namespace to the Ambient Mesh mode.
    // *   sidecar: sets the data plane mode of the namespace to the Sidecar mode.
    std::shared_ptr<string> dataPlaneMode_ = nullptr;
    // Specifies whether to enable Istio automatic sidecar injection.
    std::shared_ptr<bool> enableIstioInjection_ = nullptr;
    // Specifies whether to enable automatic sidecar injection by using SidecarSet.
    std::shared_ptr<bool> enableSidecarSetInjection_ = nullptr;
    // Specifies the version to be injected into the namespace. This parameter is valid only when the ASM instance performs a canary release. When IstioRev is not empty, you must not specify EnableIstioInjection and EnableSidecarSetInjection.
    std::shared_ptr<string> istioRev_ = nullptr;
    // The namespace for which you want to modify the sidecar injection setting.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The ID of the ASM instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
