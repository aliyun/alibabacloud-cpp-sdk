// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_HOTNEWSRECOMMENDRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_HOTNEWSRECOMMENDRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/HotNewsRecommendResponseBodyDataNews.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class HotNewsRecommendResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const HotNewsRecommendResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(news, news_);
    };
    friend void from_json(const Darabonba::Json& j, HotNewsRecommendResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(news, news_);
    };
    HotNewsRecommendResponseBodyData() = default ;
    HotNewsRecommendResponseBodyData(const HotNewsRecommendResponseBodyData &) = default ;
    HotNewsRecommendResponseBodyData(HotNewsRecommendResponseBodyData &&) = default ;
    HotNewsRecommendResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~HotNewsRecommendResponseBodyData() = default ;
    HotNewsRecommendResponseBodyData& operator=(const HotNewsRecommendResponseBodyData &) = default ;
    HotNewsRecommendResponseBodyData& operator=(HotNewsRecommendResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->news_ == nullptr; };
    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<Models::HotNewsRecommendResponseBodyDataNews> & news() const { DARABONBA_PTR_GET_CONST(news_, vector<Models::HotNewsRecommendResponseBodyDataNews>) };
    inline vector<Models::HotNewsRecommendResponseBodyDataNews> news() { DARABONBA_PTR_GET(news_, vector<Models::HotNewsRecommendResponseBodyDataNews>) };
    inline HotNewsRecommendResponseBodyData& setNews(const vector<Models::HotNewsRecommendResponseBodyDataNews> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline HotNewsRecommendResponseBodyData& setNews(vector<Models::HotNewsRecommendResponseBodyDataNews> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


  protected:
    std::shared_ptr<vector<Models::HotNewsRecommendResponseBodyDataNews>> news_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
