// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTONGYICONVERSATIONLOGSRESPONSEBODYSESSIONFLOWDEBUGINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTTONGYICONVERSATIONLOGSRESPONSEBODYSESSIONFLOWDEBUGINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Chatbot20220408
{
namespace Models
{
  class ListTongyiConversationLogsResponseBodySessionFlowDebugInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTongyiConversationLogsResponseBodySessionFlowDebugInfo& obj) { 
      DARABONBA_ANY_TO_JSON(ApiParams, apiParams_);
      DARABONBA_ANY_TO_JSON(SlotParams, slotParams_);
    };
    friend void from_json(const Darabonba::Json& j, ListTongyiConversationLogsResponseBodySessionFlowDebugInfo& obj) { 
      DARABONBA_ANY_FROM_JSON(ApiParams, apiParams_);
      DARABONBA_ANY_FROM_JSON(SlotParams, slotParams_);
    };
    ListTongyiConversationLogsResponseBodySessionFlowDebugInfo() = default ;
    ListTongyiConversationLogsResponseBodySessionFlowDebugInfo(const ListTongyiConversationLogsResponseBodySessionFlowDebugInfo &) = default ;
    ListTongyiConversationLogsResponseBodySessionFlowDebugInfo(ListTongyiConversationLogsResponseBodySessionFlowDebugInfo &&) = default ;
    ListTongyiConversationLogsResponseBodySessionFlowDebugInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTongyiConversationLogsResponseBodySessionFlowDebugInfo() = default ;
    ListTongyiConversationLogsResponseBodySessionFlowDebugInfo& operator=(const ListTongyiConversationLogsResponseBodySessionFlowDebugInfo &) = default ;
    ListTongyiConversationLogsResponseBodySessionFlowDebugInfo& operator=(ListTongyiConversationLogsResponseBodySessionFlowDebugInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apiParams_ == nullptr
        && return this->slotParams_ == nullptr; };
    // apiParams Field Functions 
    bool hasApiParams() const { return this->apiParams_ != nullptr;};
    void deleteApiParams() { this->apiParams_ = nullptr;};
    inline     const Darabonba::Json & apiParams() const { DARABONBA_GET(apiParams_) };
    Darabonba::Json & apiParams() { DARABONBA_GET(apiParams_) };
    inline ListTongyiConversationLogsResponseBodySessionFlowDebugInfo& setApiParams(const Darabonba::Json & apiParams) { DARABONBA_SET_VALUE(apiParams_, apiParams) };
    inline ListTongyiConversationLogsResponseBodySessionFlowDebugInfo& setApiParams(Darabonba::Json & apiParams) { DARABONBA_SET_RVALUE(apiParams_, apiParams) };


    // slotParams Field Functions 
    bool hasSlotParams() const { return this->slotParams_ != nullptr;};
    void deleteSlotParams() { this->slotParams_ = nullptr;};
    inline     const Darabonba::Json & slotParams() const { DARABONBA_GET(slotParams_) };
    Darabonba::Json & slotParams() { DARABONBA_GET(slotParams_) };
    inline ListTongyiConversationLogsResponseBodySessionFlowDebugInfo& setSlotParams(const Darabonba::Json & slotParams) { DARABONBA_SET_VALUE(slotParams_, slotParams) };
    inline ListTongyiConversationLogsResponseBodySessionFlowDebugInfo& setSlotParams(Darabonba::Json & slotParams) { DARABONBA_SET_RVALUE(slotParams_, slotParams) };


  protected:
    Darabonba::Json apiParams_ = nullptr;
    Darabonba::Json slotParams_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Chatbot20220408
#endif
