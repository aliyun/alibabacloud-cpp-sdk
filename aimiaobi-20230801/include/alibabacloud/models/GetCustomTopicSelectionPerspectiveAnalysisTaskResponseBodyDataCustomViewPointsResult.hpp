// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATACUSTOMVIEWPOINTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATACUSTOMVIEWPOINTSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResultAttitudes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
      DARABONBA_PTR_TO_JSON(Topic, topic_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
      DARABONBA_PTR_FROM_JSON(Topic, topic_);
    };
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult() = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult(const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult &) = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult(GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult &&) = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult() = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult& operator=(const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult &) = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult& operator=(GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attitudes_ == nullptr
        && return this->topic_ == nullptr; };
    // attitudes Field Functions 
    bool hasAttitudes() const { return this->attitudes_ != nullptr;};
    void deleteAttitudes() { this->attitudes_ = nullptr;};
    inline const vector<Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResultAttitudes> & attitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResultAttitudes>) };
    inline vector<Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResultAttitudes> attitudes() { DARABONBA_PTR_GET(attitudes_, vector<Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResultAttitudes>) };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult& setAttitudes(const vector<Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResultAttitudes> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult& setAttitudes(vector<Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResultAttitudes> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    std::shared_ptr<vector<Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResultAttitudes>> attitudes_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
