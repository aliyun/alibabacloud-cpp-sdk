// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRECISIONTASKRESPONSEBODYDATAPRECISIONTASK_HPP_
#define ALIBABACLOUD_MODELS_LISTPRECISIONTASKRESPONSEBODYDATAPRECISIONTASK_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class ListPrecisionTaskResponseBodyDataPrecisionTask : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPrecisionTaskResponseBodyDataPrecisionTask& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_TO_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(IncorrectWords, incorrectWords_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Precisions, precisions_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VerifiedCount, verifiedCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPrecisionTaskResponseBodyDataPrecisionTask& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(DataSetId, dataSetId_);
      DARABONBA_PTR_FROM_JSON(DataSetName, dataSetName_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(IncorrectWords, incorrectWords_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Precisions, precisions_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VerifiedCount, verifiedCount_);
    };
    ListPrecisionTaskResponseBodyDataPrecisionTask() = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTask(const ListPrecisionTaskResponseBodyDataPrecisionTask &) = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTask(ListPrecisionTaskResponseBodyDataPrecisionTask &&) = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTask(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPrecisionTaskResponseBodyDataPrecisionTask() = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTask& operator=(const ListPrecisionTaskResponseBodyDataPrecisionTask &) = default ;
    ListPrecisionTaskResponseBodyDataPrecisionTask& operator=(ListPrecisionTaskResponseBodyDataPrecisionTask &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createTime_ == nullptr
        && return this->dataSetId_ == nullptr && return this->dataSetName_ == nullptr && return this->duration_ == nullptr && return this->incorrectWords_ == nullptr && return this->name_ == nullptr
        && return this->precisions_ == nullptr && return this->source_ == nullptr && return this->status_ == nullptr && return this->taskId_ == nullptr && return this->totalCount_ == nullptr
        && return this->updateTime_ == nullptr && return this->verifiedCount_ == nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSetId Field Functions 
    bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
    void deleteDataSetId() { this->dataSetId_ = nullptr;};
    inline int64_t dataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, 0L) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setDataSetId(int64_t dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


    // dataSetName Field Functions 
    bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
    void deleteDataSetName() { this->dataSetName_ = nullptr;};
    inline string dataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // incorrectWords Field Functions 
    bool hasIncorrectWords() const { return this->incorrectWords_ != nullptr;};
    void deleteIncorrectWords() { this->incorrectWords_ = nullptr;};
    inline int32_t incorrectWords() const { DARABONBA_PTR_GET_DEFAULT(incorrectWords_, 0) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setIncorrectWords(int32_t incorrectWords) { DARABONBA_PTR_SET_VALUE(incorrectWords_, incorrectWords) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // precisions Field Functions 
    bool hasPrecisions() const { return this->precisions_ != nullptr;};
    void deletePrecisions() { this->precisions_ = nullptr;};
    inline const Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions & precisions() const { DARABONBA_PTR_GET_CONST(precisions_, Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions) };
    inline Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions precisions() { DARABONBA_PTR_GET(precisions_, Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setPrecisions(const Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions & precisions) { DARABONBA_PTR_SET_VALUE(precisions_, precisions) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setPrecisions(Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions && precisions) { DARABONBA_PTR_SET_RVALUE(precisions_, precisions) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int32_t source() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // verifiedCount Field Functions 
    bool hasVerifiedCount() const { return this->verifiedCount_ != nullptr;};
    void deleteVerifiedCount() { this->verifiedCount_ = nullptr;};
    inline int32_t verifiedCount() const { DARABONBA_PTR_GET_DEFAULT(verifiedCount_, 0) };
    inline ListPrecisionTaskResponseBodyDataPrecisionTask& setVerifiedCount(int32_t verifiedCount) { DARABONBA_PTR_SET_VALUE(verifiedCount_, verifiedCount) };


  protected:
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<int64_t> dataSetId_ = nullptr;
    std::shared_ptr<string> dataSetName_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<int32_t> incorrectWords_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::ListPrecisionTaskResponseBodyDataPrecisionTaskPrecisions> precisions_ = nullptr;
    std::shared_ptr<int32_t> source_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<string> taskId_ = nullptr;
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<int32_t> verifiedCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Qualitycheck20190115
#endif
