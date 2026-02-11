// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_IMPORTAPPALERTRULESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_IMPORTAPPALERTRULESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20210422
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
      DARABONBA_PTR_TO_JSON(TemplageAlertConfig, templageAlertConfig_);
      DARABONBA_PTR_TO_JSON(TemplateAlertId, templateAlertId_);
    };
    friend void from_json(const Darabonba::Json& j, ImportAppAlertRulesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_FROM_JSON(IsAutoStart, isAutoStart_);
      DARABONBA_PTR_FROM_JSON(Pids, pids_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
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
    virtual bool empty() const override { return this->contactGroupIds_ == nullptr
        && this->isAutoStart_ == nullptr && this->pids_ == nullptr && this->regionId_ == nullptr && this->templageAlertConfig_ == nullptr && this->templateAlertId_ == nullptr; };
    // contactGroupIds Field Functions 
    bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
    void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
    inline string getContactGroupIds() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIds_, "") };
    inline ImportAppAlertRulesRequest& setContactGroupIds(string contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };


    // isAutoStart Field Functions 
    bool hasIsAutoStart() const { return this->isAutoStart_ != nullptr;};
    void deleteIsAutoStart() { this->isAutoStart_ = nullptr;};
    inline bool getIsAutoStart() const { DARABONBA_PTR_GET_DEFAULT(isAutoStart_, false) };
    inline ImportAppAlertRulesRequest& setIsAutoStart(bool isAutoStart) { DARABONBA_PTR_SET_VALUE(isAutoStart_, isAutoStart) };


    // pids Field Functions 
    bool hasPids() const { return this->pids_ != nullptr;};
    void deletePids() { this->pids_ = nullptr;};
    inline string getPids() const { DARABONBA_PTR_GET_DEFAULT(pids_, "") };
    inline ImportAppAlertRulesRequest& setPids(string pids) { DARABONBA_PTR_SET_VALUE(pids_, pids) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ImportAppAlertRulesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templageAlertConfig Field Functions 
    bool hasTemplageAlertConfig() const { return this->templageAlertConfig_ != nullptr;};
    void deleteTemplageAlertConfig() { this->templageAlertConfig_ = nullptr;};
    inline string getTemplageAlertConfig() const { DARABONBA_PTR_GET_DEFAULT(templageAlertConfig_, "") };
    inline ImportAppAlertRulesRequest& setTemplageAlertConfig(string templageAlertConfig) { DARABONBA_PTR_SET_VALUE(templageAlertConfig_, templageAlertConfig) };


    // templateAlertId Field Functions 
    bool hasTemplateAlertId() const { return this->templateAlertId_ != nullptr;};
    void deleteTemplateAlertId() { this->templateAlertId_ = nullptr;};
    inline string getTemplateAlertId() const { DARABONBA_PTR_GET_DEFAULT(templateAlertId_, "") };
    inline ImportAppAlertRulesRequest& setTemplateAlertId(string templateAlertId) { DARABONBA_PTR_SET_VALUE(templateAlertId_, templateAlertId) };


  protected:
    shared_ptr<string> contactGroupIds_ {};
    shared_ptr<bool> isAutoStart_ {};
    // This parameter is required.
    shared_ptr<string> pids_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> templageAlertConfig_ {};
    shared_ptr<string> templateAlertId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20210422
#endif
