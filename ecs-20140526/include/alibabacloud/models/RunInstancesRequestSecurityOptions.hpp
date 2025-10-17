// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTSECURITYOPTIONS_HPP_
#define ALIBABACLOUD_MODELS_RUNINSTANCESREQUESTSECURITYOPTIONS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecs20140526
{
namespace Models
{
  class RunInstancesRequestSecurityOptions : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunInstancesRequestSecurityOptions& obj) { 
      DARABONBA_PTR_TO_JSON(ConfidentialComputingMode, confidentialComputingMode_);
      DARABONBA_PTR_TO_JSON(TrustedSystemMode, trustedSystemMode_);
    };
    friend void from_json(const Darabonba::Json& j, RunInstancesRequestSecurityOptions& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfidentialComputingMode, confidentialComputingMode_);
      DARABONBA_PTR_FROM_JSON(TrustedSystemMode, trustedSystemMode_);
    };
    RunInstancesRequestSecurityOptions() = default ;
    RunInstancesRequestSecurityOptions(const RunInstancesRequestSecurityOptions &) = default ;
    RunInstancesRequestSecurityOptions(RunInstancesRequestSecurityOptions &&) = default ;
    RunInstancesRequestSecurityOptions(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunInstancesRequestSecurityOptions() = default ;
    RunInstancesRequestSecurityOptions& operator=(const RunInstancesRequestSecurityOptions &) = default ;
    RunInstancesRequestSecurityOptions& operator=(RunInstancesRequestSecurityOptions &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->confidentialComputingMode_ == nullptr
        && return this->trustedSystemMode_ == nullptr; };
    // confidentialComputingMode Field Functions 
    bool hasConfidentialComputingMode() const { return this->confidentialComputingMode_ != nullptr;};
    void deleteConfidentialComputingMode() { this->confidentialComputingMode_ = nullptr;};
    inline string confidentialComputingMode() const { DARABONBA_PTR_GET_DEFAULT(confidentialComputingMode_, "") };
    inline RunInstancesRequestSecurityOptions& setConfidentialComputingMode(string confidentialComputingMode) { DARABONBA_PTR_SET_VALUE(confidentialComputingMode_, confidentialComputingMode) };


    // trustedSystemMode Field Functions 
    bool hasTrustedSystemMode() const { return this->trustedSystemMode_ != nullptr;};
    void deleteTrustedSystemMode() { this->trustedSystemMode_ = nullptr;};
    inline string trustedSystemMode() const { DARABONBA_PTR_GET_DEFAULT(trustedSystemMode_, "") };
    inline RunInstancesRequestSecurityOptions& setTrustedSystemMode(string trustedSystemMode) { DARABONBA_PTR_SET_VALUE(trustedSystemMode_, trustedSystemMode) };


  protected:
    // The confidential computing mode. Set the value to Enclave.
    // 
    // A value of Enclave indicates that an enclave-based confidential computing environment is built on the instance. When you call the `RunInstances` operation, you can set this parameter only for c7, g7, or r7 instances to use enclave-based confidential computing. Take note of the following items:
    // 
    // *   The confidential computing feature is in invitational preview.
    // *   When you use the ECS API to create instances that support enclave-based confidential computing, you can call only the `RunInstances` operation. The `CreateInstance` operation does not support the `SecurityOptions.ConfidentialComputingMode` parameter.
    // *   Enclave-based confidential computing is implemented based on Alibaba Cloud Trusted System (vTPM). When you build a confidential computing environment on an instance by using Enclave, Alibaba Cloud Trusted System is enabled for the instance. If you set `SecurityOptions.ConfidentialComputingMode` to Enclave when you call this operation, the created instances use enclave-based confidential computing and Alibaba Cloud Trusted System regardless of whether `SecurityOptions.TrustedSystemMode` is set to vTPM.
    // 
    // For more information about confidential computing, see [Build a confidential computing environment by using Enclave](https://help.aliyun.com/document_detail/203433.html).
    std::shared_ptr<string> confidentialComputingMode_ = nullptr;
    // The trusted system mode. Set the value to vTPM.
    // 
    // The trusted system mode supports the following instance families:
    // 
    // *   g7, c7, and r7
    // *   Security-enhanced instance families: g7t, c7t, and r7t
    // 
    // When you create instances of the preceding instance families, you must set this parameter. Take note of the following items:
    // 
    // *   To use the Alibaba Cloud trusted system, set this parameter to vTPM. Then, the Alibaba Cloud trusted system performs trust verifications when the instances start.
    // *   If you do not want to use the Alibaba Cloud trusted system, leave this parameter empty. Note that if your created instances use an enclave-based confidential computing environment (with `SecurityOptions.ConfidentialComputingMode` set to Enclave), the Alibaba Cloud trusted system is enabled for the instances.
    // *   When you use the ECS API to create instances that use the trusted system, you can call only the `RunInstances` operation. The `CreateInstance` operation does not support the `SecurityOptions.TrustedSystemMode` parameter.
    // 
    // > If you have configured an instance as a trusted one when you created the instance, you can use only an image that support the trusted system to replace the system disk of the instance.
    // 
    // For more information about the trusted system, see [Overview](https://help.aliyun.com/document_detail/201394.html).
    std::shared_ptr<string> trustedSystemMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecs20140526
#endif
