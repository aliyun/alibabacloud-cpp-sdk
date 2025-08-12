// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUESTWEBHOOKPARAMETERS_HPP_
#define ALIBABACLOUD_MODELS_PUTEVENTRULETARGETSREQUESTWEBHOOKPARAMETERS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class PutEventRuleTargetsRequestWebhookParameters : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PutEventRuleTargetsRequestWebhookParameters& obj) { 
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Method, method_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, PutEventRuleTargetsRequestWebhookParameters& obj) { 
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Method, method_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    PutEventRuleTargetsRequestWebhookParameters() = default ;
    PutEventRuleTargetsRequestWebhookParameters(const PutEventRuleTargetsRequestWebhookParameters &) = default ;
    PutEventRuleTargetsRequestWebhookParameters(PutEventRuleTargetsRequestWebhookParameters &&) = default ;
    PutEventRuleTargetsRequestWebhookParameters(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PutEventRuleTargetsRequestWebhookParameters() = default ;
    PutEventRuleTargetsRequestWebhookParameters& operator=(const PutEventRuleTargetsRequestWebhookParameters &) = default ;
    PutEventRuleTargetsRequestWebhookParameters& operator=(PutEventRuleTargetsRequestWebhookParameters &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->id_ != nullptr
        && this->method_ != nullptr && this->protocol_ != nullptr && this->url_ != nullptr; };
    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline PutEventRuleTargetsRequestWebhookParameters& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // method Field Functions 
    bool hasMethod() const { return this->method_ != nullptr;};
    void deleteMethod() { this->method_ = nullptr;};
    inline string method() const { DARABONBA_PTR_GET_DEFAULT(method_, "") };
    inline PutEventRuleTargetsRequestWebhookParameters& setMethod(string method) { DARABONBA_PTR_SET_VALUE(method_, method) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline PutEventRuleTargetsRequestWebhookParameters& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline PutEventRuleTargetsRequestWebhookParameters& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    // The ID of the recipient that receives alert notifications. Valid values of N: 1 to 5.
    std::shared_ptr<string> id_ = nullptr;
    // The HTTP request method. Valid values of N: 1 to 5.
    // 
    // Valid values: GET and POST.
    std::shared_ptr<string> method_ = nullptr;
    // The name of the protocol. Valid values of N: 1 to 5. Valid values:
    // 
    // *   http
    // *   telnet
    // *   ping
    std::shared_ptr<string> protocol_ = nullptr;
    // The callback URL. Valid values of N: 1 to 5.
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
