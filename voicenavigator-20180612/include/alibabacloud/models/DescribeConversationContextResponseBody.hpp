// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECONVERSATIONCONTEXTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECONVERSATIONCONTEXTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace VoiceNavigator20180612
{
namespace Models
{
  class DescribeConversationContextResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeConversationContextResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationContext, conversationContext_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeConversationContextResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationContext, conversationContext_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeConversationContextResponseBody() = default ;
    DescribeConversationContextResponseBody(const DescribeConversationContextResponseBody &) = default ;
    DescribeConversationContextResponseBody(DescribeConversationContextResponseBody &&) = default ;
    DescribeConversationContextResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeConversationContextResponseBody() = default ;
    DescribeConversationContextResponseBody& operator=(const DescribeConversationContextResponseBody &) = default ;
    DescribeConversationContextResponseBody& operator=(DescribeConversationContextResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationContext_ == nullptr
        && this->requestId_ == nullptr; };
    // conversationContext Field Functions 
    bool hasConversationContext() const { return this->conversationContext_ != nullptr;};
    void deleteConversationContext() { this->conversationContext_ = nullptr;};
    inline string getConversationContext() const { DARABONBA_PTR_GET_DEFAULT(conversationContext_, "") };
    inline DescribeConversationContextResponseBody& setConversationContext(string conversationContext) { DARABONBA_PTR_SET_VALUE(conversationContext_, conversationContext) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeConversationContextResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> conversationContext_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace VoiceNavigator20180612
#endif
