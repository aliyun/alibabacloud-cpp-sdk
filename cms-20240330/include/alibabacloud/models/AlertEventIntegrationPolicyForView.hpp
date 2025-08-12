// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ALERTEVENTINTEGRATIONPOLICYFORVIEW_HPP_
#define ALIBABACLOUD_MODELS_ALERTEVENTINTEGRATIONPOLICYFORVIEW_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Cms20240330.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class AlertEventIntegrationPolicyForView : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AlertEventIntegrationPolicyForView& obj) { 
      DARABONBA_PTR_TO_JSON(alertEventIntegrationPolicyId, alertEventIntegrationPolicyId_);
      DARABONBA_PTR_TO_JSON(alertEventIntegrationPolicyName, alertEventIntegrationPolicyName_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(enable, enable_);
      DARABONBA_PTR_TO_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_TO_JSON(integrationSetting, integrationSetting_);
      DARABONBA_PTR_TO_JSON(token, token_);
      DARABONBA_PTR_TO_JSON(transformerSetting, transformerSetting_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, AlertEventIntegrationPolicyForView& obj) { 
      DARABONBA_PTR_FROM_JSON(alertEventIntegrationPolicyId, alertEventIntegrationPolicyId_);
      DARABONBA_PTR_FROM_JSON(alertEventIntegrationPolicyName, alertEventIntegrationPolicyName_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(enable, enable_);
      DARABONBA_PTR_FROM_JSON(filterSetting, filterSetting_);
      DARABONBA_PTR_FROM_JSON(integrationSetting, integrationSetting_);
      DARABONBA_PTR_FROM_JSON(token, token_);
      DARABONBA_PTR_FROM_JSON(transformerSetting, transformerSetting_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    AlertEventIntegrationPolicyForView() = default ;
    AlertEventIntegrationPolicyForView(const AlertEventIntegrationPolicyForView &) = default ;
    AlertEventIntegrationPolicyForView(AlertEventIntegrationPolicyForView &&) = default ;
    AlertEventIntegrationPolicyForView(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AlertEventIntegrationPolicyForView() = default ;
    AlertEventIntegrationPolicyForView& operator=(const AlertEventIntegrationPolicyForView &) = default ;
    AlertEventIntegrationPolicyForView& operator=(AlertEventIntegrationPolicyForView &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alertEventIntegrationPolicyId_ != nullptr
        && this->alertEventIntegrationPolicyName_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->enable_ != nullptr && this->filterSetting_ != nullptr
        && this->integrationSetting_ != nullptr && this->token_ != nullptr && this->transformerSetting_ != nullptr && this->type_ != nullptr && this->updateTime_ != nullptr
        && this->userId_ != nullptr && this->workspace_ != nullptr; };
    // alertEventIntegrationPolicyId Field Functions 
    bool hasAlertEventIntegrationPolicyId() const { return this->alertEventIntegrationPolicyId_ != nullptr;};
    void deleteAlertEventIntegrationPolicyId() { this->alertEventIntegrationPolicyId_ = nullptr;};
    inline string alertEventIntegrationPolicyId() const { DARABONBA_PTR_GET_DEFAULT(alertEventIntegrationPolicyId_, "") };
    inline AlertEventIntegrationPolicyForView& setAlertEventIntegrationPolicyId(string alertEventIntegrationPolicyId) { DARABONBA_PTR_SET_VALUE(alertEventIntegrationPolicyId_, alertEventIntegrationPolicyId) };


    // alertEventIntegrationPolicyName Field Functions 
    bool hasAlertEventIntegrationPolicyName() const { return this->alertEventIntegrationPolicyName_ != nullptr;};
    void deleteAlertEventIntegrationPolicyName() { this->alertEventIntegrationPolicyName_ = nullptr;};
    inline string alertEventIntegrationPolicyName() const { DARABONBA_PTR_GET_DEFAULT(alertEventIntegrationPolicyName_, "") };
    inline AlertEventIntegrationPolicyForView& setAlertEventIntegrationPolicyName(string alertEventIntegrationPolicyName) { DARABONBA_PTR_SET_VALUE(alertEventIntegrationPolicyName_, alertEventIntegrationPolicyName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline AlertEventIntegrationPolicyForView& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AlertEventIntegrationPolicyForView& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // enable Field Functions 
    bool hasEnable() const { return this->enable_ != nullptr;};
    void deleteEnable() { this->enable_ = nullptr;};
    inline bool enable() const { DARABONBA_PTR_GET_DEFAULT(enable_, false) };
    inline AlertEventIntegrationPolicyForView& setEnable(bool enable) { DARABONBA_PTR_SET_VALUE(enable_, enable) };


    // filterSetting Field Functions 
    bool hasFilterSetting() const { return this->filterSetting_ != nullptr;};
    void deleteFilterSetting() { this->filterSetting_ = nullptr;};
    inline const FilterSetting & filterSetting() const { DARABONBA_PTR_GET_CONST(filterSetting_, FilterSetting) };
    inline FilterSetting filterSetting() { DARABONBA_PTR_GET(filterSetting_, FilterSetting) };
    inline AlertEventIntegrationPolicyForView& setFilterSetting(const FilterSetting & filterSetting) { DARABONBA_PTR_SET_VALUE(filterSetting_, filterSetting) };
    inline AlertEventIntegrationPolicyForView& setFilterSetting(FilterSetting && filterSetting) { DARABONBA_PTR_SET_RVALUE(filterSetting_, filterSetting) };


    // integrationSetting Field Functions 
    bool hasIntegrationSetting() const { return this->integrationSetting_ != nullptr;};
    void deleteIntegrationSetting() { this->integrationSetting_ = nullptr;};
    inline string integrationSetting() const { DARABONBA_PTR_GET_DEFAULT(integrationSetting_, "") };
    inline AlertEventIntegrationPolicyForView& setIntegrationSetting(string integrationSetting) { DARABONBA_PTR_SET_VALUE(integrationSetting_, integrationSetting) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string token() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline AlertEventIntegrationPolicyForView& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


    // transformerSetting Field Functions 
    bool hasTransformerSetting() const { return this->transformerSetting_ != nullptr;};
    void deleteTransformerSetting() { this->transformerSetting_ = nullptr;};
    inline const vector<TransformAction> & transformerSetting() const { DARABONBA_PTR_GET_CONST(transformerSetting_, vector<TransformAction>) };
    inline vector<TransformAction> transformerSetting() { DARABONBA_PTR_GET(transformerSetting_, vector<TransformAction>) };
    inline AlertEventIntegrationPolicyForView& setTransformerSetting(const vector<TransformAction> & transformerSetting) { DARABONBA_PTR_SET_VALUE(transformerSetting_, transformerSetting) };
    inline AlertEventIntegrationPolicyForView& setTransformerSetting(vector<TransformAction> && transformerSetting) { DARABONBA_PTR_SET_RVALUE(transformerSetting_, transformerSetting) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline AlertEventIntegrationPolicyForView& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline AlertEventIntegrationPolicyForView& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline AlertEventIntegrationPolicyForView& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline AlertEventIntegrationPolicyForView& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> alertEventIntegrationPolicyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> alertEventIntegrationPolicyName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<bool> enable_ = nullptr;
    std::shared_ptr<FilterSetting> filterSetting_ = nullptr;
    std::shared_ptr<string> integrationSetting_ = nullptr;
    std::shared_ptr<string> token_ = nullptr;
    std::shared_ptr<vector<TransformAction>> transformerSetting_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
