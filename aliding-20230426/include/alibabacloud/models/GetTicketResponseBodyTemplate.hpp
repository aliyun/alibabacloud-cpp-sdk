// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODYTEMPLATE_HPP_
#define ALIBABACLOUD_MODELS_GETTICKETRESPONSEBODYTEMPLATE_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetTicketResponseBodyTemplate : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTicketResponseBodyTemplate& obj) { 
      DARABONBA_PTR_TO_JSON(OpenTemplateBizId, openTemplateBizId_);
      DARABONBA_PTR_TO_JSON(OpenTemplateId, openTemplateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, GetTicketResponseBodyTemplate& obj) { 
      DARABONBA_PTR_FROM_JSON(OpenTemplateBizId, openTemplateBizId_);
      DARABONBA_PTR_FROM_JSON(OpenTemplateId, openTemplateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    GetTicketResponseBodyTemplate() = default ;
    GetTicketResponseBodyTemplate(const GetTicketResponseBodyTemplate &) = default ;
    GetTicketResponseBodyTemplate(GetTicketResponseBodyTemplate &&) = default ;
    GetTicketResponseBodyTemplate(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTicketResponseBodyTemplate() = default ;
    GetTicketResponseBodyTemplate& operator=(const GetTicketResponseBodyTemplate &) = default ;
    GetTicketResponseBodyTemplate& operator=(GetTicketResponseBodyTemplate &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->openTemplateBizId_ != nullptr
        && this->openTemplateId_ != nullptr && this->templateName_ != nullptr; };
    // openTemplateBizId Field Functions 
    bool hasOpenTemplateBizId() const { return this->openTemplateBizId_ != nullptr;};
    void deleteOpenTemplateBizId() { this->openTemplateBizId_ = nullptr;};
    inline string openTemplateBizId() const { DARABONBA_PTR_GET_DEFAULT(openTemplateBizId_, "") };
    inline GetTicketResponseBodyTemplate& setOpenTemplateBizId(string openTemplateBizId) { DARABONBA_PTR_SET_VALUE(openTemplateBizId_, openTemplateBizId) };


    // openTemplateId Field Functions 
    bool hasOpenTemplateId() const { return this->openTemplateId_ != nullptr;};
    void deleteOpenTemplateId() { this->openTemplateId_ = nullptr;};
    inline string openTemplateId() const { DARABONBA_PTR_GET_DEFAULT(openTemplateId_, "") };
    inline GetTicketResponseBodyTemplate& setOpenTemplateId(string openTemplateId) { DARABONBA_PTR_SET_VALUE(openTemplateId_, openTemplateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline GetTicketResponseBodyTemplate& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // OpenTemplateBizId
    std::shared_ptr<string> openTemplateBizId_ = nullptr;
    // OpenTemplateBizId
    std::shared_ptr<string> openTemplateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
