// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTAPPALERTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTAPPALERTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ImportAppAlertRulesRequestTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ImportAppAlertRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportAppAlertRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_TO_JSON(IsAutoStart, isAutoStart_);
      DARABONBA_PTR_TO_JSON(Pids, pids_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
      DARABONBA_PTR_TO_JSON(TemplageAlertConfig, templageAlertConfig_);
      DARABONBA_PTR_TO_JSON(TemplateAlertId, templateAlertId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportAppAlertRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_FROM_JSON(IsAutoStart, isAutoStart_);
      DARABONBA_PTR_FROM_JSON(Pids, pids_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
      DARABONBA_PTR_FROM_JSON(TemplageAlertConfig, templageAlertConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateAlertId, templateAlertId_);
    };
    ImportAppAlertRulesRequest() = default ;
    ImportAppAlertRulesRequest(const ImportAppAlertRulesRequest &) = default ;
    ImportAppAlertRulesRequest(ImportAppAlertRulesRequest &&) = default ;
    ImportAppAlertRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportAppAlertRulesRequest() = default ;
    ImportAppAlertRulesRequest& operator=(const ImportAppAlertRulesRequest &) = default ;
    ImportAppAlertRulesRequest& operator=(ImportAppAlertRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->contactGroupIds_ != nullptr
        && this->isAutoStart_ != nullptr && this->pids_ != nullptr && this->regionId_ != nullptr && this->tags_ != nullptr && this->templageAlertConfig_ != nullptr
        && this->templateAlertId_ != nullptr; };
    // contactGroupIds Field Functions 
    bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
    void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
    inline string contactGroupIds() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIds_, "") };
    inline ImportAppAlertRulesRequest& setContactGroupIds(string contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };


    // isAutoStart Field Functions 
    bool hasIsAutoStart() const { return this->isAutoStart_ != nullptr;};
    void deleteIsAutoStart() { this->isAutoStart_ = nullptr;};
    inline bool isAutoStart() const { DARABONBA_PTR_GET_DEFAULT(isAutoStart_, false) };
    inline ImportAppAlertRulesRequest& setIsAutoStart(bool isAutoStart) { DARABONBA_PTR_SET_VALUE(isAutoStart_, isAutoStart) };


    // pids Field Functions 
    bool hasPids() const { return this->pids_ != nullptr;};
    void deletePids() { this->pids_ = nullptr;};
    inline string pids() const { DARABONBA_PTR_GET_DEFAULT(pids_, "") };
    inline ImportAppAlertRulesRequest& setPids(string pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportAppAlertRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<ImportAppAlertRulesRequestTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<ImportAppAlertRulesRequestTags>) };
    inline vector<ImportAppAlertRulesRequestTags> tags() { DARABONBA_PTR_GET(tags_, vector<ImportAppAlertRulesRequestTags>) };
    inline ImportAppAlertRulesRequest& setTags(const vector<ImportAppAlertRulesRequestTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ImportAppAlertRulesRequest& setTags(vector<ImportAppAlertRulesRequestTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // templageAlertConfig Field Functions 
    bool hasTemplageAlertConfig() const { return this->templageAlertConfig_ != nullptr;};
    void deleteTemplageAlertConfig() { this->templageAlertConfig_ = nullptr;};
    inline string templageAlertConfig() const { DARABONBA_PTR_GET_DEFAULT(templageAlertConfig_, "") };
    inline ImportAppAlertRulesRequest& setTemplageAlertConfig(string templageAlertConfig) { DARABONBA_PTR_SET_VALUE(templageAlertConfig_, templageAlertConfig) };


    // templateAlertId Field Functions 
    bool hasTemplateAlertId() const { return this->templateAlertId_ != nullptr;};
    void deleteTemplateAlertId() { this->templateAlertId_ = nullptr;};
    inline string templateAlertId() const { DARABONBA_PTR_GET_DEFAULT(templateAlertId_, "") };
    inline ImportAppAlertRulesRequest& setTemplateAlertId(string templateAlertId) { DARABONBA_PTR_SET_VALUE(templateAlertId_, templateAlertId) };


  protected:
    // The IDs of the alert contact groups. The value must be a JSON array.
    std::shared_ptr<string> contactGroupIds_ = nullptr;
    // Specifies whether to enable the alert rule after it is created. Default value: `false`.
    // 
    // *   `true`: enables the alert rule.
    // *   `false`: disables the alert rule.
    std::shared_ptr<bool> isAutoStart_ = nullptr;
    // The process identifiers (PIDs) of the applications associated with the alert rule. The value must be a JSON array. For more information about how to obtain the PID, see [Obtain the PID of an application](~~186100#section-bkl-3j6-ezg~~).
    // 
    // This parameter is required.
    std::shared_ptr<string> pids_ = nullptr;
    // The ID of the region where the associated applications reside.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The list of tags.
    std::shared_ptr<vector<ImportAppAlertRulesRequestTags>> tags_ = nullptr;
    // The configurations of the alert template based on which you want to create an alert rule. The value must be a JSON string. You must set at least one of the **TemplateAlertId** and **TemplageAlertConfig** parameters. If you set both parameters, the **TemplateAlertId** parameter prevails. For more information about the TemplageAlertConfig parameter, see the following **additional information about the TemplageAlertConfig parameter**.
    std::shared_ptr<string> templageAlertConfig_ = nullptr;
    // The ID of the alert template. You must set at least one of the **TemplateAlertId** and **TemplageAlertConfig** parameters. If you set both parameters, the **TemplateAlertId** parameter prevails.
    std::shared_ptr<string> templateAlertId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
