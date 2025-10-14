// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLERIGHTSSEPARATIONREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLERIGHTSSEPARATIONREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class EnableRightsSeparationRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableRightsSeparationRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditAccountDescription, auditAccountDescription_);
      DARABONBA_PTR_TO_JSON(AuditAccountName, auditAccountName_);
      DARABONBA_PTR_TO_JSON(AuditAccountPassword, auditAccountPassword_);
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SecurityAccountDescription, securityAccountDescription_);
      DARABONBA_PTR_TO_JSON(SecurityAccountName, securityAccountName_);
      DARABONBA_PTR_TO_JSON(SecurityAccountPassword, securityAccountPassword_);
    };
    friend void from_json(const Darabonba::Json& j, EnableRightsSeparationRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditAccountDescription, auditAccountDescription_);
      DARABONBA_PTR_FROM_JSON(AuditAccountName, auditAccountName_);
      DARABONBA_PTR_FROM_JSON(AuditAccountPassword, auditAccountPassword_);
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SecurityAccountDescription, securityAccountDescription_);
      DARABONBA_PTR_FROM_JSON(SecurityAccountName, securityAccountName_);
      DARABONBA_PTR_FROM_JSON(SecurityAccountPassword, securityAccountPassword_);
    };
    EnableRightsSeparationRequest() = default ;
    EnableRightsSeparationRequest(const EnableRightsSeparationRequest &) = default ;
    EnableRightsSeparationRequest(EnableRightsSeparationRequest &&) = default ;
    EnableRightsSeparationRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableRightsSeparationRequest() = default ;
    EnableRightsSeparationRequest& operator=(const EnableRightsSeparationRequest &) = default ;
    EnableRightsSeparationRequest& operator=(EnableRightsSeparationRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditAccountDescription_ == nullptr
        && return this->auditAccountName_ == nullptr && return this->auditAccountPassword_ == nullptr && return this->DBInstanceName_ == nullptr && return this->regionId_ == nullptr && return this->securityAccountDescription_ == nullptr
        && return this->securityAccountName_ == nullptr && return this->securityAccountPassword_ == nullptr; };
    // auditAccountDescription Field Functions 
    bool hasAuditAccountDescription() const { return this->auditAccountDescription_ != nullptr;};
    void deleteAuditAccountDescription() { this->auditAccountDescription_ = nullptr;};
    inline string auditAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(auditAccountDescription_, "") };
    inline EnableRightsSeparationRequest& setAuditAccountDescription(string auditAccountDescription) { DARABONBA_PTR_SET_VALUE(auditAccountDescription_, auditAccountDescription) };


    // auditAccountName Field Functions 
    bool hasAuditAccountName() const { return this->auditAccountName_ != nullptr;};
    void deleteAuditAccountName() { this->auditAccountName_ = nullptr;};
    inline string auditAccountName() const { DARABONBA_PTR_GET_DEFAULT(auditAccountName_, "") };
    inline EnableRightsSeparationRequest& setAuditAccountName(string auditAccountName) { DARABONBA_PTR_SET_VALUE(auditAccountName_, auditAccountName) };


    // auditAccountPassword Field Functions 
    bool hasAuditAccountPassword() const { return this->auditAccountPassword_ != nullptr;};
    void deleteAuditAccountPassword() { this->auditAccountPassword_ = nullptr;};
    inline string auditAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(auditAccountPassword_, "") };
    inline EnableRightsSeparationRequest& setAuditAccountPassword(string auditAccountPassword) { DARABONBA_PTR_SET_VALUE(auditAccountPassword_, auditAccountPassword) };


    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string DBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline EnableRightsSeparationRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableRightsSeparationRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // securityAccountDescription Field Functions 
    bool hasSecurityAccountDescription() const { return this->securityAccountDescription_ != nullptr;};
    void deleteSecurityAccountDescription() { this->securityAccountDescription_ = nullptr;};
    inline string securityAccountDescription() const { DARABONBA_PTR_GET_DEFAULT(securityAccountDescription_, "") };
    inline EnableRightsSeparationRequest& setSecurityAccountDescription(string securityAccountDescription) { DARABONBA_PTR_SET_VALUE(securityAccountDescription_, securityAccountDescription) };


    // securityAccountName Field Functions 
    bool hasSecurityAccountName() const { return this->securityAccountName_ != nullptr;};
    void deleteSecurityAccountName() { this->securityAccountName_ = nullptr;};
    inline string securityAccountName() const { DARABONBA_PTR_GET_DEFAULT(securityAccountName_, "") };
    inline EnableRightsSeparationRequest& setSecurityAccountName(string securityAccountName) { DARABONBA_PTR_SET_VALUE(securityAccountName_, securityAccountName) };


    // securityAccountPassword Field Functions 
    bool hasSecurityAccountPassword() const { return this->securityAccountPassword_ != nullptr;};
    void deleteSecurityAccountPassword() { this->securityAccountPassword_ = nullptr;};
    inline string securityAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(securityAccountPassword_, "") };
    inline EnableRightsSeparationRequest& setSecurityAccountPassword(string securityAccountPassword) { DARABONBA_PTR_SET_VALUE(securityAccountPassword_, securityAccountPassword) };


  protected:
    std::shared_ptr<string> auditAccountDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> auditAccountName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> auditAccountPassword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> securityAccountDescription_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityAccountName_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> securityAccountPassword_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
