// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAHOTVIEWPOINTSRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATAHOTVIEWPOINTSRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult& obj) { 
      DARABONBA_PTR_TO_JSON(Attitudes, attitudes_);
    };
    friend void from_json(const Darabonba::Json& j, GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult& obj) { 
      DARABONBA_PTR_FROM_JSON(Attitudes, attitudes_);
    };
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult &&) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult() = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult& operator=(const GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult &) = default ;
    GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult& operator=(GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attitudes_ == nullptr; };
    // attitudes Field Functions 
    bool hasAttitudes() const { return this->attitudes_ != nullptr;};
    void deleteAttitudes() { this->attitudes_ = nullptr;};
    inline const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes> & attitudes() const { DARABONBA_PTR_GET_CONST(attitudes_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes>) };
    inline vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes> attitudes() { DARABONBA_PTR_GET(attitudes_, vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes>) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult& setAttitudes(const vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes> & attitudes) { DARABONBA_PTR_SET_VALUE(attitudes_, attitudes) };
    inline GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResult& setAttitudes(vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes> && attitudes) { DARABONBA_PTR_SET_RVALUE(attitudes_, attitudes) };


  protected:
    std::shared_ptr<vector<Models::GetTopicSelectionPerspectiveAnalysisTaskResponseBodyDataHotViewPointsResultAttitudes>> attitudes_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
