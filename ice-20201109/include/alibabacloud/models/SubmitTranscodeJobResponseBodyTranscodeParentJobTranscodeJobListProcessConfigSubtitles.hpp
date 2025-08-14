// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIGSUBTITLES_HPP_
#define ALIBABACLOUD_MODELS_SUBMITTRANSCODEJOBRESPONSEBODYTRANSCODEPARENTJOBTRANSCODEJOBLISTPROCESSCONFIGSUBTITLES_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitlesOverwriteParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles& obj) { 
      DARABONBA_PTR_TO_JSON(OverwriteParams, overwriteParams_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles& obj) { 
      DARABONBA_PTR_FROM_JSON(OverwriteParams, overwriteParams_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles(const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles(SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles &&) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles() = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles& operator=(const SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles &) = default ;
    SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles& operator=(SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->overwriteParams_ != nullptr
        && this->templateId_ != nullptr; };
    // overwriteParams Field Functions 
    bool hasOverwriteParams() const { return this->overwriteParams_ != nullptr;};
    void deleteOverwriteParams() { this->overwriteParams_ = nullptr;};
    inline const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitlesOverwriteParams & overwriteParams() const { DARABONBA_PTR_GET_CONST(overwriteParams_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitlesOverwriteParams) };
    inline Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitlesOverwriteParams overwriteParams() { DARABONBA_PTR_GET(overwriteParams_, Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitlesOverwriteParams) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles& setOverwriteParams(const Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitlesOverwriteParams & overwriteParams) { DARABONBA_PTR_SET_VALUE(overwriteParams_, overwriteParams) };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles& setOverwriteParams(Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitlesOverwriteParams && overwriteParams) { DARABONBA_PTR_SET_RVALUE(overwriteParams_, overwriteParams) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitles& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The parameters that are used to overwrite the corresponding parameters of the template.
    std::shared_ptr<Models::SubmitTranscodeJobResponseBodyTranscodeParentJobTranscodeJobListProcessConfigSubtitlesOverwriteParams> overwriteParams_ = nullptr;
    // The template ID.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
