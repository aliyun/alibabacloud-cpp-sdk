// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATEMUXCONFIGSEGMENT_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATEMUXCONFIGSEGMENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment& obj) { 
      DARABONBA_PTR_TO_JSON(Duration, duration_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment& obj) { 
      DARABONBA_PTR_FROM_JSON(Duration, duration_);
    };
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment &&) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment& operator=(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment& operator=(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->duration_ == nullptr; };
    // duration Field Functions 
    bool hasDuration() const { return this->duration_ != nullptr;};
    void deleteDuration() { this->duration_ = nullptr;};
    inline string duration() const { DARABONBA_PTR_GET_DEFAULT(duration_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigSegment& setDuration(string duration) { DARABONBA_PTR_SET_VALUE(duration_, duration) };


  protected:
    // The length of the segment. Unit: seconds.
    std::shared_ptr<string> duration_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
