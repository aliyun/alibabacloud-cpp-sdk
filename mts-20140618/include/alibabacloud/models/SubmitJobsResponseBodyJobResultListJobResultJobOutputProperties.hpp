// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTPROPERTIES_HPP_
#define ALIBABACLOUD_MODELS_SUBMITJOBSRESPONSEBODYJOBRESULTLISTJOBRESULTJOBOUTPUTPROPERTIES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesFormat.hpp>
#include <alibabacloud/models/SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_TO_JSON(FileSize, fileSize_);
      DARABONBA_PTR_TO_JSON(Format, format_);
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Streams, streams_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FileFormat, fileFormat_);
      DARABONBA_PTR_FROM_JSON(FileSize, fileSize_);
      DARABONBA_PTR_FROM_JSON(Format, format_);
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Streams, streams_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties(const SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties(SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties &&) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties() = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& operator=(const SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties &) = default ;
    SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& operator=(SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->duration_ == nullptr && return this->fileFormat_ == nullptr && return this->fileSize_ == nullptr && return this->format_ == nullptr && return this->fps_ == nullptr
        && return this->height_ == nullptr && return this->streams_ == nullptr && return this->width_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // fileFormat Field Functions 
    bool hasFileFormat() const { return this->fileFormat_ != nullptr;};
    void deleteFileFormat() { this->fileFormat_ = nullptr;};
    inline string fileFormat() const { DARABONBA_PTR_GET_DEFAULT(fileFormat_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setFileFormat(string fileFormat) { DARABONBA_PTR_SET_VALUE(fileFormat_, fileFormat) };


    // fileSize Field Functions 
    bool hasFileSize() const { return this->fileSize_ != nullptr;};
    void deleteFileSize() { this->fileSize_ = nullptr;};
    inline string fileSize() const { DARABONBA_PTR_GET_DEFAULT(fileSize_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setFileSize(string fileSize) { DARABONBA_PTR_SET_VALUE(fileSize_, fileSize) };


    // format Field Functions 
    bool hasFormat() const { return this->format_ != nullptr;};
    void deleteFormat() { this->format_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesFormat & format() const { DARABONBA_PTR_GET_CONST(format_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesFormat) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesFormat format() { DARABONBA_PTR_GET(format_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesFormat) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setFormat(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesFormat & format) { DARABONBA_PTR_SET_VALUE(format_, format) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setFormat(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesFormat && format) { DARABONBA_PTR_SET_RVALUE(format_, format) };


    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline string fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setFps(string fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline string height() const { DARABONBA_PTR_GET_DEFAULT(height_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setHeight(string height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // streams Field Functions 
    bool hasStreams() const { return this->streams_ != nullptr;};
    void deleteStreams() { this->streams_ = nullptr;};
    inline const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams & streams() const { DARABONBA_PTR_GET_CONST(streams_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams) };
    inline Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams streams() { DARABONBA_PTR_GET(streams_, Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setStreams(const Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams & streams) { DARABONBA_PTR_SET_VALUE(streams_, streams) };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setStreams(Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams && streams) { DARABONBA_PTR_SET_RVALUE(streams_, streams) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline string width() const { DARABONBA_PTR_GET_DEFAULT(width_, "") };
    inline SubmitJobsResponseBodyJobResultListJobResultJobOutputProperties& setWidth(string width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    // The bitrate of the video.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The duration of the video.
    std::shared_ptr<string> duration_ = nullptr;
    // The format of the video.
    std::shared_ptr<string> fileFormat_ = nullptr;
    // The size of the file.
    std::shared_ptr<string> fileSize_ = nullptr;
    // The format information.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesFormat> format_ = nullptr;
    // The frame rate of the video. The value is a number.
    std::shared_ptr<string> fps_ = nullptr;
    // The height of the video.
    std::shared_ptr<string> height_ = nullptr;
    // The stream information.
    std::shared_ptr<Models::SubmitJobsResponseBodyJobResultListJobResultJobOutputPropertiesStreams> streams_ = nullptr;
    // The width of the video.
    std::shared_ptr<string> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
