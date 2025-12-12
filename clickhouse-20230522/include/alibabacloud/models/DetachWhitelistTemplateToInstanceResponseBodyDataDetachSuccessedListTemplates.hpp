// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DETACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATADETACHSUCCESSEDLISTTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_DETACHWHITELISTTEMPLATETOINSTANCERESPONSEBODYDATADETACHSUCCESSEDLISTTEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstances, dbInstances_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstances, dbInstances_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates() = default ;
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates(const DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates &) = default ;
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates(DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates &&) = default ;
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates() = default ;
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates& operator=(const DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates &) = default ;
    DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates& operator=(DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbInstances_ == nullptr
        && return this->securityIPList_ == nullptr && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // dbInstances Field Functions 
    bool hasDbInstances() const { return this->dbInstances_ != nullptr;};
    void deleteDbInstances() { this->dbInstances_ = nullptr;};
    inline const vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances> & dbInstances() const { DARABONBA_PTR_GET_CONST(dbInstances_, vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances>) };
    inline vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances> dbInstances() { DARABONBA_PTR_GET(dbInstances_, vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances>) };
    inline DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates& setDbInstances(const vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances> & dbInstances) { DARABONBA_PTR_SET_VALUE(dbInstances_, dbInstances) };
    inline DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates& setDbInstances(vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances> && dbInstances) { DARABONBA_PTR_SET_RVALUE(dbInstances_, dbInstances) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<vector<Models::DetachWhitelistTemplateToInstanceResponseBodyDataDetachSuccessedListTemplatesDbInstances>> dbInstances_ = nullptr;
    std::shared_ptr<string> securityIPList_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
