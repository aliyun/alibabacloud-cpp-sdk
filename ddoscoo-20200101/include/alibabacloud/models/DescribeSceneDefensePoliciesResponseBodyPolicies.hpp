// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEPOLICIESRESPONSEBODYPOLICIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESCENEDEFENSEPOLICIESRESPONSEBODYPOLICIES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeSceneDefensePoliciesResponseBodyPolicies : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSceneDefensePoliciesResponseBodyPolicies& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeSceneDefensePoliciesResponseBodyPolicies& obj) { 
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
    DescribeSceneDefensePoliciesResponseBodyPolicies() = default ;
    DescribeSceneDefensePoliciesResponseBodyPolicies(const DescribeSceneDefensePoliciesResponseBodyPolicies &) = default ;
    DescribeSceneDefensePoliciesResponseBodyPolicies(DescribeSceneDefensePoliciesResponseBodyPolicies &&) = default ;
    DescribeSceneDefensePoliciesResponseBodyPolicies(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSceneDefensePoliciesResponseBodyPolicies() = default ;
    DescribeSceneDefensePoliciesResponseBodyPolicies& operator=(const DescribeSceneDefensePoliciesResponseBodyPolicies &) = default ;
    DescribeSceneDefensePoliciesResponseBodyPolicies& operator=(DescribeSceneDefensePoliciesResponseBodyPolicies &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->done_ == nullptr
        && return this->endTime_ == nullptr && return this->name_ == nullptr && return this->objectCount_ == nullptr && return this->policyId_ == nullptr && return this->runtimePolicies_ == nullptr
        && return this->startTime_ == nullptr && return this->status_ == nullptr && return this->template_ == nullptr; };
    // done Field Functions 
    bool hasDone() const { return this->done_ != nullptr;};
    void deleteDone() { this->done_ = nullptr;};
    inline int32_t done() const { DARABONBA_PTR_GET_DEFAULT(done_, 0) };
    inline DescribeSceneDefensePoliciesResponseBodyPolicies& setDone(int32_t done) { DARABONBA_PTR_SET_VALUE(done_, done) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline DescribeSceneDefensePoliciesResponseBodyPolicies& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSceneDefensePoliciesResponseBodyPolicies& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // objectCount Field Functions 
    bool hasObjectCount() const { return this->objectCount_ != nullptr;};
    void deleteObjectCount() { this->objectCount_ = nullptr;};
    inline int32_t objectCount() const { DARABONBA_PTR_GET_DEFAULT(objectCount_, 0) };
    inline DescribeSceneDefensePoliciesResponseBodyPolicies& setObjectCount(int32_t objectCount) { DARABONBA_PTR_SET_VALUE(objectCount_, objectCount) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribeSceneDefensePoliciesResponseBodyPolicies& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // runtimePolicies Field Functions 
    bool hasRuntimePolicies() const { return this->runtimePolicies_ != nullptr;};
    void deleteRuntimePolicies() { this->runtimePolicies_ = nullptr;};
    inline const vector<Models::DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies> & runtimePolicies() const { DARABONBA_PTR_GET_CONST(runtimePolicies_, vector<Models::DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies>) };
    inline vector<Models::DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies> runtimePolicies() { DARABONBA_PTR_GET(runtimePolicies_, vector<Models::DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies>) };
    inline DescribeSceneDefensePoliciesResponseBodyPolicies& setRuntimePolicies(const vector<Models::DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies> & runtimePolicies) { DARABONBA_PTR_SET_VALUE(runtimePolicies_, runtimePolicies) };
    inline DescribeSceneDefensePoliciesResponseBodyPolicies& setRuntimePolicies(vector<Models::DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies> && runtimePolicies) { DARABONBA_PTR_SET_RVALUE(runtimePolicies_, runtimePolicies) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline DescribeSceneDefensePoliciesResponseBodyPolicies& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline DescribeSceneDefensePoliciesResponseBodyPolicies& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline string _template() const { DARABONBA_PTR_GET_DEFAULT(template_, "") };
    inline DescribeSceneDefensePoliciesResponseBodyPolicies& setTemplate(string _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };


  protected:
    // The execution status of the policy. Valid values:
    // 
    // *   **1**: not executed or execution completed
    // *   **0**: being executed
    // *   **-1**: execution failed
    std::shared_ptr<int32_t> done_ = nullptr;
    // The time at which the policy expires. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The name of the policy.
    std::shared_ptr<string> name_ = nullptr;
    // The number of objects that are protected by the policy.
    std::shared_ptr<int32_t> objectCount_ = nullptr;
    // The ID of the policy.
    std::shared_ptr<string> policyId_ = nullptr;
    // The running rules of the policy.
    std::shared_ptr<vector<Models::DescribeSceneDefensePoliciesResponseBodyPoliciesRuntimePolicies>> runtimePolicies_ = nullptr;
    // The time at which the policy takes effect. The value is a UNIX timestamp. Unit: milliseconds.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the policy. Valid values:
    // 
    // *   **0**: disabled
    // *   **1**: pending enabling
    // *   **2**: enabled
    // *   **3**: expired
    std::shared_ptr<int32_t> status_ = nullptr;
    // The type of the template that is used to create the policy. Valid values:
    // 
    // *   **promotion**: the Important Activity template
    // *   **bypass**: the Forward All template
    std::shared_ptr<string> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
