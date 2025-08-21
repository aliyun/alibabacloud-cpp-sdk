// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_TONGYICHATDEBUGINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_TONGYICHATDEBUGINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/TongyiChatDebugInfoResponseBodyPipeline.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class TongyiChatDebugInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const TongyiChatDebugInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(MessageId, messageId_);
      DARABONBA_PTR_TO_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, TongyiChatDebugInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
      DARABONBA_PTR_FROM_JSON(Pipeline, pipeline_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    TongyiChatDebugInfoResponseBody() = default ;
    TongyiChatDebugInfoResponseBody(const TongyiChatDebugInfoResponseBody &) = default ;
    TongyiChatDebugInfoResponseBody(TongyiChatDebugInfoResponseBody &&) = default ;
    TongyiChatDebugInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~TongyiChatDebugInfoResponseBody() = default ;
    TongyiChatDebugInfoResponseBody& operator=(const TongyiChatDebugInfoResponseBody &) = default ;
    TongyiChatDebugInfoResponseBody& operator=(TongyiChatDebugInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->messageId_ != nullptr
        && this->pipeline_ != nullptr && this->requestId_ != nullptr; };
    // messageId Field Functions 
    bool hasMessageId() const { return this->messageId_ != nullptr;};
    void deleteMessageId() { this->messageId_ = nullptr;};
    inline string messageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
    inline TongyiChatDebugInfoResponseBody& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


    // pipeline Field Functions 
    bool hasPipeline() const { return this->pipeline_ != nullptr;};
    void deletePipeline() { this->pipeline_ = nullptr;};
    inline const vector<TongyiChatDebugInfoResponseBodyPipeline> & pipeline() const { DARABONBA_PTR_GET_CONST(pipeline_, vector<TongyiChatDebugInfoResponseBodyPipeline>) };
    inline vector<TongyiChatDebugInfoResponseBodyPipeline> pipeline() { DARABONBA_PTR_GET(pipeline_, vector<TongyiChatDebugInfoResponseBodyPipeline>) };
    inline TongyiChatDebugInfoResponseBody& setPipeline(const vector<TongyiChatDebugInfoResponseBodyPipeline> & pipeline) { DARABONBA_PTR_SET_VALUE(pipeline_, pipeline) };
    inline TongyiChatDebugInfoResponseBody& setPipeline(vector<TongyiChatDebugInfoResponseBodyPipeline> && pipeline) { DARABONBA_PTR_SET_RVALUE(pipeline_, pipeline) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline TongyiChatDebugInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<string> messageId_ = nullptr;
    std::shared_ptr<vector<TongyiChatDebugInfoResponseBodyPipeline>> pipeline_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
