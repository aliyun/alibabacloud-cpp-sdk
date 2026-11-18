// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEJOBTEMPLATESHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEJOBTEMPLATESHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EhpcInstant20230701
{
namespace Models
{
  class UpdateJobTemplateShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateJobTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobTemplateConfig, jobTemplateConfigShrink_);
      DARABONBA_PTR_TO_JSON(JobTemplateDescription, jobTemplateDescription_);
      DARABONBA_PTR_TO_JSON(JobTemplateId, jobTemplateId_);
      DARABONBA_PTR_TO_JSON(JobTemplateName, jobTemplateName_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateJobTemplateShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobTemplateConfig, jobTemplateConfigShrink_);
      DARABONBA_PTR_FROM_JSON(JobTemplateDescription, jobTemplateDescription_);
      DARABONBA_PTR_FROM_JSON(JobTemplateId, jobTemplateId_);
      DARABONBA_PTR_FROM_JSON(JobTemplateName, jobTemplateName_);
    };
    UpdateJobTemplateShrinkRequest() = default ;
    UpdateJobTemplateShrinkRequest(const UpdateJobTemplateShrinkRequest &) = default ;
    UpdateJobTemplateShrinkRequest(UpdateJobTemplateShrinkRequest &&) = default ;
    UpdateJobTemplateShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateJobTemplateShrinkRequest() = default ;
    UpdateJobTemplateShrinkRequest& operator=(const UpdateJobTemplateShrinkRequest &) = default ;
    UpdateJobTemplateShrinkRequest& operator=(UpdateJobTemplateShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobTemplateConfigShrink_ == nullptr
        && this->jobTemplateDescription_ == nullptr && this->jobTemplateId_ == nullptr && this->jobTemplateName_ == nullptr; };
    // jobTemplateConfigShrink Field Functions 
    bool hasJobTemplateConfigShrink() const { return this->jobTemplateConfigShrink_ != nullptr;};
    void deleteJobTemplateConfigShrink() { this->jobTemplateConfigShrink_ = nullptr;};
    inline string getJobTemplateConfigShrink() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateConfigShrink_, "") };
    inline UpdateJobTemplateShrinkRequest& setJobTemplateConfigShrink(string jobTemplateConfigShrink) { DARABONBA_PTR_SET_VALUE(jobTemplateConfigShrink_, jobTemplateConfigShrink) };


    // jobTemplateDescription Field Functions 
    bool hasJobTemplateDescription() const { return this->jobTemplateDescription_ != nullptr;};
    void deleteJobTemplateDescription() { this->jobTemplateDescription_ = nullptr;};
    inline string getJobTemplateDescription() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateDescription_, "") };
    inline UpdateJobTemplateShrinkRequest& setJobTemplateDescription(string jobTemplateDescription) { DARABONBA_PTR_SET_VALUE(jobTemplateDescription_, jobTemplateDescription) };


    // jobTemplateId Field Functions 
    bool hasJobTemplateId() const { return this->jobTemplateId_ != nullptr;};
    void deleteJobTemplateId() { this->jobTemplateId_ = nullptr;};
    inline string getJobTemplateId() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateId_, "") };
    inline UpdateJobTemplateShrinkRequest& setJobTemplateId(string jobTemplateId) { DARABONBA_PTR_SET_VALUE(jobTemplateId_, jobTemplateId) };


    // jobTemplateName Field Functions 
    bool hasJobTemplateName() const { return this->jobTemplateName_ != nullptr;};
    void deleteJobTemplateName() { this->jobTemplateName_ = nullptr;};
    inline string getJobTemplateName() const { DARABONBA_PTR_GET_DEFAULT(jobTemplateName_, "") };
    inline UpdateJobTemplateShrinkRequest& setJobTemplateName(string jobTemplateName) { DARABONBA_PTR_SET_VALUE(jobTemplateName_, jobTemplateName) };


  protected:
    // The template configuration.
    shared_ptr<string> jobTemplateConfigShrink_ {};
    // The template description.
    shared_ptr<string> jobTemplateDescription_ {};
    // The job template ID.
    // 
    // This parameter is required.
    shared_ptr<string> jobTemplateId_ {};
    // The template name.
    shared_ptr<string> jobTemplateName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EhpcInstant20230701
#endif
