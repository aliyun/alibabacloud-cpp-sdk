// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAUDITLOGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAUDITLOGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hsm20231113
{
namespace Models
{
  class GetAuditLogStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAuditLogStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AuditLogStatus, auditLogStatus_);
      DARABONBA_PTR_TO_JSON(AuditOssBucket, auditOssBucket_);
      DARABONBA_PTR_TO_JSON(GrantedServiceAccess, grantedServiceAccess_);
      DARABONBA_PTR_TO_JSON(OssBuckets, ossBuckets_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetAuditLogStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AuditLogStatus, auditLogStatus_);
      DARABONBA_PTR_FROM_JSON(AuditOssBucket, auditOssBucket_);
      DARABONBA_PTR_FROM_JSON(GrantedServiceAccess, grantedServiceAccess_);
      DARABONBA_PTR_FROM_JSON(OssBuckets, ossBuckets_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetAuditLogStatusResponseBody() = default ;
    GetAuditLogStatusResponseBody(const GetAuditLogStatusResponseBody &) = default ;
    GetAuditLogStatusResponseBody(GetAuditLogStatusResponseBody &&) = default ;
    GetAuditLogStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAuditLogStatusResponseBody() = default ;
    GetAuditLogStatusResponseBody& operator=(const GetAuditLogStatusResponseBody &) = default ;
    GetAuditLogStatusResponseBody& operator=(GetAuditLogStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->auditLogStatus_ == nullptr
        && return this->auditOssBucket_ == nullptr && return this->grantedServiceAccess_ == nullptr && return this->ossBuckets_ == nullptr && return this->regionId_ == nullptr && return this->requestId_ == nullptr
        && return this->success_ == nullptr; };
    // auditLogStatus Field Functions 
    bool hasAuditLogStatus() const { return this->auditLogStatus_ != nullptr;};
    void deleteAuditLogStatus() { this->auditLogStatus_ = nullptr;};
    inline string auditLogStatus() const { DARABONBA_PTR_GET_DEFAULT(auditLogStatus_, "") };
    inline GetAuditLogStatusResponseBody& setAuditLogStatus(string auditLogStatus) { DARABONBA_PTR_SET_VALUE(auditLogStatus_, auditLogStatus) };


    // auditOssBucket Field Functions 
    bool hasAuditOssBucket() const { return this->auditOssBucket_ != nullptr;};
    void deleteAuditOssBucket() { this->auditOssBucket_ = nullptr;};
    inline string auditOssBucket() const { DARABONBA_PTR_GET_DEFAULT(auditOssBucket_, "") };
    inline GetAuditLogStatusResponseBody& setAuditOssBucket(string auditOssBucket) { DARABONBA_PTR_SET_VALUE(auditOssBucket_, auditOssBucket) };


    // grantedServiceAccess Field Functions 
    bool hasGrantedServiceAccess() const { return this->grantedServiceAccess_ != nullptr;};
    void deleteGrantedServiceAccess() { this->grantedServiceAccess_ = nullptr;};
    inline bool grantedServiceAccess() const { DARABONBA_PTR_GET_DEFAULT(grantedServiceAccess_, false) };
    inline GetAuditLogStatusResponseBody& setGrantedServiceAccess(bool grantedServiceAccess) { DARABONBA_PTR_SET_VALUE(grantedServiceAccess_, grantedServiceAccess) };


    // ossBuckets Field Functions 
    bool hasOssBuckets() const { return this->ossBuckets_ != nullptr;};
    void deleteOssBuckets() { this->ossBuckets_ = nullptr;};
    inline const vector<string> & ossBuckets() const { DARABONBA_PTR_GET_CONST(ossBuckets_, vector<string>) };
    inline vector<string> ossBuckets() { DARABONBA_PTR_GET(ossBuckets_, vector<string>) };
    inline GetAuditLogStatusResponseBody& setOssBuckets(const vector<string> & ossBuckets) { DARABONBA_PTR_SET_VALUE(ossBuckets_, ossBuckets) };
    inline GetAuditLogStatusResponseBody& setOssBuckets(vector<string> && ossBuckets) { DARABONBA_PTR_SET_RVALUE(ossBuckets_, ossBuckets) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetAuditLogStatusResponseBody& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAuditLogStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetAuditLogStatusResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates whether the audit log feature is enabled. Valid values:
    // 
    // *   enable
    // *   disable
    std::shared_ptr<string> auditLogStatus_ = nullptr;
    // The bucket that stores audit logs.
    std::shared_ptr<string> auditOssBucket_ = nullptr;
    // Indicates whether Cloud Hardware Security Module is authorized to deliver logs. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> grantedServiceAccess_ = nullptr;
    // A list of buckets that can be used to store audit logs.
    std::shared_ptr<vector<string>> ossBuckets_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hsm20231113
#endif
