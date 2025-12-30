// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSnapshotJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Input, input_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Output, output_);
      DARABONBA_PTR_TO_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_TO_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_TO_JSON(UserData, userData_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Input, input_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Output, output_);
      DARABONBA_PTR_FROM_JSON(ScheduleConfig, scheduleConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateConfig, templateConfig_);
      DARABONBA_PTR_FROM_JSON(UserData, userData_);
    };
    SubmitSnapshotJobRequest() = default ;
    SubmitSnapshotJobRequest(const SubmitSnapshotJobRequest &) = default ;
    SubmitSnapshotJobRequest(SubmitSnapshotJobRequest &&) = default ;
    SubmitSnapshotJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobRequest() = default ;
    SubmitSnapshotJobRequest& operator=(const SubmitSnapshotJobRequest &) = default ;
    SubmitSnapshotJobRequest& operator=(SubmitSnapshotJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TemplateConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TemplateConfig& obj) { 
        DARABONBA_PTR_TO_JSON(OverwriteParams, overwriteParams_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      };
      friend void from_json(const Darabonba::Json& j, TemplateConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(OverwriteParams, overwriteParams_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      };
      TemplateConfig() = default ;
      TemplateConfig(const TemplateConfig &) = default ;
      TemplateConfig(TemplateConfig &&) = default ;
      TemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TemplateConfig() = default ;
      TemplateConfig& operator=(const TemplateConfig &) = default ;
      TemplateConfig& operator=(TemplateConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class OverwriteParams : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const OverwriteParams& obj) { 
          DARABONBA_PTR_TO_JSON(BlackLevel, blackLevel_);
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(FrameType, frameType_);
          DARABONBA_PTR_TO_JSON(Height, height_);
          DARABONBA_PTR_TO_JSON(Interval, interval_);
          DARABONBA_PTR_TO_JSON(IsSptFrag, isSptFrag_);
          DARABONBA_PTR_TO_JSON(PixelBlackThreshold, pixelBlackThreshold_);
          DARABONBA_PTR_TO_JSON(SpriteSnapshotConfig, spriteSnapshotConfig_);
          DARABONBA_PTR_TO_JSON(Time, time_);
          DARABONBA_PTR_TO_JSON(Type, type_);
          DARABONBA_PTR_TO_JSON(Width, width_);
        };
        friend void from_json(const Darabonba::Json& j, OverwriteParams& obj) { 
          DARABONBA_PTR_FROM_JSON(BlackLevel, blackLevel_);
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(FrameType, frameType_);
          DARABONBA_PTR_FROM_JSON(Height, height_);
          DARABONBA_PTR_FROM_JSON(Interval, interval_);
          DARABONBA_PTR_FROM_JSON(IsSptFrag, isSptFrag_);
          DARABONBA_PTR_FROM_JSON(PixelBlackThreshold, pixelBlackThreshold_);
          DARABONBA_PTR_FROM_JSON(SpriteSnapshotConfig, spriteSnapshotConfig_);
          DARABONBA_PTR_FROM_JSON(Time, time_);
          DARABONBA_PTR_FROM_JSON(Type, type_);
          DARABONBA_PTR_FROM_JSON(Width, width_);
        };
        OverwriteParams() = default ;
        OverwriteParams(const OverwriteParams &) = default ;
        OverwriteParams(OverwriteParams &&) = default ;
        OverwriteParams(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~OverwriteParams() = default ;
        OverwriteParams& operator=(const OverwriteParams &) = default ;
        OverwriteParams& operator=(OverwriteParams &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SpriteSnapshotConfig : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SpriteSnapshotConfig& obj) { 
            DARABONBA_PTR_TO_JSON(CellHeight, cellHeight_);
            DARABONBA_PTR_TO_JSON(CellWidth, cellWidth_);
            DARABONBA_PTR_TO_JSON(Color, color_);
            DARABONBA_PTR_TO_JSON(Columns, columns_);
            DARABONBA_PTR_TO_JSON(Lines, lines_);
            DARABONBA_PTR_TO_JSON(Margin, margin_);
            DARABONBA_PTR_TO_JSON(Padding, padding_);
          };
          friend void from_json(const Darabonba::Json& j, SpriteSnapshotConfig& obj) { 
            DARABONBA_PTR_FROM_JSON(CellHeight, cellHeight_);
            DARABONBA_PTR_FROM_JSON(CellWidth, cellWidth_);
            DARABONBA_PTR_FROM_JSON(Color, color_);
            DARABONBA_PTR_FROM_JSON(Columns, columns_);
            DARABONBA_PTR_FROM_JSON(Lines, lines_);
            DARABONBA_PTR_FROM_JSON(Margin, margin_);
            DARABONBA_PTR_FROM_JSON(Padding, padding_);
          };
          SpriteSnapshotConfig() = default ;
          SpriteSnapshotConfig(const SpriteSnapshotConfig &) = default ;
          SpriteSnapshotConfig(SpriteSnapshotConfig &&) = default ;
          SpriteSnapshotConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SpriteSnapshotConfig() = default ;
          SpriteSnapshotConfig& operator=(const SpriteSnapshotConfig &) = default ;
          SpriteSnapshotConfig& operator=(SpriteSnapshotConfig &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->cellHeight_ == nullptr
        && this->cellWidth_ == nullptr && this->color_ == nullptr && this->columns_ == nullptr && this->lines_ == nullptr && this->margin_ == nullptr
        && this->padding_ == nullptr; };
          // cellHeight Field Functions 
          bool hasCellHeight() const { return this->cellHeight_ != nullptr;};
          void deleteCellHeight() { this->cellHeight_ = nullptr;};
          inline int32_t getCellHeight() const { DARABONBA_PTR_GET_DEFAULT(cellHeight_, 0) };
          inline SpriteSnapshotConfig& setCellHeight(int32_t cellHeight) { DARABONBA_PTR_SET_VALUE(cellHeight_, cellHeight) };


          // cellWidth Field Functions 
          bool hasCellWidth() const { return this->cellWidth_ != nullptr;};
          void deleteCellWidth() { this->cellWidth_ = nullptr;};
          inline int32_t getCellWidth() const { DARABONBA_PTR_GET_DEFAULT(cellWidth_, 0) };
          inline SpriteSnapshotConfig& setCellWidth(int32_t cellWidth) { DARABONBA_PTR_SET_VALUE(cellWidth_, cellWidth) };


          // color Field Functions 
          bool hasColor() const { return this->color_ != nullptr;};
          void deleteColor() { this->color_ = nullptr;};
          inline string getColor() const { DARABONBA_PTR_GET_DEFAULT(color_, "") };
          inline SpriteSnapshotConfig& setColor(string color) { DARABONBA_PTR_SET_VALUE(color_, color) };


          // columns Field Functions 
          bool hasColumns() const { return this->columns_ != nullptr;};
          void deleteColumns() { this->columns_ = nullptr;};
          inline int32_t getColumns() const { DARABONBA_PTR_GET_DEFAULT(columns_, 0) };
          inline SpriteSnapshotConfig& setColumns(int32_t columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };


          // lines Field Functions 
          bool hasLines() const { return this->lines_ != nullptr;};
          void deleteLines() { this->lines_ = nullptr;};
          inline int32_t getLines() const { DARABONBA_PTR_GET_DEFAULT(lines_, 0) };
          inline SpriteSnapshotConfig& setLines(int32_t lines) { DARABONBA_PTR_SET_VALUE(lines_, lines) };


          // margin Field Functions 
          bool hasMargin() const { return this->margin_ != nullptr;};
          void deleteMargin() { this->margin_ = nullptr;};
          inline int32_t getMargin() const { DARABONBA_PTR_GET_DEFAULT(margin_, 0) };
          inline SpriteSnapshotConfig& setMargin(int32_t margin) { DARABONBA_PTR_SET_VALUE(margin_, margin) };


          // padding Field Functions 
          bool hasPadding() const { return this->padding_ != nullptr;};
          void deletePadding() { this->padding_ = nullptr;};
          inline int32_t getPadding() const { DARABONBA_PTR_GET_DEFAULT(padding_, 0) };
          inline SpriteSnapshotConfig& setPadding(int32_t padding) { DARABONBA_PTR_SET_VALUE(padding_, padding) };


        protected:
          // The height of a single snapshot before tiling. The default value is the height of the output snapshot.
          shared_ptr<int32_t> cellHeight_ {};
          // The width of a single snapshot before tiling. The default value is the width of the output snapshot.
          shared_ptr<int32_t> cellWidth_ {};
          // The background color.
          shared_ptr<string> color_ {};
          // The number of columns that the image sprite contains.
          shared_ptr<int32_t> columns_ {};
          // The number of rows that the image sprite contains.
          shared_ptr<int32_t> lines_ {};
          // The width of the frame. Default value: 0. Unit: pixels.
          shared_ptr<int32_t> margin_ {};
          // The spacing between two adjacent snapshots. Default value: 0. Unit: pixels.
          shared_ptr<int32_t> padding_ {};
        };

        virtual bool empty() const override { return this->blackLevel_ == nullptr
        && this->count_ == nullptr && this->frameType_ == nullptr && this->height_ == nullptr && this->interval_ == nullptr && this->isSptFrag_ == nullptr
        && this->pixelBlackThreshold_ == nullptr && this->spriteSnapshotConfig_ == nullptr && this->time_ == nullptr && this->type_ == nullptr && this->width_ == nullptr; };
        // blackLevel Field Functions 
        bool hasBlackLevel() const { return this->blackLevel_ != nullptr;};
        void deleteBlackLevel() { this->blackLevel_ = nullptr;};
        inline int32_t getBlackLevel() const { DARABONBA_PTR_GET_DEFAULT(blackLevel_, 0) };
        inline OverwriteParams& setBlackLevel(int32_t blackLevel) { DARABONBA_PTR_SET_VALUE(blackLevel_, blackLevel) };


        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline OverwriteParams& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // frameType Field Functions 
        bool hasFrameType() const { return this->frameType_ != nullptr;};
        void deleteFrameType() { this->frameType_ = nullptr;};
        inline string getFrameType() const { DARABONBA_PTR_GET_DEFAULT(frameType_, "") };
        inline OverwriteParams& setFrameType(string frameType) { DARABONBA_PTR_SET_VALUE(frameType_, frameType) };


        // height Field Functions 
        bool hasHeight() const { return this->height_ != nullptr;};
        void deleteHeight() { this->height_ = nullptr;};
        inline int32_t getHeight() const { DARABONBA_PTR_GET_DEFAULT(height_, 0) };
        inline OverwriteParams& setHeight(int32_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


        // interval Field Functions 
        bool hasInterval() const { return this->interval_ != nullptr;};
        void deleteInterval() { this->interval_ = nullptr;};
        inline int64_t getInterval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0L) };
        inline OverwriteParams& setInterval(int64_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


        // isSptFrag Field Functions 
        bool hasIsSptFrag() const { return this->isSptFrag_ != nullptr;};
        void deleteIsSptFrag() { this->isSptFrag_ = nullptr;};
        inline bool getIsSptFrag() const { DARABONBA_PTR_GET_DEFAULT(isSptFrag_, false) };
        inline OverwriteParams& setIsSptFrag(bool isSptFrag) { DARABONBA_PTR_SET_VALUE(isSptFrag_, isSptFrag) };


        // pixelBlackThreshold Field Functions 
        bool hasPixelBlackThreshold() const { return this->pixelBlackThreshold_ != nullptr;};
        void deletePixelBlackThreshold() { this->pixelBlackThreshold_ = nullptr;};
        inline int32_t getPixelBlackThreshold() const { DARABONBA_PTR_GET_DEFAULT(pixelBlackThreshold_, 0) };
        inline OverwriteParams& setPixelBlackThreshold(int32_t pixelBlackThreshold) { DARABONBA_PTR_SET_VALUE(pixelBlackThreshold_, pixelBlackThreshold) };


        // spriteSnapshotConfig Field Functions 
        bool hasSpriteSnapshotConfig() const { return this->spriteSnapshotConfig_ != nullptr;};
        void deleteSpriteSnapshotConfig() { this->spriteSnapshotConfig_ = nullptr;};
        inline const OverwriteParams::SpriteSnapshotConfig & getSpriteSnapshotConfig() const { DARABONBA_PTR_GET_CONST(spriteSnapshotConfig_, OverwriteParams::SpriteSnapshotConfig) };
        inline OverwriteParams::SpriteSnapshotConfig getSpriteSnapshotConfig() { DARABONBA_PTR_GET(spriteSnapshotConfig_, OverwriteParams::SpriteSnapshotConfig) };
        inline OverwriteParams& setSpriteSnapshotConfig(const OverwriteParams::SpriteSnapshotConfig & spriteSnapshotConfig) { DARABONBA_PTR_SET_VALUE(spriteSnapshotConfig_, spriteSnapshotConfig) };
        inline OverwriteParams& setSpriteSnapshotConfig(OverwriteParams::SpriteSnapshotConfig && spriteSnapshotConfig) { DARABONBA_PTR_SET_RVALUE(spriteSnapshotConfig_, spriteSnapshotConfig) };


        // time Field Functions 
        bool hasTime() const { return this->time_ != nullptr;};
        void deleteTime() { this->time_ = nullptr;};
        inline int64_t getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
        inline OverwriteParams& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline OverwriteParams& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


        // width Field Functions 
        bool hasWidth() const { return this->width_ != nullptr;};
        void deleteWidth() { this->width_ = nullptr;};
        inline int32_t getWidth() const { DARABONBA_PTR_GET_DEFAULT(width_, 0) };
        inline OverwriteParams& setWidth(int32_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


      protected:
        // The threshold that is used to filter out black frames for the first snapshot to be captured. This feature is available if you request the system to capture multiple snapshots.
        shared_ptr<int32_t> blackLevel_ {};
        // The number of snapshots.
        shared_ptr<int64_t> count_ {};
        // The type of the frame.
        shared_ptr<string> frameType_ {};
        // The height of a captured snapshot.
        shared_ptr<int32_t> height_ {};
        // The interval at which snapshots are captured.
        shared_ptr<int64_t> interval_ {};
        // The WebVTT snapshot configuration that specifies whether to merge the output snapshots.
        shared_ptr<bool> isSptFrag_ {};
        // The color value threshold that determines whether a pixel is black.
        shared_ptr<int32_t> pixelBlackThreshold_ {};
        // The configuration of the sprite snapshot.
        shared_ptr<OverwriteParams::SpriteSnapshotConfig> spriteSnapshotConfig_ {};
        // The point in time at which the system starts to capture snapshots in the input video.
        shared_ptr<int64_t> time_ {};
        // The snapshot type. Valid values:
        shared_ptr<string> type_ {};
        // The width of a captured snapshot.
        shared_ptr<int32_t> width_ {};
      };

      virtual bool empty() const override { return this->overwriteParams_ == nullptr
        && this->templateId_ == nullptr; };
      // overwriteParams Field Functions 
      bool hasOverwriteParams() const { return this->overwriteParams_ != nullptr;};
      void deleteOverwriteParams() { this->overwriteParams_ = nullptr;};
      inline const TemplateConfig::OverwriteParams & getOverwriteParams() const { DARABONBA_PTR_GET_CONST(overwriteParams_, TemplateConfig::OverwriteParams) };
      inline TemplateConfig::OverwriteParams getOverwriteParams() { DARABONBA_PTR_GET(overwriteParams_, TemplateConfig::OverwriteParams) };
      inline TemplateConfig& setOverwriteParams(const TemplateConfig::OverwriteParams & overwriteParams) { DARABONBA_PTR_SET_VALUE(overwriteParams_, overwriteParams) };
      inline TemplateConfig& setOverwriteParams(TemplateConfig::OverwriteParams && overwriteParams) { DARABONBA_PTR_SET_RVALUE(overwriteParams_, overwriteParams) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
      inline TemplateConfig& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    protected:
      // The parameters that are used to overwrite the corresponding parameters.
      shared_ptr<TemplateConfig::OverwriteParams> overwriteParams_ {};
      // The template ID.
      // 
      // This parameter is required.
      shared_ptr<string> templateId_ {};
    };

    class ScheduleConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ScheduleConfig& obj) { 
        DARABONBA_PTR_TO_JSON(PipelineId, pipelineId_);
      };
      friend void from_json(const Darabonba::Json& j, ScheduleConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(PipelineId, pipelineId_);
      };
      ScheduleConfig() = default ;
      ScheduleConfig(const ScheduleConfig &) = default ;
      ScheduleConfig(ScheduleConfig &&) = default ;
      ScheduleConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ScheduleConfig() = default ;
      ScheduleConfig& operator=(const ScheduleConfig &) = default ;
      ScheduleConfig& operator=(ScheduleConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->pipelineId_ == nullptr; };
      // pipelineId Field Functions 
      bool hasPipelineId() const { return this->pipelineId_ != nullptr;};
      void deletePipelineId() { this->pipelineId_ = nullptr;};
      inline string getPipelineId() const { DARABONBA_PTR_GET_DEFAULT(pipelineId_, "") };
      inline ScheduleConfig& setPipelineId(string pipelineId) { DARABONBA_PTR_SET_VALUE(pipelineId_, pipelineId) };


    protected:
      // The ID of the ApsaraVideo Media Processing (MPS) queue that is used to run the job.
      shared_ptr<string> pipelineId_ {};
    };

    class Output : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Output& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Output& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
      };
      Output() = default ;
      Output(const Output &) = default ;
      Output(Output &&) = default ;
      Output(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Output() = default ;
      Output& operator=(const Output &) = default ;
      Output& operator=(Output &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Output& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Output& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The output file. If Type is set to OSS, the URL of an OSS object is returned. If Type is set to Media, the ID of a media asset is returned. The URL of an OSS object can be in one of the following formats:
      // 
      // 1.  oss://bucket/object
      // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object
      // 
      // In the URL, bucket specifies an OSS bucket that resides in the same region as the job, and object specifies the object URL in OSS. If multiple static snapshots were captured, the object must contain the "{Count}" placeholder. In the case of a sprite, the object must contain the "{TileCount}" placeholder. The suffix of the WebVTT snapshot objects must be ".vtt".
      // 
      // >  Before you use the OSS bucket in the URL, you must add the bucket on the [Storage Management](https://help.aliyun.com/document_detail/609918.html) page of the IMS console.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the output file. Valid values:
      // 
      // 1.  OSS: an OSS object.
      // 2.  Media: a media asset.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    class Input : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Input& obj) { 
        DARABONBA_PTR_TO_JSON(Media, media_);
        DARABONBA_PTR_TO_JSON(Type, type_);
      };
      friend void from_json(const Darabonba::Json& j, Input& obj) { 
        DARABONBA_PTR_FROM_JSON(Media, media_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
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
      virtual bool empty() const override { return this->media_ == nullptr
        && this->type_ == nullptr; };
      // media Field Functions 
      bool hasMedia() const { return this->media_ != nullptr;};
      void deleteMedia() { this->media_ = nullptr;};
      inline string getMedia() const { DARABONBA_PTR_GET_DEFAULT(media_, "") };
      inline Input& setMedia(string media) { DARABONBA_PTR_SET_VALUE(media_, media) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Input& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    protected:
      // The input file. If Type is set to OSS, the URL of an OSS object is returned. If Type is set to Media, the ID of a media asset is returned. The URL of an OSS object can be in one of the following formats:
      // 
      // 1.  oss://bucket/object
      // 2.  http(s)://bucket.oss-[RegionId].aliyuncs.com/object In the URL, bucket specifies an OSS bucket that resides in the same region as the job, and object specifies the object URL in OSS.
      // 
      // >  Before you use the OSS bucket in the URL, you must add the bucket on the [Storage Management](https://help.aliyun.com/document_detail/609918.html) page of the Intelligent Media Services (IMS) console.
      // 
      // This parameter is required.
      shared_ptr<string> media_ {};
      // The type of the input file. Valid values:
      // 
      // 1.  OSS: an Object Storage Service (OSS) object.
      // 2.  Media: a media asset.
      // 
      // This parameter is required.
      shared_ptr<string> type_ {};
    };

    virtual bool empty() const override { return this->input_ == nullptr
        && this->name_ == nullptr && this->output_ == nullptr && this->scheduleConfig_ == nullptr && this->templateConfig_ == nullptr && this->userData_ == nullptr; };
    // input Field Functions 
    bool hasInput() const { return this->input_ != nullptr;};
    void deleteInput() { this->input_ = nullptr;};
    inline const SubmitSnapshotJobRequest::Input & getInput() const { DARABONBA_PTR_GET_CONST(input_, SubmitSnapshotJobRequest::Input) };
    inline SubmitSnapshotJobRequest::Input getInput() { DARABONBA_PTR_GET(input_, SubmitSnapshotJobRequest::Input) };
    inline SubmitSnapshotJobRequest& setInput(const SubmitSnapshotJobRequest::Input & input) { DARABONBA_PTR_SET_VALUE(input_, input) };
    inline SubmitSnapshotJobRequest& setInput(SubmitSnapshotJobRequest::Input && input) { DARABONBA_PTR_SET_RVALUE(input_, input) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline SubmitSnapshotJobRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // output Field Functions 
    bool hasOutput() const { return this->output_ != nullptr;};
    void deleteOutput() { this->output_ = nullptr;};
    inline const SubmitSnapshotJobRequest::Output & getOutput() const { DARABONBA_PTR_GET_CONST(output_, SubmitSnapshotJobRequest::Output) };
    inline SubmitSnapshotJobRequest::Output getOutput() { DARABONBA_PTR_GET(output_, SubmitSnapshotJobRequest::Output) };
    inline SubmitSnapshotJobRequest& setOutput(const SubmitSnapshotJobRequest::Output & output) { DARABONBA_PTR_SET_VALUE(output_, output) };
    inline SubmitSnapshotJobRequest& setOutput(SubmitSnapshotJobRequest::Output && output) { DARABONBA_PTR_SET_RVALUE(output_, output) };


    // scheduleConfig Field Functions 
    bool hasScheduleConfig() const { return this->scheduleConfig_ != nullptr;};
    void deleteScheduleConfig() { this->scheduleConfig_ = nullptr;};
    inline const SubmitSnapshotJobRequest::ScheduleConfig & getScheduleConfig() const { DARABONBA_PTR_GET_CONST(scheduleConfig_, SubmitSnapshotJobRequest::ScheduleConfig) };
    inline SubmitSnapshotJobRequest::ScheduleConfig getScheduleConfig() { DARABONBA_PTR_GET(scheduleConfig_, SubmitSnapshotJobRequest::ScheduleConfig) };
    inline SubmitSnapshotJobRequest& setScheduleConfig(const SubmitSnapshotJobRequest::ScheduleConfig & scheduleConfig) { DARABONBA_PTR_SET_VALUE(scheduleConfig_, scheduleConfig) };
    inline SubmitSnapshotJobRequest& setScheduleConfig(SubmitSnapshotJobRequest::ScheduleConfig && scheduleConfig) { DARABONBA_PTR_SET_RVALUE(scheduleConfig_, scheduleConfig) };


    // templateConfig Field Functions 
    bool hasTemplateConfig() const { return this->templateConfig_ != nullptr;};
    void deleteTemplateConfig() { this->templateConfig_ = nullptr;};
    inline const SubmitSnapshotJobRequest::TemplateConfig & getTemplateConfig() const { DARABONBA_PTR_GET_CONST(templateConfig_, SubmitSnapshotJobRequest::TemplateConfig) };
    inline SubmitSnapshotJobRequest::TemplateConfig getTemplateConfig() { DARABONBA_PTR_GET(templateConfig_, SubmitSnapshotJobRequest::TemplateConfig) };
    inline SubmitSnapshotJobRequest& setTemplateConfig(const SubmitSnapshotJobRequest::TemplateConfig & templateConfig) { DARABONBA_PTR_SET_VALUE(templateConfig_, templateConfig) };
    inline SubmitSnapshotJobRequest& setTemplateConfig(SubmitSnapshotJobRequest::TemplateConfig && templateConfig) { DARABONBA_PTR_SET_RVALUE(templateConfig_, templateConfig) };


    // userData Field Functions 
    bool hasUserData() const { return this->userData_ != nullptr;};
    void deleteUserData() { this->userData_ = nullptr;};
    inline string getUserData() const { DARABONBA_PTR_GET_DEFAULT(userData_, "") };
    inline SubmitSnapshotJobRequest& setUserData(string userData) { DARABONBA_PTR_SET_VALUE(userData_, userData) };


  protected:
    // The snapshot input.
    // 
    // This parameter is required.
    shared_ptr<SubmitSnapshotJobRequest::Input> input_ {};
    // The name of the job.
    shared_ptr<string> name_ {};
    // The snapshot output.
    // 
    // This parameter is required.
    shared_ptr<SubmitSnapshotJobRequest::Output> output_ {};
    // The scheduling settings.
    shared_ptr<SubmitSnapshotJobRequest::ScheduleConfig> scheduleConfig_ {};
    // The snapshot template configuration.
    // 
    // This parameter is required.
    shared_ptr<SubmitSnapshotJobRequest::TemplateConfig> templateConfig_ {};
    // The user-defined data.
    shared_ptr<string> userData_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
