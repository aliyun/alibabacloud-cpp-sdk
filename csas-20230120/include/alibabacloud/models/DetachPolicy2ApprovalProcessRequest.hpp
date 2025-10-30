// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHPOLICY2APPROVALPROCESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHPOLICY2APPROVALPROCESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class DetachPolicy2ApprovalProcessRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachPolicy2ApprovalProcessRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(ProcessId, processId_);
    };
    friend void from_json(const Darabonba::Json& j, DetachPolicy2ApprovalProcessRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(ProcessId, processId_);
    };
    DetachPolicy2ApprovalProcessRequest() = default ;
    DetachPolicy2ApprovalProcessRequest(const DetachPolicy2ApprovalProcessRequest &) = default ;
    DetachPolicy2ApprovalProcessRequest(DetachPolicy2ApprovalProcessRequest &&) = default ;
    DetachPolicy2ApprovalProcessRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachPolicy2ApprovalProcessRequest() = default ;
    DetachPolicy2ApprovalProcessRequest& operator=(const DetachPolicy2ApprovalProcessRequest &) = default ;
    DetachPolicy2ApprovalProcessRequest& operator=(DetachPolicy2ApprovalProcessRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->policyId_ == nullptr
        && return this->policyType_ == nullptr && return this->processId_ == nullptr; };
    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DetachPolicy2ApprovalProcessRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string policyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DetachPolicy2ApprovalProcessRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // processId Field Functions 
    bool hasProcessId() const { return this->processId_ != nullptr;};
    void deleteProcessId() { this->processId_ = nullptr;};
    inline string processId() const { DARABONBA_PTR_GET_DEFAULT(processId_, "") };
    inline DetachPolicy2ApprovalProcessRequest& setProcessId(string processId) { DARABONBA_PTR_SET_VALUE(processId_, processId) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> policyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> policyType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> processId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
