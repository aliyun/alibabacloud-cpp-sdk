// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTPARTSRECOMMENDPART_HPP_
#define ALIBABACLOUD_MODELS_CREATERUNRESPONSEBODYMESSAGESCONTENTSTRUCTPARTSRECOMMENDPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateRunResponseBodyMessagesContentStructPartsRecommendPartRecommends.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class CreateRunResponseBodyMessagesContentStructPartsRecommendPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRunResponseBodyMessagesContentStructPartsRecommendPart& obj) { 
      DARABONBA_PTR_TO_JSON(recommends, recommends_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRunResponseBodyMessagesContentStructPartsRecommendPart& obj) { 
      DARABONBA_PTR_FROM_JSON(recommends, recommends_);
    };
    CreateRunResponseBodyMessagesContentStructPartsRecommendPart() = default ;
    CreateRunResponseBodyMessagesContentStructPartsRecommendPart(const CreateRunResponseBodyMessagesContentStructPartsRecommendPart &) = default ;
    CreateRunResponseBodyMessagesContentStructPartsRecommendPart(CreateRunResponseBodyMessagesContentStructPartsRecommendPart &&) = default ;
    CreateRunResponseBodyMessagesContentStructPartsRecommendPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRunResponseBodyMessagesContentStructPartsRecommendPart() = default ;
    CreateRunResponseBodyMessagesContentStructPartsRecommendPart& operator=(const CreateRunResponseBodyMessagesContentStructPartsRecommendPart &) = default ;
    CreateRunResponseBodyMessagesContentStructPartsRecommendPart& operator=(CreateRunResponseBodyMessagesContentStructPartsRecommendPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recommends_ == nullptr; };
    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline const vector<Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPartRecommends> & recommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPartRecommends>) };
    inline vector<Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPartRecommends> recommends() { DARABONBA_PTR_GET(recommends_, vector<Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPartRecommends>) };
    inline CreateRunResponseBodyMessagesContentStructPartsRecommendPart& setRecommends(const vector<Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPartRecommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
    inline CreateRunResponseBodyMessagesContentStructPartsRecommendPart& setRecommends(vector<Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPartRecommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


  protected:
    std::shared_ptr<vector<Models::CreateRunResponseBodyMessagesContentStructPartsRecommendPartRecommends>> recommends_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
