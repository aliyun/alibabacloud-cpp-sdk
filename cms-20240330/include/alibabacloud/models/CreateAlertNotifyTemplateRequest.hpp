// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEALERTNOTIFYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEALERTNOTIFYTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateAlertNotifyTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAlertNotifyTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertNotifyTemplateId, alertNotifyTemplateId_);
      DARABONBA_PTR_TO_JSON(alertNotifyTemplateName, alertNotifyTemplateName_);
      DARABONBA_PTR_TO_JSON(programLang, programLang_);
      DARABONBA_PTR_TO_JSON(templates, templates_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAlertNotifyTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplateId, alertNotifyTemplateId_);
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplateName, alertNotifyTemplateName_);
      DARABONBA_PTR_FROM_JSON(programLang, programLang_);
      DARABONBA_PTR_FROM_JSON(templates, templates_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    CreateAlertNotifyTemplateRequest() = default ;
    CreateAlertNotifyTemplateRequest(const CreateAlertNotifyTemplateRequest &) = default ;
    CreateAlertNotifyTemplateRequest(CreateAlertNotifyTemplateRequest &&) = default ;
    CreateAlertNotifyTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAlertNotifyTemplateRequest() = default ;
    CreateAlertNotifyTemplateRequest& operator=(const CreateAlertNotifyTemplateRequest &) = default ;
    CreateAlertNotifyTemplateRequest& operator=(CreateAlertNotifyTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertNotifyTemplateId_ == nullptr
        && this->alertNotifyTemplateName_ == nullptr && this->programLang_ == nullptr && this->templates_ == nullptr && this->type_ == nullptr; };
    // alertNotifyTemplateId Field Functions 
    bool hasAlertNotifyTemplateId() const { return this->alertNotifyTemplateId_ != nullptr;};
    void deleteAlertNotifyTemplateId() { this->alertNotifyTemplateId_ = nullptr;};
    inline string getAlertNotifyTemplateId() const { DARABONBA_PTR_GET_DEFAULT(alertNotifyTemplateId_, "") };
    inline CreateAlertNotifyTemplateRequest& setAlertNotifyTemplateId(string alertNotifyTemplateId) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateId_, alertNotifyTemplateId) };


    // alertNotifyTemplateName Field Functions 
    bool hasAlertNotifyTemplateName() const { return this->alertNotifyTemplateName_ != nullptr;};
    void deleteAlertNotifyTemplateName() { this->alertNotifyTemplateName_ = nullptr;};
    inline string getAlertNotifyTemplateName() const { DARABONBA_PTR_GET_DEFAULT(alertNotifyTemplateName_, "") };
    inline CreateAlertNotifyTemplateRequest& setAlertNotifyTemplateName(string alertNotifyTemplateName) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateName_, alertNotifyTemplateName) };


    // programLang Field Functions 
    bool hasProgramLang() const { return this->programLang_ != nullptr;};
    void deleteProgramLang() { this->programLang_ = nullptr;};
    inline string getProgramLang() const { DARABONBA_PTR_GET_DEFAULT(programLang_, "") };
    inline CreateAlertNotifyTemplateRequest& setProgramLang(string programLang) { DARABONBA_PTR_SET_VALUE(programLang_, programLang) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const map<string, Darabonba::Json> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> getTemplates() { DARABONBA_PTR_GET(templates_, map<string, Darabonba::Json>) };
    inline CreateAlertNotifyTemplateRequest& setTemplates(const map<string, Darabonba::Json> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline CreateAlertNotifyTemplateRequest& setTemplates(map<string, Darabonba::Json> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline CreateAlertNotifyTemplateRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // This parameter is required.
    shared_ptr<string> alertNotifyTemplateId_ {};
    shared_ptr<string> alertNotifyTemplateName_ {};
    shared_ptr<string> programLang_ {};
    shared_ptr<map<string, Darabonba::Json>> templates_ {};
    shared_ptr<string> type_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
