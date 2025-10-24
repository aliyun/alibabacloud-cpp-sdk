// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODYSNAPSHOTJOBLISTSNAPSHOTJOBSNAPSHOTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYSNAPSHOTJOBLISTRESPONSEBODYSNAPSHOTJOBLISTSNAPSHOTJOBSNAPSHOTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigOutputFile.hpp>
#include <alibabacloud/models/QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut.hpp>
#include <alibabacloud/models/QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOutputFile.hpp>
#include <alibabacloud/models/QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& obj) { 
      DARABONBA_PTR_TO_JSON(FrameType, frameType_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_TO_JSON(TileOut, tileOut_);
      DARABONBA_PTR_TO_JSON(TileOutputFile, tileOutputFile_);
      DARABONBA_PTR_TO_JSON(Time, time_);
      DARABONBA_PTR_TO_JSON(TimeArray, timeArray_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(FrameType, frameType_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(OutputFile, outputFile_);
      DARABONBA_PTR_FROM_JSON(TileOut, tileOut_);
      DARABONBA_PTR_FROM_JSON(TileOutputFile, tileOutputFile_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
      DARABONBA_PTR_FROM_JSON(TimeArray, timeArray_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig() = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig(const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig &) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig(QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig &&) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig() = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& operator=(const QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig &) = default ;
    QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& operator=(QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->frameType_ == nullptr
        && return this->height_ == nullptr && return this->interval_ == nullptr && return this->num_ == nullptr && return this->outputFile_ == nullptr && return this->tileOut_ == nullptr
        && return this->tileOutputFile_ == nullptr && return this->time_ == nullptr && return this->timeArray_ == nullptr && return this->width_ == nullptr; };
    // frameType Field Functions 
    bool hasFrameType() const { return this->frameType_ != nullptr;};
    void deleteFrameType() { this->frameType_ = nullptr;};
    inline string frameType() const { DARABONBA_PTR_GET_DEFAULT(frameType_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setFrameType(string frameType) { DARABONBA_PTR_SET_VALUE(frameType_, frameType) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline string num() const { DARABONBA_PTR_GET_DEFAULT(num_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setNum(string num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigOutputFile & outputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigOutputFile) };
    inline Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigOutputFile outputFile() { DARABONBA_PTR_GET(outputFile_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigOutputFile) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setOutputFile(const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigOutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setOutputFile(Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigOutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    // tileOut Field Functions 
    bool hasTileOut() const { return this->tileOut_ != nullptr;};
    void deleteTileOut() { this->tileOut_ = nullptr;};
    inline const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut & tileOut() const { DARABONBA_PTR_GET_CONST(tileOut_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut) };
    inline Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut tileOut() { DARABONBA_PTR_GET(tileOut_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setTileOut(const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut & tileOut) { DARABONBA_PTR_SET_VALUE(tileOut_, tileOut) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setTileOut(Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut && tileOut) { DARABONBA_PTR_SET_RVALUE(tileOut_, tileOut) };


    // tileOutputFile Field Functions 
    bool hasTileOutputFile() const { return this->tileOutputFile_ != nullptr;};
    void deleteTileOutputFile() { this->tileOutputFile_ = nullptr;};
    inline const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOutputFile & tileOutputFile() const { DARABONBA_PTR_GET_CONST(tileOutputFile_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOutputFile) };
    inline Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOutputFile tileOutputFile() { DARABONBA_PTR_GET(tileOutputFile_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOutputFile) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setTileOutputFile(const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOutputFile & tileOutputFile) { DARABONBA_PTR_SET_VALUE(tileOutputFile_, tileOutputFile) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setTileOutputFile(Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOutputFile && tileOutputFile) { DARABONBA_PTR_SET_RVALUE(tileOutputFile_, tileOutputFile) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // timeArray Field Functions 
    bool hasTimeArray() const { return this->timeArray_ != nullptr;};
    void deleteTimeArray() { this->timeArray_ = nullptr;};
    inline const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray & timeArray() const { DARABONBA_PTR_GET_CONST(timeArray_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray) };
    inline Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray timeArray() { DARABONBA_PTR_GET(timeArray_, Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setTimeArray(const Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray & timeArray) { DARABONBA_PTR_SET_VALUE(timeArray_, timeArray) };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setTimeArray(Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray && timeArray) { DARABONBA_PTR_SET_RVALUE(timeArray_, timeArray) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfig& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The ID of the region in which the output OSS bucket is located.
    std::shared_ptr<string> frameType_ = nullptr;
    // The number of snapshots to take. If the Num parameter is set in the request, snapshots are taken at intervals.
    std::shared_ptr<string> height_ = nullptr;
    // The OSS object that is generated as the output file of the snapshot job.
    std::shared_ptr<string> interval_ = nullptr;
    // The status of the snapshot job. 
    // 
    // - **Submitted**: The job was submitted.
    // - **Snapshoting**: The job is being processed.
    // - **Success**: The job was successfully processed.
    // - **Fail**: The job failed.
    std::shared_ptr<string> num_ = nullptr;
    // The OSS output file of the tiling job.
    std::shared_ptr<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigOutputFile> outputFile_ = nullptr;
    // The margin width of the tiled image.
    // 
    // *   Default value: **0**.
    // *   Unit: pixel.
    std::shared_ptr<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOut> tileOut_ = nullptr;
    // The error message returned when the job fails. This parameter is not returned if the job is successfully processed.
    std::shared_ptr<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTileOutputFile> tileOutputFile_ = nullptr;
    // The width of a single image. The default value is the width of the output snapshot.
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<Models::QuerySnapshotJobListResponseBodySnapshotJobListSnapshotJobSnapshotConfigTimeArray> timeArray_ = nullptr;
    // The OSS bucket that stores the output file.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
