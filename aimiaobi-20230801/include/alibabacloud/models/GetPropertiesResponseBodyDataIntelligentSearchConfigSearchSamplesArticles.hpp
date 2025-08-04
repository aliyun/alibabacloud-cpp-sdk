// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAINTELLIGENTSEARCHCONFIGSEARCHSAMPLESARTICLES_HPP_
#define ALIBABACLOUD_MODELS_GETPROPERTIESRESPONSEBODYDATAINTELLIGENTSEARCHCONFIGSEARCHSAMPLESARTICLES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles& obj) { 
      DARABONBA_PTR_TO_JSON(Select, select_);
      DARABONBA_PTR_TO_JSON(Stared, stared_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles& obj) { 
      DARABONBA_PTR_FROM_JSON(Select, select_);
      DARABONBA_PTR_FROM_JSON(Stared, stared_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles() = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles(const GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles &) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles(GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles &&) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles() = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles& operator=(const GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles &) = default ;
    GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles& operator=(GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->select_ != nullptr
        && this->stared_ != nullptr && this->title_ != nullptr && this->url_ != nullptr; };
    // select Field Functions 
    bool hasSelect() const { return this->select_ != nullptr;};
    void deleteSelect() { this->select_ = nullptr;};
    inline bool select() const { DARABONBA_PTR_GET_DEFAULT(select_, false) };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles& setSelect(bool select) { DARABONBA_PTR_SET_VALUE(select_, select) };


    // stared Field Functions 
    bool hasStared() const { return this->stared_ != nullptr;};
    void deleteStared() { this->stared_ = nullptr;};
    inline bool stared() const { DARABONBA_PTR_GET_DEFAULT(stared_, false) };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles& setStared(bool stared) { DARABONBA_PTR_SET_VALUE(stared_, stared) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetPropertiesResponseBodyDataIntelligentSearchConfigSearchSamplesArticles& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<bool> select_ = nullptr;
    std::shared_ptr<bool> stared_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
