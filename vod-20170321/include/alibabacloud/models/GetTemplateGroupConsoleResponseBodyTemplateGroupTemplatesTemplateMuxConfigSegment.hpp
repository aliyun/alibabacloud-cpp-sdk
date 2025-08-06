// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATEMUXCONFIGSEGMENT_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATEGROUPCONSOLERESPONSEBODYTEMPLATEGROUPTEMPLATESTEMPLATEMUXCONFIGSEGMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment &&) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment() = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment& operator=(const GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment &) = default ;
    GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment& operator=(GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->duration_ != nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline GetTemplateGroupConsoleResponseBodyTemplateGroupTemplatesTemplateMuxConfigSegment& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


  protected:
    std::shared_ptr<string> duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
