// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#define ALIBABACLOUD_MODELS_GETASSISTANTCAPABILITYREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPartRecommends.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_TO_JSON(recommends, recommends_);
    };
    friend void from_json(const Darabonba::Json& j, GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_FROM_JSON(recommends, recommends_);
    };
    GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart() = default ;
    GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart(const GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart &) = default ;
    GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart(GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart &&) = default ;
    GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart() = default ;
    GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart& operator=(const GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart &) = default ;
    GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart& operator=(GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recommends_ == nullptr; };
    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline const vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPartRecommends> & recommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPartRecommends> recommends() { DARABONBA_PTR_GET(recommends_, vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart& setRecommends(const vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPartRecommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
    inline GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPart& setRecommends(vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPartRecommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


  protected:
    std::shared_ptr<vector<Models::GetAssistantCapabilityRequestMessagesContentStructViewPartsRecommendPartRecommends>> recommends_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
