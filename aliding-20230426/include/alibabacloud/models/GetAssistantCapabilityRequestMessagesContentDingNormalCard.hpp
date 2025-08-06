// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENTDINGNORMALCARD_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENTDINGNORMALCARD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentDingNormalCardCardData.hpp>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentDingNormalCardCardUpdateOptions.hpp>
#include <vector>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityRequestMessagesContentDingNormalCard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityRequestMessagesContentDingNormalCard& obj) { 
      DARABONBA_PTR_TO_JSON(cardData, cardData_);
      DARABONBA_PTR_TO_JSON(cardTemplateId, cardTemplateId_);
      DARABONBA_PTR_TO_JSON(cardUpdateOptions, cardUpdateOptions_);
      DARABONBA_PTR_TO_JSON(dynamicDataSourceConfigs, dynamicDataSourceConfigs_);
      DARABONBA_ANY_TO_JSON(privateData, privateData_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityRequestMessagesContentDingNormalCard& obj) { 
      DARABONBA_PTR_FROM_JSON(cardData, cardData_);
      DARABONBA_PTR_FROM_JSON(cardTemplateId, cardTemplateId_);
      DARABONBA_PTR_FROM_JSON(cardUpdateOptions, cardUpdateOptions_);
      DARABONBA_PTR_FROM_JSON(dynamicDataSourceConfigs, dynamicDataSourceConfigs_);
      DARABONBA_ANY_FROM_JSON(privateData, privateData_);
    };
    GetAssistantCapabilityRequestMessagesContentDingNormalCard() = default ;
    GetAssistantCapabilityRequestMessagesContentDingNormalCard(const GetAssistantCapabilityRequestMessagesContentDingNormalCard &) = default ;
    GetAssistantCapabilityRequestMessagesContentDingNormalCard(GetAssistantCapabilityRequestMessagesContentDingNormalCard &&) = default ;
    GetAssistantCapabilityRequestMessagesContentDingNormalCard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityRequestMessagesContentDingNormalCard() = default ;
    GetAssistantCapabilityRequestMessagesContentDingNormalCard& operator=(const GetAssistantCapabilityRequestMessagesContentDingNormalCard &) = default ;
    GetAssistantCapabilityRequestMessagesContentDingNormalCard& operator=(GetAssistantCapabilityRequestMessagesContentDingNormalCard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->cardData_ != nullptr
        && this->cardTemplateId_ != nullptr && this->cardUpdateOptions_ != nullptr && this->dynamicDataSourceConfigs_ != nullptr && this->privateData_ != nullptr; };
    // cardData Field Functions 
    bool hasCardData() const { return this->cardData_ != nullptr;};
    void deleteCardData() { this->cardData_ = nullptr;};
    inline const Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardData & cardData() const { DARABONBA_PTR_GET_CONST(cardData_, Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardData) };
    inline Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardData cardData() { DARABONBA_PTR_GET(cardData_, Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardData) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCard& setCardData(const Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardData & cardData) { DARABONBA_PTR_SET_VALUE(cardData_, cardData) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCard& setCardData(Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardData && cardData) { DARABONBA_PTR_SET_RVALUE(cardData_, cardData) };


    // cardTemplateId Field Functions 
    bool hasCardTemplateId() const { return this->cardTemplateId_ != nullptr;};
    void deleteCardTemplateId() { this->cardTemplateId_ = nullptr;};
    inline string cardTemplateId() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateId_, "") };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCard& setCardTemplateId(string cardTemplateId) { DARABONBA_PTR_SET_VALUE(cardTemplateId_, cardTemplateId) };


    // cardUpdateOptions Field Functions 
    bool hasCardUpdateOptions() const { return this->cardUpdateOptions_ != nullptr;};
    void deleteCardUpdateOptions() { this->cardUpdateOptions_ = nullptr;};
    inline const Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardUpdateOptions & cardUpdateOptions() const { DARABONBA_PTR_GET_CONST(cardUpdateOptions_, Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardUpdateOptions) };
    inline Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardUpdateOptions cardUpdateOptions() { DARABONBA_PTR_GET(cardUpdateOptions_, Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardUpdateOptions) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCard& setCardUpdateOptions(const Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardUpdateOptions & cardUpdateOptions) { DARABONBA_PTR_SET_VALUE(cardUpdateOptions_, cardUpdateOptions) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCard& setCardUpdateOptions(Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardUpdateOptions && cardUpdateOptions) { DARABONBA_PTR_SET_RVALUE(cardUpdateOptions_, cardUpdateOptions) };


    // dynamicDataSourceConfigs Field Functions 
    bool hasDynamicDataSourceConfigs() const { return this->dynamicDataSourceConfigs_ != nullptr;};
    void deleteDynamicDataSourceConfigs() { this->dynamicDataSourceConfigs_ = nullptr;};
    inline const vector<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs> & dynamicDataSourceConfigs() const { DARABONBA_PTR_GET_CONST(dynamicDataSourceConfigs_, vector<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs>) };
    inline vector<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs> dynamicDataSourceConfigs() { DARABONBA_PTR_GET(dynamicDataSourceConfigs_, vector<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs>) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCard& setDynamicDataSourceConfigs(const vector<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs> & dynamicDataSourceConfigs) { DARABONBA_PTR_SET_VALUE(dynamicDataSourceConfigs_, dynamicDataSourceConfigs) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCard& setDynamicDataSourceConfigs(vector<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs> && dynamicDataSourceConfigs) { DARABONBA_PTR_SET_RVALUE(dynamicDataSourceConfigs_, dynamicDataSourceConfigs) };


    // privateData Field Functions 
    bool hasPrivateData() const { return this->privateData_ != nullptr;};
    void deletePrivateData() { this->privateData_ = nullptr;};
    inline     const Darabonba::Json & privateData() const { DARABONBA_GET(privateData_) };
    Darabonba::Json & privateData() { DARABONBA_GET(privateData_) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCard& setPrivateData(const Darabonba::Json & privateData) { DARABONBA_SET_VALUE(privateData_, privateData) };
    inline GetAssistantCapabilityRequestMessagesContentDingNormalCard& setPrivateData(Darabonba::Json & privateData) { DARABONBA_SET_RVALUE(privateData_, privateData) };


  protected:
    std::shared_ptr<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardData> cardData_ = nullptr;
    std::shared_ptr<string> cardTemplateId_ = nullptr;
    std::shared_ptr<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardCardUpdateOptions> cardUpdateOptions_ = nullptr;
    std::shared_ptr<vector<Models::GetAssistantCapabilityRequestMessagesContentDingNormalCardDynamicDataSourceConfigs>> dynamicDataSourceConfigs_ = nullptr;
    Darabonba::Json privateData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
