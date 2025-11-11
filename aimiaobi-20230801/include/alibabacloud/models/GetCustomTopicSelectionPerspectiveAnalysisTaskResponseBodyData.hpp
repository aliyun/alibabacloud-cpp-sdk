// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCUSTOMTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCUSTOMTOPICSELECTIONPERSPECTIVEANALYSISTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(CustomViewPointsResult, customViewPointsResult_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomViewPointsResult, customViewPointsResult_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData() = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData(const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData &) = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData(GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData &&) = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData() = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData& operator=(const GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData &) = default ;
    GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData& operator=(GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customViewPointsResult_ == nullptr
        && return this->errorMessage_ == nullptr && return this->status_ == nullptr; };
    // customViewPointsResult Field Functions 
    bool hasCustomViewPointsResult() const { return this->customViewPointsResult_ != nullptr;};
    void deleteCustomViewPointsResult() { this->customViewPointsResult_ = nullptr;};
    inline const Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult & customViewPointsResult() const { DARABONBA_PTR_GET_CONST(customViewPointsResult_, Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult) };
    inline Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult customViewPointsResult() { DARABONBA_PTR_GET(customViewPointsResult_, Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult) };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setCustomViewPointsResult(const Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult & customViewPointsResult) { DARABONBA_PTR_SET_VALUE(customViewPointsResult_, customViewPointsResult) };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setCustomViewPointsResult(Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult && customViewPointsResult) { DARABONBA_PTR_SET_RVALUE(customViewPointsResult_, customViewPointsResult) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<Models::GetCustomTopicSelectionPerspectiveAnalysisTaskResponseBodyDataCustomViewPointsResult> customViewPointsResult_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
