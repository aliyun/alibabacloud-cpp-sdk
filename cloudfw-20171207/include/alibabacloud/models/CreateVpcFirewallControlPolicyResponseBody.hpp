// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCFIREWALLCONTROLPOLICYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCFIREWALLCONTROLPOLICYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateVpcFirewallControlPolicyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcFirewallControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcFirewallControlPolicyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AclUuid, aclUuid_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateVpcFirewallControlPolicyResponseBody() = default ;
    CreateVpcFirewallControlPolicyResponseBody(const CreateVpcFirewallControlPolicyResponseBody &) = default ;
    CreateVpcFirewallControlPolicyResponseBody(CreateVpcFirewallControlPolicyResponseBody &&) = default ;
    CreateVpcFirewallControlPolicyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcFirewallControlPolicyResponseBody() = default ;
    CreateVpcFirewallControlPolicyResponseBody& operator=(const CreateVpcFirewallControlPolicyResponseBody &) = default ;
    CreateVpcFirewallControlPolicyResponseBody& operator=(CreateVpcFirewallControlPolicyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aclUuid_ == nullptr
        && this->requestId_ == nullptr; };
    // aclUuid Field Functions 
    bool hasAclUuid() const { return this->aclUuid_ != nullptr;};
    void deleteAclUuid() { this->aclUuid_ = nullptr;};
    inline string getAclUuid() const { DARABONBA_PTR_GET_DEFAULT(aclUuid_, "") };
    inline CreateVpcFirewallControlPolicyResponseBody& setAclUuid(string aclUuid) { DARABONBA_PTR_SET_VALUE(aclUuid_, aclUuid) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpcFirewallControlPolicyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the access control policy.
    shared_ptr<string> aclUuid_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
