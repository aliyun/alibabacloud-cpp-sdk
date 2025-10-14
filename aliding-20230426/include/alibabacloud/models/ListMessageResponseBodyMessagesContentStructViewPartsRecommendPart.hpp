// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#define ALIBABACLOUD_MODELS_LISTMESSAGERESPONSEBODYMESSAGESCONTENTSTRUCTVIEWPARTSRECOMMENDPART_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListMessageResponseBodyMessagesContentStructViewPartsRecommendPartRecommends.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_TO_JSON(recommends, recommends_);
    };
    friend void from_json(const Darabonba::Json& j, ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart& obj) { 
      DARABONBA_PTR_FROM_JSON(recommends, recommends_);
    };
    ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart() = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart(const ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart &) = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart(ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart &&) = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart() = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart& operator=(const ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart &) = default ;
    ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart& operator=(ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->recommends_ == nullptr; };
    // recommends Field Functions 
    bool hasRecommends() const { return this->recommends_ != nullptr;};
    void deleteRecommends() { this->recommends_ = nullptr;};
    inline const vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> & recommends() const { DARABONBA_PTR_GET_CONST(recommends_, vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> recommends() { DARABONBA_PTR_GET(recommends_, vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPartRecommends>) };
    inline ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart& setRecommends(const vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> & recommends) { DARABONBA_PTR_SET_VALUE(recommends_, recommends) };
    inline ListMessageResponseBodyMessagesContentStructViewPartsRecommendPart& setRecommends(vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPartRecommends> && recommends) { DARABONBA_PTR_SET_RVALUE(recommends_, recommends) };


  protected:
    std::shared_ptr<vector<Models::ListMessageResponseBodyMessagesContentStructViewPartsRecommendPartRecommends>> recommends_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
