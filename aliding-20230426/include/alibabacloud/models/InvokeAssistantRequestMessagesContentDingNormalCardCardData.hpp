// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTDINGNORMALCARDCARDDATA_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTDINGNORMALCARDCARDDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentDingNormalCardCardData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentDingNormalCardCardData& obj) { 
      DARABONBA_ANY_TO_JSON(cardParamMap, cardParamMap_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentDingNormalCardCardData& obj) { 
      DARABONBA_ANY_FROM_JSON(cardParamMap, cardParamMap_);
    };
    InvokeAssistantRequestMessagesContentDingNormalCardCardData() = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardCardData(const InvokeAssistantRequestMessagesContentDingNormalCardCardData &) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardCardData(InvokeAssistantRequestMessagesContentDingNormalCardCardData &&) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardCardData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentDingNormalCardCardData() = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardCardData& operator=(const InvokeAssistantRequestMessagesContentDingNormalCardCardData &) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCardCardData& operator=(InvokeAssistantRequestMessagesContentDingNormalCardCardData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cardParamMap_ != nullptr; };
    // cardParamMap Field Functions 
    bool hasCardParamMap() const { return this->cardParamMap_ != nullptr;};
    void deleteCardParamMap() { this->cardParamMap_ = nullptr;};
    inline     const Darabonba::Json & cardParamMap() const { DARABONBA_GET(cardParamMap_) };
    Darabonba::Json & cardParamMap() { DARABONBA_GET(cardParamMap_) };
    inline InvokeAssistantRequestMessagesContentDingNormalCardCardData& setCardParamMap(const Darabonba::Json & cardParamMap) { DARABONBA_SET_VALUE(cardParamMap_, cardParamMap) };
    inline InvokeAssistantRequestMessagesContentDingNormalCardCardData& setCardParamMap(Darabonba::Json & cardParamMap) { DARABONBA_SET_RVALUE(cardParamMap_, cardParamMap) };


  protected:
    Darabonba::Json cardParamMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
