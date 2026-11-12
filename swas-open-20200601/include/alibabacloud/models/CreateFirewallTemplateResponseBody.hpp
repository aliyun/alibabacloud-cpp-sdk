// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEFIREWALLTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATEFIREWALLTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class CreateFirewallTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateFirewallTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(FirewallTemplateId, firewallTemplateId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateFirewallTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(FirewallTemplateId, firewallTemplateId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CreateFirewallTemplateResponseBody() = default ;
    CreateFirewallTemplateResponseBody(const CreateFirewallTemplateResponseBody &) = default ;
    CreateFirewallTemplateResponseBody(CreateFirewallTemplateResponseBody &&) = default ;
    CreateFirewallTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateFirewallTemplateResponseBody() = default ;
    CreateFirewallTemplateResponseBody& operator=(const CreateFirewallTemplateResponseBody &) = default ;
    CreateFirewallTemplateResponseBody& operator=(CreateFirewallTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->firewallTemplateId_ == nullptr
        && this->requestId_ == nullptr; };
    // firewallTemplateId Field Functions 
    bool hasFirewallTemplateId() const { return this->firewallTemplateId_ != nullptr;};
    void deleteFirewallTemplateId() { this->firewallTemplateId_ = nullptr;};
    inline string getFirewallTemplateId() const { DARABONBA_PTR_GET_DEFAULT(firewallTemplateId_, "") };
    inline CreateFirewallTemplateResponseBody& setFirewallTemplateId(string firewallTemplateId) { DARABONBA_PTR_SET_VALUE(firewallTemplateId_, firewallTemplateId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateFirewallTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The firewall template ID.
    shared_ptr<string> firewallTemplateId_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
