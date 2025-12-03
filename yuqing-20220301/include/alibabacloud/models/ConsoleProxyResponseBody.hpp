// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONSOLEPROXYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CONSOLEPROXYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Yuqing20220301
{
namespace Models
{
  class ConsoleProxyResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConsoleProxyResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resultJson, resultJson_);
    };
    friend void from_json(const Darabonba::Json& j, ConsoleProxyResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resultJson, resultJson_);
    };
    ConsoleProxyResponseBody() = default ;
    ConsoleProxyResponseBody(const ConsoleProxyResponseBody &) = default ;
    ConsoleProxyResponseBody(ConsoleProxyResponseBody &&) = default ;
    ConsoleProxyResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConsoleProxyResponseBody() = default ;
    ConsoleProxyResponseBody& operator=(const ConsoleProxyResponseBody &) = default ;
    ConsoleProxyResponseBody& operator=(ConsoleProxyResponseBody &&) = default ;
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
    inline ConsoleProxyResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultJson Field Functions 
    bool hasResultJson() const { return this->resultJson_ != nullptr;};
    void deleteResultJson() { this->resultJson_ = nullptr;};
    inline string resultJson() const { DARABONBA_PTR_GET_DEFAULT(resultJson_, "") };
    inline ConsoleProxyResponseBody& setResultJson(string resultJson) { DARABONBA_PTR_SET_VALUE(resultJson_, resultJson) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> resultJson_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Yuqing20220301
#endif
