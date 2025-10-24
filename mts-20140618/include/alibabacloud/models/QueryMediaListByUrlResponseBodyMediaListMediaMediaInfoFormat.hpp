// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAMEDIAINFOFORMAT_HPP_
#define ALIBABACLOUD_MODELS_QUERYMEDIALISTBYURLRESPONSEBODYMEDIALISTMEDIAMEDIAINFOFORMAT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& obj) { 
      DARABONBA_PTR_TO_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(FormatLongName, formatLongName_);
      DARABONBA_PTR_TO_JSON(FormatName, formatName_);
      DARABONBA_PTR_TO_JSON(NumPrograms, numPrograms_);
      DARABONBA_PTR_TO_JSON(NumStreams, numStreams_);
      DARABONBA_PTR_TO_JSON(Size, size_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
    };
    friend void from_json(const Darabonba::Json& j, QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& obj) { 
      DARABONBA_PTR_FROM_JSON(Bitrate, bitrate_);
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(FormatLongName, formatLongName_);
      DARABONBA_PTR_FROM_JSON(FormatName, formatName_);
      DARABONBA_PTR_FROM_JSON(NumPrograms, numPrograms_);
      DARABONBA_PTR_FROM_JSON(NumStreams, numStreams_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
    };
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat(const QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat(QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat &&) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat() = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& operator=(const QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat &) = default ;
    QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& operator=(QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bitrate_ == nullptr
        && return this->duration_ == nullptr && return this->formatLongName_ == nullptr && return this->formatName_ == nullptr && return this->numPrograms_ == nullptr && return this->numStreams_ == nullptr
        && return this->size_ == nullptr && return this->startTime_ == nullptr; };
    // bitrate Field Functions 
    bool hasBitrate() const { return this->bitrate_ != nullptr;};
    void deleteBitrate() { this->bitrate_ = nullptr;};
    inline string bitrate() const { DARABONBA_PTR_GET_DEFAULT(bitrate_, "") };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& setBitrate(string bitrate) { DARABONBA_PTR_SET_VALUE(bitrate_, bitrate) };


    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // formatLongName Field Functions 
    bool hasFormatLongName() const { return this->formatLongName_ != nullptr;};
    void deleteFormatLongName() { this->formatLongName_ = nullptr;};
    inline string formatLongName() const { DARABONBA_PTR_GET_DEFAULT(formatLongName_, "") };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& setFormatLongName(string formatLongName) { DARABONBA_PTR_SET_VALUE(formatLongName_, formatLongName) };


    // formatName Field Functions 
    bool hasFormatName() const { return this->formatName_ != nullptr;};
    void deleteFormatName() { this->formatName_ = nullptr;};
    inline string formatName() const { DARABONBA_PTR_GET_DEFAULT(formatName_, "") };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& setFormatName(string formatName) { DARABONBA_PTR_SET_VALUE(formatName_, formatName) };


    // numPrograms Field Functions 
    bool hasNumPrograms() const { return this->numPrograms_ != nullptr;};
    void deleteNumPrograms() { this->numPrograms_ = nullptr;};
    inline string numPrograms() const { DARABONBA_PTR_GET_DEFAULT(numPrograms_, "") };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& setNumPrograms(string numPrograms) { DARABONBA_PTR_SET_VALUE(numPrograms_, numPrograms) };


    // numStreams Field Functions 
    bool hasNumStreams() const { return this->numStreams_ != nullptr;};
    void deleteNumStreams() { this->numStreams_ = nullptr;};
    inline string numStreams() const { DARABONBA_PTR_GET_DEFAULT(numStreams_, "") };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& setNumStreams(string numStreams) { DARABONBA_PTR_SET_VALUE(numStreams_, numStreams) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline string size() const { DARABONBA_PTR_GET_DEFAULT(size_, "") };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& setSize(string size) { DARABONBA_PTR_SET_VALUE(size_, size) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline QueryMediaListByURLResponseBodyMediaListMediaMediaInfoFormat& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


  protected:
    // The bitrate.
    std::shared_ptr<string> bitrate_ = nullptr;
    // The duration.
    std::shared_ptr<string> duration_ = nullptr;
    // The full name of the encoding format.
    std::shared_ptr<string> formatLongName_ = nullptr;
    // The short name of the container format. Valid values: mov, mp4, m4a, 3gp, 3g2, and mj2.
    std::shared_ptr<string> formatName_ = nullptr;
    // The total number of program streams.
    std::shared_ptr<string> numPrograms_ = nullptr;
    // The total number of media streams.
    std::shared_ptr<string> numStreams_ = nullptr;
    // The size.
    std::shared_ptr<string> size_ = nullptr;
    // The start time.
    std::shared_ptr<string> startTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
