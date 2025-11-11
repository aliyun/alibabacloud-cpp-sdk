// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTNEWSWITHTYPERESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTNEWSWITHTYPERESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHotNewsWithTypeResponseBodyDataNews.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class ListHotNewsWithTypeResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotNewsWithTypeResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(News, news_);
      DARABONBA_PTR_TO_JSON(NewsType, newsType_);
      DARABONBA_PTR_TO_JSON(NewsTypeName, newsTypeName_);
      DARABONBA_PTR_TO_JSON(TotalPages, totalPages_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotNewsWithTypeResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(News, news_);
      DARABONBA_PTR_FROM_JSON(NewsType, newsType_);
      DARABONBA_PTR_FROM_JSON(NewsTypeName, newsTypeName_);
      DARABONBA_PTR_FROM_JSON(TotalPages, totalPages_);
    };
    ListHotNewsWithTypeResponseBodyData() = default ;
    ListHotNewsWithTypeResponseBodyData(const ListHotNewsWithTypeResponseBodyData &) = default ;
    ListHotNewsWithTypeResponseBodyData(ListHotNewsWithTypeResponseBodyData &&) = default ;
    ListHotNewsWithTypeResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotNewsWithTypeResponseBodyData() = default ;
    ListHotNewsWithTypeResponseBodyData& operator=(const ListHotNewsWithTypeResponseBodyData &) = default ;
    ListHotNewsWithTypeResponseBodyData& operator=(ListHotNewsWithTypeResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->news_ == nullptr
        && return this->newsType_ == nullptr && return this->newsTypeName_ == nullptr && return this->totalPages_ == nullptr; };
    // news Field Functions 
    bool hasNews() const { return this->news_ != nullptr;};
    void deleteNews() { this->news_ = nullptr;};
    inline const vector<Models::ListHotNewsWithTypeResponseBodyDataNews> & news() const { DARABONBA_PTR_GET_CONST(news_, vector<Models::ListHotNewsWithTypeResponseBodyDataNews>) };
    inline vector<Models::ListHotNewsWithTypeResponseBodyDataNews> news() { DARABONBA_PTR_GET(news_, vector<Models::ListHotNewsWithTypeResponseBodyDataNews>) };
    inline ListHotNewsWithTypeResponseBodyData& setNews(const vector<Models::ListHotNewsWithTypeResponseBodyDataNews> & news) { DARABONBA_PTR_SET_VALUE(news_, news) };
    inline ListHotNewsWithTypeResponseBodyData& setNews(vector<Models::ListHotNewsWithTypeResponseBodyDataNews> && news) { DARABONBA_PTR_SET_RVALUE(news_, news) };


    // newsType Field Functions 
    bool hasNewsType() const { return this->newsType_ != nullptr;};
    void deleteNewsType() { this->newsType_ = nullptr;};
    inline string newsType() const { DARABONBA_PTR_GET_DEFAULT(newsType_, "") };
    inline ListHotNewsWithTypeResponseBodyData& setNewsType(string newsType) { DARABONBA_PTR_SET_VALUE(newsType_, newsType) };


    // newsTypeName Field Functions 
    bool hasNewsTypeName() const { return this->newsTypeName_ != nullptr;};
    void deleteNewsTypeName() { this->newsTypeName_ = nullptr;};
    inline string newsTypeName() const { DARABONBA_PTR_GET_DEFAULT(newsTypeName_, "") };
    inline ListHotNewsWithTypeResponseBodyData& setNewsTypeName(string newsTypeName) { DARABONBA_PTR_SET_VALUE(newsTypeName_, newsTypeName) };


    // totalPages Field Functions 
    bool hasTotalPages() const { return this->totalPages_ != nullptr;};
    void deleteTotalPages() { this->totalPages_ = nullptr;};
    inline int32_t totalPages() const { DARABONBA_PTR_GET_DEFAULT(totalPages_, 0) };
    inline ListHotNewsWithTypeResponseBodyData& setTotalPages(int32_t totalPages) { DARABONBA_PTR_SET_VALUE(totalPages_, totalPages) };


  protected:
    std::shared_ptr<vector<Models::ListHotNewsWithTypeResponseBodyDataNews>> news_ = nullptr;
    std::shared_ptr<string> newsType_ = nullptr;
    std::shared_ptr<string> newsTypeName_ = nullptr;
    std::shared_ptr<int32_t> totalPages_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
