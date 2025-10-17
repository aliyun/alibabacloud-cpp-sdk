// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTHOTTOPICSUMMARIESRESPONSEBODYDATANEWS_HPP_
#define ALIBABACLOUD_MODELS_LISTHOTTOPICSUMMARIESRESPONSEBODYDATANEWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListHotTopicSummariesResponseBodyDataNewsComments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class ListHotTopicSummariesResponseBodyDataNews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListHotTopicSummariesResponseBodyDataNews& obj) { 
      DARABONBA_PTR_TO_JSON(comments, comments_);
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(pubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, ListHotTopicSummariesResponseBodyDataNews& obj) { 
      DARABONBA_PTR_FROM_JSON(comments, comments_);
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(pubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    ListHotTopicSummariesResponseBodyDataNews() = default ;
    ListHotTopicSummariesResponseBodyDataNews(const ListHotTopicSummariesResponseBodyDataNews &) = default ;
    ListHotTopicSummariesResponseBodyDataNews(ListHotTopicSummariesResponseBodyDataNews &&) = default ;
    ListHotTopicSummariesResponseBodyDataNews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListHotTopicSummariesResponseBodyDataNews() = default ;
    ListHotTopicSummariesResponseBodyDataNews& operator=(const ListHotTopicSummariesResponseBodyDataNews &) = default ;
    ListHotTopicSummariesResponseBodyDataNews& operator=(ListHotTopicSummariesResponseBodyDataNews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comments_ == nullptr
        && return this->content_ == nullptr && return this->pubTime_ == nullptr && return this->title_ == nullptr && return this->url_ == nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline const vector<Models::ListHotTopicSummariesResponseBodyDataNewsComments> & comments() const { DARABONBA_PTR_GET_CONST(comments_, vector<Models::ListHotTopicSummariesResponseBodyDataNewsComments>) };
    inline vector<Models::ListHotTopicSummariesResponseBodyDataNewsComments> comments() { DARABONBA_PTR_GET(comments_, vector<Models::ListHotTopicSummariesResponseBodyDataNewsComments>) };
    inline ListHotTopicSummariesResponseBodyDataNews& setComments(const vector<Models::ListHotTopicSummariesResponseBodyDataNewsComments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
    inline ListHotTopicSummariesResponseBodyDataNews& setComments(vector<Models::ListHotTopicSummariesResponseBodyDataNewsComments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ListHotTopicSummariesResponseBodyDataNews& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline ListHotTopicSummariesResponseBodyDataNews& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline ListHotTopicSummariesResponseBodyDataNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline ListHotTopicSummariesResponseBodyDataNews& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<vector<Models::ListHotTopicSummariesResponseBodyDataNewsComments>> comments_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    // url
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
