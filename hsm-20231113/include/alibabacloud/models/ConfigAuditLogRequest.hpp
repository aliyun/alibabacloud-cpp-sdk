// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONFIGAUDITLOGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONFIGAUDITLOGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class ConfigAuditLogRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConfigAuditLogRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditAction, auditAction_);
      DARABONBA_PTR_TO_JSON(AuditOssBucket, auditOssBucket_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ConfigAuditLogRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditAction, auditAction_);
      DARABONBA_PTR_FROM_JSON(AuditOssBucket, auditOssBucket_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ConfigAuditLogRequest() = default ;
    ConfigAuditLogRequest(const ConfigAuditLogRequest &) = default ;
    ConfigAuditLogRequest(ConfigAuditLogRequest &&) = default ;
    ConfigAuditLogRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConfigAuditLogRequest() = default ;
    ConfigAuditLogRequest& operator=(const ConfigAuditLogRequest &) = default ;
    ConfigAuditLogRequest& operator=(ConfigAuditLogRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditAction_ == nullptr
        && return this->auditOssBucket_ == nullptr && return this->regionId_ == nullptr; };
    // auditAction Field Functions 
    bool hasAuditAction() const { return this->auditAction_ != nullptr;};
    void deleteAuditAction() { this->auditAction_ = nullptr;};
    inline string auditAction() const { DARABONBA_PTR_GET_DEFAULT(auditAction_, "") };
    inline ConfigAuditLogRequest& setAuditAction(string auditAction) { DARABONBA_PTR_SET_VALUE(auditAction_, auditAction) };


    // auditOssBucket Field Functions 
    bool hasAuditOssBucket() const { return this->auditOssBucket_ != nullptr;};
    void deleteAuditOssBucket() { this->auditOssBucket_ = nullptr;};
    inline string auditOssBucket() const { DARABONBA_PTR_GET_DEFAULT(auditOssBucket_, "") };
    inline ConfigAuditLogRequest& setAuditOssBucket(string auditOssBucket) { DARABONBA_PTR_SET_VALUE(auditOssBucket_, auditOssBucket) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ConfigAuditLogRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // Specifies whether to enable the audit log feature. Valid values:
    // 
    // *   enable
    // *   disable
    // 
    // This parameter is required.
    std::shared_ptr<string> auditAction_ = nullptr;
    // The bucket to which audit logs are delivered.
    std::shared_ptr<string> auditOssBucket_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
