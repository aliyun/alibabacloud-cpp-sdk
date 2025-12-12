// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCELINKEDWHITELISTTEMPLATESRESPONSEBODYDATATEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCELINKEDWHITELISTTEMPLATESRESPONSEBODYDATATEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates() = default ;
    ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates(const ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates &) = default ;
    ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates(ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates &&) = default ;
    ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates() = default ;
    ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates& operator=(const ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates &) = default ;
    ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates& operator=(ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->securityIPList_ == nullptr
        && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListInstanceLinkedWhitelistTemplatesResponseBodyDataTemplates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<string> securityIPList_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
