// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETINSTANCERESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyResultNetwork.hpp>
#include <alibabacloud/models/GetInstanceResponseBodyResultSpec.hpp>
#include <vector>
#include <alibabacloud/models/GetInstanceResponseBodyResultTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class GetInstanceResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(bsVersion, bsVersion_);
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(edition, edition_);
      DARABONBA_PTR_TO_JSON(expiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(inDebt, inDebt_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(lockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(newMode, newMode_);
      DARABONBA_PTR_TO_JSON(noQrs, noQrs_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
      DARABONBA_PTR_TO_JSON(version, version_);
      DARABONBA_PTR_TO_JSON(zoneCount, zoneCount_);
    };
    friend void from_json(const Darabonba::Json& j, GetInstanceResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(bsVersion, bsVersion_);
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(edition, edition_);
      DARABONBA_PTR_FROM_JSON(expiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(inDebt, inDebt_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(lockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(newMode, newMode_);
      DARABONBA_PTR_FROM_JSON(noQrs, noQrs_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
      DARABONBA_PTR_FROM_JSON(version, version_);
      DARABONBA_PTR_FROM_JSON(zoneCount, zoneCount_);
    };
    GetInstanceResponseBodyResult() = default ;
    GetInstanceResponseBodyResult(const GetInstanceResponseBodyResult &) = default ;
    GetInstanceResponseBodyResult(GetInstanceResponseBodyResult &&) = default ;
    GetInstanceResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetInstanceResponseBodyResult() = default ;
    GetInstanceResponseBodyResult& operator=(const GetInstanceResponseBodyResult &) = default ;
    GetInstanceResponseBodyResult& operator=(GetInstanceResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bsVersion_ != nullptr
        && this->chargeType_ != nullptr && this->commodityCode_ != nullptr && this->createTime_ != nullptr && this->description_ != nullptr && this->edition_ != nullptr
        && this->expiredTime_ != nullptr && this->inDebt_ != nullptr && this->instanceId_ != nullptr && this->lockMode_ != nullptr && this->network_ != nullptr
        && this->newMode_ != nullptr && this->noQrs_ != nullptr && this->resourceGroupId_ != nullptr && this->spec_ != nullptr && this->status_ != nullptr
        && this->tags_ != nullptr && this->updateTime_ != nullptr && this->userName_ != nullptr && this->version_ != nullptr && this->zoneCount_ != nullptr; };
    // bsVersion Field Functions 
    bool hasBsVersion() const { return this->bsVersion_ != nullptr;};
    void deleteBsVersion() { this->bsVersion_ = nullptr;};
    inline string bsVersion() const { DARABONBA_PTR_GET_DEFAULT(bsVersion_, "") };
    inline GetInstanceResponseBodyResult& setBsVersion(string bsVersion) { DARABONBA_PTR_SET_VALUE(bsVersion_, bsVersion) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline GetInstanceResponseBodyResult& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline GetInstanceResponseBodyResult& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline GetInstanceResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline GetInstanceResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline GetInstanceResponseBodyResult& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline GetInstanceResponseBodyResult& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // inDebt Field Functions 
    bool hasInDebt() const { return this->inDebt_ != nullptr;};
    void deleteInDebt() { this->inDebt_ = nullptr;};
    inline bool inDebt() const { DARABONBA_PTR_GET_DEFAULT(inDebt_, false) };
    inline GetInstanceResponseBodyResult& setInDebt(bool inDebt) { DARABONBA_PTR_SET_VALUE(inDebt_, inDebt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetInstanceResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline GetInstanceResponseBodyResult& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::GetInstanceResponseBodyResultNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::GetInstanceResponseBodyResultNetwork) };
    inline Models::GetInstanceResponseBodyResultNetwork network() { DARABONBA_PTR_GET(network_, Models::GetInstanceResponseBodyResultNetwork) };
    inline GetInstanceResponseBodyResult& setNetwork(const Models::GetInstanceResponseBodyResultNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline GetInstanceResponseBodyResult& setNetwork(Models::GetInstanceResponseBodyResultNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // newMode Field Functions 
    bool hasNewMode() const { return this->newMode_ != nullptr;};
    void deleteNewMode() { this->newMode_ = nullptr;};
    inline bool newMode() const { DARABONBA_PTR_GET_DEFAULT(newMode_, false) };
    inline GetInstanceResponseBodyResult& setNewMode(bool newMode) { DARABONBA_PTR_SET_VALUE(newMode_, newMode) };


    // noQrs Field Functions 
    bool hasNoQrs() const { return this->noQrs_ != nullptr;};
    void deleteNoQrs() { this->noQrs_ = nullptr;};
    inline bool noQrs() const { DARABONBA_PTR_GET_DEFAULT(noQrs_, false) };
    inline GetInstanceResponseBodyResult& setNoQrs(bool noQrs) { DARABONBA_PTR_SET_VALUE(noQrs_, noQrs) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline GetInstanceResponseBodyResult& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const Models::GetInstanceResponseBodyResultSpec & spec() const { DARABONBA_PTR_GET_CONST(spec_, Models::GetInstanceResponseBodyResultSpec) };
    inline Models::GetInstanceResponseBodyResultSpec spec() { DARABONBA_PTR_GET(spec_, Models::GetInstanceResponseBodyResultSpec) };
    inline GetInstanceResponseBodyResult& setSpec(const Models::GetInstanceResponseBodyResultSpec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline GetInstanceResponseBodyResult& setSpec(Models::GetInstanceResponseBodyResultSpec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetInstanceResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::GetInstanceResponseBodyResultTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::GetInstanceResponseBodyResultTags>) };
    inline vector<Models::GetInstanceResponseBodyResultTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::GetInstanceResponseBodyResultTags>) };
    inline GetInstanceResponseBodyResult& setTags(const vector<Models::GetInstanceResponseBodyResultTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline GetInstanceResponseBodyResult& setTags(vector<Models::GetInstanceResponseBodyResultTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline GetInstanceResponseBodyResult& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline GetInstanceResponseBodyResult& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline GetInstanceResponseBodyResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


    // zoneCount Field Functions 
    bool hasZoneCount() const { return this->zoneCount_ != nullptr;};
    void deleteZoneCount() { this->zoneCount_ = nullptr;};
    inline int32_t zoneCount() const { DARABONBA_PTR_GET_DEFAULT(zoneCount_, 0) };
    inline GetInstanceResponseBodyResult& setZoneCount(int32_t zoneCount) { DARABONBA_PTR_SET_VALUE(zoneCount_, zoneCount) };


  protected:
    std::shared_ptr<string> bsVersion_ = nullptr;
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The commodity code of the instance.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    // The edition of the instance. Valid values: vector and engine.
    std::shared_ptr<string> edition_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // Indicates whether an overdue payment is involved.
    std::shared_ptr<bool> inDebt_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The lock status.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The network information of the instance.
    std::shared_ptr<Models::GetInstanceResponseBodyResultNetwork> network_ = nullptr;
    // Specifies whether the instance is of the new version.
    std::shared_ptr<bool> newMode_ = nullptr;
    // Specifies whether the instance has only one node.
    std::shared_ptr<bool> noQrs_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // The node specifications.
    std::shared_ptr<Models::GetInstanceResponseBodyResultSpec> spec_ = nullptr;
    // The status of the instance. Valid values:
    // 
    // *   INIT: being initialized
    // *   WAIT_CONFIG: to be configured
    // *   CONFIG_UPDATING: configuration taking effect
    // *   READY: normal
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the instance.
    std::shared_ptr<vector<Models::GetInstanceResponseBodyResultTags>> tags_ = nullptr;
    // The time when the instance was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The username.
    std::shared_ptr<string> userName_ = nullptr;
    // The version of the engine.
    std::shared_ptr<string> version_ = nullptr;
    std::shared_ptr<int32_t> zoneCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
