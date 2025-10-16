// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETENATFIREWALLCONTROLPOLICYBATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETENATFIREWALLCONTROLPOLICYBATCHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DeleteNatFirewallControlPolicyBatchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteNatFirewallControlPolicyBatchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteNatFirewallControlPolicyBatchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteNatFirewallControlPolicyBatchResponseBody() = default ;
    DeleteNatFirewallControlPolicyBatchResponseBody(const DeleteNatFirewallControlPolicyBatchResponseBody &) = default ;
    DeleteNatFirewallControlPolicyBatchResponseBody(DeleteNatFirewallControlPolicyBatchResponseBody &&) = default ;
    DeleteNatFirewallControlPolicyBatchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteNatFirewallControlPolicyBatchResponseBody() = default ;
    DeleteNatFirewallControlPolicyBatchResponseBody& operator=(const DeleteNatFirewallControlPolicyBatchResponseBody &) = default ;
    DeleteNatFirewallControlPolicyBatchResponseBody& operator=(DeleteNatFirewallControlPolicyBatchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteNatFirewallControlPolicyBatchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
