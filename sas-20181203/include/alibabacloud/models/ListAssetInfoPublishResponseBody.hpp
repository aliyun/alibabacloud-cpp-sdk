// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTASSETINFOPUBLISHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTASSETINFOPUBLISHRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ListAssetInfoPublishResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAssetInfoPublishResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AssetList, assetList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListAssetInfoPublishResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AssetList, assetList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListAssetInfoPublishResponseBody() = default ;
    ListAssetInfoPublishResponseBody(const ListAssetInfoPublishResponseBody &) = default ;
    ListAssetInfoPublishResponseBody(ListAssetInfoPublishResponseBody &&) = default ;
    ListAssetInfoPublishResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAssetInfoPublishResponseBody() = default ;
    ListAssetInfoPublishResponseBody& operator=(const ListAssetInfoPublishResponseBody &) = default ;
    ListAssetInfoPublishResponseBody& operator=(ListAssetInfoPublishResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AssetList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AssetList& obj) { 
        DARABONBA_PTR_TO_JSON(CurVersion, curVersion_);
        DARABONBA_PTR_TO_JSON(LastUpgradeTime, lastUpgradeTime_);
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(UpgradeEnable, upgradeEnable_);
        DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      };
      friend void from_json(const Darabonba::Json& j, AssetList& obj) { 
        DARABONBA_PTR_FROM_JSON(CurVersion, curVersion_);
        DARABONBA_PTR_FROM_JSON(LastUpgradeTime, lastUpgradeTime_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(UpgradeEnable, upgradeEnable_);
        DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      };
      AssetList() = default ;
      AssetList(const AssetList &) = default ;
      AssetList(AssetList &&) = default ;
      AssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AssetList() = default ;
      AssetList& operator=(const AssetList &) = default ;
      AssetList& operator=(AssetList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->curVersion_ == nullptr
        && this->lastUpgradeTime_ == nullptr && this->status_ == nullptr && this->upgradeEnable_ == nullptr && this->uuid_ == nullptr; };
      // curVersion Field Functions 
      bool hasCurVersion() const { return this->curVersion_ != nullptr;};
      void deleteCurVersion() { this->curVersion_ = nullptr;};
      inline string getCurVersion() const { DARABONBA_PTR_GET_DEFAULT(curVersion_, "") };
      inline AssetList& setCurVersion(string curVersion) { DARABONBA_PTR_SET_VALUE(curVersion_, curVersion) };


      // lastUpgradeTime Field Functions 
      bool hasLastUpgradeTime() const { return this->lastUpgradeTime_ != nullptr;};
      void deleteLastUpgradeTime() { this->lastUpgradeTime_ = nullptr;};
      inline int64_t getLastUpgradeTime() const { DARABONBA_PTR_GET_DEFAULT(lastUpgradeTime_, 0L) };
      inline AssetList& setLastUpgradeTime(int64_t lastUpgradeTime) { DARABONBA_PTR_SET_VALUE(lastUpgradeTime_, lastUpgradeTime) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
      inline AssetList& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // upgradeEnable Field Functions 
      bool hasUpgradeEnable() const { return this->upgradeEnable_ != nullptr;};
      void deleteUpgradeEnable() { this->upgradeEnable_ = nullptr;};
      inline bool getUpgradeEnable() const { DARABONBA_PTR_GET_DEFAULT(upgradeEnable_, false) };
      inline AssetList& setUpgradeEnable(bool upgradeEnable) { DARABONBA_PTR_SET_VALUE(upgradeEnable_, upgradeEnable) };


      // uuid Field Functions 
      bool hasUuid() const { return this->uuid_ != nullptr;};
      void deleteUuid() { this->uuid_ = nullptr;};
      inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
      inline AssetList& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    protected:
      // The version of the Security Center agent.
      shared_ptr<string> curVersion_ {};
      // The time when the Security Center agent was last upgraded.
      shared_ptr<int64_t> lastUpgradeTime_ {};
      // The publish status of the Security Center agent. Valid values:
      // 
      // *   **0**: not started.
      // *   **1**: publishing.
      // *   **2**: published.
      // *   **3**: publish suspended.
      // *   **4**: forcibly upgrading.
      shared_ptr<int32_t> status_ {};
      // Indicates whether automatic upgrade is enabled. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> upgradeEnable_ {};
      // The UUID of the asset.
      shared_ptr<string> uuid_ {};
    };

    virtual bool empty() const override { return this->assetList_ == nullptr
        && this->requestId_ == nullptr; };
    // assetList Field Functions 
    bool hasAssetList() const { return this->assetList_ != nullptr;};
    void deleteAssetList() { this->assetList_ = nullptr;};
    inline const vector<ListAssetInfoPublishResponseBody::AssetList> & getAssetList() const { DARABONBA_PTR_GET_CONST(assetList_, vector<ListAssetInfoPublishResponseBody::AssetList>) };
    inline vector<ListAssetInfoPublishResponseBody::AssetList> getAssetList() { DARABONBA_PTR_GET(assetList_, vector<ListAssetInfoPublishResponseBody::AssetList>) };
    inline ListAssetInfoPublishResponseBody& setAssetList(const vector<ListAssetInfoPublishResponseBody::AssetList> & assetList) { DARABONBA_PTR_SET_VALUE(assetList_, assetList) };
    inline ListAssetInfoPublishResponseBody& setAssetList(vector<ListAssetInfoPublishResponseBody::AssetList> && assetList) { DARABONBA_PTR_SET_RVALUE(assetList_, assetList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListAssetInfoPublishResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The servers.
    shared_ptr<vector<ListAssetInfoPublishResponseBody::AssetList>> assetList_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
