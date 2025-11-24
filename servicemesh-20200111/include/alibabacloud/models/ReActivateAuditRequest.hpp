// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REACTIVATEAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REACTIVATEAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class ReActivateAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ReActivateAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_TO_JSON(ServiceMeshId, serviceMeshId_);
    };
    friend void from_json(const Darabonba::Json& j, ReActivateAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnableAudit, enableAudit_);
      DARABONBA_PTR_FROM_JSON(ServiceMeshId, serviceMeshId_);
    };
    ReActivateAuditRequest() = default ;
    ReActivateAuditRequest(const ReActivateAuditRequest &) = default ;
    ReActivateAuditRequest(ReActivateAuditRequest &&) = default ;
    ReActivateAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ReActivateAuditRequest() = default ;
    ReActivateAuditRequest& operator=(const ReActivateAuditRequest &) = default ;
    ReActivateAuditRequest& operator=(ReActivateAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->enableAudit_ == nullptr
        && return this->serviceMeshId_ == nullptr; };
    // enableAudit Field Functions 
    bool hasEnableAudit() const { return this->enableAudit_ != nullptr;};
    void deleteEnableAudit() { this->enableAudit_ = nullptr;};
    inline bool enableAudit() const { DARABONBA_PTR_GET_DEFAULT(enableAudit_, false) };
    inline ReActivateAuditRequest& setEnableAudit(bool enableAudit) { DARABONBA_PTR_SET_VALUE(enableAudit_, enableAudit) };


    // serviceMeshId Field Functions 
    bool hasServiceMeshId() const { return this->serviceMeshId_ != nullptr;};
    void deleteServiceMeshId() { this->serviceMeshId_ = nullptr;};
    inline string serviceMeshId() const { DARABONBA_PTR_GET_DEFAULT(serviceMeshId_, "") };
    inline ReActivateAuditRequest& setServiceMeshId(string serviceMeshId) { DARABONBA_PTR_SET_VALUE(serviceMeshId_, serviceMeshId) };


  protected:
    // Specifies whether to recreate a project that is used to store audit logs. Valid values:
    // 
    // *   true: recreates a project.
    // *   false: does not recreate a project.
    std::shared_ptr<bool> enableAudit_ = nullptr;
    // The ID of the Service Mesh (ASM) instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> serviceMeshId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
