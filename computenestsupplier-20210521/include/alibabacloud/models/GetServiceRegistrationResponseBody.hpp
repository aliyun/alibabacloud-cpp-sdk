// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICEREGISTRATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICEREGISTRATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class GetServiceRegistrationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceRegistrationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(Detail, detail_);
      DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_TO_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(ServiceInfo, serviceInfo_);
      DARABONBA_PTR_TO_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubmitTime, submitTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceRegistrationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(Detail, detail_);
      DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
      DARABONBA_PTR_FROM_JSON(RegistrationId, registrationId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(ServiceInfo, serviceInfo_);
      DARABONBA_PTR_FROM_JSON(ServiceVersion, serviceVersion_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubmitTime, submitTime_);
    };
    GetServiceRegistrationResponseBody() = default ;
    GetServiceRegistrationResponseBody(const GetServiceRegistrationResponseBody &) = default ;
    GetServiceRegistrationResponseBody(GetServiceRegistrationResponseBody &&) = default ;
    GetServiceRegistrationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceRegistrationResponseBody() = default ;
    GetServiceRegistrationResponseBody& operator=(const GetServiceRegistrationResponseBody &) = default ;
    GetServiceRegistrationResponseBody& operator=(GetServiceRegistrationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServiceInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServiceInfo& obj) { 
        DARABONBA_PTR_TO_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_TO_JSON(TrialType, trialType_);
        DARABONBA_PTR_TO_JSON(VersionName, versionName_);
      };
      friend void from_json(const Darabonba::Json& j, ServiceInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(ServiceType, serviceType_);
        DARABONBA_PTR_FROM_JSON(TrialType, trialType_);
        DARABONBA_PTR_FROM_JSON(VersionName, versionName_);
      };
      ServiceInfo() = default ;
      ServiceInfo(const ServiceInfo &) = default ;
      ServiceInfo(ServiceInfo &&) = default ;
      ServiceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServiceInfo() = default ;
      ServiceInfo& operator=(const ServiceInfo &) = default ;
      ServiceInfo& operator=(ServiceInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->serviceType_ == nullptr
        && this->trialType_ == nullptr && this->versionName_ == nullptr; };
      // serviceType Field Functions 
      bool hasServiceType() const { return this->serviceType_ != nullptr;};
      void deleteServiceType() { this->serviceType_ = nullptr;};
      inline string getServiceType() const { DARABONBA_PTR_GET_DEFAULT(serviceType_, "") };
      inline ServiceInfo& setServiceType(string serviceType) { DARABONBA_PTR_SET_VALUE(serviceType_, serviceType) };


      // trialType Field Functions 
      bool hasTrialType() const { return this->trialType_ != nullptr;};
      void deleteTrialType() { this->trialType_ = nullptr;};
      inline string getTrialType() const { DARABONBA_PTR_GET_DEFAULT(trialType_, "") };
      inline ServiceInfo& setTrialType(string trialType) { DARABONBA_PTR_SET_VALUE(trialType_, trialType) };


      // versionName Field Functions 
      bool hasVersionName() const { return this->versionName_ != nullptr;};
      void deleteVersionName() { this->versionName_ = nullptr;};
      inline string getVersionName() const { DARABONBA_PTR_GET_DEFAULT(versionName_, "") };
      inline ServiceInfo& setVersionName(string versionName) { DARABONBA_PTR_SET_VALUE(versionName_, versionName) };


    protected:
      // The type of the service. Valid values:
      // 
      // *   private: The service is a private service and is deployed within the account of a customer.
      // *   managed: The service is a fully managed service and is deployed within the account of a service provider.
      // *   operation: The service is a hosted O\\&M service.
      shared_ptr<string> serviceType_ {};
      // The trial policy. Valid values:
      // 
      // *   Trial: Trials are supported.
      // *   NotTrial: Trials are not supported.
      shared_ptr<string> trialType_ {};
      // The version name.
      shared_ptr<string> versionName_ {};
    };

    class Detail : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Detail& obj) { 
        DARABONBA_PTR_TO_JSON(AtRisk, atRisk_);
        DARABONBA_PTR_TO_JSON(HasRelatedArtifact, hasRelatedArtifact_);
        DARABONBA_PTR_TO_JSON(Reports, reports_);
        DARABONBA_PTR_TO_JSON(TemplateDiffUrl, templateDiffUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Detail& obj) { 
        DARABONBA_PTR_FROM_JSON(AtRisk, atRisk_);
        DARABONBA_PTR_FROM_JSON(HasRelatedArtifact, hasRelatedArtifact_);
        DARABONBA_PTR_FROM_JSON(Reports, reports_);
        DARABONBA_PTR_FROM_JSON(TemplateDiffUrl, templateDiffUrl_);
      };
      Detail() = default ;
      Detail(const Detail &) = default ;
      Detail(Detail &&) = default ;
      Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Detail() = default ;
      Detail& operator=(const Detail &) = default ;
      Detail& operator=(Detail &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->atRisk_ == nullptr
        && this->hasRelatedArtifact_ == nullptr && this->reports_ == nullptr && this->templateDiffUrl_ == nullptr; };
      // atRisk Field Functions 
      bool hasAtRisk() const { return this->atRisk_ != nullptr;};
      void deleteAtRisk() { this->atRisk_ = nullptr;};
      inline bool getAtRisk() const { DARABONBA_PTR_GET_DEFAULT(atRisk_, false) };
      inline Detail& setAtRisk(bool atRisk) { DARABONBA_PTR_SET_VALUE(atRisk_, atRisk) };


      // hasRelatedArtifact Field Functions 
      bool hasHasRelatedArtifact() const { return this->hasRelatedArtifact_ != nullptr;};
      void deleteHasRelatedArtifact() { this->hasRelatedArtifact_ = nullptr;};
      inline bool getHasRelatedArtifact() const { DARABONBA_PTR_GET_DEFAULT(hasRelatedArtifact_, false) };
      inline Detail& setHasRelatedArtifact(bool hasRelatedArtifact) { DARABONBA_PTR_SET_VALUE(hasRelatedArtifact_, hasRelatedArtifact) };


      // reports Field Functions 
      bool hasReports() const { return this->reports_ != nullptr;};
      void deleteReports() { this->reports_ = nullptr;};
      inline string getReports() const { DARABONBA_PTR_GET_DEFAULT(reports_, "") };
      inline Detail& setReports(string reports) { DARABONBA_PTR_SET_VALUE(reports_, reports) };


      // templateDiffUrl Field Functions 
      bool hasTemplateDiffUrl() const { return this->templateDiffUrl_ != nullptr;};
      void deleteTemplateDiffUrl() { this->templateDiffUrl_ = nullptr;};
      inline string getTemplateDiffUrl() const { DARABONBA_PTR_GET_DEFAULT(templateDiffUrl_, "") };
      inline Detail& setTemplateDiffUrl(string templateDiffUrl) { DARABONBA_PTR_SET_VALUE(templateDiffUrl_, templateDiffUrl) };


    protected:
      // Whether risk exists.
      shared_ptr<bool> atRisk_ {};
      // Whether service is associated with artifact.
      shared_ptr<bool> hasRelatedArtifact_ {};
      // The reports.
      shared_ptr<string> reports_ {};
      // The url of template diff file.
      shared_ptr<string> templateDiffUrl_ {};
    };

    virtual bool empty() const override { return this->comment_ == nullptr
        && this->detail_ == nullptr && this->finishTime_ == nullptr && this->registrationId_ == nullptr && this->requestId_ == nullptr && this->serviceId_ == nullptr
        && this->serviceInfo_ == nullptr && this->serviceVersion_ == nullptr && this->status_ == nullptr && this->submitTime_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline GetServiceRegistrationResponseBody& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // detail Field Functions 
    bool hasDetail() const { return this->detail_ != nullptr;};
    void deleteDetail() { this->detail_ = nullptr;};
    inline const GetServiceRegistrationResponseBody::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, GetServiceRegistrationResponseBody::Detail) };
    inline GetServiceRegistrationResponseBody::Detail getDetail() { DARABONBA_PTR_GET(detail_, GetServiceRegistrationResponseBody::Detail) };
    inline GetServiceRegistrationResponseBody& setDetail(const GetServiceRegistrationResponseBody::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
    inline GetServiceRegistrationResponseBody& setDetail(GetServiceRegistrationResponseBody::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


    // finishTime Field Functions 
    bool hasFinishTime() const { return this->finishTime_ != nullptr;};
    void deleteFinishTime() { this->finishTime_ = nullptr;};
    inline string getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, "") };
    inline GetServiceRegistrationResponseBody& setFinishTime(string finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


    // registrationId Field Functions 
    bool hasRegistrationId() const { return this->registrationId_ != nullptr;};
    void deleteRegistrationId() { this->registrationId_ = nullptr;};
    inline string getRegistrationId() const { DARABONBA_PTR_GET_DEFAULT(registrationId_, "") };
    inline GetServiceRegistrationResponseBody& setRegistrationId(string registrationId) { DARABONBA_PTR_SET_VALUE(registrationId_, registrationId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceRegistrationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline GetServiceRegistrationResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // serviceInfo Field Functions 
    bool hasServiceInfo() const { return this->serviceInfo_ != nullptr;};
    void deleteServiceInfo() { this->serviceInfo_ = nullptr;};
    inline const GetServiceRegistrationResponseBody::ServiceInfo & getServiceInfo() const { DARABONBA_PTR_GET_CONST(serviceInfo_, GetServiceRegistrationResponseBody::ServiceInfo) };
    inline GetServiceRegistrationResponseBody::ServiceInfo getServiceInfo() { DARABONBA_PTR_GET(serviceInfo_, GetServiceRegistrationResponseBody::ServiceInfo) };
    inline GetServiceRegistrationResponseBody& setServiceInfo(const GetServiceRegistrationResponseBody::ServiceInfo & serviceInfo) { DARABONBA_PTR_SET_VALUE(serviceInfo_, serviceInfo) };
    inline GetServiceRegistrationResponseBody& setServiceInfo(GetServiceRegistrationResponseBody::ServiceInfo && serviceInfo) { DARABONBA_PTR_SET_RVALUE(serviceInfo_, serviceInfo) };


    // serviceVersion Field Functions 
    bool hasServiceVersion() const { return this->serviceVersion_ != nullptr;};
    void deleteServiceVersion() { this->serviceVersion_ = nullptr;};
    inline string getServiceVersion() const { DARABONBA_PTR_GET_DEFAULT(serviceVersion_, "") };
    inline GetServiceRegistrationResponseBody& setServiceVersion(string serviceVersion) { DARABONBA_PTR_SET_VALUE(serviceVersion_, serviceVersion) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetServiceRegistrationResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // submitTime Field Functions 
    bool hasSubmitTime() const { return this->submitTime_ != nullptr;};
    void deleteSubmitTime() { this->submitTime_ = nullptr;};
    inline string getSubmitTime() const { DARABONBA_PTR_GET_DEFAULT(submitTime_, "") };
    inline GetServiceRegistrationResponseBody& setSubmitTime(string submitTime) { DARABONBA_PTR_SET_VALUE(submitTime_, submitTime) };


  protected:
    // Comment from reviewer.
    shared_ptr<string> comment_ {};
    // The details of service audit.
    shared_ptr<GetServiceRegistrationResponseBody::Detail> detail_ {};
    // Finish time.
    shared_ptr<string> finishTime_ {};
    // Service registration ID.
    shared_ptr<string> registrationId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
    // The service details.
    shared_ptr<GetServiceRegistrationResponseBody::ServiceInfo> serviceInfo_ {};
    // The service version.
    shared_ptr<string> serviceVersion_ {};
    // The status of service registration. Valid values:
    // 
    // *   Submitted
    // *   Approved
    // *   Rejected
    // *   Canceled
    // *   Executed
    shared_ptr<string> status_ {};
    // Submit time.
    shared_ptr<string> submitTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
