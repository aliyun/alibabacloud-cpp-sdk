// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#define ALIBABACLOUD_MODELS_INVOKEASSISTANTREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/InvokeAssistantRequestMessagesContentStructViewPartsRecommendPartRecommends.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_TO_JSON(recommends, recommends_);
    };
    friend void from_json(const Darabonba::Json& j, InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_FROM_JSON(recommends, recommends_);
    };
    InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart() = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart(const InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart &) = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart(InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart &&) = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart() = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart& operator=(const InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart &) = default ;
    InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart& operator=(InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recommends_ == nullptr; };
    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline const vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsRecommendPartRecommends> & recommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsRecommendPartRecommends> recommends() { DARABONBA_PTR_GET(recommends_, vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart& setRecommends(const vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsRecommendPartRecommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
    inline InvokeAssistantRequestMessagesContentStructViewPartsRecommendPart& setRecommends(vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsRecommendPartRecommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


  protected:
    std::shared_ptr<vector<Models::InvokeAssistantRequestMessagesContentStructViewPartsRecommendPartRecommends>> recommends_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
