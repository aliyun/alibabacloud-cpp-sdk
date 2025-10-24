// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODYTEMPLATELISTTEMPLATEMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_QUERYTEMPLATELISTRESPONSEBODYTEMPLATELISTTEMPLATEMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryTemplateListResponseBodyTemplateListTemplateMuxConfigGif.hpp>
#include <alibabacloud/models/QueryTemplateListResponseBodyTemplateListTemplateMuxConfigSegment.hpp>
#include <alibabacloud/models/QueryTemplateListResponseBodyTemplateListTemplateMuxConfigWebp.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class QueryTemplateListResponseBodyTemplateListTemplateMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryTemplateListResponseBodyTemplateListTemplateMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Gif, gif_);
      DARABONBA_PTR_TO_JSON(Segment, segment_);
      DARABONBA_PTR_TO_JSON(Webp, webp_);
    };
    friend void from_json(const Darabonba::Json& j, QueryTemplateListResponseBodyTemplateListTemplateMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Gif, gif_);
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
      DARABONBA_PTR_FROM_JSON(Webp, webp_);
    };
    QueryTemplateListResponseBodyTemplateListTemplateMuxConfig() = default ;
    QueryTemplateListResponseBodyTemplateListTemplateMuxConfig(const QueryTemplateListResponseBodyTemplateListTemplateMuxConfig &) = default ;
    QueryTemplateListResponseBodyTemplateListTemplateMuxConfig(QueryTemplateListResponseBodyTemplateListTemplateMuxConfig &&) = default ;
    QueryTemplateListResponseBodyTemplateListTemplateMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryTemplateListResponseBodyTemplateListTemplateMuxConfig() = default ;
    QueryTemplateListResponseBodyTemplateListTemplateMuxConfig& operator=(const QueryTemplateListResponseBodyTemplateListTemplateMuxConfig &) = default ;
    QueryTemplateListResponseBodyTemplateListTemplateMuxConfig& operator=(QueryTemplateListResponseBodyTemplateListTemplateMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gif_ == nullptr
        && return this->segment_ == nullptr && return this->webp_ == nullptr; };
    // gif Field Functions 
    bool hasGif() const { return this->gif_ != nullptr;};
    void deleteGif() { this->gif_ = nullptr;};
    inline const Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigGif & gif() const { DARABONBA_PTR_GET_CONST(gif_, Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigGif) };
    inline Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigGif gif() { DARABONBA_PTR_GET(gif_, Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigGif) };
    inline QueryTemplateListResponseBodyTemplateListTemplateMuxConfig& setGif(const Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigGif & gif) { DARABONBA_PTR_SET_VALUE(gif_, gif) };
    inline QueryTemplateListResponseBodyTemplateListTemplateMuxConfig& setGif(Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigGif && gif) { DARABONBA_PTR_SET_RVALUE(gif_, gif) };


    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigSegment) };
    inline Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigSegment segment() { DARABONBA_PTR_GET(segment_, Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigSegment) };
    inline QueryTemplateListResponseBodyTemplateListTemplateMuxConfig& setSegment(const Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline QueryTemplateListResponseBodyTemplateListTemplateMuxConfig& setSegment(Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


    // webp Field Functions 
    bool hasWebp() const { return this->webp_ != nullptr;};
    void deleteWebp() { this->webp_ = nullptr;};
    inline const Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigWebp & webp() const { DARABONBA_PTR_GET_CONST(webp_, Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigWebp) };
    inline Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigWebp webp() { DARABONBA_PTR_GET(webp_, Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigWebp) };
    inline QueryTemplateListResponseBodyTemplateListTemplateMuxConfig& setWebp(const Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigWebp & webp) { DARABONBA_PTR_SET_VALUE(webp_, webp) };
    inline QueryTemplateListResponseBodyTemplateListTemplateMuxConfig& setWebp(Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigWebp && webp) { DARABONBA_PTR_SET_RVALUE(webp_, webp) };


  protected:
    // The transmuxing configurations for GIF.
    std::shared_ptr<Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigGif> gif_ = nullptr;
    // The segment configurations.
    std::shared_ptr<Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigSegment> segment_ = nullptr;
    // The transmuxing configurations for WebP.
    std::shared_ptr<Models::QueryTemplateListResponseBodyTemplateListTemplateMuxConfigWebp> webp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
