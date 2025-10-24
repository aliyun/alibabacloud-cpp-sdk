// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATEMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_ADDTEMPLATERESPONSEBODYTEMPLATEMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/AddTemplateResponseBodyTemplateMuxConfigGif.hpp>
#include <alibabacloud/models/AddTemplateResponseBodyTemplateMuxConfigSegment.hpp>
#include <alibabacloud/models/AddTemplateResponseBodyTemplateMuxConfigWebp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class AddTemplateResponseBodyTemplateMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddTemplateResponseBodyTemplateMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Gif, gif_);
      DARABONBA_PTR_TO_JSON(Segment, segment_);
      DARABONBA_PTR_TO_JSON(Webp, webp_);
    };
    friend void from_json(const Darabonba::Json& j, AddTemplateResponseBodyTemplateMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Gif, gif_);
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
      DARABONBA_PTR_FROM_JSON(Webp, webp_);
    };
    AddTemplateResponseBodyTemplateMuxConfig() = default ;
    AddTemplateResponseBodyTemplateMuxConfig(const AddTemplateResponseBodyTemplateMuxConfig &) = default ;
    AddTemplateResponseBodyTemplateMuxConfig(AddTemplateResponseBodyTemplateMuxConfig &&) = default ;
    AddTemplateResponseBodyTemplateMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddTemplateResponseBodyTemplateMuxConfig() = default ;
    AddTemplateResponseBodyTemplateMuxConfig& operator=(const AddTemplateResponseBodyTemplateMuxConfig &) = default ;
    AddTemplateResponseBodyTemplateMuxConfig& operator=(AddTemplateResponseBodyTemplateMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gif_ == nullptr
        && return this->segment_ == nullptr && return this->webp_ == nullptr; };
    // gif Field Functions 
    bool hasGif() const { return this->gif_ != nullptr;};
    void deleteGif() { this->gif_ = nullptr;};
    inline const Models::AddTemplateResponseBodyTemplateMuxConfigGif & gif() const { DARABONBA_PTR_GET_CONST(gif_, Models::AddTemplateResponseBodyTemplateMuxConfigGif) };
    inline Models::AddTemplateResponseBodyTemplateMuxConfigGif gif() { DARABONBA_PTR_GET(gif_, Models::AddTemplateResponseBodyTemplateMuxConfigGif) };
    inline AddTemplateResponseBodyTemplateMuxConfig& setGif(const Models::AddTemplateResponseBodyTemplateMuxConfigGif & gif) { DARABONBA_PTR_SET_VALUE(gif_, gif) };
    inline AddTemplateResponseBodyTemplateMuxConfig& setGif(Models::AddTemplateResponseBodyTemplateMuxConfigGif && gif) { DARABONBA_PTR_SET_RVALUE(gif_, gif) };


    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::AddTemplateResponseBodyTemplateMuxConfigSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::AddTemplateResponseBodyTemplateMuxConfigSegment) };
    inline Models::AddTemplateResponseBodyTemplateMuxConfigSegment segment() { DARABONBA_PTR_GET(segment_, Models::AddTemplateResponseBodyTemplateMuxConfigSegment) };
    inline AddTemplateResponseBodyTemplateMuxConfig& setSegment(const Models::AddTemplateResponseBodyTemplateMuxConfigSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline AddTemplateResponseBodyTemplateMuxConfig& setSegment(Models::AddTemplateResponseBodyTemplateMuxConfigSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


    // webp Field Functions 
    bool hasWebp() const { return this->webp_ != nullptr;};
    void deleteWebp() { this->webp_ = nullptr;};
    inline const Models::AddTemplateResponseBodyTemplateMuxConfigWebp & webp() const { DARABONBA_PTR_GET_CONST(webp_, Models::AddTemplateResponseBodyTemplateMuxConfigWebp) };
    inline Models::AddTemplateResponseBodyTemplateMuxConfigWebp webp() { DARABONBA_PTR_GET(webp_, Models::AddTemplateResponseBodyTemplateMuxConfigWebp) };
    inline AddTemplateResponseBodyTemplateMuxConfig& setWebp(const Models::AddTemplateResponseBodyTemplateMuxConfigWebp & webp) { DARABONBA_PTR_SET_VALUE(webp_, webp) };
    inline AddTemplateResponseBodyTemplateMuxConfig& setWebp(Models::AddTemplateResponseBodyTemplateMuxConfigWebp && webp) { DARABONBA_PTR_SET_RVALUE(webp_, webp) };


  protected:
    // The transmuxing settings for GIF.
    std::shared_ptr<Models::AddTemplateResponseBodyTemplateMuxConfigGif> gif_ = nullptr;
    // The segment settings.
    std::shared_ptr<Models::AddTemplateResponseBodyTemplateMuxConfigSegment> segment_ = nullptr;
    // The transmuxing settings for WebP.
    std::shared_ptr<Models::AddTemplateResponseBodyTemplateMuxConfigWebp> webp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
