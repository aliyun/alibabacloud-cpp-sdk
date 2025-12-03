// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONSOLEAPIPROXYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONSOLEAPIPROXYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ConsoleBody.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class ConsoleApiProxyRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConsoleApiProxyRequest& obj) { 
      DARABONBA_PTR_TO_JSON(body, body_);
    };
    friend void from_json(const Darabonba::Json& j, ConsoleApiProxyRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(body, body_);
    };
    ConsoleApiProxyRequest() = default ;
    ConsoleApiProxyRequest(const ConsoleApiProxyRequest &) = default ;
    ConsoleApiProxyRequest(ConsoleApiProxyRequest &&) = default ;
    ConsoleApiProxyRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConsoleApiProxyRequest() = default ;
    ConsoleApiProxyRequest& operator=(const ConsoleApiProxyRequest &) = default ;
    ConsoleApiProxyRequest& operator=(ConsoleApiProxyRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->body_ == nullptr; };
    // body Field Functions 
    bool hasBody() const { return this->body_ != nullptr;};
    void deleteBody() { this->body_ = nullptr;};
    inline const ConsoleBody & body() const { DARABONBA_PTR_GET_CONST(body_, ConsoleBody) };
    inline ConsoleBody body() { DARABONBA_PTR_GET(body_, ConsoleBody) };
    inline ConsoleApiProxyRequest& setBody(const ConsoleBody & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
    inline ConsoleApiProxyRequest& setBody(ConsoleBody && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


  protected:
    std::shared_ptr<ConsoleBody> body_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
