// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATEMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATEMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif.hpp>
#include <alibabacloud/models/SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Gif, gif_);
      DARABONBA_PTR_TO_JSON(Segment, segment_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Gif, gif_);
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
    };
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig &&) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig& operator=(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig& operator=(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->gif_ == nullptr
        && return this->segment_ == nullptr; };
    // gif Field Functions 
    bool hasGif() const { return this->gif_ != nullptr;};
    void deleteGif() { this->gif_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif & gif() const { DARABONBA_PTR_GET_CONST(gif_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif gif() { DARABONBA_PTR_GET(gif_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig& setGif(const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif & gif) { DARABONBA_PTR_SET_VALUE(gif_, gif) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig& setGif(Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif && gif) { DARABONBA_PTR_SET_RVALUE(gif_, gif) };


    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment) };
    inline Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment segment() { DARABONBA_PTR_GET(segment_, Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig& setSegment(const Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfig& setSegment(Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


  protected:
    // The transmuxing configurations for the GIF format.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif> gif_ = nullptr;
    // The segment configurations.
    std::shared_ptr<Models::SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment> segment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
