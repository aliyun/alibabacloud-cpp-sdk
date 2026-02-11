// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTCUSTOMALERTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTCUSTOMALERTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
{
namespace Models
{
  class ImportCustomAlertRulesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ImportCustomAlertRulesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_TO_JSON(IsAutoStart, isAutoStart_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplageAlertConfig, templageAlertConfig_);
      DARABONBA_PTR_TO_JSON(TemplateAlertConfig, templateAlertConfig_);
    };
    friend void from_json(const Darabonba::Json& j, ImportCustomAlertRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_FROM_JSON(IsAutoStart, isAutoStart_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplageAlertConfig, templageAlertConfig_);
      DARABONBA_PTR_FROM_JSON(TemplateAlertConfig, templateAlertConfig_);
    };
    ImportCustomAlertRulesRequest() = default ;
    ImportCustomAlertRulesRequest(const ImportCustomAlertRulesRequest &) = default ;
    ImportCustomAlertRulesRequest(ImportCustomAlertRulesRequest &&) = default ;
    ImportCustomAlertRulesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ImportCustomAlertRulesRequest() = default ;
    ImportCustomAlertRulesRequest& operator=(const ImportCustomAlertRulesRequest &) = default ;
    ImportCustomAlertRulesRequest& operator=(ImportCustomAlertRulesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contactGroupIds_ == nullptr
        && this->isAutoStart_ == nullptr && this->regionId_ == nullptr && this->templageAlertConfig_ == nullptr && this->templateAlertConfig_ == nullptr; };
    // contactGroupIds Field Functions 
    bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
    void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
    inline string getContactGroupIds() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIds_, "") };
    inline ImportCustomAlertRulesRequest& setContactGroupIds(string contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };


    // isAutoStart Field Functions 
    bool hasIsAutoStart() const { return this->isAutoStart_ != nullptr;};
    void deleteIsAutoStart() { this->isAutoStart_ = nullptr;};
    inline bool getIsAutoStart() const { DARABONBA_PTR_GET_DEFAULT(isAutoStart_, false) };
    inline ImportCustomAlertRulesRequest& setIsAutoStart(bool isAutoStart) { DARABONBA_PTR_SET_VALUE(isAutoStart_, isAutoStart) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportCustomAlertRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templageAlertConfig Field Functions 
    bool hasTemplageAlertConfig() const { return this->templageAlertConfig_ != nullptr;};
    void deleteTemplageAlertConfig() { this->templageAlertConfig_ = nullptr;};
    inline string getTemplageAlertConfig() const { DARABONBA_PTR_GET_DEFAULT(templageAlertConfig_, "") };
    inline ImportCustomAlertRulesRequest& setTemplageAlertConfig(string templageAlertConfig) { DARABONBA_PTR_SET_VALUE(templageAlertConfig_, templageAlertConfig) };


    // templateAlertConfig Field Functions 
    bool hasTemplateAlertConfig() const { return this->templateAlertConfig_ != nullptr;};
    void deleteTemplateAlertConfig() { this->templateAlertConfig_ = nullptr;};
    inline string getTemplateAlertConfig() const { DARABONBA_PTR_GET_DEFAULT(templateAlertConfig_, "") };
    inline ImportCustomAlertRulesRequest& setTemplateAlertConfig(string templateAlertConfig) { DARABONBA_PTR_SET_VALUE(templateAlertConfig_, templateAlertConfig) };


  protected:
    shared_ptr<string> contactGroupIds_ {};
    shared_ptr<bool> isAutoStart_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> templageAlertConfig_ {};
    shared_ptr<string> templateAlertConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
