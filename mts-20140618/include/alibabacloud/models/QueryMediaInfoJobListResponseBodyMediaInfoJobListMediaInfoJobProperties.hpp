// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTRESPONSEBODYMEDIAINFOJOBLISTMEDIAINFOJOBPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIAINFOJOBLISTRESPONSEBODYMEDIAINFOJOBLISTMEDIAINFOJOBPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesFormat.hpp>
#include <alibabacloud/models/QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesStreams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_TO_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Streams, streams_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_FROM_JSON(FileMd5, fileMd5_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Streams, streams_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties() = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties(const QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties &) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties(QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties &&) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties() = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& operator=(const QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties &) = default ;
    QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& operator=(QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->duration_ == nullptr && return this->fileFormat_ == nullptr && return this->fileMd5_ == nullptr && return this->fileSize_ == nullptr && return this->format_ == nullptr
        && return this->fps_ == nullptr && return this->height_ == nullptr && return this->streams_ == nullptr && return this->width_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileFormat Field Functions 
    bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
    void deleteFileFormat() { this->fileFormat_ = nullptr;};
    inline string fileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


    // fileMd5 Field Functions 
    bool hasFileMd5() const { return this->fileMd5_ != nullptr;};
    void deleteFileMd5() { this->fileMd5_ = nullptr;};
    inline string fileMd5() const { DARABONBA_PTR_GET_DEFAULT(fileMd5_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setFileMd5(string fileMd5) { DARABONBA_PTR_SET_VALUE(fileMd5_, fileMd5) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline const Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesFormat & format() const { DARABONBA_PTR_GET_CONST(format_, Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesFormat) };
    inline Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesFormat format() { DARABONBA_PTR_GET(format_, Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesFormat) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setFormat(const Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesFormat & format) { DARABONBA_PTR_SET_VALUE(format_, format) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setFormat(Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesFormat && format) { DARABONBA_PTR_SET_RVALUE(format_, format) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // streams Field Functions 
    bool hasStreams() const { return this->streams_ != nullptr;};
    void deleteStreams() { this->streams_ = nullptr;};
    inline const Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesStreams & streams() const { DARABONBA_PTR_GET_CONST(streams_, Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesStreams) };
    inline Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesStreams streams() { DARABONBA_PTR_GET(streams_, Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesStreams) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setStreams(const Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesStreams & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setStreams(Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesStreams && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobProperties& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The bitrate of the media file.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The duration of the media file.
    std::shared_ptr<string> duration_ = nullptr;
    // The format of the input media file.
    std::shared_ptr<string> fileFormat_ = nullptr;
    std::shared_ptr<string> fileMd5_ = nullptr;
    // The size of the image file.
    std::shared_ptr<string> fileSize_ = nullptr;
    // The format information.
    std::shared_ptr<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesFormat> format_ = nullptr;
    // The frame rate of the media file.
    std::shared_ptr<string> fps_ = nullptr;
    // The height of the video. Unit: pixel.
    std::shared_ptr<string> height_ = nullptr;
    // The media streams that are contained in the input media file.
    std::shared_ptr<Models::QueryMediaInfoJobListResponseBodyMediaInfoJobListMediaInfoJobPropertiesStreams> streams_ = nullptr;
    // The width of the video. Unit: pixel.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
