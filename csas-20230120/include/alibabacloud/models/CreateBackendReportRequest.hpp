// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBACKENDREPORTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBACKENDREPORTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class CreateBackendReportRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBackendReportRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(ReportObjects, reportObjects_);
      DARABONBA_PTR_TO_JSON(Targets, targets_);
      DARABONBA_PTR_TO_JSON(ValidityType, validityType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBackendReportRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTimestamp, endTimestamp_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(ReportObjects, reportObjects_);
      DARABONBA_PTR_FROM_JSON(Targets, targets_);
      DARABONBA_PTR_FROM_JSON(ValidityType, validityType_);
    };
    CreateBackendReportRequest() = default ;
    CreateBackendReportRequest(const CreateBackendReportRequest &) = default ;
    CreateBackendReportRequest(CreateBackendReportRequest &&) = default ;
    CreateBackendReportRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBackendReportRequest() = default ;
    CreateBackendReportRequest& operator=(const CreateBackendReportRequest &) = default ;
    CreateBackendReportRequest& operator=(CreateBackendReportRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Targets : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Targets& obj) { 
        DARABONBA_PTR_TO_JSON(UserId, userId_);
      };
      friend void from_json(const Darabonba::Json& j, Targets& obj) { 
        DARABONBA_PTR_FROM_JSON(UserId, userId_);
      };
      Targets() = default ;
      Targets(const Targets &) = default ;
      Targets(Targets &&) = default ;
      Targets(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Targets() = default ;
      Targets& operator=(const Targets &) = default ;
      Targets& operator=(Targets &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->userId_ == nullptr; };
      // userId Field Functions 
      bool hasUserId() const { return this->userId_ != nullptr;};
      void deleteUserId() { this->userId_ = nullptr;};
      inline string getUserId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
      inline Targets& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    protected:
      // The SASE user ID. You can call ListUsers to query the ID.
      // 
      // This parameter is required.
      shared_ptr<string> userId_ {};
    };

    class ReportObjects : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ReportObjects& obj) { 
        DARABONBA_PTR_TO_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_TO_JSON(DevType, devType_);
        DARABONBA_PTR_TO_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
        DARABONBA_PTR_TO_JSON(ReportDomain, reportDomain_);
        DARABONBA_PTR_TO_JSON(Scope, scope_);
        DARABONBA_PTR_TO_JSON(SoftwareId, softwareId_);
      };
      friend void from_json(const Darabonba::Json& j, ReportObjects& obj) { 
        DARABONBA_PTR_FROM_JSON(ApplicationId, applicationId_);
        DARABONBA_PTR_FROM_JSON(DevType, devType_);
        DARABONBA_PTR_FROM_JSON(DeviceType, deviceType_);
        DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
        DARABONBA_PTR_FROM_JSON(ReportDomain, reportDomain_);
        DARABONBA_PTR_FROM_JSON(Scope, scope_);
        DARABONBA_PTR_FROM_JSON(SoftwareId, softwareId_);
      };
      ReportObjects() = default ;
      ReportObjects(const ReportObjects &) = default ;
      ReportObjects(ReportObjects &&) = default ;
      ReportObjects(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ReportObjects() = default ;
      ReportObjects& operator=(const ReportObjects &) = default ;
      ReportObjects& operator=(ReportObjects &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->applicationId_ == nullptr
        && this->devType_ == nullptr && this->deviceType_ == nullptr && this->fileMd5_ == nullptr && this->reportDomain_ == nullptr && this->scope_ == nullptr
        && this->softwareId_ == nullptr; };
      // applicationId Field Functions 
      bool hasApplicationId() const { return this->applicationId_ != nullptr;};
      void deleteApplicationId() { this->applicationId_ = nullptr;};
      inline string getApplicationId() const { DARABONBA_PTR_GET_DEFAULT(applicationId_, "") };
      inline ReportObjects& setApplicationId(string applicationId) { DARABONBA_PTR_SET_VALUE(applicationId_, applicationId) };


      // devType Field Functions 
      bool hasDevType() const { return this->devType_ != nullptr;};
      void deleteDevType() { this->devType_ = nullptr;};
      inline string getDevType() const { DARABONBA_PTR_GET_DEFAULT(devType_, "") };
      inline ReportObjects& setDevType(string devType) { DARABONBA_PTR_SET_VALUE(devType_, devType) };


      // deviceType Field Functions 
      bool hasDeviceType() const { return this->deviceType_ != nullptr;};
      void deleteDeviceType() { this->deviceType_ = nullptr;};
      inline string getDeviceType() const { DARABONBA_PTR_GET_DEFAULT(deviceType_, "") };
      inline ReportObjects& setDeviceType(string deviceType) { DARABONBA_PTR_SET_VALUE(deviceType_, deviceType) };


      // fileMd5 Field Functions 
      bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
      void deleteFileMd5() { this->fileMd5_ = nullptr;};
      inline string getFileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
      inline ReportObjects& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


      // reportDomain Field Functions 
      bool hasReportDomain() const { return this->reportDomain_ != nullptr;};
      void deleteReportDomain() { this->reportDomain_ = nullptr;};
      inline string getReportDomain() const { DARABONBA_PTR_GET_DEFAULT(reportDomain_, "") };
      inline ReportObjects& setReportDomain(string reportDomain) { DARABONBA_PTR_SET_VALUE(reportDomain_, reportDomain) };


      // scope Field Functions 
      bool hasScope() const { return this->scope_ != nullptr;};
      void deleteScope() { this->scope_ = nullptr;};
      inline string getScope() const { DARABONBA_PTR_GET_DEFAULT(scope_, "") };
      inline ReportObjects& setScope(string scope) { DARABONBA_PTR_SET_VALUE(scope_, scope) };


      // softwareId Field Functions 
      bool hasSoftwareId() const { return this->softwareId_ != nullptr;};
      void deleteSoftwareId() { this->softwareId_ = nullptr;};
      inline string getSoftwareId() const { DARABONBA_PTR_GET_DEFAULT(softwareId_, "") };
      inline ReportObjects& setSoftwareId(string softwareId) { DARABONBA_PTR_SET_VALUE(softwareId_, softwareId) };


    protected:
      // The private access application ID. This parameter is required when PolicyType is set to PrivateAccessBlock. You can call ListPrivateAccessApplications to query the ID.
      shared_ptr<string> applicationId_ {};
      // The endpoint operating system. This parameter is required when PolicyType is set to PeripheralBlock. Valid values:
      // * windows: Windows.
      // * macOS: macOS.
      shared_ptr<string> devType_ {};
      // The peripheral channel. This parameter is required when PolicyType is set to PeripheralBlock. Windows supports usbStorage, printer, mobile, cardReader, cdrom, and bluetooth. macOS supports usbStorage, airDrop, mobile, and bluetooth.
      shared_ptr<string> deviceType_ {};
      // The file MD5 hash. This parameter is required when PolicyType is set to DlpSend. The value must be a 32-character hexadecimal string and is case-insensitive.
      shared_ptr<string> fileMd5_ {};
      // The filing domain name. This parameter is required when PolicyType is set to DomainWhitelist or DomainBlacklist. Regular domain names and wildcard domain names that start with *. are supported. Protocols, ports, and paths are not supported.
      shared_ptr<string> reportDomain_ {};
      // The peripheral filing granularity. This parameter is required when PolicyType is set to PeripheralBlock. Currently, only Channel is supported, which indicates filing by peripheral channel.
      shared_ptr<string> scope_ {};
      // The blocked software ID. This parameter is required when PolicyType is set to SoftwareBlock.
      shared_ptr<string> softwareId_ {};
    };

    virtual bool empty() const override { return this->endTimestamp_ == nullptr
        && this->policyType_ == nullptr && this->reason_ == nullptr && this->reportObjects_ == nullptr && this->targets_ == nullptr && this->validityType_ == nullptr; };
    // endTimestamp Field Functions 
    bool hasEndTimestamp() const { return this->endTimestamp_ != nullptr;};
    void deleteEndTimestamp() { this->endTimestamp_ = nullptr;};
    inline int64_t getEndTimestamp() const { DARABONBA_PTR_GET_DEFAULT(endTimestamp_, 0L) };
    inline CreateBackendReportRequest& setEndTimestamp(int64_t endTimestamp) { DARABONBA_PTR_SET_VALUE(endTimestamp_, endTimestamp) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline CreateBackendReportRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string getReason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline CreateBackendReportRequest& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // reportObjects Field Functions 
    bool hasReportObjects() const { return this->reportObjects_ != nullptr;};
    void deleteReportObjects() { this->reportObjects_ = nullptr;};
    inline const vector<CreateBackendReportRequest::ReportObjects> & getReportObjects() const { DARABONBA_PTR_GET_CONST(reportObjects_, vector<CreateBackendReportRequest::ReportObjects>) };
    inline vector<CreateBackendReportRequest::ReportObjects> getReportObjects() { DARABONBA_PTR_GET(reportObjects_, vector<CreateBackendReportRequest::ReportObjects>) };
    inline CreateBackendReportRequest& setReportObjects(const vector<CreateBackendReportRequest::ReportObjects> & reportObjects) { DARABONBA_PTR_SET_VALUE(reportObjects_, reportObjects) };
    inline CreateBackendReportRequest& setReportObjects(vector<CreateBackendReportRequest::ReportObjects> && reportObjects) { DARABONBA_PTR_SET_RVALUE(reportObjects_, reportObjects) };


    // targets Field Functions 
    bool hasTargets() const { return this->targets_ != nullptr;};
    void deleteTargets() { this->targets_ = nullptr;};
    inline const vector<CreateBackendReportRequest::Targets> & getTargets() const { DARABONBA_PTR_GET_CONST(targets_, vector<CreateBackendReportRequest::Targets>) };
    inline vector<CreateBackendReportRequest::Targets> getTargets() { DARABONBA_PTR_GET(targets_, vector<CreateBackendReportRequest::Targets>) };
    inline CreateBackendReportRequest& setTargets(const vector<CreateBackendReportRequest::Targets> & targets) { DARABONBA_PTR_SET_VALUE(targets_, targets) };
    inline CreateBackendReportRequest& setTargets(vector<CreateBackendReportRequest::Targets> && targets) { DARABONBA_PTR_SET_RVALUE(targets_, targets) };


    // validityType Field Functions 
    bool hasValidityType() const { return this->validityType_ != nullptr;};
    void deleteValidityType() { this->validityType_ = nullptr;};
    inline string getValidityType() const { DARABONBA_PTR_GET_DEFAULT(validityType_, "") };
    inline CreateBackendReportRequest& setValidityType(string validityType) { DARABONBA_PTR_SET_VALUE(validityType_, validityType) };


  protected:
    // The filing expiration time as a UNIX timestamp in seconds. This parameter is required when ValidityType is set to FixedTime or ValidityType is not specified, and the value must be later than the current time. When ValidityType is set to Permanent, do not specify this parameter or set it to 0.
    shared_ptr<int64_t> endTimestamp_ {};
    // The filing policy type. Valid values:
    // * PrivateAccessBlock: private access.
    // * DomainWhitelist: domain name whitelist.
    // * DomainBlacklist: domain name blacklist.
    // * SoftwareBlock: software blocking.
    // * DlpSend: file outbound transfer.
    // * PeripheralBlock: peripheral control.
    // 
    // This parameter is required.
    shared_ptr<string> policyType_ {};
    // The filing reason. The value must be 1 to 1024 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> reason_ {};
    // The list of filing objects, serialized in Flat format. You can specify 1 to 100 filing objects of the same policy type. The object fields must match the PolicyType value.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateBackendReportRequest::ReportObjects>> reportObjects_ {};
    // The list of filing users, serialized in Flat format. You can specify 1 to 100 users. Only specific SASE users under the current Alibaba Cloud account are supported. The product of the number of deduplicated users and the number of filing objects cannot exceed 100.
    // 
    // This parameter is required.
    shared_ptr<vector<CreateBackendReportRequest::Targets>> targets_ {};
    // The validity duration type. Default value: FixedTime. Valid values:
    // * FixedTime: Expires at the specified time.
    // * Permanent: Permanently valid.
    shared_ptr<string> validityType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
