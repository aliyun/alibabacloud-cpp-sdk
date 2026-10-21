// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESUMECOPILOTTURNSTREAMSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESUMECOPILOTTURNSTREAMSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20241212
{
namespace Models
{
  class ResumeCopilotTurnStreamShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ResumeCopilotTurnStreamShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(CursorByRun, cursorByRunShrink_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TraceId, traceId_);
      DARABONBA_PTR_TO_JSON(TurnId, turnId_);
    };
    friend void from_json(const Darabonba::Json& j, ResumeCopilotTurnStreamShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(CursorByRun, cursorByRunShrink_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TraceId, traceId_);
      DARABONBA_PTR_FROM_JSON(TurnId, turnId_);
    };
    ResumeCopilotTurnStreamShrinkRequest() = default ;
    ResumeCopilotTurnStreamShrinkRequest(const ResumeCopilotTurnStreamShrinkRequest &) = default ;
    ResumeCopilotTurnStreamShrinkRequest(ResumeCopilotTurnStreamShrinkRequest &&) = default ;
    ResumeCopilotTurnStreamShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ResumeCopilotTurnStreamShrinkRequest() = default ;
    ResumeCopilotTurnStreamShrinkRequest& operator=(const ResumeCopilotTurnStreamShrinkRequest &) = default ;
    ResumeCopilotTurnStreamShrinkRequest& operator=(ResumeCopilotTurnStreamShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->cursorByRunShrink_ == nullptr && this->lang_ == nullptr && this->regionId_ == nullptr && this->traceId_ == nullptr && this->turnId_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline ResumeCopilotTurnStreamShrinkRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // cursorByRunShrink Field Functions 
    bool hasCursorByRunShrink() const { return this->cursorByRunShrink_ != nullptr;};
    void deleteCursorByRunShrink() { this->cursorByRunShrink_ = nullptr;};
    inline string getCursorByRunShrink() const { DARABONBA_PTR_GET_DEFAULT(cursorByRunShrink_, "") };
    inline ResumeCopilotTurnStreamShrinkRequest& setCursorByRunShrink(string cursorByRunShrink) { DARABONBA_PTR_SET_VALUE(cursorByRunShrink_, cursorByRunShrink) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ResumeCopilotTurnStreamShrinkRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ResumeCopilotTurnStreamShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // traceId Field Functions 
    bool hasTraceId() const { return this->traceId_ != nullptr;};
    void deleteTraceId() { this->traceId_ = nullptr;};
    inline string getTraceId() const { DARABONBA_PTR_GET_DEFAULT(traceId_, "") };
    inline ResumeCopilotTurnStreamShrinkRequest& setTraceId(string traceId) { DARABONBA_PTR_SET_VALUE(traceId_, traceId) };


    // turnId Field Functions 
    bool hasTurnId() const { return this->turnId_ != nullptr;};
    void deleteTurnId() { this->turnId_ = nullptr;};
    inline string getTurnId() const { DARABONBA_PTR_GET_DEFAULT(turnId_, "") };
    inline ResumeCopilotTurnStreamShrinkRequest& setTurnId(string turnId) { DARABONBA_PTR_SET_VALUE(turnId_, turnId) };


  protected:
    // The conversation ID. This parameter is required for the second and subsequent turns in a multi-turn conversation.
    // 
    // This parameter is required.
    shared_ptr<string> conversationId_ {};
    // The native run cursor mapping.
    // 
    // This parameter is required.
    shared_ptr<string> cursorByRunShrink_ {};
    // The language of the response. Valid values:
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The region where the data management center for threat analysis is located. You need to select the management center based on the region of your assets. Valid values:
    // - cn-hangzhou: The asset belongs to the Chinese mainland and China (Hong Kong).
    // - ap-southeast-1: The asset belongs to a region outside the Chinese mainland.
    shared_ptr<string> regionId_ {};
    // The trace ID.
    shared_ptr<string> traceId_ {};
    // The primary key ID.
    // 
    // This parameter is required.
    shared_ptr<string> turnId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20241212
#endif
