// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITCUSTOMSOURCETOPICANALYSISREQUESTNEWS_HPP_
#define ALIBABACLOUD_MODELS_SUBMITCUSTOMSOURCETOPICANALYSISREQUESTNEWS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SubmitCustomSourceTopicAnalysisRequestNewsComments.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class SubmitCustomSourceTopicAnalysisRequestNews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitCustomSourceTopicAnalysisRequestNews& obj) { 
      DARABONBA_PTR_TO_JSON(Comments, comments_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(PubTime, pubTime_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitCustomSourceTopicAnalysisRequestNews& obj) { 
      DARABONBA_PTR_FROM_JSON(Comments, comments_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(PubTime, pubTime_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    SubmitCustomSourceTopicAnalysisRequestNews() = default ;
    SubmitCustomSourceTopicAnalysisRequestNews(const SubmitCustomSourceTopicAnalysisRequestNews &) = default ;
    SubmitCustomSourceTopicAnalysisRequestNews(SubmitCustomSourceTopicAnalysisRequestNews &&) = default ;
    SubmitCustomSourceTopicAnalysisRequestNews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitCustomSourceTopicAnalysisRequestNews() = default ;
    SubmitCustomSourceTopicAnalysisRequestNews& operator=(const SubmitCustomSourceTopicAnalysisRequestNews &) = default ;
    SubmitCustomSourceTopicAnalysisRequestNews& operator=(SubmitCustomSourceTopicAnalysisRequestNews &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->comments_ != nullptr
        && this->content_ != nullptr && this->pubTime_ != nullptr && this->source_ != nullptr && this->title_ != nullptr && this->url_ != nullptr; };
    // comments Field Functions 
    bool hasComments() const { return this->comments_ != nullptr;};
    void deleteComments() { this->comments_ = nullptr;};
    inline const vector<Models::SubmitCustomSourceTopicAnalysisRequestNewsComments> & comments() const { DARABONBA_PTR_GET_CONST(comments_, vector<Models::SubmitCustomSourceTopicAnalysisRequestNewsComments>) };
    inline vector<Models::SubmitCustomSourceTopicAnalysisRequestNewsComments> comments() { DARABONBA_PTR_GET(comments_, vector<Models::SubmitCustomSourceTopicAnalysisRequestNewsComments>) };
    inline SubmitCustomSourceTopicAnalysisRequestNews& setComments(const vector<Models::SubmitCustomSourceTopicAnalysisRequestNewsComments> & comments) { DARABONBA_PTR_SET_VALUE(comments_, comments) };
    inline SubmitCustomSourceTopicAnalysisRequestNews& setComments(vector<Models::SubmitCustomSourceTopicAnalysisRequestNewsComments> && comments) { DARABONBA_PTR_SET_RVALUE(comments_, comments) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SubmitCustomSourceTopicAnalysisRequestNews& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // pubTime Field Functions 
    bool hasPubTime() const { return this->pubTime_ != nullptr;};
    void deletePubTime() { this->pubTime_ = nullptr;};
    inline string pubTime() const { DARABONBA_PTR_GET_DEFAULT(pubTime_, "") };
    inline SubmitCustomSourceTopicAnalysisRequestNews& setPubTime(string pubTime) { DARABONBA_PTR_SET_VALUE(pubTime_, pubTime) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline SubmitCustomSourceTopicAnalysisRequestNews& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline SubmitCustomSourceTopicAnalysisRequestNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline SubmitCustomSourceTopicAnalysisRequestNews& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<vector<Models::SubmitCustomSourceTopicAnalysisRequestNewsComments>> comments_ = nullptr;
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<string> pubTime_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
