// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTJOBFEATURECLIPTIMESPAN_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTJOBFEATURECLIPTIMESPAN_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertJobFeatureClipTimeSpan : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertJobFeatureClipTimeSpan& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Seek, seek_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertJobFeatureClipTimeSpan& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Seek, seek_);
    };
    MediaConvertJobFeatureClipTimeSpan() = default ;
    MediaConvertJobFeatureClipTimeSpan(const MediaConvertJobFeatureClipTimeSpan &) = default ;
    MediaConvertJobFeatureClipTimeSpan(MediaConvertJobFeatureClipTimeSpan &&) = default ;
    MediaConvertJobFeatureClipTimeSpan(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertJobFeatureClipTimeSpan() = default ;
    MediaConvertJobFeatureClipTimeSpan& operator=(const MediaConvertJobFeatureClipTimeSpan &) = default ;
    MediaConvertJobFeatureClipTimeSpan& operator=(MediaConvertJobFeatureClipTimeSpan &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr
        && return this->end_ == nullptr && return this->seek_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline MediaConvertJobFeatureClipTimeSpan& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline string end() const { DARABONBA_PTR_GET_DEFAULT(end_, "") };
    inline MediaConvertJobFeatureClipTimeSpan& setEnd(string end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // seek Field Functions 
    bool hasSeek() const { return this->seek_ != nullptr;};
    void deleteSeek() { this->seek_ = nullptr;};
    inline string seek() const { DARABONBA_PTR_GET_DEFAULT(seek_, "") };
    inline MediaConvertJobFeatureClipTimeSpan& setSeek(string seek) { DARABONBA_PTR_SET_VALUE(seek_, seek) };


  protected:
    std::shared_ptr<string> duration_ = nullptr;
    std::shared_ptr<string> end_ = nullptr;
    std::shared_ptr<string> seek_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
