// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTDINGNORMALCARDCARDDATA_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTDINGNORMALCARDCARDDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentDingNormalCardCardData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentDingNormalCardCardData& obj) { 
      DARABONBA_ANY_TO_JSON(cardParamMap, cardParamMap_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentDingNormalCardCardData& obj) { 
      DARABONBA_ANY_FROM_JSON(cardParamMap, cardParamMap_);
    };
    CreateRunResponseBodyMessagesContentDingNormalCardCardData() = default ;
    CreateRunResponseBodyMessagesContentDingNormalCardCardData(const CreateRunResponseBodyMessagesContentDingNormalCardCardData &) = default ;
    CreateRunResponseBodyMessagesContentDingNormalCardCardData(CreateRunResponseBodyMessagesContentDingNormalCardCardData &&) = default ;
    CreateRunResponseBodyMessagesContentDingNormalCardCardData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentDingNormalCardCardData() = default ;
    CreateRunResponseBodyMessagesContentDingNormalCardCardData& operator=(const CreateRunResponseBodyMessagesContentDingNormalCardCardData &) = default ;
    CreateRunResponseBodyMessagesContentDingNormalCardCardData& operator=(CreateRunResponseBodyMessagesContentDingNormalCardCardData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cardParamMap_ == nullptr; };
    // cardParamMap Field Functions 
    bool hasCardParamMap() const { return this->cardParamMap_ != nullptr;};
    void deleteCardParamMap() { this->cardParamMap_ = nullptr;};
    inline     const Darabonba::Json & cardParamMap() const { DARABONBA_GET(cardParamMap_) };
    Darabonba::Json & cardParamMap() { DARABONBA_GET(cardParamMap_) };
    inline CreateRunResponseBodyMessagesContentDingNormalCardCardData& setCardParamMap(const Darabonba::Json & cardParamMap) { DARABONBA_SET_VALUE(cardParamMap_, cardParamMap) };
    inline CreateRunResponseBodyMessagesContentDingNormalCardCardData& setCardParamMap(Darabonba::Json & cardParamMap) { DARABONBA_SET_RVALUE(cardParamMap_, cardParamMap) };


  protected:
    Darabonba::Json cardParamMap_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
