// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDAIAGENTTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SENDAIAGENTTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SendAIAgentTextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendAIAgentTextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, SendAIAgentTextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    SendAIAgentTextResponseBody() = default ;
    SendAIAgentTextResponseBody(const SendAIAgentTextResponseBody &) = default ;
    SendAIAgentTextResponseBody(SendAIAgentTextResponseBody &&) = default ;
    SendAIAgentTextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendAIAgentTextResponseBody() = default ;
    SendAIAgentTextResponseBody& operator=(const SendAIAgentTextResponseBody &) = default ;
    SendAIAgentTextResponseBody& operator=(SendAIAgentTextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SendAIAgentTextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
