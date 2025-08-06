// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTDINGNORMALCARD_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTDINGNORMALCARD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentDingNormalCardCardData.hpp>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions.hpp>
#include <vector>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigs.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentDingNormalCard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentDingNormalCard& obj) { 
      DARABONBA_PTR_TO_JSON(cardData, cardData_);
      DARABONBA_PTR_TO_JSON(cardTemplateId, cardTemplateId_);
      DARABONBA_PTR_TO_JSON(cardUpdateOptions, cardUpdateOptions_);
      DARABONBA_PTR_TO_JSON(dynamicDataSourceConfigs, dynamicDataSourceConfigs_);
      DARABONBA_PTR_TO_JSON(privateData, privateData_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentDingNormalCard& obj) { 
      DARABONBA_PTR_FROM_JSON(cardData, cardData_);
      DARABONBA_PTR_FROM_JSON(cardTemplateId, cardTemplateId_);
      DARABONBA_PTR_FROM_JSON(cardUpdateOptions, cardUpdateOptions_);
      DARABONBA_PTR_FROM_JSON(dynamicDataSourceConfigs, dynamicDataSourceConfigs_);
      DARABONBA_PTR_FROM_JSON(privateData, privateData_);
    };
    InvokeAssistantRequestMessagesContentDingNormalCard() = default ;
    InvokeAssistantRequestMessagesContentDingNormalCard(const InvokeAssistantRequestMessagesContentDingNormalCard &) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCard(InvokeAssistantRequestMessagesContentDingNormalCard &&) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentDingNormalCard() = default ;
    InvokeAssistantRequestMessagesContentDingNormalCard& operator=(const InvokeAssistantRequestMessagesContentDingNormalCard &) = default ;
    InvokeAssistantRequestMessagesContentDingNormalCard& operator=(InvokeAssistantRequestMessagesContentDingNormalCard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cardData_ != nullptr
        && this->cardTemplateId_ != nullptr && this->cardUpdateOptions_ != nullptr && this->dynamicDataSourceConfigs_ != nullptr && this->privateData_ != nullptr; };
    // cardData Field Functions 
    bool hasCardData() const { return this->cardData_ != nullptr;};
    void deleteCardData() { this->cardData_ = nullptr;};
    inline const Models::InvokeAssistantRequestMessagesContentDingNormalCardCardData & cardData() const { DARABONBA_PTR_GET_CONST(cardData_, Models::InvokeAssistantRequestMessagesContentDingNormalCardCardData) };
    inline Models::InvokeAssistantRequestMessagesContentDingNormalCardCardData cardData() { DARABONBA_PTR_GET(cardData_, Models::InvokeAssistantRequestMessagesContentDingNormalCardCardData) };
    inline InvokeAssistantRequestMessagesContentDingNormalCard& setCardData(const Models::InvokeAssistantRequestMessagesContentDingNormalCardCardData & cardData) { DARABONBA_PTR_SET_VALUE(cardData_, cardData) };
    inline InvokeAssistantRequestMessagesContentDingNormalCard& setCardData(Models::InvokeAssistantRequestMessagesContentDingNormalCardCardData && cardData) { DARABONBA_PTR_SET_RVALUE(cardData_, cardData) };


    // cardTemplateId Field Functions 
    bool hasCardTemplateId() const { return this->cardTemplateId_ != nullptr;};
    void deleteCardTemplateId() { this->cardTemplateId_ = nullptr;};
    inline string cardTemplateId() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateId_, "") };
    inline InvokeAssistantRequestMessagesContentDingNormalCard& setCardTemplateId(string cardTemplateId) { DARABONBA_PTR_SET_VALUE(cardTemplateId_, cardTemplateId) };


    // cardUpdateOptions Field Functions 
    bool hasCardUpdateOptions() const { return this->cardUpdateOptions_ != nullptr;};
    void deleteCardUpdateOptions() { this->cardUpdateOptions_ = nullptr;};
    inline const Models::InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions & cardUpdateOptions() const { DARABONBA_PTR_GET_CONST(cardUpdateOptions_, Models::InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions) };
    inline Models::InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions cardUpdateOptions() { DARABONBA_PTR_GET(cardUpdateOptions_, Models::InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions) };
    inline InvokeAssistantRequestMessagesContentDingNormalCard& setCardUpdateOptions(const Models::InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions & cardUpdateOptions) { DARABONBA_PTR_SET_VALUE(cardUpdateOptions_, cardUpdateOptions) };
    inline InvokeAssistantRequestMessagesContentDingNormalCard& setCardUpdateOptions(Models::InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions && cardUpdateOptions) { DARABONBA_PTR_SET_RVALUE(cardUpdateOptions_, cardUpdateOptions) };


    // dynamicDataSourceConfigs Field Functions 
    bool hasDynamicDataSourceConfigs() const { return this->dynamicDataSourceConfigs_ != nullptr;};
    void deleteDynamicDataSourceConfigs() { this->dynamicDataSourceConfigs_ = nullptr;};
    inline const vector<Models::InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigs> & dynamicDataSourceConfigs() const { DARABONBA_PTR_GET_CONST(dynamicDataSourceConfigs_, vector<Models::InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigs>) };
    inline vector<Models::InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigs> dynamicDataSourceConfigs() { DARABONBA_PTR_GET(dynamicDataSourceConfigs_, vector<Models::InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigs>) };
    inline InvokeAssistantRequestMessagesContentDingNormalCard& setDynamicDataSourceConfigs(const vector<Models::InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigs> & dynamicDataSourceConfigs) { DARABONBA_PTR_SET_VALUE(dynamicDataSourceConfigs_, dynamicDataSourceConfigs) };
    inline InvokeAssistantRequestMessagesContentDingNormalCard& setDynamicDataSourceConfigs(vector<Models::InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigs> && dynamicDataSourceConfigs) { DARABONBA_PTR_SET_RVALUE(dynamicDataSourceConfigs_, dynamicDataSourceConfigs) };


    // privateData Field Functions 
    bool hasPrivateData() const { return this->privateData_ != nullptr;};
    void deletePrivateData() { this->privateData_ = nullptr;};
    inline const map<string, Darabonba::Json> & privateData() const { DARABONBA_PTR_GET_CONST(privateData_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> privateData() { DARABONBA_PTR_GET(privateData_, map<string, Darabonba::Json>) };
    inline InvokeAssistantRequestMessagesContentDingNormalCard& setPrivateData(const map<string, Darabonba::Json> & privateData) { DARABONBA_PTR_SET_VALUE(privateData_, privateData) };
    inline InvokeAssistantRequestMessagesContentDingNormalCard& setPrivateData(map<string, Darabonba::Json> && privateData) { DARABONBA_PTR_SET_RVALUE(privateData_, privateData) };


  protected:
    std::shared_ptr<Models::InvokeAssistantRequestMessagesContentDingNormalCardCardData> cardData_ = nullptr;
    std::shared_ptr<string> cardTemplateId_ = nullptr;
    std::shared_ptr<Models::InvokeAssistantRequestMessagesContentDingNormalCardCardUpdateOptions> cardUpdateOptions_ = nullptr;
    std::shared_ptr<vector<Models::InvokeAssistantRequestMessagesContentDingNormalCardDynamicDataSourceConfigs>> dynamicDataSourceConfigs_ = nullptr;
    std::shared_ptr<map<string, Darabonba::Json>> privateData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
