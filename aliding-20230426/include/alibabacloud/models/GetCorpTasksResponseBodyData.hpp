// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCORPTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCORPTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetCorpTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCorpTasksResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ActiveTimeGMT, activeTimeGMT_);
      DARABONBA_PTR_TO_JSON(ActualActionerId, actualActionerId_);
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_PTR_TO_JSON(FinishTimeGMT, finishTimeGMT_);
      DARABONBA_PTR_TO_JSON(OriginatorEmail, originatorEmail_);
      DARABONBA_PTR_TO_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_TO_JSON(OriginatorName, originatorName_);
      DARABONBA_PTR_TO_JSON(OriginatorNameInEnglish, originatorNameInEnglish_);
      DARABONBA_PTR_TO_JSON(OriginatorNickName, originatorNickName_);
      DARABONBA_PTR_TO_JSON(OriginatorNickNameEn, originatorNickNameEn_);
      DARABONBA_PTR_TO_JSON(OriginatorNickNameInEnglish, originatorNickNameInEnglish_);
      DARABONBA_PTR_TO_JSON(OriginatorPhoto, originatorPhoto_);
      DARABONBA_PTR_TO_JSON(OutResult, outResult_);
      DARABONBA_PTR_TO_JSON(OutResultName, outResultName_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TaskType, taskType_);
      DARABONBA_PTR_TO_JSON(Title, title_);
      DARABONBA_PTR_TO_JSON(TitleInEnglish, titleInEnglish_);
    };
    friend void from_json(const Darabonba::Json& j, GetCorpTasksResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ActiveTimeGMT, activeTimeGMT_);
      DARABONBA_PTR_FROM_JSON(ActualActionerId, actualActionerId_);
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(CreateTimeGMT, createTimeGMT_);
      DARABONBA_PTR_FROM_JSON(FinishTimeGMT, finishTimeGMT_);
      DARABONBA_PTR_FROM_JSON(OriginatorEmail, originatorEmail_);
      DARABONBA_PTR_FROM_JSON(OriginatorId, originatorId_);
      DARABONBA_PTR_FROM_JSON(OriginatorName, originatorName_);
      DARABONBA_PTR_FROM_JSON(OriginatorNameInEnglish, originatorNameInEnglish_);
      DARABONBA_PTR_FROM_JSON(OriginatorNickName, originatorNickName_);
      DARABONBA_PTR_FROM_JSON(OriginatorNickNameEn, originatorNickNameEn_);
      DARABONBA_PTR_FROM_JSON(OriginatorNickNameInEnglish, originatorNickNameInEnglish_);
      DARABONBA_PTR_FROM_JSON(OriginatorPhoto, originatorPhoto_);
      DARABONBA_PTR_FROM_JSON(OutResult, outResult_);
      DARABONBA_PTR_FROM_JSON(OutResultName, outResultName_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TaskType, taskType_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
      DARABONBA_PTR_FROM_JSON(TitleInEnglish, titleInEnglish_);
    };
    GetCorpTasksResponseBodyData() = default ;
    GetCorpTasksResponseBodyData(const GetCorpTasksResponseBodyData &) = default ;
    GetCorpTasksResponseBodyData(GetCorpTasksResponseBodyData &&) = default ;
    GetCorpTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCorpTasksResponseBodyData() = default ;
    GetCorpTasksResponseBodyData& operator=(const GetCorpTasksResponseBodyData &) = default ;
    GetCorpTasksResponseBodyData& operator=(GetCorpTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->activeTimeGMT_ != nullptr
        && this->actualActionerId_ != nullptr && this->appType_ != nullptr && this->createTimeGMT_ != nullptr && this->finishTimeGMT_ != nullptr && this->originatorEmail_ != nullptr
        && this->originatorId_ != nullptr && this->originatorName_ != nullptr && this->originatorNameInEnglish_ != nullptr && this->originatorNickName_ != nullptr && this->originatorNickNameEn_ != nullptr
        && this->originatorNickNameInEnglish_ != nullptr && this->originatorPhoto_ != nullptr && this->outResult_ != nullptr && this->outResultName_ != nullptr && this->processInstanceId_ != nullptr
        && this->status_ != nullptr && this->taskId_ != nullptr && this->taskType_ != nullptr && this->title_ != nullptr && this->titleInEnglish_ != nullptr; };
    // activeTimeGMT Field Functions 
    bool hasActiveTimeGMT() const { return this->activeTimeGMT_ != nullptr;};
    void deleteActiveTimeGMT() { this->activeTimeGMT_ = nullptr;};
    inline string activeTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(activeTimeGMT_, "") };
    inline GetCorpTasksResponseBodyData& setActiveTimeGMT(string activeTimeGMT) { DARABONBA_PTR_SET_VALUE(activeTimeGMT_, activeTimeGMT) };


    // actualActionerId Field Functions 
    bool hasActualActionerId() const { return this->actualActionerId_ != nullptr;};
    void deleteActualActionerId() { this->actualActionerId_ = nullptr;};
    inline string actualActionerId() const { DARABONBA_PTR_GET_DEFAULT(actualActionerId_, "") };
    inline GetCorpTasksResponseBodyData& setActualActionerId(string actualActionerId) { DARABONBA_PTR_SET_VALUE(actualActionerId_, actualActionerId) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetCorpTasksResponseBodyData& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createTimeGMT Field Functions 
    bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
    void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
    inline string createTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
    inline GetCorpTasksResponseBodyData& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


    // finishTimeGMT Field Functions 
    bool hasFinishTimeGMT() const { return this->finishTimeGMT_ != nullptr;};
    void deleteFinishTimeGMT() { this->finishTimeGMT_ = nullptr;};
    inline string finishTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(finishTimeGMT_, "") };
    inline GetCorpTasksResponseBodyData& setFinishTimeGMT(string finishTimeGMT) { DARABONBA_PTR_SET_VALUE(finishTimeGMT_, finishTimeGMT) };


    // originatorEmail Field Functions 
    bool hasOriginatorEmail() const { return this->originatorEmail_ != nullptr;};
    void deleteOriginatorEmail() { this->originatorEmail_ = nullptr;};
    inline string originatorEmail() const { DARABONBA_PTR_GET_DEFAULT(originatorEmail_, "") };
    inline GetCorpTasksResponseBodyData& setOriginatorEmail(string originatorEmail) { DARABONBA_PTR_SET_VALUE(originatorEmail_, originatorEmail) };


    // originatorId Field Functions 
    bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
    void deleteOriginatorId() { this->originatorId_ = nullptr;};
    inline string originatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
    inline GetCorpTasksResponseBodyData& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


    // originatorName Field Functions 
    bool hasOriginatorName() const { return this->originatorName_ != nullptr;};
    void deleteOriginatorName() { this->originatorName_ = nullptr;};
    inline string originatorName() const { DARABONBA_PTR_GET_DEFAULT(originatorName_, "") };
    inline GetCorpTasksResponseBodyData& setOriginatorName(string originatorName) { DARABONBA_PTR_SET_VALUE(originatorName_, originatorName) };


    // originatorNameInEnglish Field Functions 
    bool hasOriginatorNameInEnglish() const { return this->originatorNameInEnglish_ != nullptr;};
    void deleteOriginatorNameInEnglish() { this->originatorNameInEnglish_ = nullptr;};
    inline string originatorNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(originatorNameInEnglish_, "") };
    inline GetCorpTasksResponseBodyData& setOriginatorNameInEnglish(string originatorNameInEnglish) { DARABONBA_PTR_SET_VALUE(originatorNameInEnglish_, originatorNameInEnglish) };


    // originatorNickName Field Functions 
    bool hasOriginatorNickName() const { return this->originatorNickName_ != nullptr;};
    void deleteOriginatorNickName() { this->originatorNickName_ = nullptr;};
    inline string originatorNickName() const { DARABONBA_PTR_GET_DEFAULT(originatorNickName_, "") };
    inline GetCorpTasksResponseBodyData& setOriginatorNickName(string originatorNickName) { DARABONBA_PTR_SET_VALUE(originatorNickName_, originatorNickName) };


    // originatorNickNameEn Field Functions 
    bool hasOriginatorNickNameEn() const { return this->originatorNickNameEn_ != nullptr;};
    void deleteOriginatorNickNameEn() { this->originatorNickNameEn_ = nullptr;};
    inline string originatorNickNameEn() const { DARABONBA_PTR_GET_DEFAULT(originatorNickNameEn_, "") };
    inline GetCorpTasksResponseBodyData& setOriginatorNickNameEn(string originatorNickNameEn) { DARABONBA_PTR_SET_VALUE(originatorNickNameEn_, originatorNickNameEn) };


    // originatorNickNameInEnglish Field Functions 
    bool hasOriginatorNickNameInEnglish() const { return this->originatorNickNameInEnglish_ != nullptr;};
    void deleteOriginatorNickNameInEnglish() { this->originatorNickNameInEnglish_ = nullptr;};
    inline string originatorNickNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(originatorNickNameInEnglish_, "") };
    inline GetCorpTasksResponseBodyData& setOriginatorNickNameInEnglish(string originatorNickNameInEnglish) { DARABONBA_PTR_SET_VALUE(originatorNickNameInEnglish_, originatorNickNameInEnglish) };


    // originatorPhoto Field Functions 
    bool hasOriginatorPhoto() const { return this->originatorPhoto_ != nullptr;};
    void deleteOriginatorPhoto() { this->originatorPhoto_ = nullptr;};
    inline string originatorPhoto() const { DARABONBA_PTR_GET_DEFAULT(originatorPhoto_, "") };
    inline GetCorpTasksResponseBodyData& setOriginatorPhoto(string originatorPhoto) { DARABONBA_PTR_SET_VALUE(originatorPhoto_, originatorPhoto) };


    // outResult Field Functions 
    bool hasOutResult() const { return this->outResult_ != nullptr;};
    void deleteOutResult() { this->outResult_ = nullptr;};
    inline string outResult() const { DARABONBA_PTR_GET_DEFAULT(outResult_, "") };
    inline GetCorpTasksResponseBodyData& setOutResult(string outResult) { DARABONBA_PTR_SET_VALUE(outResult_, outResult) };


    // outResultName Field Functions 
    bool hasOutResultName() const { return this->outResultName_ != nullptr;};
    void deleteOutResultName() { this->outResultName_ = nullptr;};
    inline string outResultName() const { DARABONBA_PTR_GET_DEFAULT(outResultName_, "") };
    inline GetCorpTasksResponseBodyData& setOutResultName(string outResultName) { DARABONBA_PTR_SET_VALUE(outResultName_, outResultName) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetCorpTasksResponseBodyData& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetCorpTasksResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetCorpTasksResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // taskType Field Functions 
    bool hasTaskType() const { return this->taskType_ != nullptr;};
    void deleteTaskType() { this->taskType_ = nullptr;};
    inline string taskType() const { DARABONBA_PTR_GET_DEFAULT(taskType_, "") };
    inline GetCorpTasksResponseBodyData& setTaskType(string taskType) { DARABONBA_PTR_SET_VALUE(taskType_, taskType) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetCorpTasksResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // titleInEnglish Field Functions 
    bool hasTitleInEnglish() const { return this->titleInEnglish_ != nullptr;};
    void deleteTitleInEnglish() { this->titleInEnglish_ = nullptr;};
    inline string titleInEnglish() const { DARABONBA_PTR_GET_DEFAULT(titleInEnglish_, "") };
    inline GetCorpTasksResponseBodyData& setTitleInEnglish(string titleInEnglish) { DARABONBA_PTR_SET_VALUE(titleInEnglish_, titleInEnglish) };


  protected:
    std::shared_ptr<string> activeTimeGMT_ = nullptr;
    std::shared_ptr<string> actualActionerId_ = nullptr;
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> createTimeGMT_ = nullptr;
    std::shared_ptr<string> finishTimeGMT_ = nullptr;
    std::shared_ptr<string> originatorEmail_ = nullptr;
    std::shared_ptr<string> originatorId_ = nullptr;
    std::shared_ptr<string> originatorName_ = nullptr;
    std::shared_ptr<string> originatorNameInEnglish_ = nullptr;
    std::shared_ptr<string> originatorNickName_ = nullptr;
    std::shared_ptr<string> originatorNickNameEn_ = nullptr;
    std::shared_ptr<string> originatorNickNameInEnglish_ = nullptr;
    std::shared_ptr<string> originatorPhoto_ = nullptr;
    std::shared_ptr<string> outResult_ = nullptr;
    std::shared_ptr<string> outResultName_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<string> taskType_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> titleInEnglish_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
