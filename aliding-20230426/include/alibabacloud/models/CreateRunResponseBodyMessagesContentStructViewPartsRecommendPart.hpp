// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructViewPartsRecommendPartRecommends.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_TO_JSON(recommends, recommends_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_FROM_JSON(recommends, recommends_);
    };
    CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart() = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart(const CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart &) = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart(CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart &&) = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart() = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart& operator=(const CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart &) = default ;
    CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart& operator=(CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recommends_ == nullptr; };
    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline const vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> & recommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> recommends() { DARABONBA_PTR_GET(recommends_, vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart& setRecommends(const vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
    inline CreateRunResponseBodyMessagesContentStructViewPartsRecommendPart& setRecommends(vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


  protected:
    std::shared_ptr<vector<Models::CreateRunResponseBodyMessagesContentStructViewPartsRecommendPartRecommends>> recommends_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
