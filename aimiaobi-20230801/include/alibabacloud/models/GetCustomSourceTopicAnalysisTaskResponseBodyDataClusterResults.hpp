// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMSOURCETOPICANALYSISTASKRESPONSEBODYDATACLUSTERRESULTS_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMSOURCETOPICANALYSISTASKRESPONSEBODYDATACLUSTERRESULTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterNews, clusterNews_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterNews, clusterNews_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults() = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults(const GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults &) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults(GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults &&) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults() = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults& operator=(const GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults &) = default ;
    GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults& operator=(GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterNews_ != nullptr
        && this->topic_ != nullptr; };
    // clusterNews Field Functions 
    bool hasClusterNews() const { return this->clusterNews_ != nullptr;};
    void deleteClusterNews() { this->clusterNews_ = nullptr;};
    inline const vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews> & clusterNews() const { DARABONBA_PTR_GET_CONST(clusterNews_, vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews>) };
    inline vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews> clusterNews() { DARABONBA_PTR_GET(clusterNews_, vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews>) };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults& setClusterNews(const vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews> & clusterNews) { DARABONBA_PTR_SET_VALUE(clusterNews_, clusterNews) };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults& setClusterNews(vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews> && clusterNews) { DARABONBA_PTR_SET_RVALUE(clusterNews_, clusterNews) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResults& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    std::shared_ptr<vector<Models::GetCustomSourceTopicAnalysisTaskResponseBodyDataClusterResultsClusterNews>> clusterNews_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
