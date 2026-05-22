// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ComputeNestSupplier20210521
{
namespace Models
{
  class CreateServiceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DryRunResult, dryRunResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ServiceId, serviceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    CreateServiceResponseBody() = default ;
    CreateServiceResponseBody(const CreateServiceResponseBody &) = default ;
    CreateServiceResponseBody(CreateServiceResponseBody &&) = default ;
    CreateServiceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceResponseBody() = default ;
    CreateServiceResponseBody& operator=(const CreateServiceResponseBody &) = default ;
    CreateServiceResponseBody& operator=(CreateServiceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DryRunResult : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DryRunResult& obj) { 
        DARABONBA_PTR_TO_JSON(RolePolicy, rolePolicy_);
      };
      friend void from_json(const Darabonba::Json& j, DryRunResult& obj) { 
        DARABONBA_PTR_FROM_JSON(RolePolicy, rolePolicy_);
      };
      DryRunResult() = default ;
      DryRunResult(const DryRunResult &) = default ;
      DryRunResult(DryRunResult &&) = default ;
      DryRunResult(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DryRunResult() = default ;
      DryRunResult& operator=(const DryRunResult &) = default ;
      DryRunResult& operator=(DryRunResult &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RolePolicy : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RolePolicy& obj) { 
          DARABONBA_PTR_TO_JSON(MissingPolicy, missingPolicy_);
          DARABONBA_PTR_TO_JSON(Policy, policy_);
        };
        friend void from_json(const Darabonba::Json& j, RolePolicy& obj) { 
          DARABONBA_PTR_FROM_JSON(MissingPolicy, missingPolicy_);
          DARABONBA_PTR_FROM_JSON(Policy, policy_);
        };
        RolePolicy() = default ;
        RolePolicy(const RolePolicy &) = default ;
        RolePolicy(RolePolicy &&) = default ;
        RolePolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RolePolicy() = default ;
        RolePolicy& operator=(const RolePolicy &) = default ;
        RolePolicy& operator=(RolePolicy &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class MissingPolicy : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const MissingPolicy& obj) { 
            DARABONBA_PTR_TO_JSON(Action, action_);
            DARABONBA_PTR_TO_JSON(Resource, resource_);
            DARABONBA_PTR_TO_JSON(ServiceName, serviceName_);
          };
          friend void from_json(const Darabonba::Json& j, MissingPolicy& obj) { 
            DARABONBA_PTR_FROM_JSON(Action, action_);
            DARABONBA_PTR_FROM_JSON(Resource, resource_);
            DARABONBA_PTR_FROM_JSON(ServiceName, serviceName_);
          };
          MissingPolicy() = default ;
          MissingPolicy(const MissingPolicy &) = default ;
          MissingPolicy(MissingPolicy &&) = default ;
          MissingPolicy(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~MissingPolicy() = default ;
          MissingPolicy& operator=(const MissingPolicy &) = default ;
          MissingPolicy& operator=(MissingPolicy &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->action_ == nullptr
        && this->resource_ == nullptr && this->serviceName_ == nullptr; };
          // action Field Functions 
          bool hasAction() const { return this->action_ != nullptr;};
          void deleteAction() { this->action_ = nullptr;};
          inline const vector<string> & getAction() const { DARABONBA_PTR_GET_CONST(action_, vector<string>) };
          inline vector<string> getAction() { DARABONBA_PTR_GET(action_, vector<string>) };
          inline MissingPolicy& setAction(const vector<string> & action) { DARABONBA_PTR_SET_VALUE(action_, action) };
          inline MissingPolicy& setAction(vector<string> && action) { DARABONBA_PTR_SET_RVALUE(action_, action) };


          // resource Field Functions 
          bool hasResource() const { return this->resource_ != nullptr;};
          void deleteResource() { this->resource_ = nullptr;};
          inline string getResource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
          inline MissingPolicy& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


          // serviceName Field Functions 
          bool hasServiceName() const { return this->serviceName_ != nullptr;};
          void deleteServiceName() { this->serviceName_ = nullptr;};
          inline string getServiceName() const { DARABONBA_PTR_GET_DEFAULT(serviceName_, "") };
          inline MissingPolicy& setServiceName(string serviceName) { DARABONBA_PTR_SET_VALUE(serviceName_, serviceName) };


        protected:
          // The Actions.
          shared_ptr<vector<string>> action_ {};
          // Resource in ram policy.
          shared_ptr<string> resource_ {};
          // The service name in ram policy.
          shared_ptr<string> serviceName_ {};
        };

        virtual bool empty() const override { return this->missingPolicy_ == nullptr
        && this->policy_ == nullptr; };
        // missingPolicy Field Functions 
        bool hasMissingPolicy() const { return this->missingPolicy_ != nullptr;};
        void deleteMissingPolicy() { this->missingPolicy_ = nullptr;};
        inline const vector<RolePolicy::MissingPolicy> & getMissingPolicy() const { DARABONBA_PTR_GET_CONST(missingPolicy_, vector<RolePolicy::MissingPolicy>) };
        inline vector<RolePolicy::MissingPolicy> getMissingPolicy() { DARABONBA_PTR_GET(missingPolicy_, vector<RolePolicy::MissingPolicy>) };
        inline RolePolicy& setMissingPolicy(const vector<RolePolicy::MissingPolicy> & missingPolicy) { DARABONBA_PTR_SET_VALUE(missingPolicy_, missingPolicy) };
        inline RolePolicy& setMissingPolicy(vector<RolePolicy::MissingPolicy> && missingPolicy) { DARABONBA_PTR_SET_RVALUE(missingPolicy_, missingPolicy) };


        // policy Field Functions 
        bool hasPolicy() const { return this->policy_ != nullptr;};
        void deletePolicy() { this->policy_ = nullptr;};
        inline string getPolicy() const { DARABONBA_PTR_GET_DEFAULT(policy_, "") };
        inline RolePolicy& setPolicy(string policy) { DARABONBA_PTR_SET_VALUE(policy_, policy) };


      protected:
        // The missing ram policy for deploying role.
        shared_ptr<vector<RolePolicy::MissingPolicy>> missingPolicy_ {};
        // The required ram policy for deploying role.
        shared_ptr<string> policy_ {};
      };

      virtual bool empty() const override { return this->rolePolicy_ == nullptr; };
      // rolePolicy Field Functions 
      bool hasRolePolicy() const { return this->rolePolicy_ != nullptr;};
      void deleteRolePolicy() { this->rolePolicy_ = nullptr;};
      inline const DryRunResult::RolePolicy & getRolePolicy() const { DARABONBA_PTR_GET_CONST(rolePolicy_, DryRunResult::RolePolicy) };
      inline DryRunResult::RolePolicy getRolePolicy() { DARABONBA_PTR_GET(rolePolicy_, DryRunResult::RolePolicy) };
      inline DryRunResult& setRolePolicy(const DryRunResult::RolePolicy & rolePolicy) { DARABONBA_PTR_SET_VALUE(rolePolicy_, rolePolicy) };
      inline DryRunResult& setRolePolicy(DryRunResult::RolePolicy && rolePolicy) { DARABONBA_PTR_SET_RVALUE(rolePolicy_, rolePolicy) };


    protected:
      // The required ram policy for deploying role.
      shared_ptr<DryRunResult::RolePolicy> rolePolicy_ {};
    };

    virtual bool empty() const override { return this->dryRunResult_ == nullptr
        && this->requestId_ == nullptr && this->serviceId_ == nullptr && this->status_ == nullptr && this->version_ == nullptr; };
    // dryRunResult Field Functions 
    bool hasDryRunResult() const { return this->dryRunResult_ != nullptr;};
    void deleteDryRunResult() { this->dryRunResult_ = nullptr;};
    inline const CreateServiceResponseBody::DryRunResult & getDryRunResult() const { DARABONBA_PTR_GET_CONST(dryRunResult_, CreateServiceResponseBody::DryRunResult) };
    inline CreateServiceResponseBody::DryRunResult getDryRunResult() { DARABONBA_PTR_GET(dryRunResult_, CreateServiceResponseBody::DryRunResult) };
    inline CreateServiceResponseBody& setDryRunResult(const CreateServiceResponseBody::DryRunResult & dryRunResult) { DARABONBA_PTR_SET_VALUE(dryRunResult_, dryRunResult) };
    inline CreateServiceResponseBody& setDryRunResult(CreateServiceResponseBody::DryRunResult && dryRunResult) { DARABONBA_PTR_SET_RVALUE(dryRunResult_, dryRunResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateServiceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // serviceId Field Functions 
    bool hasServiceId() const { return this->serviceId_ != nullptr;};
    void deleteServiceId() { this->serviceId_ = nullptr;};
    inline string getServiceId() const { DARABONBA_PTR_GET_DEFAULT(serviceId_, "") };
    inline CreateServiceResponseBody& setServiceId(string serviceId) { DARABONBA_PTR_SET_VALUE(serviceId_, serviceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline CreateServiceResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline CreateServiceResponseBody& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The dry run result.
    shared_ptr<CreateServiceResponseBody::DryRunResult> dryRunResult_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The service ID.
    shared_ptr<string> serviceId_ {};
    // The status of the service.
    shared_ptr<string> status_ {};
    // The service version.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ComputeNestSupplier20210521
#endif
