// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SINGLESENDMAILADVANCEREQUESTTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_SINGLESENDMAILADVANCEREQUESTTEMPLATE_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dm20151123
{
namespace Models
{
  class SingleSendMailAdvanceRequestTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SingleSendMailAdvanceRequestTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(TemplateData, templateData_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, SingleSendMailAdvanceRequestTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(TemplateData, templateData_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    SingleSendMailAdvanceRequestTemplate() = default ;
    SingleSendMailAdvanceRequestTemplate(const SingleSendMailAdvanceRequestTemplate &) = default ;
    SingleSendMailAdvanceRequestTemplate(SingleSendMailAdvanceRequestTemplate &&) = default ;
    SingleSendMailAdvanceRequestTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SingleSendMailAdvanceRequestTemplate() = default ;
    SingleSendMailAdvanceRequestTemplate& operator=(const SingleSendMailAdvanceRequestTemplate &) = default ;
    SingleSendMailAdvanceRequestTemplate& operator=(SingleSendMailAdvanceRequestTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->templateData_ == nullptr
        && return this->templateId_ == nullptr; };
    // templateData Field Functions 
    bool hasTemplateData() const { return this->templateData_ != nullptr;};
    void deleteTemplateData() { this->templateData_ = nullptr;};
    inline const map<string, string> & templateData() const { DARABONBA_PTR_GET_CONST(templateData_, map<string, string>) };
    inline map<string, string> templateData() { DARABONBA_PTR_GET(templateData_, map<string, string>) };
    inline SingleSendMailAdvanceRequestTemplate& setTemplateData(const map<string, string> & templateData) { DARABONBA_PTR_SET_VALUE(templateData_, templateData) };
    inline SingleSendMailAdvanceRequestTemplate& setTemplateData(map<string, string> && templateData) { DARABONBA_PTR_SET_RVALUE(templateData_, templateData) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline SingleSendMailAdvanceRequestTemplate& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<map<string, string>> templateData_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dm20151123
#endif
