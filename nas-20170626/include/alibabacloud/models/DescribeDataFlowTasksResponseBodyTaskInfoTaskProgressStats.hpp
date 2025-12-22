// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSRESPONSEBODYTASKINFOTASKPROGRESSSTATS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAFLOWTASKSRESPONSEBODYTASKINFOTASKPROGRESSSTATS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace NAS20170626
{
namespace Models
{
  class DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& obj) { 
      DARABONBA_PTR_TO_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_TO_JSON(ActualFiles, actualFiles_);
      DARABONBA_PTR_TO_JSON(AverageSpeed, averageSpeed_);
      DARABONBA_PTR_TO_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_TO_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_TO_JSON(FilesDone, filesDone_);
      DARABONBA_PTR_TO_JSON(FilesTotal, filesTotal_);
      DARABONBA_PTR_TO_JSON(RemainTime, remainTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& obj) { 
      DARABONBA_PTR_FROM_JSON(ActualBytes, actualBytes_);
      DARABONBA_PTR_FROM_JSON(ActualFiles, actualFiles_);
      DARABONBA_PTR_FROM_JSON(AverageSpeed, averageSpeed_);
      DARABONBA_PTR_FROM_JSON(BytesDone, bytesDone_);
      DARABONBA_PTR_FROM_JSON(BytesTotal, bytesTotal_);
      DARABONBA_PTR_FROM_JSON(FilesDone, filesDone_);
      DARABONBA_PTR_FROM_JSON(FilesTotal, filesTotal_);
      DARABONBA_PTR_FROM_JSON(RemainTime, remainTime_);
    };
    DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats() = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats(const DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats &) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats(DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats &&) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats() = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& operator=(const DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats &) = default ;
    DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& operator=(DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actualBytes_ == nullptr
        && return this->actualFiles_ == nullptr && return this->averageSpeed_ == nullptr && return this->bytesDone_ == nullptr && return this->bytesTotal_ == nullptr && return this->filesDone_ == nullptr
        && return this->filesTotal_ == nullptr && return this->remainTime_ == nullptr; };
    // actualBytes Field Functions 
    bool hasActualBytes() const { return this->actualBytes_ != nullptr;};
    void deleteActualBytes() { this->actualBytes_ = nullptr;};
    inline int64_t actualBytes() const { DARABONBA_PTR_GET_DEFAULT(actualBytes_, 0L) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& setActualBytes(int64_t actualBytes) { DARABONBA_PTR_SET_VALUE(actualBytes_, actualBytes) };


    // actualFiles Field Functions 
    bool hasActualFiles() const { return this->actualFiles_ != nullptr;};
    void deleteActualFiles() { this->actualFiles_ = nullptr;};
    inline int64_t actualFiles() const { DARABONBA_PTR_GET_DEFAULT(actualFiles_, 0L) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& setActualFiles(int64_t actualFiles) { DARABONBA_PTR_SET_VALUE(actualFiles_, actualFiles) };


    // averageSpeed Field Functions 
    bool hasAverageSpeed() const { return this->averageSpeed_ != nullptr;};
    void deleteAverageSpeed() { this->averageSpeed_ = nullptr;};
    inline int64_t averageSpeed() const { DARABONBA_PTR_GET_DEFAULT(averageSpeed_, 0L) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& setAverageSpeed(int64_t averageSpeed) { DARABONBA_PTR_SET_VALUE(averageSpeed_, averageSpeed) };


    // bytesDone Field Functions 
    bool hasBytesDone() const { return this->bytesDone_ != nullptr;};
    void deleteBytesDone() { this->bytesDone_ = nullptr;};
    inline int64_t bytesDone() const { DARABONBA_PTR_GET_DEFAULT(bytesDone_, 0L) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& setBytesDone(int64_t bytesDone) { DARABONBA_PTR_SET_VALUE(bytesDone_, bytesDone) };


    // bytesTotal Field Functions 
    bool hasBytesTotal() const { return this->bytesTotal_ != nullptr;};
    void deleteBytesTotal() { this->bytesTotal_ = nullptr;};
    inline int64_t bytesTotal() const { DARABONBA_PTR_GET_DEFAULT(bytesTotal_, 0L) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& setBytesTotal(int64_t bytesTotal) { DARABONBA_PTR_SET_VALUE(bytesTotal_, bytesTotal) };


    // filesDone Field Functions 
    bool hasFilesDone() const { return this->filesDone_ != nullptr;};
    void deleteFilesDone() { this->filesDone_ = nullptr;};
    inline int64_t filesDone() const { DARABONBA_PTR_GET_DEFAULT(filesDone_, 0L) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& setFilesDone(int64_t filesDone) { DARABONBA_PTR_SET_VALUE(filesDone_, filesDone) };


    // filesTotal Field Functions 
    bool hasFilesTotal() const { return this->filesTotal_ != nullptr;};
    void deleteFilesTotal() { this->filesTotal_ = nullptr;};
    inline int64_t filesTotal() const { DARABONBA_PTR_GET_DEFAULT(filesTotal_, 0L) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& setFilesTotal(int64_t filesTotal) { DARABONBA_PTR_SET_VALUE(filesTotal_, filesTotal) };


    // remainTime Field Functions 
    bool hasRemainTime() const { return this->remainTime_ != nullptr;};
    void deleteRemainTime() { this->remainTime_ = nullptr;};
    inline int64_t remainTime() const { DARABONBA_PTR_GET_DEFAULT(remainTime_, 0L) };
    inline DescribeDataFlowTasksResponseBodyTaskInfoTaskProgressStats& setRemainTime(int64_t remainTime) { DARABONBA_PTR_SET_VALUE(remainTime_, remainTime) };


  protected:
    // The actual amount of data for which the dataflow task is complete. Unit: bytes.
    std::shared_ptr<int64_t> actualBytes_ = nullptr;
    // The actual number of files for which the dataflow task is complete.
    std::shared_ptr<int64_t> actualFiles_ = nullptr;
    // The average flow velocity. Unit: bytes/s.
    std::shared_ptr<int64_t> averageSpeed_ = nullptr;
    // The amount of data (including skipped data) for which the dataflow task is complete. Unit: bytes.
    std::shared_ptr<int64_t> bytesDone_ = nullptr;
    // The amount of data scanned on the source. Unit: bytes.
    std::shared_ptr<int64_t> bytesTotal_ = nullptr;
    // The number of files (including skipped files) for which the dataflow task is complete.
    std::shared_ptr<int64_t> filesDone_ = nullptr;
    // The number of files scanned on the source.
    std::shared_ptr<int64_t> filesTotal_ = nullptr;
    // The estimated remaining execution time. Unit: seconds.
    std::shared_ptr<int64_t> remainTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace NAS20170626
#endif
