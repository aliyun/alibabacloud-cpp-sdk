// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMMSFETCHMETADATAJOBRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMMSFETCHMETADATAJOBRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class GetMmsFetchMetadataJobResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMmsFetchMetadataJobResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(endTime, endTime_);
      DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_TO_JSON(id, id_);
      DARABONBA_PTR_TO_JSON(progress, progress_);
      DARABONBA_PTR_TO_JSON(result, result_);
      DARABONBA_PTR_TO_JSON(sourceId, sourceId_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetMmsFetchMetadataJobResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(endTime, endTime_);
      DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
      DARABONBA_PTR_FROM_JSON(id, id_);
      DARABONBA_PTR_FROM_JSON(progress, progress_);
      DARABONBA_PTR_FROM_JSON(result, result_);
      DARABONBA_PTR_FROM_JSON(sourceId, sourceId_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(status, status_);
    };
    GetMmsFetchMetadataJobResponseBodyData() = default ;
    GetMmsFetchMetadataJobResponseBodyData(const GetMmsFetchMetadataJobResponseBodyData &) = default ;
    GetMmsFetchMetadataJobResponseBodyData(GetMmsFetchMetadataJobResponseBodyData &&) = default ;
    GetMmsFetchMetadataJobResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMmsFetchMetadataJobResponseBodyData() = default ;
    GetMmsFetchMetadataJobResponseBodyData& operator=(const GetMmsFetchMetadataJobResponseBodyData &) = default ;
    GetMmsFetchMetadataJobResponseBodyData& operator=(GetMmsFetchMetadataJobResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->endTime_ != nullptr
        && this->errorMsg_ != nullptr && this->id_ != nullptr && this->progress_ != nullptr && this->result_ != nullptr && this->sourceId_ != nullptr
        && this->startTime_ != nullptr && this->status_ != nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline GetMmsFetchMetadataJobResponseBodyData& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // errorMsg Field Functions 
    bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
    void deleteErrorMsg() { this->errorMsg_ = nullptr;};
    inline string errorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
    inline GetMmsFetchMetadataJobResponseBodyData& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetMmsFetchMetadataJobResponseBodyData& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // progress Field Functions 
    bool hasProgress() const { return this->progress_ != nullptr;};
    void deleteProgress() { this->progress_ = nullptr;};
    inline float progress() const { DARABONBA_PTR_GET_DEFAULT(progress_, 0.0) };
    inline GetMmsFetchMetadataJobResponseBodyData& setProgress(float progress) { DARABONBA_PTR_SET_VALUE(progress_, progress) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline GetMmsFetchMetadataJobResponseBodyData& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // sourceId Field Functions 
    bool hasSourceId() const { return this->sourceId_ != nullptr;};
    void deleteSourceId() { this->sourceId_ = nullptr;};
    inline int64_t sourceId() const { DARABONBA_PTR_GET_DEFAULT(sourceId_, 0L) };
    inline GetMmsFetchMetadataJobResponseBodyData& setSourceId(int64_t sourceId) { DARABONBA_PTR_SET_VALUE(sourceId_, sourceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline GetMmsFetchMetadataJobResponseBodyData& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetMmsFetchMetadataJobResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    std::shared_ptr<string> endTime_ = nullptr;
    std::shared_ptr<string> errorMsg_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<float> progress_ = nullptr;
    std::shared_ptr<string> result_ = nullptr;
    std::shared_ptr<int64_t> sourceId_ = nullptr;
    std::shared_ptr<string> startTime_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
