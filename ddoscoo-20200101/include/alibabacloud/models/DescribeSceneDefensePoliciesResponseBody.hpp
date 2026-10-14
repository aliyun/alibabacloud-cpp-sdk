// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEPOLICIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEPOLICIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSceneDefensePoliciesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneDefensePoliciesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Policies, policies_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSceneDefensePoliciesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Policies, policies_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeSceneDefensePoliciesResponseBody() = default ;
    DescribeSceneDefensePoliciesResponseBody(const DescribeSceneDefensePoliciesResponseBody &) = default ;
    DescribeSceneDefensePoliciesResponseBody(DescribeSceneDefensePoliciesResponseBody &&) = default ;
    DescribeSceneDefensePoliciesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneDefensePoliciesResponseBody() = default ;
    DescribeSceneDefensePoliciesResponseBody& operator=(const DescribeSceneDefensePoliciesResponseBody &) = default ;
    DescribeSceneDefensePoliciesResponseBody& operator=(DescribeSceneDefensePoliciesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Policies : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Policies& obj) { 
        DARABONBA_PTR_TO_JSON(Done, done_);
        DARABONBA_PTR_TO_JSON(EndTime, endTime_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(ObjectCount, objectCount_);
        DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
        DARABONBA_PTR_TO_JSON(RuntimePolicies, runtimePolicies_);
        DARABONBA_PTR_TO_JSON(StartTime, startTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(Template, template_);
      };
      friend void from_json(const Darabonba::Json& j, Policies& obj) { 
        DARABONBA_PTR_FROM_JSON(Done, done_);
        DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(ObjectCount, objectCount_);
        DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
        DARABONBA_PTR_FROM_JSON(RuntimePolicies, runtimePolicies_);
        DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(Template, template_);
      };
      Policies() = default ;
      Policies(const Policies &) = default ;
      Policies(Policies &&) = default ;
      Policies(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Policies() = default ;
      Policies& operator=(const Policies &) = default ;
      Policies& operator=(Policies &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class RuntimePolicies : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const RuntimePolicies& obj) { 
          DARABONBA_PTR_TO_JSON(NewValue, newValue_);
          DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(oldValue, oldValue_);
        };
        friend void from_json(const Darabonba::Json& j, RuntimePolicies& obj) { 
          DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
          DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(oldValue, oldValue_);
        };
        RuntimePolicies() = default ;
        RuntimePolicies(const RuntimePolicies &) = default ;
        RuntimePolicies(RuntimePolicies &&) = default ;
        RuntimePolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~RuntimePolicies() = default ;
        RuntimePolicies& operator=(const RuntimePolicies &) = default ;
        RuntimePolicies& operator=(RuntimePolicies &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->newValue_ == nullptr
        && this->policyType_ == nullptr && this->status_ == nullptr && this->oldValue_ == nullptr; };
        // newValue Field Functions 
        bool hasNewValue() const { return this->newValue_ != nullptr;};
        void deleteNewValue() { this->newValue_ = nullptr;};
        inline string getNewValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
        inline RuntimePolicies& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


        // policyType Field Functions 
        bool hasPolicyType() const { return this->policyType_ != nullptr;};
        void deletePolicyType() { this->policyType_ = nullptr;};
        inline int32_t getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, 0) };
        inline RuntimePolicies& setPolicyType(int32_t policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline RuntimePolicies& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // oldValue Field Functions 
        bool hasOldValue() const { return this->oldValue_ != nullptr;};
        void deleteOldValue() { this->oldValue_ = nullptr;};
        inline string getOldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
        inline RuntimePolicies& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


      protected:
        // The protection rule when the policy takes effect.
        // 
        // If **PolicyType** is **1**, the value is **{"cc_rule_enable": false }**, which indicates that frequency control is disabled.
        // 
        // If **PolicyType** is **2**, the value is **{"ai_rule_enable": 0}**, which indicates that AI-based intelligent analysis is disabled.
        shared_ptr<string> newValue_ {};
        // The type of protection feature change triggered when the policy takes effect. Valid values:
        // - **1**: frequency control feature change.
        // - **2**: AI-based intelligent analysis feature change.
        shared_ptr<int32_t> policyType_ {};
        // The runtime status of the policy. Valid values:
        // - **0**: not delivered or policy restored successfully.
        // - **1**: active (policy takes effect).
        // - **2**: being restored (policy restoration).
        // - **3**: policy took effect successfully.
        // - **4**: policy failed to take effect.
        // - **5**: policy restoration failed.
        // - **6**: the configuration of the object associated with the policy does not exist (may have been deleted).
        shared_ptr<int32_t> status_ {};
        // The protection rule before the policy takes effect.
        // 
        // If **PolicyType** is **1**, the value is **{"cc_rule_enable": true}**, which indicates that frequency control is enabled.
        // 
        // If **PolicyType** is **2**, the value is **{"ai_rule_enable": 1}**, which indicates that AI-based intelligent analysis is enabled.
        shared_ptr<string> oldValue_ {};
      };

      virtual bool empty() const override { return this->done_ == nullptr
        && this->endTime_ == nullptr && this->name_ == nullptr && this->objectCount_ == nullptr && this->policyId_ == nullptr && this->runtimePolicies_ == nullptr
        && this->startTime_ == nullptr && this->status_ == nullptr && this->template_ == nullptr; };
      // done Field Functions 
      bool hasDone() const { return this->done_ != nullptr;};
      void deleteDone() { this->done_ = nullptr;};
      inline int32_t getDone() const { DARABONBA_PTR_GET_DEFAULT(done_, 0) };
      inline Policies& setDone(int32_t done) { DARABONBA_PTR_SET_VALUE(done_, done) };


      // endTime Field Functions 
      bool hasEndTime() const { return this->endTime_ != nullptr;};
      void deleteEndTime() { this->endTime_ = nullptr;};
      inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
      inline Policies& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Policies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // objectCount Field Functions 
      bool hasObjectCount() const { return this->objectCount_ != nullptr;};
      void deleteObjectCount() { this->objectCount_ = nullptr;};
      inline int32_t getObjectCount() const { DARABONBA_PTR_GET_DEFAULT(objectCount_, 0) };
      inline Policies& setObjectCount(int32_t objectCount) { DARABONBA_PTR_SET_VALUE(objectCount_, objectCount) };


      // policyId Field Functions 
      bool hasPolicyId() const { return this->policyId_ != nullptr;};
      void deletePolicyId() { this->policyId_ = nullptr;};
      inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
      inline Policies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


      // runtimePolicies Field Functions 
      bool hasRuntimePolicies() const { return this->runtimePolicies_ != nullptr;};
      void deleteRuntimePolicies() { this->runtimePolicies_ = nullptr;};
      inline const vector<Policies::RuntimePolicies> & getRuntimePolicies() const { DARABONBA_PTR_GET_CONST(runtimePolicies_, vector<Policies::RuntimePolicies>) };
      inline vector<Policies::RuntimePolicies> getRuntimePolicies() { DARABONBA_PTR_GET(runtimePolicies_, vector<Policies::RuntimePolicies>) };
      inline Policies& setRuntimePolicies(const vector<Policies::RuntimePolicies> & runtimePolicies) { DARABONBA_PTR_SET_VALUE(runtimePolicies_, runtimePolicies) };
      inline Policies& setRuntimePolicies(vector<Policies::RuntimePolicies> && runtimePolicies) { DARABONBA_PTR_SET_RVALUE(runtimePolicies_, runtimePolicies) };


      // startTime Field Functions 
      bool hasStartTime() const { return this->startTime_ != nullptr;};
      void deleteStartTime() { this->startTime_ = nullptr;};
      inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
      inline Policies& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline Policies& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // template Field Functions 
      bool hasTemplate() const { return this->template_ != nullptr;};
      void deleteTemplate() { this->template_ = nullptr;};
      inline string getTemplate() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
      inline Policies& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


    protected:
      // The execution status of the policy. Valid values:
      // - **1**: not executed or execution completed.
      // - **0**: being executed.
      // - **-1**: execution failed.
      shared_ptr<int32_t> done_ {};
      // The time when the policy stops taking effect. The value is a timestamp. Unit: milliseconds.
      shared_ptr<int64_t> endTime_ {};
      // The policy name.
      shared_ptr<string> name_ {};
      // The number of protected objects in the policy.
      shared_ptr<int32_t> objectCount_ {};
      // The policy ID.
      shared_ptr<string> policyId_ {};
      // The runtime rules of the policy.
      shared_ptr<vector<Policies::RuntimePolicies>> runtimePolicies_ {};
      // The time when the policy starts to take effect. The value is a timestamp. Unit: milliseconds.
      shared_ptr<int64_t> startTime_ {};
      // The status of the policy. Valid values:
      // - **0**: disabled.
      // - **1**: pending activation.
      // - **2**: active.
      // - **3**: expired.
      shared_ptr<int32_t> status_ {};
      // The templatetype used by the policy. Valid values:
      // - **promotion**: Important Activity template.
      // - **bypass**: full forwarding template.
      shared_ptr<string> template_ {};
    };

    virtual bool empty() const override { return this->policies_ == nullptr
        && this->requestId_ == nullptr && this->success_ == nullptr; };
    // policies Field Functions 
    bool hasPolicies() const { return this->policies_ != nullptr;};
    void deletePolicies() { this->policies_ = nullptr;};
    inline const vector<DescribeSceneDefensePoliciesResponseBody::Policies> & getPolicies() const { DARABONBA_PTR_GET_CONST(policies_, vector<DescribeSceneDefensePoliciesResponseBody::Policies>) };
    inline vector<DescribeSceneDefensePoliciesResponseBody::Policies> getPolicies() { DARABONBA_PTR_GET(policies_, vector<DescribeSceneDefensePoliciesResponseBody::Policies>) };
    inline DescribeSceneDefensePoliciesResponseBody& setPolicies(const vector<DescribeSceneDefensePoliciesResponseBody::Policies> & policies) { DARABONBA_PTR_SET_VALUE(policies_, policies) };
    inline DescribeSceneDefensePoliciesResponseBody& setPolicies(vector<DescribeSceneDefensePoliciesResponseBody::Policies> && policies) { DARABONBA_PTR_SET_RVALUE(policies_, policies) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSceneDefensePoliciesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribeSceneDefensePoliciesResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The detailed configurations of the scenario-specific policies.
    shared_ptr<vector<DescribeSceneDefensePoliciesResponseBody::Policies>> policies_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // - **true**: The request was successful.
    // - **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
