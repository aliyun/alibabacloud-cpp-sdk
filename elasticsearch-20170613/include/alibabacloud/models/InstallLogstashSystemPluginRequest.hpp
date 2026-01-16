// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INSTALLLOGSTASHSYSTEMPLUGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_INSTALLLOGSTASHSYSTEMPLUGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class InstallLogstashSystemPluginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InstallLogstashSystemPluginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
      DARABONBA_PTR_TO_JSON(clientToken, clientToken_);
    };
    friend void from_json(const Darabonba::Json& j, InstallLogstashSystemPluginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
      DARABONBA_PTR_FROM_JSON(clientToken, clientToken_);
    };
    InstallLogstashSystemPluginRequest() = default ;
    InstallLogstashSystemPluginRequest(const InstallLogstashSystemPluginRequest &) = default ;
    InstallLogstashSystemPluginRequest(InstallLogstashSystemPluginRequest &&) = default ;
    InstallLogstashSystemPluginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InstallLogstashSystemPluginRequest() = default ;
    InstallLogstashSystemPluginRequest& operator=(const InstallLogstashSystemPluginRequest &) = default ;
    InstallLogstashSystemPluginRequest& operator=(InstallLogstashSystemPluginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr
        && this->clientToken_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline string getBody() const { DARABONBA_PTR_GET_DEFAULT(body_, "") };
    inline InstallLogstashSystemPluginRequest& setBody(string body) { DARABONBA_PTR_SET_VALUE(body_, body) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline InstallLogstashSystemPluginRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


  protected:
    shared_ptr<string> body_ {};
    shared_ptr<string> clientToken_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
