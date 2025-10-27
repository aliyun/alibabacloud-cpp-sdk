// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCURRENTVERSIONPUBLISHRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_GETCURRENTVERSIONPUBLISHRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetCurrentVersionPublishResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCurrentVersionPublishResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AutoUpgrade, autoUpgrade_);
      DARABONBA_PTR_TO_JSON(BigCustomer, bigCustomer_);
      DARABONBA_PTR_TO_JSON(CurVersion, curVersion_);
      DARABONBA_PTR_TO_JSON(ForceUpgradeTime, forceUpgradeTime_);
      DARABONBA_PTR_TO_JSON(GraySwitchStatus, graySwitchStatus_);
      DARABONBA_PTR_TO_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_TO_JSON(LatestVersionCreate, latestVersionCreate_);
      DARABONBA_PTR_TO_JSON(LatestVersionDesc, latestVersionDesc_);
      DARABONBA_PTR_TO_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_TO_JSON(UpgradeVersion, upgradeVersion_);
    };
    friend void from_json(const Darabonba::Json& j, GetCurrentVersionPublishResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoUpgrade, autoUpgrade_);
      DARABONBA_PTR_FROM_JSON(BigCustomer, bigCustomer_);
      DARABONBA_PTR_FROM_JSON(CurVersion, curVersion_);
      DARABONBA_PTR_FROM_JSON(ForceUpgradeTime, forceUpgradeTime_);
      DARABONBA_PTR_FROM_JSON(GraySwitchStatus, graySwitchStatus_);
      DARABONBA_PTR_FROM_JSON(LatestVersion, latestVersion_);
      DARABONBA_PTR_FROM_JSON(LatestVersionCreate, latestVersionCreate_);
      DARABONBA_PTR_FROM_JSON(LatestVersionDesc, latestVersionDesc_);
      DARABONBA_PTR_FROM_JSON(PublishStatus, publishStatus_);
      DARABONBA_PTR_FROM_JSON(UpgradeVersion, upgradeVersion_);
    };
    GetCurrentVersionPublishResponseBodyData() = default ;
    GetCurrentVersionPublishResponseBodyData(const GetCurrentVersionPublishResponseBodyData &) = default ;
    GetCurrentVersionPublishResponseBodyData(GetCurrentVersionPublishResponseBodyData &&) = default ;
    GetCurrentVersionPublishResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCurrentVersionPublishResponseBodyData() = default ;
    GetCurrentVersionPublishResponseBodyData& operator=(const GetCurrentVersionPublishResponseBodyData &) = default ;
    GetCurrentVersionPublishResponseBodyData& operator=(GetCurrentVersionPublishResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoUpgrade_ == nullptr
        && return this->bigCustomer_ == nullptr && return this->curVersion_ == nullptr && return this->forceUpgradeTime_ == nullptr && return this->graySwitchStatus_ == nullptr && return this->latestVersion_ == nullptr
        && return this->latestVersionCreate_ == nullptr && return this->latestVersionDesc_ == nullptr && return this->publishStatus_ == nullptr && return this->upgradeVersion_ == nullptr; };
    // autoUpgrade Field Functions 
    bool hasAutoUpgrade() const { return this->autoUpgrade_ != nullptr;};
    void deleteAutoUpgrade() { this->autoUpgrade_ = nullptr;};
    inline int32_t autoUpgrade() const { DARABONBA_PTR_GET_DEFAULT(autoUpgrade_, 0) };
    inline GetCurrentVersionPublishResponseBodyData& setAutoUpgrade(int32_t autoUpgrade) { DARABONBA_PTR_SET_VALUE(autoUpgrade_, autoUpgrade) };


    // bigCustomer Field Functions 
    bool hasBigCustomer() const { return this->bigCustomer_ != nullptr;};
    void deleteBigCustomer() { this->bigCustomer_ = nullptr;};
    inline bool bigCustomer() const { DARABONBA_PTR_GET_DEFAULT(bigCustomer_, false) };
    inline GetCurrentVersionPublishResponseBodyData& setBigCustomer(bool bigCustomer) { DARABONBA_PTR_SET_VALUE(bigCustomer_, bigCustomer) };


    // curVersion Field Functions 
    bool hasCurVersion() const { return this->curVersion_ != nullptr;};
    void deleteCurVersion() { this->curVersion_ = nullptr;};
    inline string curVersion() const { DARABONBA_PTR_GET_DEFAULT(curVersion_, "") };
    inline GetCurrentVersionPublishResponseBodyData& setCurVersion(string curVersion) { DARABONBA_PTR_SET_VALUE(curVersion_, curVersion) };


    // forceUpgradeTime Field Functions 
    bool hasForceUpgradeTime() const { return this->forceUpgradeTime_ != nullptr;};
    void deleteForceUpgradeTime() { this->forceUpgradeTime_ = nullptr;};
    inline int64_t forceUpgradeTime() const { DARABONBA_PTR_GET_DEFAULT(forceUpgradeTime_, 0L) };
    inline GetCurrentVersionPublishResponseBodyData& setForceUpgradeTime(int64_t forceUpgradeTime) { DARABONBA_PTR_SET_VALUE(forceUpgradeTime_, forceUpgradeTime) };


    // graySwitchStatus Field Functions 
    bool hasGraySwitchStatus() const { return this->graySwitchStatus_ != nullptr;};
    void deleteGraySwitchStatus() { this->graySwitchStatus_ = nullptr;};
    inline int32_t graySwitchStatus() const { DARABONBA_PTR_GET_DEFAULT(graySwitchStatus_, 0) };
    inline GetCurrentVersionPublishResponseBodyData& setGraySwitchStatus(int32_t graySwitchStatus) { DARABONBA_PTR_SET_VALUE(graySwitchStatus_, graySwitchStatus) };


    // latestVersion Field Functions 
    bool hasLatestVersion() const { return this->latestVersion_ != nullptr;};
    void deleteLatestVersion() { this->latestVersion_ = nullptr;};
    inline string latestVersion() const { DARABONBA_PTR_GET_DEFAULT(latestVersion_, "") };
    inline GetCurrentVersionPublishResponseBodyData& setLatestVersion(string latestVersion) { DARABONBA_PTR_SET_VALUE(latestVersion_, latestVersion) };


    // latestVersionCreate Field Functions 
    bool hasLatestVersionCreate() const { return this->latestVersionCreate_ != nullptr;};
    void deleteLatestVersionCreate() { this->latestVersionCreate_ = nullptr;};
    inline int64_t latestVersionCreate() const { DARABONBA_PTR_GET_DEFAULT(latestVersionCreate_, 0L) };
    inline GetCurrentVersionPublishResponseBodyData& setLatestVersionCreate(int64_t latestVersionCreate) { DARABONBA_PTR_SET_VALUE(latestVersionCreate_, latestVersionCreate) };


    // latestVersionDesc Field Functions 
    bool hasLatestVersionDesc() const { return this->latestVersionDesc_ != nullptr;};
    void deleteLatestVersionDesc() { this->latestVersionDesc_ = nullptr;};
    inline string latestVersionDesc() const { DARABONBA_PTR_GET_DEFAULT(latestVersionDesc_, "") };
    inline GetCurrentVersionPublishResponseBodyData& setLatestVersionDesc(string latestVersionDesc) { DARABONBA_PTR_SET_VALUE(latestVersionDesc_, latestVersionDesc) };


    // publishStatus Field Functions 
    bool hasPublishStatus() const { return this->publishStatus_ != nullptr;};
    void deletePublishStatus() { this->publishStatus_ = nullptr;};
    inline int32_t publishStatus() const { DARABONBA_PTR_GET_DEFAULT(publishStatus_, 0) };
    inline GetCurrentVersionPublishResponseBodyData& setPublishStatus(int32_t publishStatus) { DARABONBA_PTR_SET_VALUE(publishStatus_, publishStatus) };


    // upgradeVersion Field Functions 
    bool hasUpgradeVersion() const { return this->upgradeVersion_ != nullptr;};
    void deleteUpgradeVersion() { this->upgradeVersion_ = nullptr;};
    inline string upgradeVersion() const { DARABONBA_PTR_GET_DEFAULT(upgradeVersion_, "") };
    inline GetCurrentVersionPublishResponseBodyData& setUpgradeVersion(string upgradeVersion) { DARABONBA_PTR_SET_VALUE(upgradeVersion_, upgradeVersion) };


  protected:
    // Indicates whether automatic upgrade is enabled. Valid values:
    // 
    // *   **1**: yes.
    // *   **0**: no.
    std::shared_ptr<int32_t> autoUpgrade_ = nullptr;
    // Indicates whether you can enable custom upgrade for the Security Center agent. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> bigCustomer_ = nullptr;
    // The version of the Security Center agent.
    std::shared_ptr<string> curVersion_ = nullptr;
    // The timestamp when the Security Center agent was forcibly upgraded.
    std::shared_ptr<int64_t> forceUpgradeTime_ = nullptr;
    // Indicates whether the canary release policy is enabled. Valid values:
    // 
    // *   **1**: yes.
    // *   .**0**: no.
    std::shared_ptr<int32_t> graySwitchStatus_ = nullptr;
    // The latest version of the Security Center agent.
    std::shared_ptr<string> latestVersion_ = nullptr;
    // The timestamp when the latest version of the Security Center agent was created.
    std::shared_ptr<int64_t> latestVersionCreate_ = nullptr;
    // The description of about the latest version.
    std::shared_ptr<string> latestVersionDesc_ = nullptr;
    // The publish status of the Security Center agent. Valid values:
    // 
    // *   **0**: not started.
    // *   **1**: publishing.
    // *   **2**: published.
    // *   **3**: publish suspended.
    // *   **4**: forcibly upgrading.
    std::shared_ptr<int32_t> publishStatus_ = nullptr;
    // The destination version of the Security Center agent.
    std::shared_ptr<string> upgradeVersion_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
