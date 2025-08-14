// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUESTTEMPLATECONFIG_HPP_
#define ALIBABACLOUD_MODELS_SUBMITSNAPSHOTJOBREQUESTTEMPLATECONFIG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/SubmitSnapshotJobRequestTemplateConfigOverwriteParams.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ICE20201109
{
namespace Models
{
  class SubmitSnapshotJobRequestTemplateConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SubmitSnapshotJobRequestTemplateConfig& obj) { 
      DARABONBA_PTR_TO_JSON(OverwriteParams, overwriteParams_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SubmitSnapshotJobRequestTemplateConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(OverwriteParams, overwriteParams_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SubmitSnapshotJobRequestTemplateConfig() = default ;
    SubmitSnapshotJobRequestTemplateConfig(const SubmitSnapshotJobRequestTemplateConfig &) = default ;
    SubmitSnapshotJobRequestTemplateConfig(SubmitSnapshotJobRequestTemplateConfig &&) = default ;
    SubmitSnapshotJobRequestTemplateConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SubmitSnapshotJobRequestTemplateConfig() = default ;
    SubmitSnapshotJobRequestTemplateConfig& operator=(const SubmitSnapshotJobRequestTemplateConfig &) = default ;
    SubmitSnapshotJobRequestTemplateConfig& operator=(SubmitSnapshotJobRequestTemplateConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->overwriteParams_ != nullptr
        && this->templateId_ != nullptr; };
    // overwriteParams Field Functions 
    bool hasOverwriteParams() const { return this->overwriteParams_ != nullptr;};
    void deleteOverwriteParams() { this->overwriteParams_ = nullptr;};
    inline const Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParams & overwriteParams() const { DARABONBA_PTR_GET_CONST(overwriteParams_, Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParams) };
    inline Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParams overwriteParams() { DARABONBA_PTR_GET(overwriteParams_, Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParams) };
    inline SubmitSnapshotJobRequestTemplateConfig& setOverwriteParams(const Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParams & overwriteParams) { DARABONBA_PTR_SET_VALUE(overwriteParams_, overwriteParams) };
    inline SubmitSnapshotJobRequestTemplateConfig& setOverwriteParams(Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParams && overwriteParams) { DARABONBA_PTR_SET_RVALUE(overwriteParams_, overwriteParams) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SubmitSnapshotJobRequestTemplateConfig& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The parameters that are used to overwrite the corresponding parameters.
    std::shared_ptr<Models::SubmitSnapshotJobRequestTemplateConfigOverwriteParams> overwriteParams_ = nullptr;
    // The template ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ICE20201109
#endif
