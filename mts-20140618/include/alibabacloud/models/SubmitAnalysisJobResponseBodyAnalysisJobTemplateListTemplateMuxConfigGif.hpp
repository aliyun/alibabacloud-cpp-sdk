// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATEMUXCONFIGGIF_HPP_
#define ALIBABACLOUD_MODELS_SUBMITANALYSISJOBRESPONSEBODYANALYSISJOBTEMPLATELISTTEMPLATEMUXCONFIGGIF_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mts20140618
{
namespace Models
{
  class SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif& obj) { 
      DARABONBA_PTR_TO_JSON(FinalDelay, finalDelay_);
      DARABONBA_PTR_TO_JSON(Loop, loop_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif& obj) { 
      DARABONBA_PTR_FROM_JSON(FinalDelay, finalDelay_);
      DARABONBA_PTR_FROM_JSON(Loop, loop_);
    };
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif &&) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif() = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif& operator=(const SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif &) = default ;
    SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif& operator=(SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->finalDelay_ == nullptr
        && return this->loop_ == nullptr; };
    // finalDelay Field Functions 
    bool hasFinalDelay() const { return this->finalDelay_ != nullptr;};
    void deleteFinalDelay() { this->finalDelay_ = nullptr;};
    inline string finalDelay() const { DARABONBA_PTR_GET_DEFAULT(finalDelay_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif& setFinalDelay(string finalDelay) { DARABONBA_PTR_SET_VALUE(finalDelay_, finalDelay) };


    // loop Field Functions 
    bool hasLoop() const { return this->loop_ != nullptr;};
    void deleteLoop() { this->loop_ = nullptr;};
    inline string loop() const { DARABONBA_PTR_GET_DEFAULT(loop_, "") };
    inline SubmitAnalysisJobResponseBodyAnalysisJobTemplateListTemplateMuxConfigGif& setLoop(string loop) { DARABONBA_PTR_SET_VALUE(loop_, loop) };


  protected:
    // The interval between two consecutive loops for the GIF format. Unit: 0.01s. For example, a value of 500 indicates 5 seconds.
    std::shared_ptr<string> finalDelay_ = nullptr;
    // The number of loops for the GIF or WebP format. Default value: 0.
    std::shared_ptr<string> loop_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mts20140618
#endif
