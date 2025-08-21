// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETEMPLATERESPONSEBODYTRANSCONFIGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETEMPLATERESPONSEBODYTRANSCONFIGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class DescribeTemplateResponseBodyTransConfigs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTemplateResponseBodyTransConfigs& obj) { 
      DARABONBA_PTR_TO_JSON(Fps, fps_);
      DARABONBA_PTR_TO_JSON(Gop, gop_);
      DARABONBA_PTR_TO_JSON(Height, height_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_TO_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_TO_JSON(Width, width_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTemplateResponseBodyTransConfigs& obj) { 
      DARABONBA_PTR_FROM_JSON(Fps, fps_);
      DARABONBA_PTR_FROM_JSON(Gop, gop_);
      DARABONBA_PTR_FROM_JSON(Height, height_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VideoBitrate, videoBitrate_);
      DARABONBA_PTR_FROM_JSON(VideoCodec, videoCodec_);
      DARABONBA_PTR_FROM_JSON(Width, width_);
    };
    DescribeTemplateResponseBodyTransConfigs() = default ;
    DescribeTemplateResponseBodyTransConfigs(const DescribeTemplateResponseBodyTransConfigs &) = default ;
    DescribeTemplateResponseBodyTransConfigs(DescribeTemplateResponseBodyTransConfigs &&) = default ;
    DescribeTemplateResponseBodyTransConfigs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTemplateResponseBodyTransConfigs() = default ;
    DescribeTemplateResponseBodyTransConfigs& operator=(const DescribeTemplateResponseBodyTransConfigs &) = default ;
    DescribeTemplateResponseBodyTransConfigs& operator=(DescribeTemplateResponseBodyTransConfigs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->fps_ != nullptr
        && this->gop_ != nullptr && this->height_ != nullptr && this->id_ != nullptr && this->name_ != nullptr && this->videoBitrate_ != nullptr
        && this->videoCodec_ != nullptr && this->width_ != nullptr; };
    // fps Field Functions 
    bool hasFps() const { return this->fps_ != nullptr;};
    void deleteFps() { this->fps_ = nullptr;};
    inline int64_t fps() const { DARABONBA_PTR_GET_DEFAULT(fps_, 0L) };
    inline DescribeTemplateResponseBodyTransConfigs& setFps(int64_t fps) { DARABONBA_PTR_SET_VALUE(fps_, fps) };


    // gop Field Functions 
    bool hasGop() const { return this->gop_ != nullptr;};
    void deleteGop() { this->gop_ = nullptr;};
    inline int64_t gop() const { DARABONBA_PTR_GET_DEFAULT(gop_, 0L) };
    inline DescribeTemplateResponseBodyTransConfigs& setGop(int64_t gop) { DARABONBA_PTR_SET_VALUE(gop_, gop) };


    // height Field Functions 
    bool hasHeight() const { return this->height_ != nullptr;};
    void deleteHeight() { this->height_ = nullptr;};
    inline int64_t height() const { DARABONBA_PTR_GET_DEFAULT(height_, 0L) };
    inline DescribeTemplateResponseBodyTransConfigs& setHeight(int64_t height) { DARABONBA_PTR_SET_VALUE(height_, height) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeTemplateResponseBodyTransConfigs& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeTemplateResponseBodyTransConfigs& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // videoBitrate Field Functions 
    bool hasVideoBitrate() const { return this->videoBitrate_ != nullptr;};
    void deleteVideoBitrate() { this->videoBitrate_ = nullptr;};
    inline int64_t videoBitrate() const { DARABONBA_PTR_GET_DEFAULT(videoBitrate_, 0L) };
    inline DescribeTemplateResponseBodyTransConfigs& setVideoBitrate(int64_t videoBitrate) { DARABONBA_PTR_SET_VALUE(videoBitrate_, videoBitrate) };


    // videoCodec Field Functions 
    bool hasVideoCodec() const { return this->videoCodec_ != nullptr;};
    void deleteVideoCodec() { this->videoCodec_ = nullptr;};
    inline string videoCodec() const { DARABONBA_PTR_GET_DEFAULT(videoCodec_, "") };
    inline DescribeTemplateResponseBodyTransConfigs& setVideoCodec(string videoCodec) { DARABONBA_PTR_SET_VALUE(videoCodec_, videoCodec) };


    // width Field Functions 
    bool hasWidth() const { return this->width_ != nullptr;};
    void deleteWidth() { this->width_ = nullptr;};
    inline int64_t width() const { DARABONBA_PTR_GET_DEFAULT(width_, 0L) };
    inline DescribeTemplateResponseBodyTransConfigs& setWidth(int64_t width) { DARABONBA_PTR_SET_VALUE(width_, width) };


  protected:
    std::shared_ptr<int64_t> fps_ = nullptr;
    std::shared_ptr<int64_t> gop_ = nullptr;
    std::shared_ptr<int64_t> height_ = nullptr;
    std::shared_ptr<string> id_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<int64_t> videoBitrate_ = nullptr;
    std::shared_ptr<string> videoCodec_ = nullptr;
    std::shared_ptr<int64_t> width_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
