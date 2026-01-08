// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEVPCFIREWALLPRECHECKRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEVPCFIREWALLPRECHECKRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class CreateVpcFirewallPrecheckResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateVpcFirewallPrecheckResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PrecheckId, precheckId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateVpcFirewallPrecheckResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PrecheckId, precheckId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateVpcFirewallPrecheckResponseBody() = default ;
    CreateVpcFirewallPrecheckResponseBody(const CreateVpcFirewallPrecheckResponseBody &) = default ;
    CreateVpcFirewallPrecheckResponseBody(CreateVpcFirewallPrecheckResponseBody &&) = default ;
    CreateVpcFirewallPrecheckResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateVpcFirewallPrecheckResponseBody() = default ;
    CreateVpcFirewallPrecheckResponseBody& operator=(const CreateVpcFirewallPrecheckResponseBody &) = default ;
    CreateVpcFirewallPrecheckResponseBody& operator=(CreateVpcFirewallPrecheckResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->precheckId_ == nullptr
        && this->requestId_ == nullptr; };
    // precheckId Field Functions 
    bool hasPrecheckId() const { return this->precheckId_ != nullptr;};
    void deletePrecheckId() { this->precheckId_ = nullptr;};
    inline string getPrecheckId() const { DARABONBA_PTR_GET_DEFAULT(precheckId_, "") };
    inline CreateVpcFirewallPrecheckResponseBody& setPrecheckId(string precheckId) { DARABONBA_PTR_SET_VALUE(precheckId_, precheckId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateVpcFirewallPrecheckResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> precheckId_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
