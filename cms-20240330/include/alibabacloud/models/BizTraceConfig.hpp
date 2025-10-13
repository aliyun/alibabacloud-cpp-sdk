// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BIZTRACECONFIG_HPP_
#define ALIBABACLOUD_MODELS_BIZTRACECONFIG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class BizTraceConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BizTraceConfig& obj) { 
      DARABONBA_PTR_TO_JSON(advancedConfig, advancedConfig_);
      DARABONBA_PTR_TO_JSON(bizTraceCode, bizTraceCode_);
      DARABONBA_PTR_TO_JSON(bizTraceId, bizTraceId_);
      DARABONBA_PTR_TO_JSON(bizTraceName, bizTraceName_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(regionId, regionId_);
      DARABONBA_PTR_TO_JSON(ruleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, BizTraceConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(advancedConfig, advancedConfig_);
      DARABONBA_PTR_FROM_JSON(bizTraceCode, bizTraceCode_);
      DARABONBA_PTR_FROM_JSON(bizTraceId, bizTraceId_);
      DARABONBA_PTR_FROM_JSON(bizTraceName, bizTraceName_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(regionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ruleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    BizTraceConfig() = default ;
    BizTraceConfig(const BizTraceConfig &) = default ;
    BizTraceConfig(BizTraceConfig &&) = default ;
    BizTraceConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BizTraceConfig() = default ;
    BizTraceConfig& operator=(const BizTraceConfig &) = default ;
    BizTraceConfig& operator=(BizTraceConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedConfig_ == nullptr
        && return this->bizTraceCode_ == nullptr && return this->bizTraceId_ == nullptr && return this->bizTraceName_ == nullptr && return this->createTime_ == nullptr && return this->regionId_ == nullptr
        && return this->ruleConfig_ == nullptr && return this->workspace_ == nullptr; };
    // advancedConfig Field Functions 
    bool hasAdvancedConfig() const { return this->advancedConfig_ != nullptr;};
    void deleteAdvancedConfig() { this->advancedConfig_ = nullptr;};
    inline string advancedConfig() const { DARABONBA_PTR_GET_DEFAULT(advancedConfig_, "") };
    inline BizTraceConfig& setAdvancedConfig(string advancedConfig) { DARABONBA_PTR_SET_VALUE(advancedConfig_, advancedConfig) };


    // bizTraceCode Field Functions 
    bool hasBizTraceCode() const { return this->bizTraceCode_ != nullptr;};
    void deleteBizTraceCode() { this->bizTraceCode_ = nullptr;};
    inline string bizTraceCode() const { DARABONBA_PTR_GET_DEFAULT(bizTraceCode_, "") };
    inline BizTraceConfig& setBizTraceCode(string bizTraceCode) { DARABONBA_PTR_SET_VALUE(bizTraceCode_, bizTraceCode) };


    // bizTraceId Field Functions 
    bool hasBizTraceId() const { return this->bizTraceId_ != nullptr;};
    void deleteBizTraceId() { this->bizTraceId_ = nullptr;};
    inline string bizTraceId() const { DARABONBA_PTR_GET_DEFAULT(bizTraceId_, "") };
    inline BizTraceConfig& setBizTraceId(string bizTraceId) { DARABONBA_PTR_SET_VALUE(bizTraceId_, bizTraceId) };


    // bizTraceName Field Functions 
    bool hasBizTraceName() const { return this->bizTraceName_ != nullptr;};
    void deleteBizTraceName() { this->bizTraceName_ = nullptr;};
    inline string bizTraceName() const { DARABONBA_PTR_GET_DEFAULT(bizTraceName_, "") };
    inline BizTraceConfig& setBizTraceName(string bizTraceName) { DARABONBA_PTR_SET_VALUE(bizTraceName_, bizTraceName) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline BizTraceConfig& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BizTraceConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string ruleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline BizTraceConfig& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline BizTraceConfig& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> advancedConfig_ = nullptr;
    std::shared_ptr<string> bizTraceCode_ = nullptr;
    std::shared_ptr<string> bizTraceId_ = nullptr;
    std::shared_ptr<string> bizTraceName_ = nullptr;
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> ruleConfig_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
