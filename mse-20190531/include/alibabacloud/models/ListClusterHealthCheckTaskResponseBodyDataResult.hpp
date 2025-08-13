// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLUSTERHEALTHCHECKTASKRESPONSEBODYDATARESULT_HPP_
#define ALIBABACLOUD_MODELS_LISTCLUSTERHEALTHCHECKTASKRESPONSEBODYDATARESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListClusterHealthCheckTaskResponseBodyDataResultRiskList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListClusterHealthCheckTaskResponseBodyDataResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListClusterHealthCheckTaskResponseBodyDataResult& obj) { 
      DARABONBA_PTR_TO_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_TO_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_TO_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_TO_JSON(Replica, replica_);
      DARABONBA_PTR_TO_JSON(RiskList, riskList_);
      DARABONBA_PTR_TO_JSON(Score, score_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_TO_JSON(TotalRisk, totalRisk_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_TO_JSON(VersionCode, versionCode_);
    };
    friend void from_json(const Darabonba::Json& j, ListClusterHealthCheckTaskResponseBodyDataResult& obj) { 
      DARABONBA_PTR_FROM_JSON(AppVersion, appVersion_);
      DARABONBA_PTR_FROM_JSON(ChargeType, chargeType_);
      DARABONBA_PTR_FROM_JSON(ClusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImageVersion, imageVersion_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(PrimaryUser, primaryUser_);
      DARABONBA_PTR_FROM_JSON(Replica, replica_);
      DARABONBA_PTR_FROM_JSON(RiskList, riskList_);
      DARABONBA_PTR_FROM_JSON(Score, score_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TotalItem, totalItem_);
      DARABONBA_PTR_FROM_JSON(TotalRisk, totalRisk_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
      DARABONBA_PTR_FROM_JSON(VersionCode, versionCode_);
    };
    ListClusterHealthCheckTaskResponseBodyDataResult() = default ;
    ListClusterHealthCheckTaskResponseBodyDataResult(const ListClusterHealthCheckTaskResponseBodyDataResult &) = default ;
    ListClusterHealthCheckTaskResponseBodyDataResult(ListClusterHealthCheckTaskResponseBodyDataResult &&) = default ;
    ListClusterHealthCheckTaskResponseBodyDataResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListClusterHealthCheckTaskResponseBodyDataResult() = default ;
    ListClusterHealthCheckTaskResponseBodyDataResult& operator=(const ListClusterHealthCheckTaskResponseBodyDataResult &) = default ;
    ListClusterHealthCheckTaskResponseBodyDataResult& operator=(ListClusterHealthCheckTaskResponseBodyDataResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appVersion_ != nullptr
        && this->chargeType_ != nullptr && this->clusterType_ != nullptr && this->createTime_ != nullptr && this->id_ != nullptr && this->imageVersion_ != nullptr
        && this->instanceId_ != nullptr && this->primaryUser_ != nullptr && this->replica_ != nullptr && this->riskList_ != nullptr && this->score_ != nullptr
        && this->spec_ != nullptr && this->status_ != nullptr && this->totalItem_ != nullptr && this->totalRisk_ != nullptr && this->type_ != nullptr
        && this->updateTime_ != nullptr && this->versionCode_ != nullptr; };
    // appVersion Field Functions 
    bool hasAppVersion() const { return this->appVersion_ != nullptr;};
    void deleteAppVersion() { this->appVersion_ = nullptr;};
    inline string appVersion() const { DARABONBA_PTR_GET_DEFAULT(appVersion_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setAppVersion(string appVersion) { DARABONBA_PTR_SET_VALUE(appVersion_, appVersion) };


    // chargeType Field Functions 
    bool hasChargeType() const { return this->chargeType_ != nullptr;};
    void deleteChargeType() { this->chargeType_ = nullptr;};
    inline string chargeType() const { DARABONBA_PTR_GET_DEFAULT(chargeType_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setChargeType(string chargeType) { DARABONBA_PTR_SET_VALUE(chargeType_, chargeType) };


    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // imageVersion Field Functions 
    bool hasImageVersion() const { return this->imageVersion_ != nullptr;};
    void deleteImageVersion() { this->imageVersion_ = nullptr;};
    inline string imageVersion() const { DARABONBA_PTR_GET_DEFAULT(imageVersion_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setImageVersion(string imageVersion) { DARABONBA_PTR_SET_VALUE(imageVersion_, imageVersion) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // primaryUser Field Functions 
    bool hasPrimaryUser() const { return this->primaryUser_ != nullptr;};
    void deletePrimaryUser() { this->primaryUser_ = nullptr;};
    inline string primaryUser() const { DARABONBA_PTR_GET_DEFAULT(primaryUser_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setPrimaryUser(string primaryUser) { DARABONBA_PTR_SET_VALUE(primaryUser_, primaryUser) };


    // replica Field Functions 
    bool hasReplica() const { return this->replica_ != nullptr;};
    void deleteReplica() { this->replica_ = nullptr;};
    inline string replica() const { DARABONBA_PTR_GET_DEFAULT(replica_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setReplica(string replica) { DARABONBA_PTR_SET_VALUE(replica_, replica) };


    // riskList Field Functions 
    bool hasRiskList() const { return this->riskList_ != nullptr;};
    void deleteRiskList() { this->riskList_ = nullptr;};
    inline const vector<Models::ListClusterHealthCheckTaskResponseBodyDataResultRiskList> & riskList() const { DARABONBA_PTR_GET_CONST(riskList_, vector<Models::ListClusterHealthCheckTaskResponseBodyDataResultRiskList>) };
    inline vector<Models::ListClusterHealthCheckTaskResponseBodyDataResultRiskList> riskList() { DARABONBA_PTR_GET(riskList_, vector<Models::ListClusterHealthCheckTaskResponseBodyDataResultRiskList>) };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setRiskList(const vector<Models::ListClusterHealthCheckTaskResponseBodyDataResultRiskList> & riskList) { DARABONBA_PTR_SET_VALUE(riskList_, riskList) };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setRiskList(vector<Models::ListClusterHealthCheckTaskResponseBodyDataResultRiskList> && riskList) { DARABONBA_PTR_SET_RVALUE(riskList_, riskList) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline int32_t score() const { DARABONBA_PTR_GET_DEFAULT(score_, 0) };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setScore(int32_t score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalItem Field Functions 
    bool hasTotalItem() const { return this->totalItem_ != nullptr;};
    void deleteTotalItem() { this->totalItem_ = nullptr;};
    inline int32_t totalItem() const { DARABONBA_PTR_GET_DEFAULT(totalItem_, 0) };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setTotalItem(int32_t totalItem) { DARABONBA_PTR_SET_VALUE(totalItem_, totalItem) };


    // totalRisk Field Functions 
    bool hasTotalRisk() const { return this->totalRisk_ != nullptr;};
    void deleteTotalRisk() { this->totalRisk_ = nullptr;};
    inline int32_t totalRisk() const { DARABONBA_PTR_GET_DEFAULT(totalRisk_, 0) };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setTotalRisk(int32_t totalRisk) { DARABONBA_PTR_SET_VALUE(totalRisk_, totalRisk) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline string updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setUpdateTime(string updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


    // versionCode Field Functions 
    bool hasVersionCode() const { return this->versionCode_ != nullptr;};
    void deleteVersionCode() { this->versionCode_ = nullptr;};
    inline string versionCode() const { DARABONBA_PTR_GET_DEFAULT(versionCode_, "") };
    inline ListClusterHealthCheckTaskResponseBodyDataResult& setVersionCode(string versionCode) { DARABONBA_PTR_SET_VALUE(versionCode_, versionCode) };


  protected:
    // The complete version number.
    std::shared_ptr<string> appVersion_ = nullptr;
    // The billing method.
    std::shared_ptr<string> chargeType_ = nullptr;
    // The type of the cluster.
    std::shared_ptr<string> clusterType_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<string> createTime_ = nullptr;
    // The ID.
    std::shared_ptr<int32_t> id_ = nullptr;
    // A redundant parameter.
    std::shared_ptr<string> imageVersion_ = nullptr;
    // The ID of the instance.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the user to which the instance belongs.
    std::shared_ptr<string> primaryUser_ = nullptr;
    // The number of nodes in the instance.
    std::shared_ptr<string> replica_ = nullptr;
    // The list of risk items.
    std::shared_ptr<vector<Models::ListClusterHealthCheckTaskResponseBodyDataResultRiskList>> riskList_ = nullptr;
    // The total score.
    std::shared_ptr<int32_t> score_ = nullptr;
    // The specifications.
    std::shared_ptr<string> spec_ = nullptr;
    // The status of the task.
    std::shared_ptr<string> status_ = nullptr;
    // The total number of check items.
    std::shared_ptr<int32_t> totalItem_ = nullptr;
    // The total number of risk items.
    std::shared_ptr<int32_t> totalRisk_ = nullptr;
    // A redundant parameter.
    std::shared_ptr<string> type_ = nullptr;
    // The last update time.
    std::shared_ptr<string> updateTime_ = nullptr;
    // The version number.
    std::shared_ptr<string> versionCode_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
