// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATEMUXCONFIG_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATEMUXCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig& obj) { 
      DARABONBA_PTR_TO_JSON(Segment, segment_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(Segment, segment_);
    };
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig &&) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig& operator=(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig& operator=(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->segment_ != nullptr; };
    // segment Field Functions 
    bool hasSegment() const { return this->segment_ != nullptr;};
    void deleteSegment() { this->segment_ = nullptr;};
    inline const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment & segment() const { DARABONBA_PTR_GET_CONST(segment_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment) };
    inline Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment segment() { DARABONBA_PTR_GET(segment_, Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig& setSegment(const Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment & segment) { DARABONBA_PTR_SET_VALUE(segment_, segment) };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfig& setSegment(Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment && segment) { DARABONBA_PTR_SET_RVALUE(segment_, segment) };


  protected:
    std::shared_ptr<Models::GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment> segment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
