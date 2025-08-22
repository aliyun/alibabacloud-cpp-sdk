// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEALERTRULEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class UpdateAlertRuleRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateAlertRuleRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AlertId, alertId_);
      DARABONBA_PTR_TO_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_TO_JSON(IsAutoStart, isAutoStart_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplageAlertConfig, templageAlertConfig_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateAlertRuleRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AlertId, alertId_);
      DARABONBA_PTR_FROM_JSON(ContactGroupIds, contactGroupIds_);
      DARABONBA_PTR_FROM_JSON(IsAutoStart, isAutoStart_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplageAlertConfig, templageAlertConfig_);
    };
    UpdateAlertRuleRequest() = default ;
    UpdateAlertRuleRequest(const UpdateAlertRuleRequest &) = default ;
    UpdateAlertRuleRequest(UpdateAlertRuleRequest &&) = default ;
    UpdateAlertRuleRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateAlertRuleRequest() = default ;
    UpdateAlertRuleRequest& operator=(const UpdateAlertRuleRequest &) = default ;
    UpdateAlertRuleRequest& operator=(UpdateAlertRuleRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertId_ != nullptr
        && this->contactGroupIds_ != nullptr && this->isAutoStart_ != nullptr && this->regionId_ != nullptr && this->templageAlertConfig_ != nullptr; };
    // alertId Field Functions 
    bool hasAlertId() const { return this->alertId_ != nullptr;};
    void deleteAlertId() { this->alertId_ = nullptr;};
    inline int64_t alertId() const { DARABONBA_PTR_GET_DEFAULT(alertId_, 0L) };
    inline UpdateAlertRuleRequest& setAlertId(int64_t alertId) { DARABONBA_PTR_SET_VALUE(alertId_, alertId) };


    // contactGroupIds Field Functions 
    bool hasContactGroupIds() const { return this->contactGroupIds_ != nullptr;};
    void deleteContactGroupIds() { this->contactGroupIds_ = nullptr;};
    inline string contactGroupIds() const { DARABONBA_PTR_GET_DEFAULT(contactGroupIds_, "") };
    inline UpdateAlertRuleRequest& setContactGroupIds(string contactGroupIds) { DARABONBA_PTR_SET_VALUE(contactGroupIds_, contactGroupIds) };


    // isAutoStart Field Functions 
    bool hasIsAutoStart() const { return this->isAutoStart_ != nullptr;};
    void deleteIsAutoStart() { this->isAutoStart_ = nullptr;};
    inline bool isAutoStart() const { DARABONBA_PTR_GET_DEFAULT(isAutoStart_, false) };
    inline UpdateAlertRuleRequest& setIsAutoStart(bool isAutoStart) { DARABONBA_PTR_SET_VALUE(isAutoStart_, isAutoStart) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline UpdateAlertRuleRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templageAlertConfig Field Functions 
    bool hasTemplageAlertConfig() const { return this->templageAlertConfig_ != nullptr;};
    void deleteTemplageAlertConfig() { this->templageAlertConfig_ = nullptr;};
    inline string templageAlertConfig() const { DARABONBA_PTR_GET_DEFAULT(templageAlertConfig_, "") };
    inline UpdateAlertRuleRequest& setTemplageAlertConfig(string templageAlertConfig) { DARABONBA_PTR_SET_VALUE(templageAlertConfig_, templageAlertConfig) };


  protected:
    // The ID of the alert rule.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> alertId_ = nullptr;
    // The IDs of the alert contact groups. The value must be a JSON array.
    std::shared_ptr<string> contactGroupIds_ = nullptr;
    // Specifies whether to enable the alert rule after it is created. Default value: `false`.
    // 
    // *   `true`: enables the alert rule.
    // *   `false`: disables the alert rule.
    std::shared_ptr<bool> isAutoStart_ = nullptr;
    // The ID of the region.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The configurations of the alert template based on which you want to create an alert rule. The value must be a JSON string. You must set at least one of the **TemplateAlertId** and **TemplageAlertConfig** parameters. If you set both parameters, the **TemplateAlertId** parameter prevails. For more information about the TemplageAlertConfig parameter, see the following **additional information about the TemplageAlertConfig parameter**.
    // 
    // This parameter is required.
    std::shared_ptr<string> templageAlertConfig_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
