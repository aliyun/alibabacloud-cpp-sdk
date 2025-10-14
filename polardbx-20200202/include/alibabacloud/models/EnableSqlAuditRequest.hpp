// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ENABLESQLAUDITREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ENABLESQLAUDITREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class EnableSqlAuditRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const EnableSqlAuditRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuditAccountName, auditAccountName_);
      DARABONBA_PTR_TO_JSON(AuditAccountPassword, auditAccountPassword_);
      DARABONBA_PTR_TO_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_TO_JSON(ExpireAfterDays, expireAfterDays_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, EnableSqlAuditRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditAccountName, auditAccountName_);
      DARABONBA_PTR_FROM_JSON(AuditAccountPassword, auditAccountPassword_);
      DARABONBA_PTR_FROM_JSON(DBInstanceId, DBInstanceId_);
      DARABONBA_PTR_FROM_JSON(ExpireAfterDays, expireAfterDays_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    EnableSqlAuditRequest() = default ;
    EnableSqlAuditRequest(const EnableSqlAuditRequest &) = default ;
    EnableSqlAuditRequest(EnableSqlAuditRequest &&) = default ;
    EnableSqlAuditRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~EnableSqlAuditRequest() = default ;
    EnableSqlAuditRequest& operator=(const EnableSqlAuditRequest &) = default ;
    EnableSqlAuditRequest& operator=(EnableSqlAuditRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditAccountName_ == nullptr
        && return this->auditAccountPassword_ == nullptr && return this->DBInstanceId_ == nullptr && return this->expireAfterDays_ == nullptr && return this->regionId_ == nullptr; };
    // auditAccountName Field Functions 
    bool hasAuditAccountName() const { return this->auditAccountName_ != nullptr;};
    void deleteAuditAccountName() { this->auditAccountName_ = nullptr;};
    inline string auditAccountName() const { DARABONBA_PTR_GET_DEFAULT(auditAccountName_, "") };
    inline EnableSqlAuditRequest& setAuditAccountName(string auditAccountName) { DARABONBA_PTR_SET_VALUE(auditAccountName_, auditAccountName) };


    // auditAccountPassword Field Functions 
    bool hasAuditAccountPassword() const { return this->auditAccountPassword_ != nullptr;};
    void deleteAuditAccountPassword() { this->auditAccountPassword_ = nullptr;};
    inline string auditAccountPassword() const { DARABONBA_PTR_GET_DEFAULT(auditAccountPassword_, "") };
    inline EnableSqlAuditRequest& setAuditAccountPassword(string auditAccountPassword) { DARABONBA_PTR_SET_VALUE(auditAccountPassword_, auditAccountPassword) };


    // DBInstanceId Field Functions 
    bool hasDBInstanceId() const { return this->DBInstanceId_ != nullptr;};
    void deleteDBInstanceId() { this->DBInstanceId_ = nullptr;};
    inline string DBInstanceId() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceId_, "") };
    inline EnableSqlAuditRequest& setDBInstanceId(string DBInstanceId) { DARABONBA_PTR_SET_VALUE(DBInstanceId_, DBInstanceId) };


    // expireAfterDays Field Functions 
    bool hasExpireAfterDays() const { return this->expireAfterDays_ != nullptr;};
    void deleteExpireAfterDays() { this->expireAfterDays_ = nullptr;};
    inline int32_t expireAfterDays() const { DARABONBA_PTR_GET_DEFAULT(expireAfterDays_, 0) };
    inline EnableSqlAuditRequest& setExpireAfterDays(int32_t expireAfterDays) { DARABONBA_PTR_SET_VALUE(expireAfterDays_, expireAfterDays) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline EnableSqlAuditRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    std::shared_ptr<string> auditAccountName_ = nullptr;
    std::shared_ptr<string> auditAccountPassword_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> DBInstanceId_ = nullptr;
    std::shared_ptr<int32_t> expireAfterDays_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
