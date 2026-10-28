// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTNOTIFYTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTNOTIFYTEMPLATEREQUEST_HPP_
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
  class UpdateAlertNotifyTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertNotifyTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(alertNotifyTemplateName, alertNotifyTemplateName_);
      DARABONBA_PTR_TO_JSON(templates, templates_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertNotifyTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(alertNotifyTemplateName, alertNotifyTemplateName_);
      DARABONBA_PTR_FROM_JSON(templates, templates_);
    };
    UpdateAlertNotifyTemplateRequest() = default ;
    UpdateAlertNotifyTemplateRequest(const UpdateAlertNotifyTemplateRequest &) = default ;
    UpdateAlertNotifyTemplateRequest(UpdateAlertNotifyTemplateRequest &&) = default ;
    UpdateAlertNotifyTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertNotifyTemplateRequest() = default ;
    UpdateAlertNotifyTemplateRequest& operator=(const UpdateAlertNotifyTemplateRequest &) = default ;
    UpdateAlertNotifyTemplateRequest& operator=(UpdateAlertNotifyTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alertNotifyTemplateName_ == nullptr
        && this->templates_ == nullptr; };
    // alertNotifyTemplateName Field Functions 
    bool hasAlertNotifyTemplateName() const { return this->alertNotifyTemplateName_ != nullptr;};
    void deleteAlertNotifyTemplateName() { this->alertNotifyTemplateName_ = nullptr;};
    inline string getAlertNotifyTemplateName() const { DARABONBA_PTR_GET_DEFAULT(alertNotifyTemplateName_, "") };
    inline UpdateAlertNotifyTemplateRequest& setAlertNotifyTemplateName(string alertNotifyTemplateName) { DARABONBA_PTR_SET_VALUE(alertNotifyTemplateName_, alertNotifyTemplateName) };


    // templates Field Functions 
    bool hasTemplates() const { return this->templates_ != nullptr;};
    void deleteTemplates() { this->templates_ = nullptr;};
    inline const map<string, Darabonba::Json> & getTemplates() const { DARABONBA_PTR_GET_CONST(templates_, map<string, Darabonba::Json>) };
    inline map<string, Darabonba::Json> getTemplates() { DARABONBA_PTR_GET(templates_, map<string, Darabonba::Json>) };
    inline UpdateAlertNotifyTemplateRequest& setTemplates(const map<string, Darabonba::Json> & templates) { DARABONBA_PTR_SET_VALUE(templates_, templates) };
    inline UpdateAlertNotifyTemplateRequest& setTemplates(map<string, Darabonba::Json> && templates) { DARABONBA_PTR_SET_RVALUE(templates_, templates) };


  protected:
    shared_ptr<string> alertNotifyTemplateName_ {};
    shared_ptr<map<string, Darabonba::Json>> templates_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
