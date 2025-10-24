// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODYTEMPLATEMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_UPDATETEMPLATERESPONSEBODYTEMPLATEMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateMuxConfigGif.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateMuxConfigSegment.hpp>
#include <alibabacloud/models/UpdateTemplateResponseBodyTemplateMuxConfigWebp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class UpdateTemplateResponseBodyTemplateMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTemplateResponseBodyTemplateMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Gif, gif_);
      DARABONBA_PTR_TO_JSON(Segment, segment_);
      DARABONBA_PTR_TO_JSON(Webp, webp_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTemplateResponseBodyTemplateMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Gif, gif_);
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
      DARABONBA_PTR_FROM_JSON(Webp, webp_);
    };
    UpdateTemplateResponseBodyTemplateMuxConfig() = default ;
    UpdateTemplateResponseBodyTemplateMuxConfig(const UpdateTemplateResponseBodyTemplateMuxConfig &) = default ;
    UpdateTemplateResponseBodyTemplateMuxConfig(UpdateTemplateResponseBodyTemplateMuxConfig &&) = default ;
    UpdateTemplateResponseBodyTemplateMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTemplateResponseBodyTemplateMuxConfig() = default ;
    UpdateTemplateResponseBodyTemplateMuxConfig& operator=(const UpdateTemplateResponseBodyTemplateMuxConfig &) = default ;
    UpdateTemplateResponseBodyTemplateMuxConfig& operator=(UpdateTemplateResponseBodyTemplateMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gif_ == nullptr
        && return this->segment_ == nullptr && return this->webp_ == nullptr; };
    // gif Field Functions 
    bool hasGif() const { return this->gif_ != nullptr;};
    void deleteGif() { this->gif_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateMuxConfigGif & gif() const { DARABONBA_PTR_GET_CONST(gif_, Models::UpdateTemplateResponseBodyTemplateMuxConfigGif) };
    inline Models::UpdateTemplateResponseBodyTemplateMuxConfigGif gif() { DARABONBA_PTR_GET(gif_, Models::UpdateTemplateResponseBodyTemplateMuxConfigGif) };
    inline UpdateTemplateResponseBodyTemplateMuxConfig& setGif(const Models::UpdateTemplateResponseBodyTemplateMuxConfigGif & gif) { DARABONBA_PTR_SET_VALUE(gif_, gif) };
    inline UpdateTemplateResponseBodyTemplateMuxConfig& setGif(Models::UpdateTemplateResponseBodyTemplateMuxConfigGif && gif) { DARABONBA_PTR_SET_RVALUE(gif_, gif) };


    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateMuxConfigSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::UpdateTemplateResponseBodyTemplateMuxConfigSegment) };
    inline Models::UpdateTemplateResponseBodyTemplateMuxConfigSegment segment() { DARABONBA_PTR_GET(segment_, Models::UpdateTemplateResponseBodyTemplateMuxConfigSegment) };
    inline UpdateTemplateResponseBodyTemplateMuxConfig& setSegment(const Models::UpdateTemplateResponseBodyTemplateMuxConfigSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline UpdateTemplateResponseBodyTemplateMuxConfig& setSegment(Models::UpdateTemplateResponseBodyTemplateMuxConfigSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


    // webp Field Functions 
    bool hasWebp() const { return this->webp_ != nullptr;};
    void deleteWebp() { this->webp_ = nullptr;};
    inline const Models::UpdateTemplateResponseBodyTemplateMuxConfigWebp & webp() const { DARABONBA_PTR_GET_CONST(webp_, Models::UpdateTemplateResponseBodyTemplateMuxConfigWebp) };
    inline Models::UpdateTemplateResponseBodyTemplateMuxConfigWebp webp() { DARABONBA_PTR_GET(webp_, Models::UpdateTemplateResponseBodyTemplateMuxConfigWebp) };
    inline UpdateTemplateResponseBodyTemplateMuxConfig& setWebp(const Models::UpdateTemplateResponseBodyTemplateMuxConfigWebp & webp) { DARABONBA_PTR_SET_VALUE(webp_, webp) };
    inline UpdateTemplateResponseBodyTemplateMuxConfig& setWebp(Models::UpdateTemplateResponseBodyTemplateMuxConfigWebp && webp) { DARABONBA_PTR_SET_RVALUE(webp_, webp) };


  protected:
    // The duration for which the final frame is paused. Unit: milliseconds.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateMuxConfigGif> gif_ = nullptr;
    // The length of the segment. Unit: seconds.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateMuxConfigSegment> segment_ = nullptr;
    // The loop count.
    std::shared_ptr<Models::UpdateTemplateResponseBodyTemplateMuxConfigWebp> webp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
