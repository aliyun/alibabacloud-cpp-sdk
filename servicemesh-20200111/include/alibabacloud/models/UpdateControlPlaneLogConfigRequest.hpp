// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECONTROLPLANELOGCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECONTROLPLANELOGCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class UpdateControlPlaneLogConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateControlPlaneLogConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(LogTTLInDay, logTTLInDay_);
      DARABONBA_PTR_TO_JSON(Project, project_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateControlPlaneLogConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(LogTTLInDay, logTTLInDay_);
      DARABONBA_PTR_FROM_JSON(Project, project_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    UpdateControlPlaneLogConfigRequest() = default ;
    UpdateControlPlaneLogConfigRequest(const UpdateControlPlaneLogConfigRequest &) = default ;
    UpdateControlPlaneLogConfigRequest(UpdateControlPlaneLogConfigRequest &&) = default ;
    UpdateControlPlaneLogConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateControlPlaneLogConfigRequest() = default ;
    UpdateControlPlaneLogConfigRequest& operator=(const UpdateControlPlaneLogConfigRequest &) = default ;
    UpdateControlPlaneLogConfigRequest& operator=(UpdateControlPlaneLogConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enabled_ == nullptr
        && return this->logTTLInDay_ == nullptr && return this->project_ == nullptr && return this->serviceMeshId_ == nullptr; };
    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline UpdateControlPlaneLogConfigRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // logTTLInDay Field Functions 
    bool hasLogTTLInDay() const { return this->logTTLInDay_ != nullptr;};
    void deleteLogTTLInDay() { this->logTTLInDay_ = nullptr;};
    inline int32_t logTTLInDay() const { DARABONBA_PTR_GET_DEFAULT(logTTLInDay_, 0) };
    inline UpdateControlPlaneLogConfigRequest& setLogTTLInDay(int32_t logTTLInDay) { DARABONBA_PTR_SET_VALUE(logTTLInDay_, logTTLInDay) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string project() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline UpdateControlPlaneLogConfigRequest& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline UpdateControlPlaneLogConfigRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // Specifies whether to collect control plane logs to Simple Log Service.
    // 
    // This parameter is required.
    std::shared_ptr<bool> enabled_ = nullptr;
    // The time to live (TTL) period of the collected logs. Unit: day.
    std::shared_ptr<int32_t> logTTLInDay_ = nullptr;
    // The name of the Simple Log Service project to which control plane logs are collected.
    std::shared_ptr<string> project_ = nullptr;
    // The ID of the Service Mesh (ASM) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
