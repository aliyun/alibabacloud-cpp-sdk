// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATETEMPLATELOGCONFIG_HPP_
#define ALIBABACLOUD_MODELS_CREATETEMPLATELOGCONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace FCSandbox20260509
{
namespace Models
{
  class CreateTemplateLogConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateTemplateLogConfig& obj) { 
      DARABONBA_PTR_TO_JSON(logstore, logstore_);
      DARABONBA_PTR_TO_JSON(project, project_);
    };
    friend void from_json(const Darabonba::Json& j, CreateTemplateLogConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(logstore, logstore_);
      DARABONBA_PTR_FROM_JSON(project, project_);
    };
    CreateTemplateLogConfig() = default ;
    CreateTemplateLogConfig(const CreateTemplateLogConfig &) = default ;
    CreateTemplateLogConfig(CreateTemplateLogConfig &&) = default ;
    CreateTemplateLogConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateTemplateLogConfig() = default ;
    CreateTemplateLogConfig& operator=(const CreateTemplateLogConfig &) = default ;
    CreateTemplateLogConfig& operator=(CreateTemplateLogConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->logstore_ == nullptr
        && this->project_ == nullptr; };
    // logstore Field Functions 
    bool hasLogstore() const { return this->logstore_ != nullptr;};
    void deleteLogstore() { this->logstore_ = nullptr;};
    inline string getLogstore() const { DARABONBA_PTR_GET_DEFAULT(logstore_, "") };
    inline CreateTemplateLogConfig& setLogstore(string logstore) { DARABONBA_PTR_SET_VALUE(logstore_, logstore) };


    // project Field Functions 
    bool hasProject() const { return this->project_ != nullptr;};
    void deleteProject() { this->project_ = nullptr;};
    inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
    inline CreateTemplateLogConfig& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


  protected:
    // The name of the SLS Logstore.
    shared_ptr<string> logstore_ {};
    // The name of the Simple Log Service (SLS) project.
    shared_ptr<string> project_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace FCSandbox20260509
#endif
