// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTINSTANCESRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListInstancesResponseBodyResultDataSourceDetails.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyResultNetwork.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyResultSpec.hpp>
#include <alibabacloud/models/ListInstancesResponseBodyResultTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Searchengine20211025
{
namespace Models
{
  class ListInstancesResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListInstancesResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(chargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(dataSourceDetails, dataSourceDetails_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(edition, edition_);
      DARABONBA_PTR_TO_JSON(expiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(inDebt, inDebt_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(lockMode, lockMode_);
      DARABONBA_PTR_TO_JSON(network, network_);
      DARABONBA_PTR_TO_JSON(noQrs, noQrs_);
      DARABONBA_PTR_TO_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(spec, spec_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(tags, tags_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(userName, userName_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListInstancesResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(chargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(commodityCode, commodityCode_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(dataSourceDetails, dataSourceDetails_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(edition, edition_);
      DARABONBA_PTR_FROM_JSON(expiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(inDebt, inDebt_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(lockMode, lockMode_);
      DARABONBA_PTR_FROM_JSON(network, network_);
      DARABONBA_PTR_FROM_JSON(noQrs, noQrs_);
      DARABONBA_PTR_FROM_JSON(resourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(spec, spec_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(tags, tags_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(userName, userName_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ListInstancesResponseBodyResult() = default ;
    ListInstancesResponseBodyResult(const ListInstancesResponseBodyResult &) = default ;
    ListInstancesResponseBodyResult(ListInstancesResponseBodyResult &&) = default ;
    ListInstancesResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListInstancesResponseBodyResult() = default ;
    ListInstancesResponseBodyResult& operator=(const ListInstancesResponseBodyResult &) = default ;
    ListInstancesResponseBodyResult& operator=(ListInstancesResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->chargeType_ != nullptr
        && this->commodityCode_ != nullptr && this->createTime_ != nullptr && this->dataSourceDetails_ != nullptr && this->description_ != nullptr && this->edition_ != nullptr
        && this->expiredTime_ != nullptr && this->inDebt_ != nullptr && this->instanceId_ != nullptr && this->lockMode_ != nullptr && this->network_ != nullptr
        && this->noQrs_ != nullptr && this->resourceGroupId_ != nullptr && this->spec_ != nullptr && this->status_ != nullptr && this->tags_ != nullptr
        && this->updateTime_ != nullptr && this->userName_ != nullptr && this->version_ != nullptr; };
    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListInstancesResponseBodyResult& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // commodityCode Field Functions 
    bool hasCommodityCode() const { return this->commodityCode_ != nullptr;};
    void deleteCommodityCode() { this->commodityCode_ = nullptr;};
    inline string commodityCode() const { DARABONBA_PTR_GET_DEFAULT(commodityCode_, "") };
    inline ListInstancesResponseBodyResult& setCommodityCode(string commodityCode) { DARABONBA_PTR_SET_VALUE(commodityCode_, commodityCode) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListInstancesResponseBodyResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // dataSourceDetails Field Functions 
    bool hasDataSourceDetails() const { return this->dataSourceDetails_ != nullptr;};
    void deleteDataSourceDetails() { this->dataSourceDetails_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyResultDataSourceDetails> & dataSourceDetails() const { DARABONBA_PTR_GET_CONST(dataSourceDetails_, vector<Models::ListInstancesResponseBodyResultDataSourceDetails>) };
    inline vector<Models::ListInstancesResponseBodyResultDataSourceDetails> dataSourceDetails() { DARABONBA_PTR_GET(dataSourceDetails_, vector<Models::ListInstancesResponseBodyResultDataSourceDetails>) };
    inline ListInstancesResponseBodyResult& setDataSourceDetails(const vector<Models::ListInstancesResponseBodyResultDataSourceDetails> & dataSourceDetails) { DARABONBA_PTR_SET_VALUE(dataSourceDetails_, dataSourceDetails) };
    inline ListInstancesResponseBodyResult& setDataSourceDetails(vector<Models::ListInstancesResponseBodyResultDataSourceDetails> && dataSourceDetails) { DARABONBA_PTR_SET_RVALUE(dataSourceDetails_, dataSourceDetails) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListInstancesResponseBodyResult& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // edition Field Functions 
    bool hasEdition() const { return this->edition_ != nullptr;};
    void deleteEdition() { this->edition_ = nullptr;};
    inline string edition() const { DARABONBA_PTR_GET_DEFAULT(edition_, "") };
    inline ListInstancesResponseBodyResult& setEdition(string edition) { DARABONBA_PTR_SET_VALUE(edition_, edition) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline ListInstancesResponseBodyResult& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // inDebt Field Functions 
    bool hasInDebt() const { return this->inDebt_ != nullptr;};
    void deleteInDebt() { this->inDebt_ = nullptr;};
    inline bool inDebt() const { DARABONBA_PTR_GET_DEFAULT(inDebt_, false) };
    inline ListInstancesResponseBodyResult& setInDebt(bool inDebt) { DARABONBA_PTR_SET_VALUE(inDebt_, inDebt) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListInstancesResponseBodyResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // lockMode Field Functions 
    bool hasLockMode() const { return this->lockMode_ != nullptr;};
    void deleteLockMode() { this->lockMode_ = nullptr;};
    inline string lockMode() const { DARABONBA_PTR_GET_DEFAULT(lockMode_, "") };
    inline ListInstancesResponseBodyResult& setLockMode(string lockMode) { DARABONBA_PTR_SET_VALUE(lockMode_, lockMode) };


    // network Field Functions 
    bool hasNetwork() const { return this->network_ != nullptr;};
    void deleteNetwork() { this->network_ = nullptr;};
    inline const Models::ListInstancesResponseBodyResultNetwork & network() const { DARABONBA_PTR_GET_CONST(network_, Models::ListInstancesResponseBodyResultNetwork) };
    inline Models::ListInstancesResponseBodyResultNetwork network() { DARABONBA_PTR_GET(network_, Models::ListInstancesResponseBodyResultNetwork) };
    inline ListInstancesResponseBodyResult& setNetwork(const Models::ListInstancesResponseBodyResultNetwork & network) { DARABONBA_PTR_SET_VALUE(network_, network) };
    inline ListInstancesResponseBodyResult& setNetwork(Models::ListInstancesResponseBodyResultNetwork && network) { DARABONBA_PTR_SET_RVALUE(network_, network) };


    // noQrs Field Functions 
    bool hasNoQrs() const { return this->noQrs_ != nullptr;};
    void deleteNoQrs() { this->noQrs_ = nullptr;};
    inline bool noQrs() const { DARABONBA_PTR_GET_DEFAULT(noQrs_, false) };
    inline ListInstancesResponseBodyResult& setNoQrs(bool noQrs) { DARABONBA_PTR_SET_VALUE(noQrs_, noQrs) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ListInstancesResponseBodyResult& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline const Models::ListInstancesResponseBodyResultSpec & spec() const { DARABONBA_PTR_GET_CONST(spec_, Models::ListInstancesResponseBodyResultSpec) };
    inline Models::ListInstancesResponseBodyResultSpec spec() { DARABONBA_PTR_GET(spec_, Models::ListInstancesResponseBodyResultSpec) };
    inline ListInstancesResponseBodyResult& setSpec(const Models::ListInstancesResponseBodyResultSpec & spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };
    inline ListInstancesResponseBodyResult& setSpec(Models::ListInstancesResponseBodyResultSpec && spec) { DARABONBA_PTR_SET_RVALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListInstancesResponseBodyResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::ListInstancesResponseBodyResultTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::ListInstancesResponseBodyResultTags>) };
    inline vector<Models::ListInstancesResponseBodyResultTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::ListInstancesResponseBodyResultTags>) };
    inline ListInstancesResponseBodyResult& setTags(const vector<Models::ListInstancesResponseBodyResultTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline ListInstancesResponseBodyResult& setTags(vector<Models::ListInstancesResponseBodyResultTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListInstancesResponseBodyResult& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // userName Field Functions 
    bool hasUserName() const { return this->userName_ != nullptr;};
    void deleteUserName() { this->userName_ = nullptr;};
    inline string userName() const { DARABONBA_PTR_GET_DEFAULT(userName_, "") };
    inline ListInstancesResponseBodyResult& setUserName(string userName) { DARABONBA_PTR_SET_VALUE(userName_, userName) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListInstancesResponseBodyResult& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The commodity code of the instance.
    std::shared_ptr<string> commodityCode_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> createTime_ = nullptr;
    std::shared_ptr<vector<Models::ListInstancesResponseBodyResultDataSourceDetails>> dataSourceDetails_ = nullptr;
    // The description of the instance.
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<string> edition_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // Indicates whether an overdue payment is involved.
    std::shared_ptr<bool> inDebt_ = nullptr;
    // The instance ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The lock state of the instance.
    std::shared_ptr<string> lockMode_ = nullptr;
    // The network information of the instance.
    std::shared_ptr<Models::ListInstancesResponseBodyResultNetwork> network_ = nullptr;
    std::shared_ptr<bool> noQrs_ = nullptr;
    // The ID of the resource group.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    std::shared_ptr<Models::ListInstancesResponseBodyResultSpec> spec_ = nullptr;
    // The instance status.
    std::shared_ptr<string> status_ = nullptr;
    // The tags of the instance.
    std::shared_ptr<vector<Models::ListInstancesResponseBodyResultTags>> tags_ = nullptr;
    // The time when the instance was updated.
    std::shared_ptr<string> updateTime_ = nullptr;
    std::shared_ptr<string> userName_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Searchengine20211025
#endif
