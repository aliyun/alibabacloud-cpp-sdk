// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHTEMPLATERESPONSEBODYTEMPLATELISTTEMPLATEMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SEARCHTEMPLATERESPONSEBODYTEMPLATELISTTEMPLATEMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SearchTemplateResponseBodyTemplateListTemplateMuxConfigGif.hpp>
#include <alibabacloud/models/SearchTemplateResponseBodyTemplateListTemplateMuxConfigSegment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SearchTemplateResponseBodyTemplateListTemplateMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchTemplateResponseBodyTemplateListTemplateMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Gif, gif_);
      DARABONBA_PTR_TO_JSON(Segment, segment_);
    };
    friend void from_json(const Darabonba::Json& j, SearchTemplateResponseBodyTemplateListTemplateMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Gif, gif_);
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
    };
    SearchTemplateResponseBodyTemplateListTemplateMuxConfig() = default ;
    SearchTemplateResponseBodyTemplateListTemplateMuxConfig(const SearchTemplateResponseBodyTemplateListTemplateMuxConfig &) = default ;
    SearchTemplateResponseBodyTemplateListTemplateMuxConfig(SearchTemplateResponseBodyTemplateListTemplateMuxConfig &&) = default ;
    SearchTemplateResponseBodyTemplateListTemplateMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchTemplateResponseBodyTemplateListTemplateMuxConfig() = default ;
    SearchTemplateResponseBodyTemplateListTemplateMuxConfig& operator=(const SearchTemplateResponseBodyTemplateListTemplateMuxConfig &) = default ;
    SearchTemplateResponseBodyTemplateListTemplateMuxConfig& operator=(SearchTemplateResponseBodyTemplateListTemplateMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gif_ == nullptr
        && return this->segment_ == nullptr; };
    // gif Field Functions 
    bool hasGif() const { return this->gif_ != nullptr;};
    void deleteGif() { this->gif_ = nullptr;};
    inline const Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigGif & gif() const { DARABONBA_PTR_GET_CONST(gif_, Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigGif) };
    inline Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigGif gif() { DARABONBA_PTR_GET(gif_, Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigGif) };
    inline SearchTemplateResponseBodyTemplateListTemplateMuxConfig& setGif(const Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigGif & gif) { DARABONBA_PTR_SET_VALUE(gif_, gif) };
    inline SearchTemplateResponseBodyTemplateListTemplateMuxConfig& setGif(Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigGif && gif) { DARABONBA_PTR_SET_RVALUE(gif_, gif) };


    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigSegment) };
    inline Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigSegment segment() { DARABONBA_PTR_GET(segment_, Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigSegment) };
    inline SearchTemplateResponseBodyTemplateListTemplateMuxConfig& setSegment(const Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline SearchTemplateResponseBodyTemplateListTemplateMuxConfig& setSegment(Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


  protected:
    // The transmuxing configurations for GIF.
    std::shared_ptr<Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigGif> gif_ = nullptr;
    // The segment configurations.
    std::shared_ptr<Models::SearchTemplateResponseBodyTemplateListTemplateMuxConfigSegment> segment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
