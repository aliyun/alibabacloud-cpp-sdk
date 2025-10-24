// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATETRANSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATETRANSCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig& obj) { 
      DARABONBA_PTR_TO_JSON(TransMode, transMode_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(TransMode, transMode_);
    };
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig &&) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig& operator=(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig& operator=(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->transMode_ == nullptr; };
    // transMode Field Functions 
    bool hasTransMode() const { return this->transMode_ != nullptr;};
    void deleteTransMode() { this->transMode_ = nullptr;};
    inline string transMode() const { DARABONBA_PTR_GET_DEFAULT(transMode_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateTransConfig& setTransMode(string transMode) { DARABONBA_PTR_SET_VALUE(transMode_, transMode) };


  protected:
    // The transcoding mode. Valid values: onepass, twopass, and CBR. Default value: **onepass**.
    std::shared_ptr<string> transMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
