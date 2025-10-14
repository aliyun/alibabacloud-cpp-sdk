// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTDINGNORMALCARD_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTDINGNORMALCARD_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentDingNormalCardCardData.hpp>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions.hpp>
#include <vector>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMessageResponseBodyMessagesContentDingNormalCard : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBodyMessagesContentDingNormalCard& obj) { 
      DARABONBA_PTR_TO_JSON(cardData, cardData_);
      DARABONBA_PTR_TO_JSON(cardTemplateId, cardTemplateId_);
      DARABONBA_PTR_TO_JSON(cardUpdateOptions, cardUpdateOptions_);
      DARABONBA_PTR_TO_JSON(dynamicDataSourceConfigs, dynamicDataSourceConfigs_);
      DARABONBA_PTR_TO_JSON(privateData, privateData_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBodyMessagesContentDingNormalCard& obj) { 
      DARABONBA_PTR_FROM_JSON(cardData, cardData_);
      DARABONBA_PTR_FROM_JSON(cardTemplateId, cardTemplateId_);
      DARABONBA_PTR_FROM_JSON(cardUpdateOptions, cardUpdateOptions_);
      DARABONBA_PTR_FROM_JSON(dynamicDataSourceConfigs, dynamicDataSourceConfigs_);
      DARABONBA_PTR_FROM_JSON(privateData, privateData_);
    };
    ListMessageResponseBodyMessagesContentDingNormalCard() = default ;
    ListMessageResponseBodyMessagesContentDingNormalCard(const ListMessageResponseBodyMessagesContentDingNormalCard &) = default ;
    ListMessageResponseBodyMessagesContentDingNormalCard(ListMessageResponseBodyMessagesContentDingNormalCard &&) = default ;
    ListMessageResponseBodyMessagesContentDingNormalCard(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBodyMessagesContentDingNormalCard() = default ;
    ListMessageResponseBodyMessagesContentDingNormalCard& operator=(const ListMessageResponseBodyMessagesContentDingNormalCard &) = default ;
    ListMessageResponseBodyMessagesContentDingNormalCard& operator=(ListMessageResponseBodyMessagesContentDingNormalCard &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cardData_ == nullptr
        && return this->cardTemplateId_ == nullptr && return this->cardUpdateOptions_ == nullptr && return this->dynamicDataSourceConfigs_ == nullptr && return this->privateData_ == nullptr; };
    // cardData Field Functions 
    bool hasCardData() const { return this->cardData_ != nullptr;};
    void deleteCardData() { this->cardData_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentDingNormalCardCardData & cardData() const { DARABONBA_PTR_GET_CONST(cardData_, Models::ListMessageResponseBodyMessagesContentDingNormalCardCardData) };
    inline Models::ListMessageResponseBodyMessagesContentDingNormalCardCardData cardData() { DARABONBA_PTR_GET(cardData_, Models::ListMessageResponseBodyMessagesContentDingNormalCardCardData) };
    inline ListMessageResponseBodyMessagesContentDingNormalCard& setCardData(const Models::ListMessageResponseBodyMessagesContentDingNormalCardCardData & cardData) { DARABONBA_PTR_SET_VALUE(cardData_, cardData) };
    inline ListMessageResponseBodyMessagesContentDingNormalCard& setCardData(Models::ListMessageResponseBodyMessagesContentDingNormalCardCardData && cardData) { DARABONBA_PTR_SET_RVALUE(cardData_, cardData) };


    // cardTemplateId Field Functions 
    bool hasCardTemplateId() const { return this->cardTemplateId_ != nullptr;};
    void deleteCardTemplateId() { this->cardTemplateId_ = nullptr;};
    inline string cardTemplateId() const { DARABONBA_PTR_GET_DEFAULT(cardTemplateId_, "") };
    inline ListMessageResponseBodyMessagesContentDingNormalCard& setCardTemplateId(string cardTemplateId) { DARABONBA_PTR_SET_VALUE(cardTemplateId_, cardTemplateId) };


    // cardUpdateOptions Field Functions 
    bool hasCardUpdateOptions() const { return this->cardUpdateOptions_ != nullptr;};
    void deleteCardUpdateOptions() { this->cardUpdateOptions_ = nullptr;};
    inline const Models::ListMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions & cardUpdateOptions() const { DARABONBA_PTR_GET_CONST(cardUpdateOptions_, Models::ListMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions) };
    inline Models::ListMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions cardUpdateOptions() { DARABONBA_PTR_GET(cardUpdateOptions_, Models::ListMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions) };
    inline ListMessageResponseBodyMessagesContentDingNormalCard& setCardUpdateOptions(const Models::ListMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions & cardUpdateOptions) { DARABONBA_PTR_SET_VALUE(cardUpdateOptions_, cardUpdateOptions) };
    inline ListMessageResponseBodyMessagesContentDingNormalCard& setCardUpdateOptions(Models::ListMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions && cardUpdateOptions) { DARABONBA_PTR_SET_RVALUE(cardUpdateOptions_, cardUpdateOptions) };


    // dynamicDataSourceConfigs Field Functions 
    bool hasDynamicDataSourceConfigs() const { return this->dynamicDataSourceConfigs_ != nullptr;};
    void deleteDynamicDataSourceConfigs() { this->dynamicDataSourceConfigs_ = nullptr;};
    inline const vector<Models::ListMessageResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs> & dynamicDataSourceConfigs() const { DARABONBA_PTR_GET_CONST(dynamicDataSourceConfigs_, vector<Models::ListMessageResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs>) };
    inline vector<Models::ListMessageResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs> dynamicDataSourceConfigs() { DARABONBA_PTR_GET(dynamicDataSourceConfigs_, vector<Models::ListMessageResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs>) };
    inline ListMessageResponseBodyMessagesContentDingNormalCard& setDynamicDataSourceConfigs(const vector<Models::ListMessageResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs> & dynamicDataSourceConfigs) { DARABONBA_PTR_SET_VALUE(dynamicDataSourceConfigs_, dynamicDataSourceConfigs) };
    inline ListMessageResponseBodyMessagesContentDingNormalCard& setDynamicDataSourceConfigs(vector<Models::ListMessageResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs> && dynamicDataSourceConfigs) { DARABONBA_PTR_SET_RVALUE(dynamicDataSourceConfigs_, dynamicDataSourceConfigs) };


    // privateData Field Functions 
    bool hasPrivateData() const { return this->privateData_ != nullptr;};
    void deletePrivateData() { this->privateData_ = nullptr;};
    inline const map<string, Darabonba::Json> & privateData() const { DARABONBA_PTR_GET_CONST(privateData_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> privateData() { DARABONBA_PTR_GET(privateData_, map<string, Darabonba::Json>) };
    inline ListMessageResponseBodyMessagesContentDingNormalCard& setPrivateData(const map<string, Darabonba::Json> & privateData) { DARABONBA_PTR_SET_VALUE(privateData_, privateData) };
    inline ListMessageResponseBodyMessagesContentDingNormalCard& setPrivateData(map<string, Darabonba::Json> && privateData) { DARABONBA_PTR_SET_RVALUE(privateData_, privateData) };


  protected:
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentDingNormalCardCardData> cardData_ = nullptr;
    std::shared_ptr<string> cardTemplateId_ = nullptr;
    std::shared_ptr<Models::ListMessageResponseBodyMessagesContentDingNormalCardCardUpdateOptions> cardUpdateOptions_ = nullptr;
    std::shared_ptr<vector<Models::ListMessageResponseBodyMessagesContentDingNormalCardDynamicDataSourceConfigs>> dynamicDataSourceConfigs_ = nullptr;
    std::shared_ptr<map<string, Darabonba::Json>> privateData_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
