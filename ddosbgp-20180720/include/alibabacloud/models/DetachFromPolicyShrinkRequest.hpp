// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHFROMPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DETACHFROMPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class DetachFromPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachFromPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpPortProtocolList, ipPortProtocolListShrink_);
      DARABONBA_PTR_TO_JSON(PolicyType, policyType_);
      DARABONBA_PTR_TO_JSON(PortVersion, portVersion_);
    };
    friend void from_json(const Darabonba::Json& j, DetachFromPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpPortProtocolList, ipPortProtocolListShrink_);
      DARABONBA_PTR_FROM_JSON(PolicyType, policyType_);
      DARABONBA_PTR_FROM_JSON(PortVersion, portVersion_);
    };
    DetachFromPolicyShrinkRequest() = default ;
    DetachFromPolicyShrinkRequest(const DetachFromPolicyShrinkRequest &) = default ;
    DetachFromPolicyShrinkRequest(DetachFromPolicyShrinkRequest &&) = default ;
    DetachFromPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachFromPolicyShrinkRequest() = default ;
    DetachFromPolicyShrinkRequest& operator=(const DetachFromPolicyShrinkRequest &) = default ;
    DetachFromPolicyShrinkRequest& operator=(DetachFromPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipPortProtocolListShrink_ == nullptr
        && this->policyType_ == nullptr && this->portVersion_ == nullptr; };
    // ipPortProtocolListShrink Field Functions 
    bool hasIpPortProtocolListShrink() const { return this->ipPortProtocolListShrink_ != nullptr;};
    void deleteIpPortProtocolListShrink() { this->ipPortProtocolListShrink_ = nullptr;};
    inline string getIpPortProtocolListShrink() const { DARABONBA_PTR_GET_DEFAULT(ipPortProtocolListShrink_, "") };
    inline DetachFromPolicyShrinkRequest& setIpPortProtocolListShrink(string ipPortProtocolListShrink) { DARABONBA_PTR_SET_VALUE(ipPortProtocolListShrink_, ipPortProtocolListShrink) };


    // policyType Field Functions 
    bool hasPolicyType() const { return this->policyType_ != nullptr;};
    void deletePolicyType() { this->policyType_ = nullptr;};
    inline string getPolicyType() const { DARABONBA_PTR_GET_DEFAULT(policyType_, "") };
    inline DetachFromPolicyShrinkRequest& setPolicyType(string policyType) { DARABONBA_PTR_SET_VALUE(policyType_, policyType) };


    // portVersion Field Functions 
    bool hasPortVersion() const { return this->portVersion_ != nullptr;};
    void deletePortVersion() { this->portVersion_ = nullptr;};
    inline string getPortVersion() const { DARABONBA_PTR_GET_DEFAULT(portVersion_, "") };
    inline DetachFromPolicyShrinkRequest& setPortVersion(string portVersion) { DARABONBA_PTR_SET_VALUE(portVersion_, portVersion) };


  protected:
    // The protected objects.
    // 
    // This parameter is required.
    shared_ptr<string> ipPortProtocolListShrink_ {};
    // The type of the policy. Valid values:
    // 
    // *   **default**: the default mitigation policies.
    // *   **l3**: IP-specific mitigation policies.
    // *   **l4**: port-specific mitigation policies.
    // 
    // This parameter is required.
    shared_ptr<string> policyType_ {};
    shared_ptr<string> portVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
