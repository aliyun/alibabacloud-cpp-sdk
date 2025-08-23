// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUTHOTTOPICSUMMARIESNEWS_HPP_
#define ALIBABACLOUD_MODELS_RUNHOTTOPICCHATRESPONSEBODYPAYLOADOUTPUTHOTTOPICSUMMARIESNEWS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews& obj) { 
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(url, url_);
    };
    friend void from_json(const Darabonba::Json& j, RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews& obj) { 
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(url, url_);
    };
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews() = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews(const RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews &) = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews(RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews &&) = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews() = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews& operator=(const RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews &) = default ;
    RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews& operator=(RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->title_ != nullptr
        && this->url_ != nullptr; };
    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline RunHotTopicChatResponseBodyPayloadOutputHotTopicSummariesNews& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
