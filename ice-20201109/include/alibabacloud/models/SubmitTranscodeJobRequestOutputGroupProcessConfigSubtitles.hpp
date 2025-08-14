// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGSUBTITLES_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBREQUESTOUTPUTGROUPPROCESSCONFIGSUBTITLES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitlesOverwriteParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles& obj) { 
      DARABONBA_PTR_TO_JSON(OverwriteParams, overwriteParams_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles& obj) { 
      DARABONBA_PTR_FROM_JSON(OverwriteParams, overwriteParams_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles(const SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles(SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles &&) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles() = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles& operator=(const SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles &) = default ;
    SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles& operator=(SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->overwriteParams_ != nullptr
        && this->templateId_ != nullptr; };
    // overwriteParams Field Functions 
    bool hasOverwriteParams() const { return this->overwriteParams_ != nullptr;};
    void deleteOverwriteParams() { this->overwriteParams_ = nullptr;};
    inline const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitlesOverwriteParams & overwriteParams() const { DARABONBA_PTR_GET_CONST(overwriteParams_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitlesOverwriteParams) };
    inline Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitlesOverwriteParams overwriteParams() { DARABONBA_PTR_GET(overwriteParams_, Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitlesOverwriteParams) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles& setOverwriteParams(const Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitlesOverwriteParams & overwriteParams) { DARABONBA_PTR_SET_VALUE(overwriteParams_, overwriteParams) };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles& setOverwriteParams(Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitlesOverwriteParams && overwriteParams) { DARABONBA_PTR_SET_RVALUE(overwriteParams_, overwriteParams) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitles& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The parameters that are used to overwrite the corresponding parameters of the template.
    std::shared_ptr<Models::SubmitTranscodeJobRequestOutputGroupProcessConfigSubtitlesOverwriteParams> overwriteParams_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
