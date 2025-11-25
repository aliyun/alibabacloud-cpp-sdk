// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWEBCCPROTECTSWITCHRESPONSEBODYPROTECTSWITCHLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWEBCCPROTECTSWITCHRESPONSEBODYPROTECTSWITCHLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeWebCcProtectSwitchResponseBodyProtectSwitchList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& obj) { 
      DARABONBA_PTR_TO_JSON(AiMode, aiMode_);
      DARABONBA_PTR_TO_JSON(AiRuleEnable, aiRuleEnable_);
      DARABONBA_PTR_TO_JSON(AiTemplate, aiTemplate_);
      DARABONBA_PTR_TO_JSON(BlackWhiteListEnable, blackWhiteListEnable_);
      DARABONBA_PTR_TO_JSON(CcCustomRuleEnable, ccCustomRuleEnable_);
      DARABONBA_PTR_TO_JSON(CcEnable, ccEnable_);
      DARABONBA_PTR_TO_JSON(CcGlobalSwitch, ccGlobalSwitch_);
      DARABONBA_PTR_TO_JSON(CcTemplate, ccTemplate_);
      DARABONBA_PTR_TO_JSON(Domain, domain_);
      DARABONBA_PTR_TO_JSON(PreciseRuleEnable, preciseRuleEnable_);
      DARABONBA_PTR_TO_JSON(RegionBlockEnable, regionBlockEnable_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& obj) { 
      DARABONBA_PTR_FROM_JSON(AiMode, aiMode_);
      DARABONBA_PTR_FROM_JSON(AiRuleEnable, aiRuleEnable_);
      DARABONBA_PTR_FROM_JSON(AiTemplate, aiTemplate_);
      DARABONBA_PTR_FROM_JSON(BlackWhiteListEnable, blackWhiteListEnable_);
      DARABONBA_PTR_FROM_JSON(CcCustomRuleEnable, ccCustomRuleEnable_);
      DARABONBA_PTR_FROM_JSON(CcEnable, ccEnable_);
      DARABONBA_PTR_FROM_JSON(CcGlobalSwitch, ccGlobalSwitch_);
      DARABONBA_PTR_FROM_JSON(CcTemplate, ccTemplate_);
      DARABONBA_PTR_FROM_JSON(Domain, domain_);
      DARABONBA_PTR_FROM_JSON(PreciseRuleEnable, preciseRuleEnable_);
      DARABONBA_PTR_FROM_JSON(RegionBlockEnable, regionBlockEnable_);
    };
    DescribeWebCcProtectSwitchResponseBodyProtectSwitchList() = default ;
    DescribeWebCcProtectSwitchResponseBodyProtectSwitchList(const DescribeWebCcProtectSwitchResponseBodyProtectSwitchList &) = default ;
    DescribeWebCcProtectSwitchResponseBodyProtectSwitchList(DescribeWebCcProtectSwitchResponseBodyProtectSwitchList &&) = default ;
    DescribeWebCcProtectSwitchResponseBodyProtectSwitchList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWebCcProtectSwitchResponseBodyProtectSwitchList() = default ;
    DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& operator=(const DescribeWebCcProtectSwitchResponseBodyProtectSwitchList &) = default ;
    DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& operator=(DescribeWebCcProtectSwitchResponseBodyProtectSwitchList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aiMode_ == nullptr
        && return this->aiRuleEnable_ == nullptr && return this->aiTemplate_ == nullptr && return this->blackWhiteListEnable_ == nullptr && return this->ccCustomRuleEnable_ == nullptr && return this->ccEnable_ == nullptr
        && return this->ccGlobalSwitch_ == nullptr && return this->ccTemplate_ == nullptr && return this->domain_ == nullptr && return this->preciseRuleEnable_ == nullptr && return this->regionBlockEnable_ == nullptr; };
    // aiMode Field Functions 
    bool hasAiMode() const { return this->aiMode_ != nullptr;};
    void deleteAiMode() { this->aiMode_ = nullptr;};
    inline string aiMode() const { DARABONBA_PTR_GET_DEFAULT(aiMode_, "") };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setAiMode(string aiMode) { DARABONBA_PTR_SET_VALUE(aiMode_, aiMode) };


    // aiRuleEnable Field Functions 
    bool hasAiRuleEnable() const { return this->aiRuleEnable_ != nullptr;};
    void deleteAiRuleEnable() { this->aiRuleEnable_ = nullptr;};
    inline int32_t aiRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(aiRuleEnable_, 0) };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setAiRuleEnable(int32_t aiRuleEnable) { DARABONBA_PTR_SET_VALUE(aiRuleEnable_, aiRuleEnable) };


    // aiTemplate Field Functions 
    bool hasAiTemplate() const { return this->aiTemplate_ != nullptr;};
    void deleteAiTemplate() { this->aiTemplate_ = nullptr;};
    inline string aiTemplate() const { DARABONBA_PTR_GET_DEFAULT(aiTemplate_, "") };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setAiTemplate(string aiTemplate) { DARABONBA_PTR_SET_VALUE(aiTemplate_, aiTemplate) };


    // blackWhiteListEnable Field Functions 
    bool hasBlackWhiteListEnable() const { return this->blackWhiteListEnable_ != nullptr;};
    void deleteBlackWhiteListEnable() { this->blackWhiteListEnable_ = nullptr;};
    inline int32_t blackWhiteListEnable() const { DARABONBA_PTR_GET_DEFAULT(blackWhiteListEnable_, 0) };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setBlackWhiteListEnable(int32_t blackWhiteListEnable) { DARABONBA_PTR_SET_VALUE(blackWhiteListEnable_, blackWhiteListEnable) };


    // ccCustomRuleEnable Field Functions 
    bool hasCcCustomRuleEnable() const { return this->ccCustomRuleEnable_ != nullptr;};
    void deleteCcCustomRuleEnable() { this->ccCustomRuleEnable_ = nullptr;};
    inline int32_t ccCustomRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(ccCustomRuleEnable_, 0) };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setCcCustomRuleEnable(int32_t ccCustomRuleEnable) { DARABONBA_PTR_SET_VALUE(ccCustomRuleEnable_, ccCustomRuleEnable) };


    // ccEnable Field Functions 
    bool hasCcEnable() const { return this->ccEnable_ != nullptr;};
    void deleteCcEnable() { this->ccEnable_ = nullptr;};
    inline int32_t ccEnable() const { DARABONBA_PTR_GET_DEFAULT(ccEnable_, 0) };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setCcEnable(int32_t ccEnable) { DARABONBA_PTR_SET_VALUE(ccEnable_, ccEnable) };


    // ccGlobalSwitch Field Functions 
    bool hasCcGlobalSwitch() const { return this->ccGlobalSwitch_ != nullptr;};
    void deleteCcGlobalSwitch() { this->ccGlobalSwitch_ = nullptr;};
    inline string ccGlobalSwitch() const { DARABONBA_PTR_GET_DEFAULT(ccGlobalSwitch_, "") };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setCcGlobalSwitch(string ccGlobalSwitch) { DARABONBA_PTR_SET_VALUE(ccGlobalSwitch_, ccGlobalSwitch) };


    // ccTemplate Field Functions 
    bool hasCcTemplate() const { return this->ccTemplate_ != nullptr;};
    void deleteCcTemplate() { this->ccTemplate_ = nullptr;};
    inline string ccTemplate() const { DARABONBA_PTR_GET_DEFAULT(ccTemplate_, "") };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setCcTemplate(string ccTemplate) { DARABONBA_PTR_SET_VALUE(ccTemplate_, ccTemplate) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // preciseRuleEnable Field Functions 
    bool hasPreciseRuleEnable() const { return this->preciseRuleEnable_ != nullptr;};
    void deletePreciseRuleEnable() { this->preciseRuleEnable_ = nullptr;};
    inline int32_t preciseRuleEnable() const { DARABONBA_PTR_GET_DEFAULT(preciseRuleEnable_, 0) };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setPreciseRuleEnable(int32_t preciseRuleEnable) { DARABONBA_PTR_SET_VALUE(preciseRuleEnable_, preciseRuleEnable) };


    // regionBlockEnable Field Functions 
    bool hasRegionBlockEnable() const { return this->regionBlockEnable_ != nullptr;};
    void deleteRegionBlockEnable() { this->regionBlockEnable_ = nullptr;};
    inline int32_t regionBlockEnable() const { DARABONBA_PTR_GET_DEFAULT(regionBlockEnable_, 0) };
    inline DescribeWebCcProtectSwitchResponseBodyProtectSwitchList& setRegionBlockEnable(int32_t regionBlockEnable) { DARABONBA_PTR_SET_VALUE(regionBlockEnable_, regionBlockEnable) };


  protected:
    // The mode of Intelligent Protection. Valid values:
    // 
    // *   **watch**: Warning
    // *   **defense**: Defense
    std::shared_ptr<string> aiMode_ = nullptr;
    // The status of Intelligent Protection. Valid values:
    // 
    // *   **0**: turned off
    // *   **1:** turned on
    std::shared_ptr<int32_t> aiRuleEnable_ = nullptr;
    // The level of Intelligent Protection. Valid values:
    // 
    // *   **level30**: Loose
    // *   **level60**: Normal
    // *   **level90**: Strict
    std::shared_ptr<string> aiTemplate_ = nullptr;
    // The status of Blacklist/Whitelist (Domain Names). Valid values:
    // 
    // *   **0**: turned off
    // *   **1:** turned on
    std::shared_ptr<int32_t> blackWhiteListEnable_ = nullptr;
    // The status of the Custom Rules switch for Frequency Control. Valid values:
    // 
    // *   **0**: turned off
    // *   **1:** turned on
    std::shared_ptr<int32_t> ccCustomRuleEnable_ = nullptr;
    // The status of Frequency Control. Valid values:
    // 
    // *   **0**: turned off
    // *   **1:** turned on
    std::shared_ptr<int32_t> ccEnable_ = nullptr;
    std::shared_ptr<string> ccGlobalSwitch_ = nullptr;
    // The mode of Frequency Control. Valid values:
    // 
    // *   **default**: Normal
    // *   **gf_under_attack**: Emergency
    // *   **gf_sos_verify**: Strict
    // *   **gf_sos_enhance**: Super Strict
    std::shared_ptr<string> ccTemplate_ = nullptr;
    // The domain name of the website.
    std::shared_ptr<string> domain_ = nullptr;
    // The status of Accurate Access Control. Valid values:
    // 
    // *   **0**: turned off
    // *   **1:** turned on
    std::shared_ptr<int32_t> preciseRuleEnable_ = nullptr;
    // The status of Location Blacklist (Domain Names). Valid values:
    // 
    // *   **0**: turned off
    // *   **1:** turned on
    std::shared_ptr<int32_t> regionBlockEnable_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
