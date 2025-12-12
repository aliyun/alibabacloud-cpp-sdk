// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEWHITELISTTEMPLATERESPONSEBODYDATATEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_UPDATEWHITELISTTEMPLATERESPONSEBODYDATATEMPLATES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20230522
{
namespace Models
{
  class UpdateWhitelistTemplateResponseBodyDataTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateWhitelistTemplateResponseBodyDataTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstances, dbInstances_);
      DARABONBA_PTR_TO_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateWhitelistTemplateResponseBodyDataTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstances, dbInstances_);
      DARABONBA_PTR_FROM_JSON(SecurityIPList, securityIPList_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateWhitelistTemplateResponseBodyDataTemplates() = default ;
    UpdateWhitelistTemplateResponseBodyDataTemplates(const UpdateWhitelistTemplateResponseBodyDataTemplates &) = default ;
    UpdateWhitelistTemplateResponseBodyDataTemplates(UpdateWhitelistTemplateResponseBodyDataTemplates &&) = default ;
    UpdateWhitelistTemplateResponseBodyDataTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateWhitelistTemplateResponseBodyDataTemplates() = default ;
    UpdateWhitelistTemplateResponseBodyDataTemplates& operator=(const UpdateWhitelistTemplateResponseBodyDataTemplates &) = default ;
    UpdateWhitelistTemplateResponseBodyDataTemplates& operator=(UpdateWhitelistTemplateResponseBodyDataTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbInstances_ == nullptr
        && return this->securityIPList_ == nullptr && return this->templateId_ == nullptr; };
    // dbInstances Field Functions 
    bool hasDbInstances() const { return this->dbInstances_ != nullptr;};
    void deleteDbInstances() { this->dbInstances_ = nullptr;};
    inline const vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances> & dbInstances() const { DARABONBA_PTR_GET_CONST(dbInstances_, vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances>) };
    inline vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances> dbInstances() { DARABONBA_PTR_GET(dbInstances_, vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances>) };
    inline UpdateWhitelistTemplateResponseBodyDataTemplates& setDbInstances(const vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances> & dbInstances) { DARABONBA_PTR_SET_VALUE(dbInstances_, dbInstances) };
    inline UpdateWhitelistTemplateResponseBodyDataTemplates& setDbInstances(vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances> && dbInstances) { DARABONBA_PTR_SET_RVALUE(dbInstances_, dbInstances) };


    // securityIPList Field Functions 
    bool hasSecurityIPList() const { return this->securityIPList_ != nullptr;};
    void deleteSecurityIPList() { this->securityIPList_ = nullptr;};
    inline string securityIPList() const { DARABONBA_PTR_GET_DEFAULT(securityIPList_, "") };
    inline UpdateWhitelistTemplateResponseBodyDataTemplates& setSecurityIPList(string securityIPList) { DARABONBA_PTR_SET_VALUE(securityIPList_, securityIPList) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateWhitelistTemplateResponseBodyDataTemplates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    std::shared_ptr<vector<Models::UpdateWhitelistTemplateResponseBodyDataTemplatesDbInstances>> dbInstances_ = nullptr;
    std::shared_ptr<string> securityIPList_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20230522
#endif
