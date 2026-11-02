// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVICELASTACCESSEDDETAILSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSERVICELASTACCESSEDDETAILSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ram20150501
{
namespace Models
{
  class GetServiceLastAccessedDetailsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServiceLastAccessedDetailsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_TO_JSON(JobCompletionTime, jobCompletionTime_);
      DARABONBA_PTR_TO_JSON(JobCreationTime, jobCreationTime_);
      DARABONBA_PTR_TO_JSON(JobError, jobError_);
      DARABONBA_PTR_TO_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_TO_JSON(JobType, jobType_);
      DARABONBA_PTR_TO_JSON(Marker, marker_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServicesLastAccessed, servicesLastAccessed_);
    };
    friend void from_json(const Darabonba::Json& j, GetServiceLastAccessedDetailsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsTruncated, isTruncated_);
      DARABONBA_PTR_FROM_JSON(JobCompletionTime, jobCompletionTime_);
      DARABONBA_PTR_FROM_JSON(JobCreationTime, jobCreationTime_);
      DARABONBA_PTR_FROM_JSON(JobError, jobError_);
      DARABONBA_PTR_FROM_JSON(JobStatus, jobStatus_);
      DARABONBA_PTR_FROM_JSON(JobType, jobType_);
      DARABONBA_PTR_FROM_JSON(Marker, marker_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServicesLastAccessed, servicesLastAccessed_);
    };
    GetServiceLastAccessedDetailsResponseBody() = default ;
    GetServiceLastAccessedDetailsResponseBody(const GetServiceLastAccessedDetailsResponseBody &) = default ;
    GetServiceLastAccessedDetailsResponseBody(GetServiceLastAccessedDetailsResponseBody &&) = default ;
    GetServiceLastAccessedDetailsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServiceLastAccessedDetailsResponseBody() = default ;
    GetServiceLastAccessedDetailsResponseBody& operator=(const GetServiceLastAccessedDetailsResponseBody &) = default ;
    GetServiceLastAccessedDetailsResponseBody& operator=(GetServiceLastAccessedDetailsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ServicesLastAccessed : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ServicesLastAccessed& obj) { 
        DARABONBA_PTR_TO_JSON(GrantPolicies, grantPolicies_);
        DARABONBA_PTR_TO_JSON(LastAuthenticated, lastAuthenticated_);
        DARABONBA_PTR_TO_JSON(LastAuthenticatedEntity, lastAuthenticatedEntity_);
        DARABONBA_PTR_TO_JSON(RAMCode, RAMCode_);
        DARABONBA_PTR_TO_JSON(ServiceCodes, serviceCodes_);
        DARABONBA_PTR_TO_JSON(TotalAuthenticatedEntities, totalAuthenticatedEntities_);
        DARABONBA_PTR_TO_JSON(TrackedActionsLastAccessed, trackedActionsLastAccessed_);
      };
      friend void from_json(const Darabonba::Json& j, ServicesLastAccessed& obj) { 
        DARABONBA_PTR_FROM_JSON(GrantPolicies, grantPolicies_);
        DARABONBA_PTR_FROM_JSON(LastAuthenticated, lastAuthenticated_);
        DARABONBA_PTR_FROM_JSON(LastAuthenticatedEntity, lastAuthenticatedEntity_);
        DARABONBA_PTR_FROM_JSON(RAMCode, RAMCode_);
        DARABONBA_PTR_FROM_JSON(ServiceCodes, serviceCodes_);
        DARABONBA_PTR_FROM_JSON(TotalAuthenticatedEntities, totalAuthenticatedEntities_);
        DARABONBA_PTR_FROM_JSON(TrackedActionsLastAccessed, trackedActionsLastAccessed_);
      };
      ServicesLastAccessed() = default ;
      ServicesLastAccessed(const ServicesLastAccessed &) = default ;
      ServicesLastAccessed(ServicesLastAccessed &&) = default ;
      ServicesLastAccessed(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ServicesLastAccessed() = default ;
      ServicesLastAccessed& operator=(const ServicesLastAccessed &) = default ;
      ServicesLastAccessed& operator=(ServicesLastAccessed &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TrackedActionsLastAccessed : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TrackedActionsLastAccessed& obj) { 
          DARABONBA_PTR_TO_JSON(ActionName, actionName_);
          DARABONBA_PTR_TO_JSON(LastAccessedEntity, lastAccessedEntity_);
          DARABONBA_PTR_TO_JSON(LastAccessedTime, lastAccessedTime_);
          DARABONBA_PTR_TO_JSON(ServiceCodes, serviceCodes_);
        };
        friend void from_json(const Darabonba::Json& j, TrackedActionsLastAccessed& obj) { 
          DARABONBA_PTR_FROM_JSON(ActionName, actionName_);
          DARABONBA_PTR_FROM_JSON(LastAccessedEntity, lastAccessedEntity_);
          DARABONBA_PTR_FROM_JSON(LastAccessedTime, lastAccessedTime_);
          DARABONBA_PTR_FROM_JSON(ServiceCodes, serviceCodes_);
        };
        TrackedActionsLastAccessed() = default ;
        TrackedActionsLastAccessed(const TrackedActionsLastAccessed &) = default ;
        TrackedActionsLastAccessed(TrackedActionsLastAccessed &&) = default ;
        TrackedActionsLastAccessed(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TrackedActionsLastAccessed() = default ;
        TrackedActionsLastAccessed& operator=(const TrackedActionsLastAccessed &) = default ;
        TrackedActionsLastAccessed& operator=(TrackedActionsLastAccessed &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->actionName_ == nullptr
        && this->lastAccessedEntity_ == nullptr && this->lastAccessedTime_ == nullptr && this->serviceCodes_ == nullptr; };
        // actionName Field Functions 
        bool hasActionName() const { return this->actionName_ != nullptr;};
        void deleteActionName() { this->actionName_ = nullptr;};
        inline string getActionName() const { DARABONBA_PTR_GET_DEFAULT(actionName_, "") };
        inline TrackedActionsLastAccessed& setActionName(string actionName) { DARABONBA_PTR_SET_VALUE(actionName_, actionName) };


        // lastAccessedEntity Field Functions 
        bool hasLastAccessedEntity() const { return this->lastAccessedEntity_ != nullptr;};
        void deleteLastAccessedEntity() { this->lastAccessedEntity_ = nullptr;};
        inline string getLastAccessedEntity() const { DARABONBA_PTR_GET_DEFAULT(lastAccessedEntity_, "") };
        inline TrackedActionsLastAccessed& setLastAccessedEntity(string lastAccessedEntity) { DARABONBA_PTR_SET_VALUE(lastAccessedEntity_, lastAccessedEntity) };


        // lastAccessedTime Field Functions 
        bool hasLastAccessedTime() const { return this->lastAccessedTime_ != nullptr;};
        void deleteLastAccessedTime() { this->lastAccessedTime_ = nullptr;};
        inline string getLastAccessedTime() const { DARABONBA_PTR_GET_DEFAULT(lastAccessedTime_, "") };
        inline TrackedActionsLastAccessed& setLastAccessedTime(string lastAccessedTime) { DARABONBA_PTR_SET_VALUE(lastAccessedTime_, lastAccessedTime) };


        // serviceCodes Field Functions 
        bool hasServiceCodes() const { return this->serviceCodes_ != nullptr;};
        void deleteServiceCodes() { this->serviceCodes_ = nullptr;};
        inline const vector<string> & getServiceCodes() const { DARABONBA_PTR_GET_CONST(serviceCodes_, vector<string>) };
        inline vector<string> getServiceCodes() { DARABONBA_PTR_GET(serviceCodes_, vector<string>) };
        inline TrackedActionsLastAccessed& setServiceCodes(const vector<string> & serviceCodes) { DARABONBA_PTR_SET_VALUE(serviceCodes_, serviceCodes) };
        inline TrackedActionsLastAccessed& setServiceCodes(vector<string> && serviceCodes) { DARABONBA_PTR_SET_RVALUE(serviceCodes_, serviceCodes) };


      protected:
        // The action.
        shared_ptr<string> actionName_ {};
        // The ARN of the analyzed RAM identity.
        shared_ptr<string> lastAccessedEntity_ {};
        // The time when the analyzed RAM identity last attempted to perform the action.
        shared_ptr<string> lastAccessedTime_ {};
        // The list of cloud service codes.
        shared_ptr<vector<string>> serviceCodes_ {};
      };

      class GrantPolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const GrantPolicies& obj) { 
          DARABONBA_PTR_TO_JSON(AttachedEntity, attachedEntity_);
          DARABONBA_PTR_TO_JSON(AttachedScope, attachedScope_);
          DARABONBA_PTR_TO_JSON(PolicyName, policyName_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
        };
        friend void from_json(const Darabonba::Json& j, GrantPolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(AttachedEntity, attachedEntity_);
          DARABONBA_PTR_FROM_JSON(AttachedScope, attachedScope_);
          DARABONBA_PTR_FROM_JSON(PolicyName, policyName_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
        };
        GrantPolicies() = default ;
        GrantPolicies(const GrantPolicies &) = default ;
        GrantPolicies(GrantPolicies &&) = default ;
        GrantPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~GrantPolicies() = default ;
        GrantPolicies& operator=(const GrantPolicies &) = default ;
        GrantPolicies& operator=(GrantPolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->attachedEntity_ == nullptr
        && this->attachedScope_ == nullptr && this->policyName_ == nullptr && this->policyType_ == nullptr; };
        // attachedEntity Field Functions 
        bool hasAttachedEntity() const { return this->attachedEntity_ != nullptr;};
        void deleteAttachedEntity() { this->attachedEntity_ = nullptr;};
        inline string getAttachedEntity() const { DARABONBA_PTR_GET_DEFAULT(attachedEntity_, "") };
        inline GrantPolicies& setAttachedEntity(string attachedEntity) { DARABONBA_PTR_SET_VALUE(attachedEntity_, attachedEntity) };


        // attachedScope Field Functions 
        bool hasAttachedScope() const { return this->attachedScope_ != nullptr;};
        void deleteAttachedScope() { this->attachedScope_ = nullptr;};
        inline string getAttachedScope() const { DARABONBA_PTR_GET_DEFAULT(attachedScope_, "") };
        inline GrantPolicies& setAttachedScope(string attachedScope) { DARABONBA_PTR_SET_VALUE(attachedScope_, attachedScope) };


        // policyName Field Functions 
        bool hasPolicyName() const { return this->policyName_ != nullptr;};
        void deletePolicyName() { this->policyName_ = nullptr;};
        inline string getPolicyName() const { DARABONBA_PTR_GET_DEFAULT(policyName_, "") };
        inline GrantPolicies& setPolicyName(string policyName) { DARABONBA_PTR_SET_VALUE(policyName_, policyName) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
        inline GrantPolicies& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


      protected:
        // The ARN of the entity to which the access policy grants permission. Valid values:
        // 
        // - RAM user: acs:ram::<account_id>:user/<user_name>
        // - RAM role: acs:ram::<account_id>:role/<role_name>
        // - RAM user group: acs:ram::<account_id>:group/<group_name>
        shared_ptr<string> attachedEntity_ {};
        // The authorization scope of the access policy. Valid values:
        // - Account ID (format: 123459***): account-level authorization
        // - Resource group ID (format: rg-123***): resource group-level authorization
        shared_ptr<string> attachedScope_ {};
        // The name of the access policy that grants permission.
        shared_ptr<string> policyName_ {};
        // The type of the access policy. Valid values:
        // - System: system policy
        // - Custom: custom policy
        shared_ptr<string> policyType_ {};
      };

      virtual bool empty() const override { return this->grantPolicies_ == nullptr
        && this->lastAuthenticated_ == nullptr && this->lastAuthenticatedEntity_ == nullptr && this->RAMCode_ == nullptr && this->serviceCodes_ == nullptr && this->totalAuthenticatedEntities_ == nullptr
        && this->trackedActionsLastAccessed_ == nullptr; };
      // grantPolicies Field Functions 
      bool hasGrantPolicies() const { return this->grantPolicies_ != nullptr;};
      void deleteGrantPolicies() { this->grantPolicies_ = nullptr;};
      inline const vector<ServicesLastAccessed::GrantPolicies> & getGrantPolicies() const { DARABONBA_PTR_GET_CONST(grantPolicies_, vector<ServicesLastAccessed::GrantPolicies>) };
      inline vector<ServicesLastAccessed::GrantPolicies> getGrantPolicies() { DARABONBA_PTR_GET(grantPolicies_, vector<ServicesLastAccessed::GrantPolicies>) };
      inline ServicesLastAccessed& setGrantPolicies(const vector<ServicesLastAccessed::GrantPolicies> & grantPolicies) { DARABONBA_PTR_SET_VALUE(grantPolicies_, grantPolicies) };
      inline ServicesLastAccessed& setGrantPolicies(vector<ServicesLastAccessed::GrantPolicies> && grantPolicies) { DARABONBA_PTR_SET_RVALUE(grantPolicies_, grantPolicies) };


      // lastAuthenticated Field Functions 
      bool hasLastAuthenticated() const { return this->lastAuthenticated_ != nullptr;};
      void deleteLastAuthenticated() { this->lastAuthenticated_ = nullptr;};
      inline string getLastAuthenticated() const { DARABONBA_PTR_GET_DEFAULT(lastAuthenticated_, "") };
      inline ServicesLastAccessed& setLastAuthenticated(string lastAuthenticated) { DARABONBA_PTR_SET_VALUE(lastAuthenticated_, lastAuthenticated) };


      // lastAuthenticatedEntity Field Functions 
      bool hasLastAuthenticatedEntity() const { return this->lastAuthenticatedEntity_ != nullptr;};
      void deleteLastAuthenticatedEntity() { this->lastAuthenticatedEntity_ = nullptr;};
      inline string getLastAuthenticatedEntity() const { DARABONBA_PTR_GET_DEFAULT(lastAuthenticatedEntity_, "") };
      inline ServicesLastAccessed& setLastAuthenticatedEntity(string lastAuthenticatedEntity) { DARABONBA_PTR_SET_VALUE(lastAuthenticatedEntity_, lastAuthenticatedEntity) };


      // RAMCode Field Functions 
      bool hasRAMCode() const { return this->RAMCode_ != nullptr;};
      void deleteRAMCode() { this->RAMCode_ = nullptr;};
      inline string getRAMCode() const { DARABONBA_PTR_GET_DEFAULT(RAMCode_, "") };
      inline ServicesLastAccessed& setRAMCode(string RAMCode) { DARABONBA_PTR_SET_VALUE(RAMCode_, RAMCode) };


      // serviceCodes Field Functions 
      bool hasServiceCodes() const { return this->serviceCodes_ != nullptr;};
      void deleteServiceCodes() { this->serviceCodes_ = nullptr;};
      inline const vector<string> & getServiceCodes() const { DARABONBA_PTR_GET_CONST(serviceCodes_, vector<string>) };
      inline vector<string> getServiceCodes() { DARABONBA_PTR_GET(serviceCodes_, vector<string>) };
      inline ServicesLastAccessed& setServiceCodes(const vector<string> & serviceCodes) { DARABONBA_PTR_SET_VALUE(serviceCodes_, serviceCodes) };
      inline ServicesLastAccessed& setServiceCodes(vector<string> && serviceCodes) { DARABONBA_PTR_SET_RVALUE(serviceCodes_, serviceCodes) };


      // totalAuthenticatedEntities Field Functions 
      bool hasTotalAuthenticatedEntities() const { return this->totalAuthenticatedEntities_ != nullptr;};
      void deleteTotalAuthenticatedEntities() { this->totalAuthenticatedEntities_ = nullptr;};
      inline int32_t getTotalAuthenticatedEntities() const { DARABONBA_PTR_GET_DEFAULT(totalAuthenticatedEntities_, 0) };
      inline ServicesLastAccessed& setTotalAuthenticatedEntities(int32_t totalAuthenticatedEntities) { DARABONBA_PTR_SET_VALUE(totalAuthenticatedEntities_, totalAuthenticatedEntities) };


      // trackedActionsLastAccessed Field Functions 
      bool hasTrackedActionsLastAccessed() const { return this->trackedActionsLastAccessed_ != nullptr;};
      void deleteTrackedActionsLastAccessed() { this->trackedActionsLastAccessed_ = nullptr;};
      inline const vector<ServicesLastAccessed::TrackedActionsLastAccessed> & getTrackedActionsLastAccessed() const { DARABONBA_PTR_GET_CONST(trackedActionsLastAccessed_, vector<ServicesLastAccessed::TrackedActionsLastAccessed>) };
      inline vector<ServicesLastAccessed::TrackedActionsLastAccessed> getTrackedActionsLastAccessed() { DARABONBA_PTR_GET(trackedActionsLastAccessed_, vector<ServicesLastAccessed::TrackedActionsLastAccessed>) };
      inline ServicesLastAccessed& setTrackedActionsLastAccessed(const vector<ServicesLastAccessed::TrackedActionsLastAccessed> & trackedActionsLastAccessed) { DARABONBA_PTR_SET_VALUE(trackedActionsLastAccessed_, trackedActionsLastAccessed) };
      inline ServicesLastAccessed& setTrackedActionsLastAccessed(vector<ServicesLastAccessed::TrackedActionsLastAccessed> && trackedActionsLastAccessed) { DARABONBA_PTR_SET_RVALUE(trackedActionsLastAccessed_, trackedActionsLastAccessed) };


    protected:
      // The list of access policies that grant permission to access the cloud service.
      shared_ptr<vector<ServicesLastAccessed::GrantPolicies>> grantPolicies_ {};
      // The time when the analyzed RAM identity last attempted to access the service.
      shared_ptr<string> lastAuthenticated_ {};
      // The ARN of the analyzed RAM identity.
      shared_ptr<string> lastAuthenticatedEntity_ {};
      // The RAM code of the cloud service.
      shared_ptr<string> RAMCode_ {};
      // The list of cloud service codes.
      shared_ptr<vector<string>> serviceCodes_ {};
      // The number of identities that attempted to access the service.
      shared_ptr<int32_t> totalAuthenticatedEntities_ {};
      // The list of operation-level access information. This information is returned when the granularity of the created permission audit task is ACTION_LEVEL.
      shared_ptr<vector<ServicesLastAccessed::TrackedActionsLastAccessed>> trackedActionsLastAccessed_ {};
    };

    class JobError : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const JobError& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Message, message_);
      };
      friend void from_json(const Darabonba::Json& j, JobError& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
      };
      JobError() = default ;
      JobError(const JobError &) = default ;
      JobError(JobError &&) = default ;
      JobError(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~JobError() = default ;
      JobError& operator=(const JobError &) = default ;
      JobError& operator=(JobError &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->message_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline JobError& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline JobError& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    protected:
      // The error code.
      shared_ptr<string> code_ {};
      // The error message.
      shared_ptr<string> message_ {};
    };

    virtual bool empty() const override { return this->isTruncated_ == nullptr
        && this->jobCompletionTime_ == nullptr && this->jobCreationTime_ == nullptr && this->jobError_ == nullptr && this->jobStatus_ == nullptr && this->jobType_ == nullptr
        && this->marker_ == nullptr && this->requestId_ == nullptr && this->servicesLastAccessed_ == nullptr; };
    // isTruncated Field Functions 
    bool hasIsTruncated() const { return this->isTruncated_ != nullptr;};
    void deleteIsTruncated() { this->isTruncated_ = nullptr;};
    inline bool getIsTruncated() const { DARABONBA_PTR_GET_DEFAULT(isTruncated_, false) };
    inline GetServiceLastAccessedDetailsResponseBody& setIsTruncated(bool isTruncated) { DARABONBA_PTR_SET_VALUE(isTruncated_, isTruncated) };


    // jobCompletionTime Field Functions 
    bool hasJobCompletionTime() const { return this->jobCompletionTime_ != nullptr;};
    void deleteJobCompletionTime() { this->jobCompletionTime_ = nullptr;};
    inline string getJobCompletionTime() const { DARABONBA_PTR_GET_DEFAULT(jobCompletionTime_, "") };
    inline GetServiceLastAccessedDetailsResponseBody& setJobCompletionTime(string jobCompletionTime) { DARABONBA_PTR_SET_VALUE(jobCompletionTime_, jobCompletionTime) };


    // jobCreationTime Field Functions 
    bool hasJobCreationTime() const { return this->jobCreationTime_ != nullptr;};
    void deleteJobCreationTime() { this->jobCreationTime_ = nullptr;};
    inline string getJobCreationTime() const { DARABONBA_PTR_GET_DEFAULT(jobCreationTime_, "") };
    inline GetServiceLastAccessedDetailsResponseBody& setJobCreationTime(string jobCreationTime) { DARABONBA_PTR_SET_VALUE(jobCreationTime_, jobCreationTime) };


    // jobError Field Functions 
    bool hasJobError() const { return this->jobError_ != nullptr;};
    void deleteJobError() { this->jobError_ = nullptr;};
    inline const GetServiceLastAccessedDetailsResponseBody::JobError & getJobError() const { DARABONBA_PTR_GET_CONST(jobError_, GetServiceLastAccessedDetailsResponseBody::JobError) };
    inline GetServiceLastAccessedDetailsResponseBody::JobError getJobError() { DARABONBA_PTR_GET(jobError_, GetServiceLastAccessedDetailsResponseBody::JobError) };
    inline GetServiceLastAccessedDetailsResponseBody& setJobError(const GetServiceLastAccessedDetailsResponseBody::JobError & jobError) { DARABONBA_PTR_SET_VALUE(jobError_, jobError) };
    inline GetServiceLastAccessedDetailsResponseBody& setJobError(GetServiceLastAccessedDetailsResponseBody::JobError && jobError) { DARABONBA_PTR_SET_RVALUE(jobError_, jobError) };


    // jobStatus Field Functions 
    bool hasJobStatus() const { return this->jobStatus_ != nullptr;};
    void deleteJobStatus() { this->jobStatus_ = nullptr;};
    inline string getJobStatus() const { DARABONBA_PTR_GET_DEFAULT(jobStatus_, "") };
    inline GetServiceLastAccessedDetailsResponseBody& setJobStatus(string jobStatus) { DARABONBA_PTR_SET_VALUE(jobStatus_, jobStatus) };


    // jobType Field Functions 
    bool hasJobType() const { return this->jobType_ != nullptr;};
    void deleteJobType() { this->jobType_ = nullptr;};
    inline string getJobType() const { DARABONBA_PTR_GET_DEFAULT(jobType_, "") };
    inline GetServiceLastAccessedDetailsResponseBody& setJobType(string jobType) { DARABONBA_PTR_SET_VALUE(jobType_, jobType) };


    // marker Field Functions 
    bool hasMarker() const { return this->marker_ != nullptr;};
    void deleteMarker() { this->marker_ = nullptr;};
    inline string getMarker() const { DARABONBA_PTR_GET_DEFAULT(marker_, "") };
    inline GetServiceLastAccessedDetailsResponseBody& setMarker(string marker) { DARABONBA_PTR_SET_VALUE(marker_, marker) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetServiceLastAccessedDetailsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // servicesLastAccessed Field Functions 
    bool hasServicesLastAccessed() const { return this->servicesLastAccessed_ != nullptr;};
    void deleteServicesLastAccessed() { this->servicesLastAccessed_ = nullptr;};
    inline const vector<GetServiceLastAccessedDetailsResponseBody::ServicesLastAccessed> & getServicesLastAccessed() const { DARABONBA_PTR_GET_CONST(servicesLastAccessed_, vector<GetServiceLastAccessedDetailsResponseBody::ServicesLastAccessed>) };
    inline vector<GetServiceLastAccessedDetailsResponseBody::ServicesLastAccessed> getServicesLastAccessed() { DARABONBA_PTR_GET(servicesLastAccessed_, vector<GetServiceLastAccessedDetailsResponseBody::ServicesLastAccessed>) };
    inline GetServiceLastAccessedDetailsResponseBody& setServicesLastAccessed(const vector<GetServiceLastAccessedDetailsResponseBody::ServicesLastAccessed> & servicesLastAccessed) { DARABONBA_PTR_SET_VALUE(servicesLastAccessed_, servicesLastAccessed) };
    inline GetServiceLastAccessedDetailsResponseBody& setServicesLastAccessed(vector<GetServiceLastAccessedDetailsResponseBody::ServicesLastAccessed> && servicesLastAccessed) { DARABONBA_PTR_SET_RVALUE(servicesLastAccessed_, servicesLastAccessed) };


  protected:
    // Specifies whether the returned results are truncated. Valid values:
    // - true
    // - false
    shared_ptr<bool> isTruncated_ {};
    // The time when the task was completed.
    shared_ptr<string> jobCompletionTime_ {};
    // The time when the task was created.
    shared_ptr<string> jobCreationTime_ {};
    // The error message returned when the task fails. This parameter is not returned when the task is completed.
    shared_ptr<GetServiceLastAccessedDetailsResponseBody::JobError> jobError_ {};
    // The status of the task. Valid values:
    // 
    // - IN_PROGRESS: The task is being processed.
    // - COMPLETED: The task is completed.
    // - FAILED: The task failed.
    shared_ptr<string> jobStatus_ {};
    // The granularity of the permission audit report. Valid values:
    // - SERVICE_LEVEL: Analyzes the recent access information at the RAM code granularity for cloud services supported by permission audit.
    // - ACTION_LEVEL: Analyzes the recent access information at the RAM action granularity for operation-level cloud services supported by permission audit.
    shared_ptr<string> jobType_ {};
    // This parameter is returned only when IsTruncated is set to true. If true is returned, you must call this operation again and use Marker to obtain the truncated content.
    // 
    // This parameter is required.
    shared_ptr<string> marker_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The list of last access information for cloud services. This list is empty if the RAM identity does not have access permissions for any cloud service.
    shared_ptr<vector<GetServiceLastAccessedDetailsResponseBody::ServicesLastAccessed>> servicesLastAccessed_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ram20150501
#endif
