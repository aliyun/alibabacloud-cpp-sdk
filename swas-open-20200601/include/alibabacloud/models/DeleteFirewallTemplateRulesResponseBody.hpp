// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEFIREWALLTEMPLATERULESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEFIREWALLTEMPLATERULESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SWASOPEN20200601
{
namespace Models
{
  class DeleteFirewallTemplateRulesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteFirewallTemplateRulesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteFirewallTemplateRulesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DeleteFirewallTemplateRulesResponseBody() = default ;
    DeleteFirewallTemplateRulesResponseBody(const DeleteFirewallTemplateRulesResponseBody &) = default ;
    DeleteFirewallTemplateRulesResponseBody(DeleteFirewallTemplateRulesResponseBody &&) = default ;
    DeleteFirewallTemplateRulesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteFirewallTemplateRulesResponseBody() = default ;
    DeleteFirewallTemplateRulesResponseBody& operator=(const DeleteFirewallTemplateRulesResponseBody &) = default ;
    DeleteFirewallTemplateRulesResponseBody& operator=(DeleteFirewallTemplateRulesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteFirewallTemplateRulesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SWASOPEN20200601
#endif
