// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETINFOPUBLISHRESPONSEBODYASSETLIST_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETINFOPUBLISHRESPONSEBODYASSETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAssetInfoPublishResponseBodyAssetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetInfoPublishResponseBodyAssetList& obj) { 
      DARABONBA_PTR_TO_JSON(CurVersion, curVersion_);
      DARABONBA_PTR_TO_JSON(LastUpgradeTime, lastUpgradeTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpgradeEnable, upgradeEnable_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetInfoPublishResponseBodyAssetList& obj) { 
      DARABONBA_PTR_FROM_JSON(CurVersion, curVersion_);
      DARABONBA_PTR_FROM_JSON(LastUpgradeTime, lastUpgradeTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpgradeEnable, upgradeEnable_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ListAssetInfoPublishResponseBodyAssetList() = default ;
    ListAssetInfoPublishResponseBodyAssetList(const ListAssetInfoPublishResponseBodyAssetList &) = default ;
    ListAssetInfoPublishResponseBodyAssetList(ListAssetInfoPublishResponseBodyAssetList &&) = default ;
    ListAssetInfoPublishResponseBodyAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetInfoPublishResponseBodyAssetList() = default ;
    ListAssetInfoPublishResponseBodyAssetList& operator=(const ListAssetInfoPublishResponseBodyAssetList &) = default ;
    ListAssetInfoPublishResponseBodyAssetList& operator=(ListAssetInfoPublishResponseBodyAssetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->curVersion_ == nullptr
        && return this->lastUpgradeTime_ == nullptr && return this->status_ == nullptr && return this->upgradeEnable_ == nullptr && return this->uuid_ == nullptr; };
    // curVersion Field Functions 
    bool hasCurVersion() const { return this->curVersion_ != nullptr;};
    void deleteCurVersion() { this->curVersion_ = nullptr;};
    inline string curVersion() const { DARABONBA_PTR_GET_DEFAULT(curVersion_, "") };
    inline ListAssetInfoPublishResponseBodyAssetList& setCurVersion(string curVersion) { DARABONBA_PTR_SET_VALUE(curVersion_, curVersion) };


    // lastUpgradeTime Field Functions 
    bool hasLastUpgradeTime() const { return this->lastUpgradeTime_ != nullptr;};
    void deleteLastUpgradeTime() { this->lastUpgradeTime_ = nullptr;};
    inline int64_t lastUpgradeTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpgradeTime_, 0L) };
    inline ListAssetInfoPublishResponseBodyAssetList& setLastUpgradeTime(int64_t lastUpgradeTime) { DARABONBA_PTR_SET_VALUE(lastUpgradeTime_, lastUpgradeTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ListAssetInfoPublishResponseBodyAssetList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // upgradeEnable Field Functions 
    bool hasUpgradeEnable() const { return this->upgradeEnable_ != nullptr;};
    void deleteUpgradeEnable() { this->upgradeEnable_ = nullptr;};
    inline bool upgradeEnable() const { DARABONBA_PTR_GET_DEFAULT(upgradeEnable_, false) };
    inline ListAssetInfoPublishResponseBodyAssetList& setUpgradeEnable(bool upgradeEnable) { DARABONBA_PTR_SET_VALUE(upgradeEnable_, upgradeEnable) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAssetInfoPublishResponseBodyAssetList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // The version of the Security Center agent.
    std::shared_ptr<string> curVersion_ = nullptr;
    // The time when the Security Center agent was last upgraded.
    std::shared_ptr<int64_t> lastUpgradeTime_ = nullptr;
    // The publish status of the Security Center agent. Valid values:
    // 
    // *   **0**: not started.
    // *   **1**: publishing.
    // *   **2**: published.
    // *   **3**: publish suspended.
    // *   **4**: forcibly upgrading.
    std::shared_ptr<int32_t> status_ = nullptr;
    // Indicates whether automatic upgrade is enabled. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> upgradeEnable_ = nullptr;
    // The UUID of the asset.
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
