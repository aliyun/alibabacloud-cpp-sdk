// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOBSNAPSHOTCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODYSNAPSHOTJOBSNAPSHOTCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile.hpp>
#include <alibabacloud/models/SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOut.hpp>
#include <alibabacloud/models/SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOutputFile.hpp>
#include <alibabacloud/models/SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& obj) { 
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
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& obj) { 
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
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig() = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig(const SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig &) = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig(SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig &&) = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig() = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& operator=(const SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig &) = default ;
    SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& operator=(SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig &&) = default ;
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
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setFrameType(string frameType) { DARABONBA_PTR_SET_VALUE(frameType_, frameType) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline string interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline string num() const { DARABONBA_PTR_GET_DEFAULT(num_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setNum(string num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // outputFile Field Functions 
    bool hasOutputFile() const { return this->outputFile_ != nullptr;};
    void deleteOutputFile() { this->outputFile_ = nullptr;};
    inline const Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile & outputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile) };
    inline Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile outputFile() { DARABONBA_PTR_GET(outputFile_, Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile) };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setOutputFile(const Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setOutputFile(Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


    // tileOut Field Functions 
    bool hasTileOut() const { return this->tileOut_ != nullptr;};
    void deleteTileOut() { this->tileOut_ = nullptr;};
    inline const Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOut & tileOut() const { DARABONBA_PTR_GET_CONST(tileOut_, Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOut) };
    inline Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOut tileOut() { DARABONBA_PTR_GET(tileOut_, Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOut) };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setTileOut(const Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOut & tileOut) { DARABONBA_PTR_SET_VALUE(tileOut_, tileOut) };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setTileOut(Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOut && tileOut) { DARABONBA_PTR_SET_RVALUE(tileOut_, tileOut) };


    // tileOutputFile Field Functions 
    bool hasTileOutputFile() const { return this->tileOutputFile_ != nullptr;};
    void deleteTileOutputFile() { this->tileOutputFile_ = nullptr;};
    inline const Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOutputFile & tileOutputFile() const { DARABONBA_PTR_GET_CONST(tileOutputFile_, Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOutputFile) };
    inline Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOutputFile tileOutputFile() { DARABONBA_PTR_GET(tileOutputFile_, Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOutputFile) };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setTileOutputFile(const Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOutputFile & tileOutputFile) { DARABONBA_PTR_SET_VALUE(tileOutputFile_, tileOutputFile) };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setTileOutputFile(Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOutputFile && tileOutputFile) { DARABONBA_PTR_SET_RVALUE(tileOutputFile_, tileOutputFile) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // timeArray Field Functions 
    bool hasTimeArray() const { return this->timeArray_ != nullptr;};
    void deleteTimeArray() { this->timeArray_ = nullptr;};
    inline const Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray & timeArray() const { DARABONBA_PTR_GET_CONST(timeArray_, Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray) };
    inline Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray timeArray() { DARABONBA_PTR_GET(timeArray_, Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray) };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setTimeArray(const Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray & timeArray) { DARABONBA_PTR_SET_VALUE(timeArray_, timeArray) };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setTimeArray(Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray && timeArray) { DARABONBA_PTR_SET_RVALUE(timeArray_, timeArray) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfig& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The type of the snapshot. Default value: **Normal**. Valid values:
    // 
    // *   **normal**: normal frames.
    // *   **intra**: I-frames (keyframes).
    // 
    // > If the FrameType parameter is set to intra in the request, only keyframes are captured. If no keyframe is found at the specified point in time, the keyframe closest to the specified point in time is captured. Keyframes are captured faster than normal frames if the same snapshot rules are applied.
    std::shared_ptr<string> frameType_ = nullptr;
    // The height of the output snapshot.
    std::shared_ptr<string> height_ = nullptr;
    // The interval for capturing snapshots.
    // 
    // *   If this parameter is specified in the request, snapshots are captured at intervals. The value must be greater than 0 in the request.
    // *   Unit: seconds.
    // *   Default value: **10**.
    std::shared_ptr<string> interval_ = nullptr;
    // The number of snapshots. If the Num parameter is set in the request, snapshots are captured at intervals.
    std::shared_ptr<string> num_ = nullptr;
    // The information about the output file of the snapshot job.
    std::shared_ptr<Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigOutputFile> outputFile_ = nullptr;
    // The tiling configurations.
    std::shared_ptr<Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOut> tileOut_ = nullptr;
    // The information about the output file of the tiling job.
    std::shared_ptr<Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTileOutputFile> tileOutputFile_ = nullptr;
    // The start time for capturing snapshots. Unit: milliseconds.
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<Models::SubmitSnapshotJobResponseBodySnapshotJobSnapshotConfigTimeArray> timeArray_ = nullptr;
    // The width of the output snapshot.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
