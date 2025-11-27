// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEBIZTRACEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEBIZTRACEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class CreateBizTraceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateBizTraceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(advancedConfig, advancedConfig_);
      DARABONBA_PTR_TO_JSON(bizTraceCode, bizTraceCode_);
      DARABONBA_PTR_TO_JSON(bizTraceName, bizTraceName_);
      DARABONBA_PTR_TO_JSON(ruleConfig, ruleConfig_);
      DARABONBA_PTR_TO_JSON(workspace, workspace_);
    };
    friend void from_json(const Darabonba::Json& j, CreateBizTraceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(advancedConfig, advancedConfig_);
      DARABONBA_PTR_FROM_JSON(bizTraceCode, bizTraceCode_);
      DARABONBA_PTR_FROM_JSON(bizTraceName, bizTraceName_);
      DARABONBA_PTR_FROM_JSON(ruleConfig, ruleConfig_);
      DARABONBA_PTR_FROM_JSON(workspace, workspace_);
    };
    CreateBizTraceRequest() = default ;
    CreateBizTraceRequest(const CreateBizTraceRequest &) = default ;
    CreateBizTraceRequest(CreateBizTraceRequest &&) = default ;
    CreateBizTraceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateBizTraceRequest() = default ;
    CreateBizTraceRequest& operator=(const CreateBizTraceRequest &) = default ;
    CreateBizTraceRequest& operator=(CreateBizTraceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->advancedConfig_ == nullptr
        && return this->bizTraceCode_ == nullptr && return this->bizTraceName_ == nullptr && return this->ruleConfig_ == nullptr && return this->workspace_ == nullptr; };
    // advancedConfig Field Functions 
    bool hasAdvancedConfig() const { return this->advancedConfig_ != nullptr;};
    void deleteAdvancedConfig() { this->advancedConfig_ = nullptr;};
    inline string advancedConfig() const { DARABONBA_PTR_GET_DEFAULT(advancedConfig_, "") };
    inline CreateBizTraceRequest& setAdvancedConfig(string advancedConfig) { DARABONBA_PTR_SET_VALUE(advancedConfig_, advancedConfig) };


    // bizTraceCode Field Functions 
    bool hasBizTraceCode() const { return this->bizTraceCode_ != nullptr;};
    void deleteBizTraceCode() { this->bizTraceCode_ = nullptr;};
    inline string bizTraceCode() const { DARABONBA_PTR_GET_DEFAULT(bizTraceCode_, "") };
    inline CreateBizTraceRequest& setBizTraceCode(string bizTraceCode) { DARABONBA_PTR_SET_VALUE(bizTraceCode_, bizTraceCode) };


    // bizTraceName Field Functions 
    bool hasBizTraceName() const { return this->bizTraceName_ != nullptr;};
    void deleteBizTraceName() { this->bizTraceName_ = nullptr;};
    inline string bizTraceName() const { DARABONBA_PTR_GET_DEFAULT(bizTraceName_, "") };
    inline CreateBizTraceRequest& setBizTraceName(string bizTraceName) { DARABONBA_PTR_SET_VALUE(bizTraceName_, bizTraceName) };


    // ruleConfig Field Functions 
    bool hasRuleConfig() const { return this->ruleConfig_ != nullptr;};
    void deleteRuleConfig() { this->ruleConfig_ = nullptr;};
    inline string ruleConfig() const { DARABONBA_PTR_GET_DEFAULT(ruleConfig_, "") };
    inline CreateBizTraceRequest& setRuleConfig(string ruleConfig) { DARABONBA_PTR_SET_VALUE(ruleConfig_, ruleConfig) };


    // workspace Field Functions 
    bool hasWorkspace() const { return this->workspace_ != nullptr;};
    void deleteWorkspace() { this->workspace_ = nullptr;};
    inline string workspace() const { DARABONBA_PTR_GET_DEFAULT(workspace_, "") };
    inline CreateBizTraceRequest& setWorkspace(string workspace) { DARABONBA_PTR_SET_VALUE(workspace_, workspace) };


  protected:
    std::shared_ptr<string> advancedConfig_ = nullptr;
    std::shared_ptr<string> bizTraceCode_ = nullptr;
    std::shared_ptr<string> bizTraceName_ = nullptr;
    std::shared_ptr<string> ruleConfig_ = nullptr;
    std::shared_ptr<string> workspace_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
