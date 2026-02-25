// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitSnapshotJobResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SnapshotJob, snapshotJob_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SnapshotJob, snapshotJob_);
    };
    SubmitSnapshotJobResponseBody() = default ;
    SubmitSnapshotJobResponseBody(const SubmitSnapshotJobResponseBody &) = default ;
    SubmitSnapshotJobResponseBody(SubmitSnapshotJobResponseBody &&) = default ;
    SubmitSnapshotJobResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobResponseBody() = default ;
    SubmitSnapshotJobResponseBody& operator=(const SubmitSnapshotJobResponseBody &) = default ;
    SubmitSnapshotJobResponseBody& operator=(SubmitSnapshotJobResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SnapshotJob : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SnapshotJob& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_TO_JSON(Id, id_);
        DARABONBA_PTR_TO_JSON(Input, input_);
        DARABONBA_PTR_TO_JSON(MNSMessageResult, MNSMessageResult_);
        DARABONBA_PTR_TO_JSON(Message, message_);
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_TO_JSON(SnapshotConfig, snapshotConfig_);
        DARABONBA_PTR_TO_JSON(State, state_);
        DARABONBA_PTR_TO_JSON(TileCount, tileCount_);
        DARABONBA_PTR_TO_JSON(UserData, userData_);
      };
      friend void from_json(const Darabonba::Json& j, SnapshotJob& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
        DARABONBA_PTR_FROM_JSON(Id, id_);
        DARABONBA_PTR_FROM_JSON(Input, input_);
        DARABONBA_PTR_FROM_JSON(MNSMessageResult, MNSMessageResult_);
        DARABONBA_PTR_FROM_JSON(Message, message_);
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
        DARABONBA_PTR_FROM_JSON(SnapshotConfig, snapshotConfig_);
        DARABONBA_PTR_FROM_JSON(State, state_);
        DARABONBA_PTR_FROM_JSON(TileCount, tileCount_);
        DARABONBA_PTR_FROM_JSON(UserData, userData_);
      };
      SnapshotJob() = default ;
      SnapshotJob(const SnapshotJob &) = default ;
      SnapshotJob(SnapshotJob &&) = default ;
      SnapshotJob(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SnapshotJob() = default ;
      SnapshotJob& operator=(const SnapshotJob &) = default ;
      SnapshotJob& operator=(SnapshotJob &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class SnapshotConfig : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const SnapshotConfig& obj) { 
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
        friend void from_json(const Darabonba::Json& j, SnapshotConfig& obj) { 
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
        SnapshotConfig() = default ;
        SnapshotConfig(const SnapshotConfig &) = default ;
        SnapshotConfig(SnapshotConfig &&) = default ;
        SnapshotConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~SnapshotConfig() = default ;
        SnapshotConfig& operator=(const SnapshotConfig &) = default ;
        SnapshotConfig& operator=(SnapshotConfig &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class TimeArray : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TimeArray& obj) { 
            DARABONBA_PTR_TO_JSON(TimePointList, timePointList_);
          };
          friend void from_json(const Darabonba::Json& j, TimeArray& obj) { 
            DARABONBA_PTR_FROM_JSON(TimePointList, timePointList_);
          };
          TimeArray() = default ;
          TimeArray(const TimeArray &) = default ;
          TimeArray(TimeArray &&) = default ;
          TimeArray(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TimeArray() = default ;
          TimeArray& operator=(const TimeArray &) = default ;
          TimeArray& operator=(TimeArray &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->timePointList_ == nullptr; };
          // timePointList Field Functions 
          bool hasTimePointList() const { return this->timePointList_ != nullptr;};
          void deleteTimePointList() { this->timePointList_ = nullptr;};
          inline const vector<int64_t> & getTimePointList() const { DARABONBA_PTR_GET_CONST(timePointList_, vector<int64_t>) };
          inline vector<int64_t> getTimePointList() { DARABONBA_PTR_GET(timePointList_, vector<int64_t>) };
          inline TimeArray& setTimePointList(const vector<int64_t> & timePointList) { DARABONBA_PTR_SET_VALUE(timePointList_, timePointList) };
          inline TimeArray& setTimePointList(vector<int64_t> && timePointList) { DARABONBA_PTR_SET_RVALUE(timePointList_, timePointList) };


        protected:
          shared_ptr<vector<int64_t>> timePointList_ {};
        };

        class TileOutputFile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TileOutputFile& obj) { 
            DARABONBA_PTR_TO_JSON(Bucket, bucket_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Object, object_);
            DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
          };
          friend void from_json(const Darabonba::Json& j, TileOutputFile& obj) { 
            DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Object, object_);
            DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
          };
          TileOutputFile() = default ;
          TileOutputFile(const TileOutputFile &) = default ;
          TileOutputFile(TileOutputFile &&) = default ;
          TileOutputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TileOutputFile() = default ;
          TileOutputFile& operator=(const TileOutputFile &) = default ;
          TileOutputFile& operator=(TileOutputFile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr && this->roleArn_ == nullptr; };
          // bucket Field Functions 
          bool hasBucket() const { return this->bucket_ != nullptr;};
          void deleteBucket() { this->bucket_ = nullptr;};
          inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
          inline TileOutputFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline TileOutputFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // object Field Functions 
          bool hasObject() const { return this->object_ != nullptr;};
          void deleteObject() { this->object_ = nullptr;};
          inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
          inline TileOutputFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


          // roleArn Field Functions 
          bool hasRoleArn() const { return this->roleArn_ != nullptr;};
          void deleteRoleArn() { this->roleArn_ = nullptr;};
          inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
          inline TileOutputFile& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


        protected:
          // The OSS bucket that stores the object.
          shared_ptr<string> bucket_ {};
          // The ID of the region in which the OSS bucket that stores the object is located.
          shared_ptr<string> location_ {};
          // The OSS object that is generated as the output file of the tiling job.
          shared_ptr<string> object_ {};
          // The ARN of the specified RAM role. Format: acs:ram::$accountID:role/$roleName.
          shared_ptr<string> roleArn_ {};
        };

        class TileOut : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const TileOut& obj) { 
            DARABONBA_PTR_TO_JSON(CellHeight, cellHeight_);
            DARABONBA_PTR_TO_JSON(CellSelStep, cellSelStep_);
            DARABONBA_PTR_TO_JSON(CellWidth, cellWidth_);
            DARABONBA_PTR_TO_JSON(Color, color_);
            DARABONBA_PTR_TO_JSON(Columns, columns_);
            DARABONBA_PTR_TO_JSON(IsKeepCellPic, isKeepCellPic_);
            DARABONBA_PTR_TO_JSON(Lines, lines_);
            DARABONBA_PTR_TO_JSON(Margin, margin_);
            DARABONBA_PTR_TO_JSON(Padding, padding_);
          };
          friend void from_json(const Darabonba::Json& j, TileOut& obj) { 
            DARABONBA_PTR_FROM_JSON(CellHeight, cellHeight_);
            DARABONBA_PTR_FROM_JSON(CellSelStep, cellSelStep_);
            DARABONBA_PTR_FROM_JSON(CellWidth, cellWidth_);
            DARABONBA_PTR_FROM_JSON(Color, color_);
            DARABONBA_PTR_FROM_JSON(Columns, columns_);
            DARABONBA_PTR_FROM_JSON(IsKeepCellPic, isKeepCellPic_);
            DARABONBA_PTR_FROM_JSON(Lines, lines_);
            DARABONBA_PTR_FROM_JSON(Margin, margin_);
            DARABONBA_PTR_FROM_JSON(Padding, padding_);
          };
          TileOut() = default ;
          TileOut(const TileOut &) = default ;
          TileOut(TileOut &&) = default ;
          TileOut(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~TileOut() = default ;
          TileOut& operator=(const TileOut &) = default ;
          TileOut& operator=(TileOut &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cellHeight_ == nullptr
        && this->cellSelStep_ == nullptr && this->cellWidth_ == nullptr && this->color_ == nullptr && this->columns_ == nullptr && this->isKeepCellPic_ == nullptr
        && this->lines_ == nullptr && this->margin_ == nullptr && this->padding_ == nullptr; };
          // cellHeight Field Functions 
          bool hasCellHeight() const { return this->cellHeight_ != nullptr;};
          void deleteCellHeight() { this->cellHeight_ = nullptr;};
          inline string getCellHeight() const { DARABONBA_PTR_GET_DEFAULT(cellHeight_, "") };
          inline TileOut& setCellHeight(string cellHeight) { DARABONBA_PTR_SET_VALUE(cellHeight_, cellHeight) };


          // cellSelStep Field Functions 
          bool hasCellSelStep() const { return this->cellSelStep_ != nullptr;};
          void deleteCellSelStep() { this->cellSelStep_ = nullptr;};
          inline string getCellSelStep() const { DARABONBA_PTR_GET_DEFAULT(cellSelStep_, "") };
          inline TileOut& setCellSelStep(string cellSelStep) { DARABONBA_PTR_SET_VALUE(cellSelStep_, cellSelStep) };


          // cellWidth Field Functions 
          bool hasCellWidth() const { return this->cellWidth_ != nullptr;};
          void deleteCellWidth() { this->cellWidth_ = nullptr;};
          inline string getCellWidth() const { DARABONBA_PTR_GET_DEFAULT(cellWidth_, "") };
          inline TileOut& setCellWidth(string cellWidth) { DARABONBA_PTR_SET_VALUE(cellWidth_, cellWidth) };


          // color Field Functions 
          bool hasColor() const { return this->color_ != nullptr;};
          void deleteColor() { this->color_ = nullptr;};
          inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
          inline TileOut& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


          // columns Field Functions 
          bool hasColumns() const { return this->columns_ != nullptr;};
          void deleteColumns() { this->columns_ = nullptr;};
          inline string getColumns() const { DARABONBA_PTR_GET_DEFAULT(columns_, "") };
          inline TileOut& setColumns(string columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


          // isKeepCellPic Field Functions 
          bool hasIsKeepCellPic() const { return this->isKeepCellPic_ != nullptr;};
          void deleteIsKeepCellPic() { this->isKeepCellPic_ = nullptr;};
          inline string getIsKeepCellPic() const { DARABONBA_PTR_GET_DEFAULT(isKeepCellPic_, "") };
          inline TileOut& setIsKeepCellPic(string isKeepCellPic) { DARABONBA_PTR_SET_VALUE(isKeepCellPic_, isKeepCellPic) };


          // lines Field Functions 
          bool hasLines() const { return this->lines_ != nullptr;};
          void deleteLines() { this->lines_ = nullptr;};
          inline string getLines() const { DARABONBA_PTR_GET_DEFAULT(lines_, "") };
          inline TileOut& setLines(string lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };


          // margin Field Functions 
          bool hasMargin() const { return this->margin_ != nullptr;};
          void deleteMargin() { this->margin_ = nullptr;};
          inline string getMargin() const { DARABONBA_PTR_GET_DEFAULT(margin_, "") };
          inline TileOut& setMargin(string margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };


          // padding Field Functions 
          bool hasPadding() const { return this->padding_ != nullptr;};
          void deletePadding() { this->padding_ = nullptr;};
          inline string getPadding() const { DARABONBA_PTR_GET_DEFAULT(padding_, "") };
          inline TileOut& setPadding(string padding) { DARABONBA_PTR_SET_VALUE(padding_, padding) };


        protected:
          // The height of a single image. The default value is the height of the output snapshot.
          shared_ptr<string> cellHeight_ {};
          // The step for selecting a single image.
          shared_ptr<string> cellSelStep_ {};
          // The width of a single image. The default value is the width of the output snapshot.
          shared_ptr<string> cellWidth_ {};
          // The background color.
          // 
          // *   Default value: **black**.
          // *   You can set the Color parameter to a **color keyword** or **random** in the request.
          // 
          // > If you want to set the background color to black, you can specify the color keyword in one of the following three formats: Black, black, and #000000.
          shared_ptr<string> color_ {};
          // The number of columns that the tiled image contains. Default value: **10**.
          shared_ptr<string> columns_ {};
          // Indicates whether the single images are retained. Valid values:
          // 
          // *   **true**: The single images are retained.
          // *   **false**: The single images are not retained.
          // *   Default value: **true**.
          shared_ptr<string> isKeepCellPic_ {};
          // The number of rows that the tiled image contains. Default value: **10**.
          shared_ptr<string> lines_ {};
          // The margin width of the tiled image.
          // 
          // *   Default value: **0**.
          // *   Unit: pixel.
          shared_ptr<string> margin_ {};
          // The distance between two consecutive single images in the tiled image.
          // 
          // *   Default value: **0**.
          // *   Unit: pixel.
          shared_ptr<string> padding_ {};
        };

        class OutputFile : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const OutputFile& obj) { 
            DARABONBA_PTR_TO_JSON(Bucket, bucket_);
            DARABONBA_PTR_TO_JSON(Location, location_);
            DARABONBA_PTR_TO_JSON(Object, object_);
            DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
          };
          friend void from_json(const Darabonba::Json& j, OutputFile& obj) { 
            DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
            DARABONBA_PTR_FROM_JSON(Location, location_);
            DARABONBA_PTR_FROM_JSON(Object, object_);
            DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
          };
          OutputFile() = default ;
          OutputFile(const OutputFile &) = default ;
          OutputFile(OutputFile &&) = default ;
          OutputFile(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~OutputFile() = default ;
          OutputFile& operator=(const OutputFile &) = default ;
          OutputFile& operator=(OutputFile &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr && this->roleArn_ == nullptr; };
          // bucket Field Functions 
          bool hasBucket() const { return this->bucket_ != nullptr;};
          void deleteBucket() { this->bucket_ = nullptr;};
          inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
          inline OutputFile& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


          // location Field Functions 
          bool hasLocation() const { return this->location_ != nullptr;};
          void deleteLocation() { this->location_ = nullptr;};
          inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
          inline OutputFile& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


          // object Field Functions 
          bool hasObject() const { return this->object_ != nullptr;};
          void deleteObject() { this->object_ = nullptr;};
          inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
          inline OutputFile& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


          // roleArn Field Functions 
          bool hasRoleArn() const { return this->roleArn_ != nullptr;};
          void deleteRoleArn() { this->roleArn_ = nullptr;};
          inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
          inline OutputFile& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


        protected:
          // The OSS bucket that stores the output snapshot.
          shared_ptr<string> bucket_ {};
          // The OSS region in which the OSS bucket for storing the output snapshot resides.
          shared_ptr<string> location_ {};
          // The OSS object that is generated as the output file of the snapshot job.
          shared_ptr<string> object_ {};
          // The Alibaba Cloud Resource Name (ARN) of the specified RAM role. Format: acs:ram::$accountID:role/$roleName.
          shared_ptr<string> roleArn_ {};
        };

        virtual bool empty() const override { return this->frameType_ == nullptr
        && this->height_ == nullptr && this->interval_ == nullptr && this->num_ == nullptr && this->outputFile_ == nullptr && this->tileOut_ == nullptr
        && this->tileOutputFile_ == nullptr && this->time_ == nullptr && this->timeArray_ == nullptr && this->width_ == nullptr; };
        // frameType Field Functions 
        bool hasFrameType() const { return this->frameType_ != nullptr;};
        void deleteFrameType() { this->frameType_ = nullptr;};
        inline string getFrameType() const { DARABONBA_PTR_GET_DEFAULT(frameType_, "") };
        inline SnapshotConfig& setFrameType(string frameType) { DARABONBA_PTR_SET_VALUE(frameType_, frameType) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline string getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
        inline SnapshotConfig& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline string getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, "") };
        inline SnapshotConfig& setInterval(string interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // num Field Functions 
        bool hasNum() const { return this->num_ != nullptr;};
        void deleteNum() { this->num_ = nullptr;};
        inline string getNum() const { DARABONBA_PTR_GET_DEFAULT(num_, "") };
        inline SnapshotConfig& setNum(string num) { DARABONBA_PTR_SET_VALUE(num_, num) };


        // outputFile Field Functions 
        bool hasOutputFile() const { return this->outputFile_ != nullptr;};
        void deleteOutputFile() { this->outputFile_ = nullptr;};
        inline const SnapshotConfig::OutputFile & getOutputFile() const { DARABONBA_PTR_GET_CONST(outputFile_, SnapshotConfig::OutputFile) };
        inline SnapshotConfig::OutputFile getOutputFile() { DARABONBA_PTR_GET(outputFile_, SnapshotConfig::OutputFile) };
        inline SnapshotConfig& setOutputFile(const SnapshotConfig::OutputFile & outputFile) { DARABONBA_PTR_SET_VALUE(outputFile_, outputFile) };
        inline SnapshotConfig& setOutputFile(SnapshotConfig::OutputFile && outputFile) { DARABONBA_PTR_SET_RVALUE(outputFile_, outputFile) };


        // tileOut Field Functions 
        bool hasTileOut() const { return this->tileOut_ != nullptr;};
        void deleteTileOut() { this->tileOut_ = nullptr;};
        inline const SnapshotConfig::TileOut & getTileOut() const { DARABONBA_PTR_GET_CONST(tileOut_, SnapshotConfig::TileOut) };
        inline SnapshotConfig::TileOut getTileOut() { DARABONBA_PTR_GET(tileOut_, SnapshotConfig::TileOut) };
        inline SnapshotConfig& setTileOut(const SnapshotConfig::TileOut & tileOut) { DARABONBA_PTR_SET_VALUE(tileOut_, tileOut) };
        inline SnapshotConfig& setTileOut(SnapshotConfig::TileOut && tileOut) { DARABONBA_PTR_SET_RVALUE(tileOut_, tileOut) };


        // tileOutputFile Field Functions 
        bool hasTileOutputFile() const { return this->tileOutputFile_ != nullptr;};
        void deleteTileOutputFile() { this->tileOutputFile_ = nullptr;};
        inline const SnapshotConfig::TileOutputFile & getTileOutputFile() const { DARABONBA_PTR_GET_CONST(tileOutputFile_, SnapshotConfig::TileOutputFile) };
        inline SnapshotConfig::TileOutputFile getTileOutputFile() { DARABONBA_PTR_GET(tileOutputFile_, SnapshotConfig::TileOutputFile) };
        inline SnapshotConfig& setTileOutputFile(const SnapshotConfig::TileOutputFile & tileOutputFile) { DARABONBA_PTR_SET_VALUE(tileOutputFile_, tileOutputFile) };
        inline SnapshotConfig& setTileOutputFile(SnapshotConfig::TileOutputFile && tileOutputFile) { DARABONBA_PTR_SET_RVALUE(tileOutputFile_, tileOutputFile) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
        inline SnapshotConfig& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // timeArray Field Functions 
        bool hasTimeArray() const { return this->timeArray_ != nullptr;};
        void deleteTimeArray() { this->timeArray_ = nullptr;};
        inline const SnapshotConfig::TimeArray & getTimeArray() const { DARABONBA_PTR_GET_CONST(timeArray_, SnapshotConfig::TimeArray) };
        inline SnapshotConfig::TimeArray getTimeArray() { DARABONBA_PTR_GET(timeArray_, SnapshotConfig::TimeArray) };
        inline SnapshotConfig& setTimeArray(const SnapshotConfig::TimeArray & timeArray) { DARABONBA_PTR_SET_VALUE(timeArray_, timeArray) };
        inline SnapshotConfig& setTimeArray(SnapshotConfig::TimeArray && timeArray) { DARABONBA_PTR_SET_RVALUE(timeArray_, timeArray) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline string getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
        inline SnapshotConfig& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The type of the snapshot. Default value: **Normal**. Valid values:
        // 
        // *   **normal**: normal frames.
        // *   **intra**: I-frames (keyframes).
        // 
        // > If the FrameType parameter is set to intra in the request, only keyframes are captured. If no keyframe is found at the specified point in time, the keyframe closest to the specified point in time is captured. Keyframes are captured faster than normal frames if the same snapshot rules are applied.
        shared_ptr<string> frameType_ {};
        // The height of the output snapshot.
        shared_ptr<string> height_ {};
        // The interval for capturing snapshots.
        // 
        // *   If this parameter is specified in the request, snapshots are captured at intervals. The value must be greater than 0 in the request.
        // *   Unit: seconds.
        // *   Default value: **10**.
        shared_ptr<string> interval_ {};
        // The number of snapshots. If the Num parameter is set in the request, snapshots are captured at intervals.
        shared_ptr<string> num_ {};
        // The information about the output file of the snapshot job.
        shared_ptr<SnapshotConfig::OutputFile> outputFile_ {};
        // The tiling configurations.
        shared_ptr<SnapshotConfig::TileOut> tileOut_ {};
        // The information about the output file of the tiling job.
        shared_ptr<SnapshotConfig::TileOutputFile> tileOutputFile_ {};
        // The start time for capturing snapshots. Unit: milliseconds.
        shared_ptr<string> time_ {};
        shared_ptr<SnapshotConfig::TimeArray> timeArray_ {};
        // The width of the output snapshot.
        shared_ptr<string> width_ {};
      };

      class MNSMessageResult : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MNSMessageResult& obj) { 
          DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_TO_JSON(MessageId, messageId_);
        };
        friend void from_json(const Darabonba::Json& j, MNSMessageResult& obj) { 
          DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
          DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
          DARABONBA_PTR_FROM_JSON(MessageId, messageId_);
        };
        MNSMessageResult() = default ;
        MNSMessageResult(const MNSMessageResult &) = default ;
        MNSMessageResult(MNSMessageResult &&) = default ;
        MNSMessageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MNSMessageResult() = default ;
        MNSMessageResult& operator=(const MNSMessageResult &) = default ;
        MNSMessageResult& operator=(MNSMessageResult &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->messageId_ == nullptr; };
        // errorCode Field Functions 
        bool hasErrorCode() const { return this->errorCode_ != nullptr;};
        void deleteErrorCode() { this->errorCode_ = nullptr;};
        inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
        inline MNSMessageResult& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


        // errorMessage Field Functions 
        bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
        void deleteErrorMessage() { this->errorMessage_ = nullptr;};
        inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
        inline MNSMessageResult& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


        // messageId Field Functions 
        bool hasMessageId() const { return this->messageId_ != nullptr;};
        void deleteMessageId() { this->messageId_ = nullptr;};
        inline string getMessageId() const { DARABONBA_PTR_GET_DEFAULT(messageId_, "") };
        inline MNSMessageResult& setMessageId(string messageId) { DARABONBA_PTR_SET_VALUE(messageId_, messageId) };


      protected:
        // The error code returned if the job fails. This parameter is not returned if the job is successful.
        shared_ptr<string> errorCode_ {};
        // The error message returned if the job fails. This parameter is not returned if the job is successful.
        shared_ptr<string> errorMessage_ {};
        // The ID of the message. This parameter is not returned if the job fails.
        shared_ptr<string> messageId_ {};
      };

      class Input : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Input& obj) { 
          DARABONBA_PTR_TO_JSON(Bucket, bucket_);
          DARABONBA_PTR_TO_JSON(Location, location_);
          DARABONBA_PTR_TO_JSON(Object, object_);
          DARABONBA_PTR_TO_JSON(RoleArn, roleArn_);
        };
        friend void from_json(const Darabonba::Json& j, Input& obj) { 
          DARABONBA_PTR_FROM_JSON(Bucket, bucket_);
          DARABONBA_PTR_FROM_JSON(Location, location_);
          DARABONBA_PTR_FROM_JSON(Object, object_);
          DARABONBA_PTR_FROM_JSON(RoleArn, roleArn_);
        };
        Input() = default ;
        Input(const Input &) = default ;
        Input(Input &&) = default ;
        Input(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Input() = default ;
        Input& operator=(const Input &) = default ;
        Input& operator=(Input &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bucket_ == nullptr
        && this->location_ == nullptr && this->object_ == nullptr && this->roleArn_ == nullptr; };
        // bucket Field Functions 
        bool hasBucket() const { return this->bucket_ != nullptr;};
        void deleteBucket() { this->bucket_ = nullptr;};
        inline string getBucket() const { DARABONBA_PTR_GET_DEFAULT(bucket_, "") };
        inline Input& setBucket(string bucket) { DARABONBA_PTR_SET_VALUE(bucket_, bucket) };


        // location Field Functions 
        bool hasLocation() const { return this->location_ != nullptr;};
        void deleteLocation() { this->location_ = nullptr;};
        inline string getLocation() const { DARABONBA_PTR_GET_DEFAULT(location_, "") };
        inline Input& setLocation(string location) { DARABONBA_PTR_SET_VALUE(location_, location) };


        // object Field Functions 
        bool hasObject() const { return this->object_ != nullptr;};
        void deleteObject() { this->object_ = nullptr;};
        inline string getObject() const { DARABONBA_PTR_GET_DEFAULT(object_, "") };
        inline Input& setObject(string object) { DARABONBA_PTR_SET_VALUE(object_, object) };


        // roleArn Field Functions 
        bool hasRoleArn() const { return this->roleArn_ != nullptr;};
        void deleteRoleArn() { this->roleArn_ = nullptr;};
        inline string getRoleArn() const { DARABONBA_PTR_GET_DEFAULT(roleArn_, "") };
        inline Input& setRoleArn(string roleArn) { DARABONBA_PTR_SET_VALUE(roleArn_, roleArn) };


      protected:
        // The OSS bucket that stores the object.
        shared_ptr<string> bucket_ {};
        // The region in which the OSS bucket resides.
        shared_ptr<string> location_ {};
        // The OSS object that is used as the input file.
        shared_ptr<string> object_ {};
        // The ARN of the specified RAM role. Format: acs:ram::$accountID:role/$roleName.
        shared_ptr<string> roleArn_ {};
      };

      virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->creationTime_ == nullptr && this->id_ == nullptr && this->input_ == nullptr && this->MNSMessageResult_ == nullptr
        && this->message_ == nullptr && this->pipelineId_ == nullptr && this->snapshotConfig_ == nullptr && this->state_ == nullptr && this->tileCount_ == nullptr
        && this->userData_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline SnapshotJob& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline string getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, "") };
      inline SnapshotJob& setCount(string count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // creationTime Field Functions 
      bool hasCreationTime() const { return this->creationTime_ != nullptr;};
      void deleteCreationTime() { this->creationTime_ = nullptr;};
      inline string getCreationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
      inline SnapshotJob& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


      // id Field Functions 
      bool hasId() const { return this->id_ != nullptr;};
      void deleteId() { this->id_ = nullptr;};
      inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
      inline SnapshotJob& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


      // input Field Functions 
      bool hasInput() const { return this->input_ != nullptr;};
      void deleteInput() { this->input_ = nullptr;};
      inline const SnapshotJob::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SnapshotJob::Input) };
      inline SnapshotJob::Input getInput() { DARABONBA_PTR_GET(input_, SnapshotJob::Input) };
      inline SnapshotJob& setInput(const SnapshotJob::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
      inline SnapshotJob& setInput(SnapshotJob::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


      // MNSMessageResult Field Functions 
      bool hasMNSMessageResult() const { return this->MNSMessageResult_ != nullptr;};
      void deleteMNSMessageResult() { this->MNSMessageResult_ = nullptr;};
      inline const SnapshotJob::MNSMessageResult & getMNSMessageResult() const { DARABONBA_PTR_GET_CONST(MNSMessageResult_, SnapshotJob::MNSMessageResult) };
      inline SnapshotJob::MNSMessageResult getMNSMessageResult() { DARABONBA_PTR_GET(MNSMessageResult_, SnapshotJob::MNSMessageResult) };
      inline SnapshotJob& setMNSMessageResult(const SnapshotJob::MNSMessageResult & mNSMessageResult) { DARABONBA_PTR_SET_VALUE(MNSMessageResult_, mNSMessageResult) };
      inline SnapshotJob& setMNSMessageResult(SnapshotJob::MNSMessageResult && mNSMessageResult) { DARABONBA_PTR_SET_RVALUE(MNSMessageResult_, mNSMessageResult) };


      // message Field Functions 
      bool hasMessage() const { return this->message_ != nullptr;};
      void deleteMessage() { this->message_ = nullptr;};
      inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
      inline SnapshotJob& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline SnapshotJob& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


      // snapshotConfig Field Functions 
      bool hasSnapshotConfig() const { return this->snapshotConfig_ != nullptr;};
      void deleteSnapshotConfig() { this->snapshotConfig_ = nullptr;};
      inline const SnapshotJob::SnapshotConfig & getSnapshotConfig() const { DARABONBA_PTR_GET_CONST(snapshotConfig_, SnapshotJob::SnapshotConfig) };
      inline SnapshotJob::SnapshotConfig getSnapshotConfig() { DARABONBA_PTR_GET(snapshotConfig_, SnapshotJob::SnapshotConfig) };
      inline SnapshotJob& setSnapshotConfig(const SnapshotJob::SnapshotConfig & snapshotConfig) { DARABONBA_PTR_SET_VALUE(snapshotConfig_, snapshotConfig) };
      inline SnapshotJob& setSnapshotConfig(SnapshotJob::SnapshotConfig && snapshotConfig) { DARABONBA_PTR_SET_RVALUE(snapshotConfig_, snapshotConfig) };


      // state Field Functions 
      bool hasState() const { return this->state_ != nullptr;};
      void deleteState() { this->state_ = nullptr;};
      inline string getState() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
      inline SnapshotJob& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


      // tileCount Field Functions 
      bool hasTileCount() const { return this->tileCount_ != nullptr;};
      void deleteTileCount() { this->tileCount_ = nullptr;};
      inline string getTileCount() const { DARABONBA_PTR_GET_DEFAULT(tileCount_, "") };
      inline SnapshotJob& setTileCount(string tileCount) { DARABONBA_PTR_SET_VALUE(tileCount_, tileCount) };


      // userData Field Functions 
      bool hasUserData() const { return this->userData_ != nullptr;};
      void deleteUserData() { this->userData_ = nullptr;};
      inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
      inline SnapshotJob& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


    protected:
      // The error code returned if the job fails. This parameter is not returned if the job is successful.
      shared_ptr<string> code_ {};
      // The number of snapshots that are captured.
      shared_ptr<string> count_ {};
      // The time when the job was created.
      shared_ptr<string> creationTime_ {};
      // The ID of the snapshot job.
      shared_ptr<string> id_ {};
      // The information about the job input.
      shared_ptr<SnapshotJob::Input> input_ {};
      // The message sent by MNS to notify the user of the job result.
      shared_ptr<SnapshotJob::MNSMessageResult> MNSMessageResult_ {};
      // The error message returned if the job fails. This parameter is not returned if the job is successful.
      shared_ptr<string> message_ {};
      // The ID of the MPS queue to which the snapshot job is submitted.
      shared_ptr<string> pipelineId_ {};
      // The snapshot configurations.
      shared_ptr<SnapshotJob::SnapshotConfig> snapshotConfig_ {};
      // The status of the snapshot job. Valid values:
      // 
      // *   **Submitted**: The job is submitted.
      // *   **Snapshoting**: The job is being processed.
      // *   **Success**: The job is successful.
      // *   **Fail**: The job fails.
      shared_ptr<string> state_ {};
      // The number of single images that are contained in the tiled image.
      shared_ptr<string> tileCount_ {};
      // The custom data.
      shared_ptr<string> userData_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->snapshotJob_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SubmitSnapshotJobResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // snapshotJob Field Functions 
    bool hasSnapshotJob() const { return this->snapshotJob_ != nullptr;};
    void deleteSnapshotJob() { this->snapshotJob_ = nullptr;};
    inline const SubmitSnapshotJobResponseBody::SnapshotJob & getSnapshotJob() const { DARABONBA_PTR_GET_CONST(snapshotJob_, SubmitSnapshotJobResponseBody::SnapshotJob) };
    inline SubmitSnapshotJobResponseBody::SnapshotJob getSnapshotJob() { DARABONBA_PTR_GET(snapshotJob_, SubmitSnapshotJobResponseBody::SnapshotJob) };
    inline SubmitSnapshotJobResponseBody& setSnapshotJob(const SubmitSnapshotJobResponseBody::SnapshotJob & snapshotJob) { DARABONBA_PTR_SET_VALUE(snapshotJob_, snapshotJob) };
    inline SubmitSnapshotJobResponseBody& setSnapshotJob(SubmitSnapshotJobResponseBody::SnapshotJob && snapshotJob) { DARABONBA_PTR_SET_RVALUE(snapshotJob_, snapshotJob) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The information about the snapshot job.
    shared_ptr<SubmitSnapshotJobResponseBody::SnapshotJob> snapshotJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
