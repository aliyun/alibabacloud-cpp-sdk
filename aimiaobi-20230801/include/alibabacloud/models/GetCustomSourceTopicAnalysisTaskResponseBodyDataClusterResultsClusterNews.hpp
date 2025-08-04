// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMSOURCETOPICANALYSISTASKRESPONSEBODYDATACLUSTERRESULTSCLUSTERNEWS_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMSOURCETOPICANALYSISTASKRESPONSEBODYDATACLUSTERRESULTSCLUSTERNEWS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews& obj) { 
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(Url, url_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews& obj) { 
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(Url, url_);
    };
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews() = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews(const GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews &) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews(GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews &&) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews() = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews& operator=(const GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews &) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews& operator=(GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews &&) = default ;
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
    inline GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // url Field Functions 
    bool hasUrl() const { return this->url_ != nullptr;};
    void deleteUrl() { this->url_ = nullptr;};
    inline string url() const { DARABONBA_PTR_GET_DEFAULT(url_, "") };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews& setUrl(string url) { DARABONBA_PTR_SET_VALUE(url_, url) };


  protected:
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> url_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
