// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEFAULTIPSCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEFAULTIPSCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class ModifyDefaultIPSConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDefaultIPSConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_TO_JSON(CtiRules, ctiRules_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MaxSdl, maxSdl_);
      DARABONBA_PTR_TO_JSON(PatchRules, patchRules_);
      DARABONBA_PTR_TO_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_TO_JSON(RunMode, runMode_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDefaultIPSConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BasicRules, basicRules_);
      DARABONBA_PTR_FROM_JSON(CtiRules, ctiRules_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MaxSdl, maxSdl_);
      DARABONBA_PTR_FROM_JSON(PatchRules, patchRules_);
      DARABONBA_PTR_FROM_JSON(RuleClass, ruleClass_);
      DARABONBA_PTR_FROM_JSON(RunMode, runMode_);
    };
    ModifyDefaultIPSConfigRequest() = default ;
    ModifyDefaultIPSConfigRequest(const ModifyDefaultIPSConfigRequest &) = default ;
    ModifyDefaultIPSConfigRequest(ModifyDefaultIPSConfigRequest &&) = default ;
    ModifyDefaultIPSConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDefaultIPSConfigRequest() = default ;
    ModifyDefaultIPSConfigRequest& operator=(const ModifyDefaultIPSConfigRequest &) = default ;
    ModifyDefaultIPSConfigRequest& operator=(ModifyDefaultIPSConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->basicRules_ == nullptr
        && return this->ctiRules_ == nullptr && return this->lang_ == nullptr && return this->maxSdl_ == nullptr && return this->patchRules_ == nullptr && return this->ruleClass_ == nullptr
        && return this->runMode_ == nullptr; };
    // basicRules Field Functions 
    bool hasBasicRules() const { return this->basicRules_ != nullptr;};
    void deleteBasicRules() { this->basicRules_ = nullptr;};
    inline int32_t basicRules() const { DARABONBA_PTR_GET_DEFAULT(basicRules_, 0) };
    inline ModifyDefaultIPSConfigRequest& setBasicRules(int32_t basicRules) { DARABONBA_PTR_SET_VALUE(basicRules_, basicRules) };


    // ctiRules Field Functions 
    bool hasCtiRules() const { return this->ctiRules_ != nullptr;};
    void deleteCtiRules() { this->ctiRules_ = nullptr;};
    inline int32_t ctiRules() const { DARABONBA_PTR_GET_DEFAULT(ctiRules_, 0) };
    inline ModifyDefaultIPSConfigRequest& setCtiRules(int32_t ctiRules) { DARABONBA_PTR_SET_VALUE(ctiRules_, ctiRules) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline ModifyDefaultIPSConfigRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // maxSdl Field Functions 
    bool hasMaxSdl() const { return this->maxSdl_ != nullptr;};
    void deleteMaxSdl() { this->maxSdl_ = nullptr;};
    inline int64_t maxSdl() const { DARABONBA_PTR_GET_DEFAULT(maxSdl_, 0L) };
    inline ModifyDefaultIPSConfigRequest& setMaxSdl(int64_t maxSdl) { DARABONBA_PTR_SET_VALUE(maxSdl_, maxSdl) };


    // patchRules Field Functions 
    bool hasPatchRules() const { return this->patchRules_ != nullptr;};
    void deletePatchRules() { this->patchRules_ = nullptr;};
    inline int32_t patchRules() const { DARABONBA_PTR_GET_DEFAULT(patchRules_, 0) };
    inline ModifyDefaultIPSConfigRequest& setPatchRules(int32_t patchRules) { DARABONBA_PTR_SET_VALUE(patchRules_, patchRules) };


    // ruleClass Field Functions 
    bool hasRuleClass() const { return this->ruleClass_ != nullptr;};
    void deleteRuleClass() { this->ruleClass_ = nullptr;};
    inline int32_t ruleClass() const { DARABONBA_PTR_GET_DEFAULT(ruleClass_, 0) };
    inline ModifyDefaultIPSConfigRequest& setRuleClass(int32_t ruleClass) { DARABONBA_PTR_SET_VALUE(ruleClass_, ruleClass) };


    // runMode Field Functions 
    bool hasRunMode() const { return this->runMode_ != nullptr;};
    void deleteRunMode() { this->runMode_ = nullptr;};
    inline int32_t runMode() const { DARABONBA_PTR_GET_DEFAULT(runMode_, 0) };
    inline ModifyDefaultIPSConfigRequest& setRunMode(int32_t runMode) { DARABONBA_PTR_SET_VALUE(runMode_, runMode) };


  protected:
    // Specifies whether to enable basic protection. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> basicRules_ = nullptr;
    // Specifies whether to enable threat intelligence. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> ctiRules_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh** (default)
    // *   **en**
    std::shared_ptr<string> lang_ = nullptr;
    // The maximum amount of traffic that can be processed by the sensitive data leak detection feature each day.
    std::shared_ptr<int64_t> maxSdl_ = nullptr;
    // Specifies whether to enable virtual patching. Valid values:
    // 
    // *   **1**: yes
    // *   **0**: no
    std::shared_ptr<int32_t> patchRules_ = nullptr;
    // The level of the rule group for the IPS. Valid values:
    // 
    // *   **1**: loose
    // *   **2**: medium
    // *   **3**: strict
    std::shared_ptr<int32_t> ruleClass_ = nullptr;
    // The mode of the IPS. Valid values:
    // 
    // *   **1**: block mode
    // *   **0**: monitor mode
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> runMode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
