// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MEDIACONVERTMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_MEDIACONVERTMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/MediaConvertSegment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class MediaConvertMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MediaConvertMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Segment, segment_);
    };
    friend void from_json(const Darabonba::Json& j, MediaConvertMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
    };
    MediaConvertMuxConfig() = default ;
    MediaConvertMuxConfig(const MediaConvertMuxConfig &) = default ;
    MediaConvertMuxConfig(MediaConvertMuxConfig &&) = default ;
    MediaConvertMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MediaConvertMuxConfig() = default ;
    MediaConvertMuxConfig& operator=(const MediaConvertMuxConfig &) = default ;
    MediaConvertMuxConfig& operator=(MediaConvertMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->segment_ == nullptr; };
    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const MediaConvertSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, MediaConvertSegment) };
    inline MediaConvertSegment segment() { DARABONBA_PTR_GET(segment_, MediaConvertSegment) };
    inline MediaConvertMuxConfig& setSegment(const MediaConvertSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline MediaConvertMuxConfig& setSegment(MediaConvertSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


  protected:
    std::shared_ptr<MediaConvertSegment> segment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
