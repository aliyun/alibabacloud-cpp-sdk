// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISABLESQLAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DISABLESQLAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class DisableSqlAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DisableSqlAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditAccountName, auditAccountName_);
      DARABONBA_PTR_TO_JSON(AuditAccountPassword, auditAccountPassword_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DisableSqlAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditAccountName, auditAccountName_);
      DARABONBA_PTR_FROM_JSON(AuditAccountPassword, auditAccountPassword_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DisableSqlAuditRequest() = default ;
    DisableSqlAuditRequest(const DisableSqlAuditRequest &) = default ;
    DisableSqlAuditRequest(DisableSqlAuditRequest &&) = default ;
    DisableSqlAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DisableSqlAuditRequest() = default ;
    DisableSqlAuditRequest& operator=(const DisableSqlAuditRequest &) = default ;
    DisableSqlAuditRequest& operator=(DisableSqlAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditAccountName_ == nullptr
        && this->auditAccountPassword_ == nullptr && this->DBInstanceId_ == nullptr && this->regionId_ == nullptr; };
    // auditAccountName Field Functions 
    bool hasAuditAccountName() const { return this->auditAccountName_ != nullptr;};
    void deleteAuditAccountName() { this->auditAccountName_ = nullptr;};
    inline string getAuditAccountName() const { DARABONBA_PTR_GET_DEFAULT(auditAccountName_, "") };
    inline DisableSqlAuditRequest& setAuditAccountName(string auditAccountName) { DARABONBA_PTR_SET_VALUE(auditAccountName_, auditAccountName) };


    // auditAccountPassword Field Functions 
    bool hasAuditAccountPassword() const { return this->auditAccountPassword_ != nullptr;};
    void deleteAuditAccountPassword() { this->auditAccountPassword_ = nullptr;};
    inline string getAuditAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(auditAccountPassword_, "") };
    inline DisableSqlAuditRequest& setAuditAccountPassword(string auditAccountPassword) { DARABONBA_PTR_SET_VALUE(auditAccountPassword_, auditAccountPassword) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string getDBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline DisableSqlAuditRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DisableSqlAuditRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    shared_ptr<string> auditAccountName_ {};
    shared_ptr<string> auditAccountPassword_ {};
    // This parameter is required.
    shared_ptr<string> DBInstanceId_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
