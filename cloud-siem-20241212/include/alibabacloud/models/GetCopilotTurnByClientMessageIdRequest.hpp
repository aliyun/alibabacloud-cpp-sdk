// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOPILOTTURNBYCLIENTMESSAGEIDREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOPILOTTURNBYCLIENTMESSAGEIDREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class GetCopilotTurnByClientMessageIdRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCopilotTurnByClientMessageIdRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientMessageId, clientMessageId_);
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
    };
    friend void from_json(const Darabonba::Json& j, GetCopilotTurnByClientMessageIdRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientMessageId, clientMessageId_);
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
    };
    GetCopilotTurnByClientMessageIdRequest() = default ;
    GetCopilotTurnByClientMessageIdRequest(const GetCopilotTurnByClientMessageIdRequest &) = default ;
    GetCopilotTurnByClientMessageIdRequest(GetCopilotTurnByClientMessageIdRequest &&) = default ;
    GetCopilotTurnByClientMessageIdRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCopilotTurnByClientMessageIdRequest() = default ;
    GetCopilotTurnByClientMessageIdRequest& operator=(const GetCopilotTurnByClientMessageIdRequest &) = default ;
    GetCopilotTurnByClientMessageIdRequest& operator=(GetCopilotTurnByClientMessageIdRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientMessageId_ == nullptr
        && this->conversationId_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr && this->traceId_ == nullptr; };
    // clientMessageId Field Functions 
    bool hasClientMessageId() const { return this->clientMessageId_ != nullptr;};
    void deleteClientMessageId() { this->clientMessageId_ = nullptr;};
    inline string getClientMessageId() const { DARABONBA_PTR_GET_DEFAULT(clientMessageId_, "") };
    inline GetCopilotTurnByClientMessageIdRequest& setClientMessageId(string clientMessageId) { DARABONBA_PTR_SET_VALUE(clientMessageId_, clientMessageId) };


    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline GetCopilotTurnByClientMessageIdRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline GetCopilotTurnByClientMessageIdRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetCopilotTurnByClientMessageIdRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline GetCopilotTurnByClientMessageIdRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


  protected:
    // The client message ID.
    // 
    // This parameter is required.
    shared_ptr<string> clientMessageId_ {};
    // The conversation ID.
    // 
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    // The language of the returned message. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The region of the data management center for threat analysis. Select the region of the management center based on the region where your assets are located. Valid values:
    // - cn-hangzhou: Select this value if your assets are located in the Chinese mainland and Hong Kong (China).
    // - ap-southeast-1: Select this value if your assets are located outside China.
    shared_ptr<string> regionId_ {};
    // The trace ID used to track the service request.
    shared_ptr<string> traceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
