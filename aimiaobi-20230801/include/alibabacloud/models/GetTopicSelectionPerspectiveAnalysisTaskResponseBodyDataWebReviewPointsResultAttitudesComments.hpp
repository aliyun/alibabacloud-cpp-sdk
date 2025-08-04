// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAWEBREVIEWPOINTSRESULTATTITUDESCOMMENTS_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAWEBREVIEWPOINTSRESULTATTITUDESCOMMENTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments& obj) { 
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Text, text_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
      DARABONBA_PTR_TO_JSON(Username, username_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments& obj) { 
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Text, text_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
      DARABONBA_PTR_FROM_JSON(Username, username_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->source_ != nullptr
        && this->text_ != nullptr && this->title_ != nullptr && this->url_ != nullptr && this->username_ != nullptr; };
    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // text Field Functions 
    bool hasText() const { return this->text_ != nullptr;};
    void deleteText() { this->text_ = nullptr;};
    inline string text() const { DARABONBA_PTR_GET_DEFAULT(text_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments& setText(string text) { DARABONBA_PTR_SET_VALUE(text_, text) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


    // username Field Functions 
    bool hasUsername() const { return this->username_ != nullptr;};
    void deleteUsername() { this->username_ = nullptr;};
    inline string username() const { DARABONBA_PTR_GET_DEFAULT(username_, "") };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataWebReviewPointsResultAttitudesComments& setUsername(string username) { DARABONBA_PTR_SET_VALUE(username_, username) };


  protected:
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> text_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
    std::shared_ptr<string> username_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
