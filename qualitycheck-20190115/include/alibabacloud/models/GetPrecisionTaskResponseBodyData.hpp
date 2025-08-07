// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRECISIONTASKRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETPRECISIONTASKRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPrecisionTaskResponseBodyDataPrecisions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Qualitycheck20190115
{
namespace Models
{
  class GetPrecisionTaskResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrecisionTaskResponseBodyData& obj) { 
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
    friend void from_json(const Darabonba::Json& j, GetPrecisionTaskResponseBodyData& obj) { 
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
    GetPrecisionTaskResponseBodyData() = default ;
    GetPrecisionTaskResponseBodyData(const GetPrecisionTaskResponseBodyData &) = default ;
    GetPrecisionTaskResponseBodyData(GetPrecisionTaskResponseBodyData &&) = default ;
    GetPrecisionTaskResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrecisionTaskResponseBodyData() = default ;
    GetPrecisionTaskResponseBodyData& operator=(const GetPrecisionTaskResponseBodyData &) = default ;
    GetPrecisionTaskResponseBodyData& operator=(GetPrecisionTaskResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataSetId_ != nullptr
        && this->dataSetName_ != nullptr && this->duration_ != nullptr && this->incorrectWords_ != nullptr && this->name_ != nullptr && this->precisions_ != nullptr
        && this->source_ != nullptr && this->status_ != nullptr && this->taskId_ != nullptr && this->totalCount_ != nullptr && this->updateTime_ != nullptr
        && this->verifiedCount_ != nullptr; };
    // dataSetId Field Functions 
    bool hasDataSetId() const { return this->dataSetId_ != nullptr;};
    void deleteDataSetId() { this->dataSetId_ = nullptr;};
    inline int64_t dataSetId() const { DARABONBA_PTR_GET_DEFAULT(dataSetId_, 0L) };
    inline GetPrecisionTaskResponseBodyData& setDataSetId(int64_t dataSetId) { DARABONBA_PTR_SET_VALUE(dataSetId_, dataSetId) };


    // dataSetName Field Functions 
    bool hasDataSetName() const { return this->dataSetName_ != nullptr;};
    void deleteDataSetName() { this->dataSetName_ = nullptr;};
    inline string dataSetName() const { DARABONBA_PTR_GET_DEFAULT(dataSetName_, "") };
    inline GetPrecisionTaskResponseBodyData& setDataSetName(string dataSetName) { DARABONBA_PTR_SET_VALUE(dataSetName_, dataSetName) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline int32_t duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, 0) };
    inline GetPrecisionTaskResponseBodyData& setDuration(int32_t duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // incorrectWords Field Functions 
    bool hasIncorrectWords() const { return this->incorrectWords_ != nullptr;};
    void deleteIncorrectWords() { this->incorrectWords_ = nullptr;};
    inline int32_t incorrectWords() const { DARABONBA_PTR_GET_DEFAULT(incorrectWords_, 0) };
    inline GetPrecisionTaskResponseBodyData& setIncorrectWords(int32_t incorrectWords) { DARABONBA_PTR_SET_VALUE(incorrectWords_, incorrectWords) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetPrecisionTaskResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // precisions Field Functions 
    bool hasPrecisions() const { return this->precisions_ != nullptr;};
    void deletePrecisions() { this->precisions_ = nullptr;};
    inline const Models::GetPrecisionTaskResponseBodyDataPrecisions & precisions() const { DARABONBA_PTR_GET_CONST(precisions_, Models::GetPrecisionTaskResponseBodyDataPrecisions) };
    inline Models::GetPrecisionTaskResponseBodyDataPrecisions precisions() { DARABONBA_PTR_GET(precisions_, Models::GetPrecisionTaskResponseBodyDataPrecisions) };
    inline GetPrecisionTaskResponseBodyData& setPrecisions(const Models::GetPrecisionTaskResponseBodyDataPrecisions & precisions) { DARABONBA_PTR_SET_VALUE(precisions_, precisions) };
    inline GetPrecisionTaskResponseBodyData& setPrecisions(Models::GetPrecisionTaskResponseBodyDataPrecisions && precisions) { DARABONBA_PTR_SET_RVALUE(precisions_, precisions) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline int32_t source() const { DARABONBA_PTR_GET_DEFAULT(source_, 0) };
    inline GetPrecisionTaskResponseBodyData& setSource(int32_t source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetPrecisionTaskResponseBodyData& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline GetPrecisionTaskResponseBodyData& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline GetPrecisionTaskResponseBodyData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetPrecisionTaskResponseBodyData& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // verifiedCount Field Functions 
    bool hasVerifiedCount() const { return this->verifiedCount_ != nullptr;};
    void deleteVerifiedCount() { this->verifiedCount_ = nullptr;};
    inline int32_t verifiedCount() const { DARABONBA_PTR_GET_DEFAULT(verifiedCount_, 0) };
    inline GetPrecisionTaskResponseBodyData& setVerifiedCount(int32_t verifiedCount) { DARABONBA_PTR_SET_VALUE(verifiedCount_, verifiedCount) };


  protected:
    std::shared_ptr<int64_t> dataSetId_ = nullptr;
    std::shared_ptr<string> dataSetName_ = nullptr;
    std::shared_ptr<int32_t> duration_ = nullptr;
    std::shared_ptr<int32_t> incorrectWords_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<Models::GetPrecisionTaskResponseBodyDataPrecisions> precisions_ = nullptr;
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
