// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTRATEGYEXECUTIONRECORDRESPONSEBODYEXECUTIONRECORDLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTSTRATEGYEXECUTIONRECORDRESPONSEBODYEXECUTIONRECORDLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class ListStrategyExecutionRecordResponseBodyExecutionRecordList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStrategyExecutionRecordResponseBodyExecutionRecordList& obj) { 
      DARABONBA_PTR_TO_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_TO_JSON(JobParams, jobParams_);
      DARABONBA_PTR_TO_JSON(MediaId, mediaId_);
      DARABONBA_PTR_TO_JSON(MediaName, mediaName_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_TO_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_TO_JSON(StrategyType, strategyType_);
    };
    friend void from_json(const Darabonba::Json& j, ListStrategyExecutionRecordResponseBodyExecutionRecordList& obj) { 
      DARABONBA_PTR_FROM_JSON(CompleteTime, completeTime_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(ExecuteTime, executeTime_);
      DARABONBA_PTR_FROM_JSON(JobParams, jobParams_);
      DARABONBA_PTR_FROM_JSON(MediaId, mediaId_);
      DARABONBA_PTR_FROM_JSON(MediaName, mediaName_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(StrategyId, strategyId_);
      DARABONBA_PTR_FROM_JSON(StrategyName, strategyName_);
      DARABONBA_PTR_FROM_JSON(StrategyType, strategyType_);
    };
    ListStrategyExecutionRecordResponseBodyExecutionRecordList() = default ;
    ListStrategyExecutionRecordResponseBodyExecutionRecordList(const ListStrategyExecutionRecordResponseBodyExecutionRecordList &) = default ;
    ListStrategyExecutionRecordResponseBodyExecutionRecordList(ListStrategyExecutionRecordResponseBodyExecutionRecordList &&) = default ;
    ListStrategyExecutionRecordResponseBodyExecutionRecordList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStrategyExecutionRecordResponseBodyExecutionRecordList() = default ;
    ListStrategyExecutionRecordResponseBodyExecutionRecordList& operator=(const ListStrategyExecutionRecordResponseBodyExecutionRecordList &) = default ;
    ListStrategyExecutionRecordResponseBodyExecutionRecordList& operator=(ListStrategyExecutionRecordResponseBodyExecutionRecordList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->completeTime_ != nullptr
        && this->createTime_ != nullptr && this->errorCode_ != nullptr && this->errorMessage_ != nullptr && this->executeTime_ != nullptr && this->jobParams_ != nullptr
        && this->mediaId_ != nullptr && this->mediaName_ != nullptr && this->status_ != nullptr && this->strategyId_ != nullptr && this->strategyName_ != nullptr
        && this->strategyType_ != nullptr; };
    // completeTime Field Functions 
    bool hasCompleteTime() const { return this->completeTime_ != nullptr;};
    void deleteCompleteTime() { this->completeTime_ = nullptr;};
    inline string completeTime() const { DARABONBA_PTR_GET_DEFAULT(completeTime_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setCompleteTime(string completeTime) { DARABONBA_PTR_SET_VALUE(completeTime_, completeTime) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // executeTime Field Functions 
    bool hasExecuteTime() const { return this->executeTime_ != nullptr;};
    void deleteExecuteTime() { this->executeTime_ = nullptr;};
    inline string executeTime() const { DARABONBA_PTR_GET_DEFAULT(executeTime_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setExecuteTime(string executeTime) { DARABONBA_PTR_SET_VALUE(executeTime_, executeTime) };


    // jobParams Field Functions 
    bool hasJobParams() const { return this->jobParams_ != nullptr;};
    void deleteJobParams() { this->jobParams_ = nullptr;};
    inline string jobParams() const { DARABONBA_PTR_GET_DEFAULT(jobParams_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setJobParams(string jobParams) { DARABONBA_PTR_SET_VALUE(jobParams_, jobParams) };


    // mediaId Field Functions 
    bool hasMediaId() const { return this->mediaId_ != nullptr;};
    void deleteMediaId() { this->mediaId_ = nullptr;};
    inline string mediaId() const { DARABONBA_PTR_GET_DEFAULT(mediaId_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setMediaId(string mediaId) { DARABONBA_PTR_SET_VALUE(mediaId_, mediaId) };


    // mediaName Field Functions 
    bool hasMediaName() const { return this->mediaName_ != nullptr;};
    void deleteMediaName() { this->mediaName_ = nullptr;};
    inline string mediaName() const { DARABONBA_PTR_GET_DEFAULT(mediaName_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setMediaName(string mediaName) { DARABONBA_PTR_SET_VALUE(mediaName_, mediaName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // strategyId Field Functions 
    bool hasStrategyId() const { return this->strategyId_ != nullptr;};
    void deleteStrategyId() { this->strategyId_ = nullptr;};
    inline string strategyId() const { DARABONBA_PTR_GET_DEFAULT(strategyId_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setStrategyId(string strategyId) { DARABONBA_PTR_SET_VALUE(strategyId_, strategyId) };


    // strategyName Field Functions 
    bool hasStrategyName() const { return this->strategyName_ != nullptr;};
    void deleteStrategyName() { this->strategyName_ = nullptr;};
    inline string strategyName() const { DARABONBA_PTR_GET_DEFAULT(strategyName_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setStrategyName(string strategyName) { DARABONBA_PTR_SET_VALUE(strategyName_, strategyName) };


    // strategyType Field Functions 
    bool hasStrategyType() const { return this->strategyType_ != nullptr;};
    void deleteStrategyType() { this->strategyType_ = nullptr;};
    inline string strategyType() const { DARABONBA_PTR_GET_DEFAULT(strategyType_, "") };
    inline ListStrategyExecutionRecordResponseBodyExecutionRecordList& setStrategyType(string strategyType) { DARABONBA_PTR_SET_VALUE(strategyType_, strategyType) };


  protected:
    std::shared_ptr<string> completeTime_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> errorCode_ = nullptr;
    std::shared_ptr<string> errorMessage_ = nullptr;
    std::shared_ptr<string> executeTime_ = nullptr;
    std::shared_ptr<string> jobParams_ = nullptr;
    std::shared_ptr<string> mediaId_ = nullptr;
    std::shared_ptr<string> mediaName_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> strategyId_ = nullptr;
    std::shared_ptr<string> strategyName_ = nullptr;
    std::shared_ptr<string> strategyType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
