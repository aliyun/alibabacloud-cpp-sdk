// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHTOPOLICYSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHTOPOLICYSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddosbgp20180720
{
namespace Models
{
  class AttachToPolicyShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachToPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpPortProtocolList, ipPortProtocolListShrink_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(PortVersion, portVersion_);
    };
    friend void from_json(const Darabonba::Json& j, AttachToPolicyShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpPortProtocolList, ipPortProtocolListShrink_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(PortVersion, portVersion_);
    };
    AttachToPolicyShrinkRequest() = default ;
    AttachToPolicyShrinkRequest(const AttachToPolicyShrinkRequest &) = default ;
    AttachToPolicyShrinkRequest(AttachToPolicyShrinkRequest &&) = default ;
    AttachToPolicyShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachToPolicyShrinkRequest() = default ;
    AttachToPolicyShrinkRequest& operator=(const AttachToPolicyShrinkRequest &) = default ;
    AttachToPolicyShrinkRequest& operator=(AttachToPolicyShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipPortProtocolListShrink_ == nullptr
        && this->policyId_ == nullptr && this->portVersion_ == nullptr; };
    // ipPortProtocolListShrink Field Functions 
    bool hasIpPortProtocolListShrink() const { return this->ipPortProtocolListShrink_ != nullptr;};
    void deleteIpPortProtocolListShrink() { this->ipPortProtocolListShrink_ = nullptr;};
    inline string getIpPortProtocolListShrink() const { DARABONBA_PTR_GET_DEFAULT(ipPortProtocolListShrink_, "") };
    inline AttachToPolicyShrinkRequest& setIpPortProtocolListShrink(string ipPortProtocolListShrink) { DARABONBA_PTR_SET_VALUE(ipPortProtocolListShrink_, ipPortProtocolListShrink) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline AttachToPolicyShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // portVersion Field Functions 
    bool hasPortVersion() const { return this->portVersion_ != nullptr;};
    void deletePortVersion() { this->portVersion_ = nullptr;};
    inline string getPortVersion() const { DARABONBA_PTR_GET_DEFAULT(portVersion_, "") };
    inline AttachToPolicyShrinkRequest& setPortVersion(string portVersion) { DARABONBA_PTR_SET_VALUE(portVersion_, portVersion) };


  protected:
    // The protected objects.
    // 
    // This parameter is required.
    shared_ptr<string> ipPortProtocolListShrink_ {};
    // The policy ID.
    // 
    // This parameter is required.
    shared_ptr<string> policyId_ {};
    shared_ptr<string> portVersion_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddosbgp20180720
#endif
