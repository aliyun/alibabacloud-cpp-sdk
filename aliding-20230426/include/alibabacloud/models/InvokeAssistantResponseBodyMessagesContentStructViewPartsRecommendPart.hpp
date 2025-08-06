// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPartRecommends.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_TO_JSON(recommends, recommends_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_FROM_JSON(recommends, recommends_);
    };
    InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart() = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart(const InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart &) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart(InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart &&) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart() = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart& operator=(const InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart &) = default ;
    InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart& operator=(InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recommends_ != nullptr; };
    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline const vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> & recommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> recommends() { DARABONBA_PTR_GET(recommends_, vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart& setRecommends(const vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
    inline InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPart& setRecommends(vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


  protected:
    std::shared_ptr<vector<Models::InvokeAssistantResponseBodyMessagesContentStructViewPartsRecommendPartRecommends>> recommends_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
