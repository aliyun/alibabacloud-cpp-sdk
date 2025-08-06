// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#define ALIBABACLOUD_MODELS_CREATEMESSAGEREQUESTMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateMessageRequestMessagesContentStructViewPartsRecommendPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateMessageRequestMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_TO_JSON(recommends, recommends_);
    };
    friend void from_json(const Darabonba::Json& j, CreateMessageRequestMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_FROM_JSON(recommends, recommends_);
    };
    CreateMessageRequestMessagesContentStructViewPartsRecommendPart() = default ;
    CreateMessageRequestMessagesContentStructViewPartsRecommendPart(const CreateMessageRequestMessagesContentStructViewPartsRecommendPart &) = default ;
    CreateMessageRequestMessagesContentStructViewPartsRecommendPart(CreateMessageRequestMessagesContentStructViewPartsRecommendPart &&) = default ;
    CreateMessageRequestMessagesContentStructViewPartsRecommendPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateMessageRequestMessagesContentStructViewPartsRecommendPart() = default ;
    CreateMessageRequestMessagesContentStructViewPartsRecommendPart& operator=(const CreateMessageRequestMessagesContentStructViewPartsRecommendPart &) = default ;
    CreateMessageRequestMessagesContentStructViewPartsRecommendPart& operator=(CreateMessageRequestMessagesContentStructViewPartsRecommendPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->recommends_ != nullptr; };
    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline const vector<Models::CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends> & recommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Models::CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline vector<Models::CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends> recommends() { DARABONBA_PTR_GET(recommends_, vector<Models::CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline CreateMessageRequestMessagesContentStructViewPartsRecommendPart& setRecommends(const vector<Models::CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
    inline CreateMessageRequestMessagesContentStructViewPartsRecommendPart& setRecommends(vector<Models::CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


  protected:
    std::shared_ptr<vector<Models::CreateMessageRequestMessagesContentStructViewPartsRecommendPartRecommends>> recommends_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
