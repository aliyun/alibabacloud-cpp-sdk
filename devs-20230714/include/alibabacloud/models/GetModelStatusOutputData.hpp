// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMODELSTATUSOUTPUTDATA_HPP_
#define ALIBABACLOUD_MODELS_GETMODELSTATUSOUTPUTDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devs20230714
{
namespace Models
{
  class GetModelStatusOutputData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetModelStatusOutputData& obj) { 
      DARABONBA_PTR_TO_JSON(currentBytes, currentBytes_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(fileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(finished, finished_);
      DARABONBA_PTR_TO_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_TO_JSON(speed, speed_);
      DARABONBA_PTR_TO_JSON(startTime, startTime_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, GetModelStatusOutputData& obj) { 
      DARABONBA_PTR_FROM_JSON(currentBytes, currentBytes_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(fileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(finished, finished_);
      DARABONBA_PTR_FROM_JSON(finishedTime, finishedTime_);
      DARABONBA_PTR_FROM_JSON(speed, speed_);
      DARABONBA_PTR_FROM_JSON(startTime, startTime_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    GetModelStatusOutputData() = default ;
    GetModelStatusOutputData(const GetModelStatusOutputData &) = default ;
    GetModelStatusOutputData(GetModelStatusOutputData &&) = default ;
    GetModelStatusOutputData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetModelStatusOutputData() = default ;
    GetModelStatusOutputData& operator=(const GetModelStatusOutputData &) = default ;
    GetModelStatusOutputData& operator=(GetModelStatusOutputData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->currentBytes_ != nullptr
        && this->errMessage_ != nullptr && this->fileSize_ != nullptr && this->finished_ != nullptr && this->finishedTime_ != nullptr && this->speed_ != nullptr
        && this->startTime_ != nullptr && this->total_ != nullptr; };
    // currentBytes Field Functions 
    bool hasCurrentBytes() const { return this->currentBytes_ != nullptr;};
    void deleteCurrentBytes() { this->currentBytes_ = nullptr;};
    inline int64_t currentBytes() const { DARABONBA_PTR_GET_DEFAULT(currentBytes_, 0L) };
    inline GetModelStatusOutputData& setCurrentBytes(int64_t currentBytes) { DARABONBA_PTR_SET_VALUE(currentBytes_, currentBytes) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string errMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetModelStatusOutputData& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline int64_t fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, 0L) };
    inline GetModelStatusOutputData& setFileSize(int64_t fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // finished Field Functions 
    bool hasFinished() const { return this->finished_ != nullptr;};
    void deleteFinished() { this->finished_ = nullptr;};
    inline bool finished() const { DARABONBA_PTR_GET_DEFAULT(finished_, false) };
    inline GetModelStatusOutputData& setFinished(bool finished) { DARABONBA_PTR_SET_VALUE(finished_, finished) };


    // finishedTime Field Functions 
    bool hasFinishedTime() const { return this->finishedTime_ != nullptr;};
    void deleteFinishedTime() { this->finishedTime_ = nullptr;};
    inline int64_t finishedTime() const { DARABONBA_PTR_GET_DEFAULT(finishedTime_, 0L) };
    inline GetModelStatusOutputData& setFinishedTime(int64_t finishedTime) { DARABONBA_PTR_SET_VALUE(finishedTime_, finishedTime) };


    // speed Field Functions 
    bool hasSpeed() const { return this->speed_ != nullptr;};
    void deleteSpeed() { this->speed_ = nullptr;};
    inline int64_t speed() const { DARABONBA_PTR_GET_DEFAULT(speed_, 0L) };
    inline GetModelStatusOutputData& setSpeed(int64_t speed) { DARABONBA_PTR_SET_VALUE(speed_, speed) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline GetModelStatusOutputData& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int64_t total() const { DARABONBA_PTR_GET_DEFAULT(total_, 0L) };
    inline GetModelStatusOutputData& setTotal(int64_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    std::shared_ptr<int64_t> currentBytes_ = nullptr;
    std::shared_ptr<string> errMessage_ = nullptr;
    std::shared_ptr<int64_t> fileSize_ = nullptr;
    std::shared_ptr<bool> finished_ = nullptr;
    std::shared_ptr<int64_t> finishedTime_ = nullptr;
    std::shared_ptr<int64_t> speed_ = nullptr;
    std::shared_ptr<int64_t> startTime_ = nullptr;
    std::shared_ptr<int64_t> total_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devs20230714
#endif
