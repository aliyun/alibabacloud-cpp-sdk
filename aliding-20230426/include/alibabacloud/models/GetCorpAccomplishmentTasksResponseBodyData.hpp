// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCORPACCOMPLISHMENTTASKSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCORPACCOMPLISHMENTTASKSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetCorpAccomplishmentTasksResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCorpAccomplishmentTasksResponseBodyData& obj) { 
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
      DARABONBA_PTR_TO_JSON(OriginatorNickNameInEnglish, originatorNickNameInEnglish_);
      DARABONBA_PTR_TO_JSON(OriginatorPhoto, originatorPhoto_);
      DARABONBA_PTR_TO_JSON(OutResult, outResult_);
      DARABONBA_PTR_TO_JSON(OutResultName, outResultName_);
      DARABONBA_PTR_TO_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_TO_JSON(Title, title_);
    };
    friend void from_json(const Darabonba::Json& j, GetCorpAccomplishmentTasksResponseBodyData& obj) { 
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
      DARABONBA_PTR_FROM_JSON(OriginatorNickNameInEnglish, originatorNickNameInEnglish_);
      DARABONBA_PTR_FROM_JSON(OriginatorPhoto, originatorPhoto_);
      DARABONBA_PTR_FROM_JSON(OutResult, outResult_);
      DARABONBA_PTR_FROM_JSON(OutResultName, outResultName_);
      DARABONBA_PTR_FROM_JSON(ProcessInstanceId, processInstanceId_);
      DARABONBA_PTR_FROM_JSON(Title, title_);
    };
    GetCorpAccomplishmentTasksResponseBodyData() = default ;
    GetCorpAccomplishmentTasksResponseBodyData(const GetCorpAccomplishmentTasksResponseBodyData &) = default ;
    GetCorpAccomplishmentTasksResponseBodyData(GetCorpAccomplishmentTasksResponseBodyData &&) = default ;
    GetCorpAccomplishmentTasksResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCorpAccomplishmentTasksResponseBodyData() = default ;
    GetCorpAccomplishmentTasksResponseBodyData& operator=(const GetCorpAccomplishmentTasksResponseBodyData &) = default ;
    GetCorpAccomplishmentTasksResponseBodyData& operator=(GetCorpAccomplishmentTasksResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->activeTimeGMT_ == nullptr
        && return this->actualActionerId_ == nullptr && return this->appType_ == nullptr && return this->createTimeGMT_ == nullptr && return this->finishTimeGMT_ == nullptr && return this->originatorEmail_ == nullptr
        && return this->originatorId_ == nullptr && return this->originatorName_ == nullptr && return this->originatorNameInEnglish_ == nullptr && return this->originatorNickName_ == nullptr && return this->originatorNickNameInEnglish_ == nullptr
        && return this->originatorPhoto_ == nullptr && return this->outResult_ == nullptr && return this->outResultName_ == nullptr && return this->processInstanceId_ == nullptr && return this->title_ == nullptr; };
    // activeTimeGMT Field Functions 
    bool hasActiveTimeGMT() const { return this->activeTimeGMT_ != nullptr;};
    void deleteActiveTimeGMT() { this->activeTimeGMT_ = nullptr;};
    inline string activeTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(activeTimeGMT_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setActiveTimeGMT(string activeTimeGMT) { DARABONBA_PTR_SET_VALUE(activeTimeGMT_, activeTimeGMT) };


    // actualActionerId Field Functions 
    bool hasActualActionerId() const { return this->actualActionerId_ != nullptr;};
    void deleteActualActionerId() { this->actualActionerId_ = nullptr;};
    inline string actualActionerId() const { DARABONBA_PTR_GET_DEFAULT(actualActionerId_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setActualActionerId(string actualActionerId) { DARABONBA_PTR_SET_VALUE(actualActionerId_, actualActionerId) };


    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // createTimeGMT Field Functions 
    bool hasCreateTimeGMT() const { return this->createTimeGMT_ != nullptr;};
    void deleteCreateTimeGMT() { this->createTimeGMT_ = nullptr;};
    inline string createTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(createTimeGMT_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setCreateTimeGMT(string createTimeGMT) { DARABONBA_PTR_SET_VALUE(createTimeGMT_, createTimeGMT) };


    // finishTimeGMT Field Functions 
    bool hasFinishTimeGMT() const { return this->finishTimeGMT_ != nullptr;};
    void deleteFinishTimeGMT() { this->finishTimeGMT_ = nullptr;};
    inline string finishTimeGMT() const { DARABONBA_PTR_GET_DEFAULT(finishTimeGMT_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setFinishTimeGMT(string finishTimeGMT) { DARABONBA_PTR_SET_VALUE(finishTimeGMT_, finishTimeGMT) };


    // originatorEmail Field Functions 
    bool hasOriginatorEmail() const { return this->originatorEmail_ != nullptr;};
    void deleteOriginatorEmail() { this->originatorEmail_ = nullptr;};
    inline string originatorEmail() const { DARABONBA_PTR_GET_DEFAULT(originatorEmail_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setOriginatorEmail(string originatorEmail) { DARABONBA_PTR_SET_VALUE(originatorEmail_, originatorEmail) };


    // originatorId Field Functions 
    bool hasOriginatorId() const { return this->originatorId_ != nullptr;};
    void deleteOriginatorId() { this->originatorId_ = nullptr;};
    inline string originatorId() const { DARABONBA_PTR_GET_DEFAULT(originatorId_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setOriginatorId(string originatorId) { DARABONBA_PTR_SET_VALUE(originatorId_, originatorId) };


    // originatorName Field Functions 
    bool hasOriginatorName() const { return this->originatorName_ != nullptr;};
    void deleteOriginatorName() { this->originatorName_ = nullptr;};
    inline string originatorName() const { DARABONBA_PTR_GET_DEFAULT(originatorName_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setOriginatorName(string originatorName) { DARABONBA_PTR_SET_VALUE(originatorName_, originatorName) };


    // originatorNameInEnglish Field Functions 
    bool hasOriginatorNameInEnglish() const { return this->originatorNameInEnglish_ != nullptr;};
    void deleteOriginatorNameInEnglish() { this->originatorNameInEnglish_ = nullptr;};
    inline string originatorNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(originatorNameInEnglish_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setOriginatorNameInEnglish(string originatorNameInEnglish) { DARABONBA_PTR_SET_VALUE(originatorNameInEnglish_, originatorNameInEnglish) };


    // originatorNickName Field Functions 
    bool hasOriginatorNickName() const { return this->originatorNickName_ != nullptr;};
    void deleteOriginatorNickName() { this->originatorNickName_ = nullptr;};
    inline string originatorNickName() const { DARABONBA_PTR_GET_DEFAULT(originatorNickName_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setOriginatorNickName(string originatorNickName) { DARABONBA_PTR_SET_VALUE(originatorNickName_, originatorNickName) };


    // originatorNickNameInEnglish Field Functions 
    bool hasOriginatorNickNameInEnglish() const { return this->originatorNickNameInEnglish_ != nullptr;};
    void deleteOriginatorNickNameInEnglish() { this->originatorNickNameInEnglish_ = nullptr;};
    inline string originatorNickNameInEnglish() const { DARABONBA_PTR_GET_DEFAULT(originatorNickNameInEnglish_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setOriginatorNickNameInEnglish(string originatorNickNameInEnglish) { DARABONBA_PTR_SET_VALUE(originatorNickNameInEnglish_, originatorNickNameInEnglish) };


    // originatorPhoto Field Functions 
    bool hasOriginatorPhoto() const { return this->originatorPhoto_ != nullptr;};
    void deleteOriginatorPhoto() { this->originatorPhoto_ = nullptr;};
    inline string originatorPhoto() const { DARABONBA_PTR_GET_DEFAULT(originatorPhoto_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setOriginatorPhoto(string originatorPhoto) { DARABONBA_PTR_SET_VALUE(originatorPhoto_, originatorPhoto) };


    // outResult Field Functions 
    bool hasOutResult() const { return this->outResult_ != nullptr;};
    void deleteOutResult() { this->outResult_ = nullptr;};
    inline string outResult() const { DARABONBA_PTR_GET_DEFAULT(outResult_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setOutResult(string outResult) { DARABONBA_PTR_SET_VALUE(outResult_, outResult) };


    // outResultName Field Functions 
    bool hasOutResultName() const { return this->outResultName_ != nullptr;};
    void deleteOutResultName() { this->outResultName_ = nullptr;};
    inline string outResultName() const { DARABONBA_PTR_GET_DEFAULT(outResultName_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setOutResultName(string outResultName) { DARABONBA_PTR_SET_VALUE(outResultName_, outResultName) };


    // processInstanceId Field Functions 
    bool hasProcessInstanceId() const { return this->processInstanceId_ != nullptr;};
    void deleteProcessInstanceId() { this->processInstanceId_ = nullptr;};
    inline string processInstanceId() const { DARABONBA_PTR_GET_DEFAULT(processInstanceId_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setProcessInstanceId(string processInstanceId) { DARABONBA_PTR_SET_VALUE(processInstanceId_, processInstanceId) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline GetCorpAccomplishmentTasksResponseBodyData& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


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
    std::shared_ptr<string> originatorNickNameInEnglish_ = nullptr;
    std::shared_ptr<string> originatorPhoto_ = nullptr;
    std::shared_ptr<string> outResult_ = nullptr;
    std::shared_ptr<string> outResultName_ = nullptr;
    std::shared_ptr<string> processInstanceId_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
