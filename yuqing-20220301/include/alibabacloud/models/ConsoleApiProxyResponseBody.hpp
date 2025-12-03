// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONSOLEAPIPROXYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONSOLEAPIPROXYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class ConsoleApiProxyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConsoleApiProxyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultJson, resultJson_);
    };
    friend void from_json(const Darabonba::Json& j, ConsoleApiProxyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultJson, resultJson_);
    };
    ConsoleApiProxyResponseBody() = default ;
    ConsoleApiProxyResponseBody(const ConsoleApiProxyResponseBody &) = default ;
    ConsoleApiProxyResponseBody(ConsoleApiProxyResponseBody &&) = default ;
    ConsoleApiProxyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConsoleApiProxyResponseBody() = default ;
    ConsoleApiProxyResponseBody& operator=(const ConsoleApiProxyResponseBody &) = default ;
    ConsoleApiProxyResponseBody& operator=(ConsoleApiProxyResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->resultJson_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ConsoleApiProxyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultJson Field Functions 
    bool hasResultJson() const { return this->resultJson_ != nullptr;};
    void deleteResultJson() { this->resultJson_ = nullptr;};
    inline string resultJson() const { DARABONBA_PTR_GET_DEFAULT(resultJson_, "") };
    inline ConsoleApiProxyResponseBody& setResultJson(string resultJson) { DARABONBA_PTR_SET_VALUE(resultJson_, resultJson) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
