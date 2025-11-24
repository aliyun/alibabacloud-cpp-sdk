// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHADDITIONALSTATUSRESPONSEBODYCLUSTERSTATUSCANARYPILOTLOADBALANCERSTATUS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESERVICEMESHADDITIONALSTATUSRESPONSEBODYCLUSTERSTATUSCANARYPILOTLOADBALANCERSTATUS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicemesh20200111
{
namespace Models
{
  class DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus& obj) { 
      DARABONBA_PTR_TO_JSON(Locked, locked_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(Reused, reused_);
      DARABONBA_PTR_TO_JSON(SLBBackEndServerNumStatus, SLBBackEndServerNumStatus_);
      DARABONBA_PTR_TO_JSON(SLBExistStatus, SLBExistStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus& obj) { 
      DARABONBA_PTR_FROM_JSON(Locked, locked_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(Reused, reused_);
      DARABONBA_PTR_FROM_JSON(SLBBackEndServerNumStatus, SLBBackEndServerNumStatus_);
      DARABONBA_PTR_FROM_JSON(SLBExistStatus, SLBExistStatus_);
    };
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus() = default ;
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus(const DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus &) = default ;
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus(DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus &&) = default ;
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus() = default ;
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus& operator=(const DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus &) = default ;
    DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus& operator=(DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->locked_ == nullptr
        && return this->payType_ == nullptr && return this->reused_ == nullptr && return this->SLBBackEndServerNumStatus_ == nullptr && return this->SLBExistStatus_ == nullptr; };
    // locked Field Functions 
    bool hasLocked() const { return this->locked_ != nullptr;};
    void deleteLocked() { this->locked_ = nullptr;};
    inline bool locked() const { DARABONBA_PTR_GET_DEFAULT(locked_, false) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus& setLocked(bool locked) { DARABONBA_PTR_SET_VALUE(locked_, locked) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // reused Field Functions 
    bool hasReused() const { return this->reused_ != nullptr;};
    void deleteReused() { this->reused_ = nullptr;};
    inline bool reused() const { DARABONBA_PTR_GET_DEFAULT(reused_, false) };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus& setReused(bool reused) { DARABONBA_PTR_SET_VALUE(reused_, reused) };


    // SLBBackEndServerNumStatus Field Functions 
    bool hasSLBBackEndServerNumStatus() const { return this->SLBBackEndServerNumStatus_ != nullptr;};
    void deleteSLBBackEndServerNumStatus() { this->SLBBackEndServerNumStatus_ = nullptr;};
    inline string SLBBackEndServerNumStatus() const { DARABONBA_PTR_GET_DEFAULT(SLBBackEndServerNumStatus_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus& setSLBBackEndServerNumStatus(string SLBBackEndServerNumStatus) { DARABONBA_PTR_SET_VALUE(SLBBackEndServerNumStatus_, SLBBackEndServerNumStatus) };


    // SLBExistStatus Field Functions 
    bool hasSLBExistStatus() const { return this->SLBExistStatus_ != nullptr;};
    void deleteSLBExistStatus() { this->SLBExistStatus_ = nullptr;};
    inline string SLBExistStatus() const { DARABONBA_PTR_GET_DEFAULT(SLBExistStatus_, "") };
    inline DescribeServiceMeshAdditionalStatusResponseBodyClusterStatusCanaryPilotLoadBalancerStatus& setSLBExistStatus(string SLBExistStatus) { DARABONBA_PTR_SET_VALUE(SLBExistStatus_, SLBExistStatus) };


  protected:
    // Indicates whether the CLB instance is locked due to overdue payments. Valid values:
    // 
    // *   `true`
    // *   `false`
    std::shared_ptr<bool> locked_ = nullptr;
    // The billing method of the CLB instance. Valid values:
    // 
    // *   `PrePay`: subscription
    // *   `PayOnDemand` (default): pay-as-you-go
    std::shared_ptr<string> payType_ = nullptr;
    // Indicates whether the CLB instance is reused. Valid values:
    // 
    // *   `true`: The CLB instance is reused. Non-ASM listener configuration is detected in the listener configurations of the CLB instance.
    // *   `false`: The CLB instance is not reused.
    std::shared_ptr<bool> reused_ = nullptr;
    // The check result of the number of backend servers of the CLB instance created for exposing Istio Pilot. Valid values:
    // 
    // *   `num_exact`: A proper number of backend servers are created.
    // *   `too_much`: An excessive number of backend servers are created.
    // *   `too_little`: The number of backend servers falls short.
    std::shared_ptr<string> SLBBackEndServerNumStatus_ = nullptr;
    // The check result of the CLB instance. Valid values:
    // 
    // *   `exist`: The CLB instance exists.
    // *   `not_exist`: The CLB instance does not exist.
    // *   `time_out`: The check times out.
    // *   `failed`: The CLB instance has expired.
    std::shared_ptr<string> SLBExistStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicemesh20200111
#endif
