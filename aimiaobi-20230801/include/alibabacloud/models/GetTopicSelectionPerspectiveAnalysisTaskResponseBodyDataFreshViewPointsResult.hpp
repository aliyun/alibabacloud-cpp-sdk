// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAFRESHVIEWPOINTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAFRESHVIEWPOINTSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResultAttitudes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attitudes_ != nullptr; };
    // attitudes Field Functions 
    bool hasAttitudes() const { return this->attitudes_ != nullptr;};
    void deleteAttitudes() { this->attitudes_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResultAttitudes> & attitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResultAttitudes>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResultAttitudes> attitudes() { DARABONBA_PTR_GET(attitudes_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResultAttitudes>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult& setAttitudes(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResultAttitudes> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResult& setAttitudes(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResultAttitudes> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


  protected:
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataFreshViewPointsResultAttitudes>> attitudes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
