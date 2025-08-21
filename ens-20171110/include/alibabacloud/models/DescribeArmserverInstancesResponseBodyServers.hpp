// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESRESPONSEBODYSERVERS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEARMSERVERINSTANCESRESPONSEBODYSERVERS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeARMServerInstancesResponseBodyServersAICInstances.hpp>
#include <alibabacloud/models/DescribeARMServerInstancesResponseBodyServersTags.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeARMServerInstancesResponseBodyServers : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeARMServerInstancesResponseBodyServers& obj) { 
      DARABONBA_PTR_TO_JSON(AICInstances, AICInstances_);
      DARABONBA_PTR_TO_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_TO_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_TO_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_TO_JSON(LatestAction, latestAction_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(PayType, payType_);
      DARABONBA_PTR_TO_JSON(ServerId, serverId_);
      DARABONBA_PTR_TO_JSON(SpecName, specName_);
      DARABONBA_PTR_TO_JSON(State, state_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Tags, tags_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeARMServerInstancesResponseBodyServers& obj) { 
      DARABONBA_PTR_FROM_JSON(AICInstances, AICInstances_);
      DARABONBA_PTR_FROM_JSON(CreationTime, creationTime_);
      DARABONBA_PTR_FROM_JSON(EnsRegionId, ensRegionId_);
      DARABONBA_PTR_FROM_JSON(ExpiredTime, expiredTime_);
      DARABONBA_PTR_FROM_JSON(LatestAction, latestAction_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(PayType, payType_);
      DARABONBA_PTR_FROM_JSON(ServerId, serverId_);
      DARABONBA_PTR_FROM_JSON(SpecName, specName_);
      DARABONBA_PTR_FROM_JSON(State, state_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Tags, tags_);
    };
    DescribeARMServerInstancesResponseBodyServers() = default ;
    DescribeARMServerInstancesResponseBodyServers(const DescribeARMServerInstancesResponseBodyServers &) = default ;
    DescribeARMServerInstancesResponseBodyServers(DescribeARMServerInstancesResponseBodyServers &&) = default ;
    DescribeARMServerInstancesResponseBodyServers(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeARMServerInstancesResponseBodyServers() = default ;
    DescribeARMServerInstancesResponseBodyServers& operator=(const DescribeARMServerInstancesResponseBodyServers &) = default ;
    DescribeARMServerInstancesResponseBodyServers& operator=(DescribeARMServerInstancesResponseBodyServers &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->AICInstances_ != nullptr
        && this->creationTime_ != nullptr && this->ensRegionId_ != nullptr && this->expiredTime_ != nullptr && this->latestAction_ != nullptr && this->name_ != nullptr
        && this->namespace_ != nullptr && this->payType_ != nullptr && this->serverId_ != nullptr && this->specName_ != nullptr && this->state_ != nullptr
        && this->status_ != nullptr && this->tags_ != nullptr; };
    // AICInstances Field Functions 
    bool hasAICInstances() const { return this->AICInstances_ != nullptr;};
    void deleteAICInstances() { this->AICInstances_ = nullptr;};
    inline const vector<Models::DescribeARMServerInstancesResponseBodyServersAICInstances> & AICInstances() const { DARABONBA_PTR_GET_CONST(AICInstances_, vector<Models::DescribeARMServerInstancesResponseBodyServersAICInstances>) };
    inline vector<Models::DescribeARMServerInstancesResponseBodyServersAICInstances> AICInstances() { DARABONBA_PTR_GET(AICInstances_, vector<Models::DescribeARMServerInstancesResponseBodyServersAICInstances>) };
    inline DescribeARMServerInstancesResponseBodyServers& setAICInstances(const vector<Models::DescribeARMServerInstancesResponseBodyServersAICInstances> & AICInstances) { DARABONBA_PTR_SET_VALUE(AICInstances_, AICInstances) };
    inline DescribeARMServerInstancesResponseBodyServers& setAICInstances(vector<Models::DescribeARMServerInstancesResponseBodyServersAICInstances> && AICInstances) { DARABONBA_PTR_SET_RVALUE(AICInstances_, AICInstances) };


    // creationTime Field Functions 
    bool hasCreationTime() const { return this->creationTime_ != nullptr;};
    void deleteCreationTime() { this->creationTime_ = nullptr;};
    inline string creationTime() const { DARABONBA_PTR_GET_DEFAULT(creationTime_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setCreationTime(string creationTime) { DARABONBA_PTR_SET_VALUE(creationTime_, creationTime) };


    // ensRegionId Field Functions 
    bool hasEnsRegionId() const { return this->ensRegionId_ != nullptr;};
    void deleteEnsRegionId() { this->ensRegionId_ = nullptr;};
    inline string ensRegionId() const { DARABONBA_PTR_GET_DEFAULT(ensRegionId_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setEnsRegionId(string ensRegionId) { DARABONBA_PTR_SET_VALUE(ensRegionId_, ensRegionId) };


    // expiredTime Field Functions 
    bool hasExpiredTime() const { return this->expiredTime_ != nullptr;};
    void deleteExpiredTime() { this->expiredTime_ = nullptr;};
    inline string expiredTime() const { DARABONBA_PTR_GET_DEFAULT(expiredTime_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setExpiredTime(string expiredTime) { DARABONBA_PTR_SET_VALUE(expiredTime_, expiredTime) };


    // latestAction Field Functions 
    bool hasLatestAction() const { return this->latestAction_ != nullptr;};
    void deleteLatestAction() { this->latestAction_ = nullptr;};
    inline string latestAction() const { DARABONBA_PTR_GET_DEFAULT(latestAction_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setLatestAction(string latestAction) { DARABONBA_PTR_SET_VALUE(latestAction_, latestAction) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // payType Field Functions 
    bool hasPayType() const { return this->payType_ != nullptr;};
    void deletePayType() { this->payType_ = nullptr;};
    inline string payType() const { DARABONBA_PTR_GET_DEFAULT(payType_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setPayType(string payType) { DARABONBA_PTR_SET_VALUE(payType_, payType) };


    // serverId Field Functions 
    bool hasServerId() const { return this->serverId_ != nullptr;};
    void deleteServerId() { this->serverId_ = nullptr;};
    inline string serverId() const { DARABONBA_PTR_GET_DEFAULT(serverId_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setServerId(string serverId) { DARABONBA_PTR_SET_VALUE(serverId_, serverId) };


    // specName Field Functions 
    bool hasSpecName() const { return this->specName_ != nullptr;};
    void deleteSpecName() { this->specName_ = nullptr;};
    inline string specName() const { DARABONBA_PTR_GET_DEFAULT(specName_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setSpecName(string specName) { DARABONBA_PTR_SET_VALUE(specName_, specName) };


    // state Field Functions 
    bool hasState() const { return this->state_ != nullptr;};
    void deleteState() { this->state_ = nullptr;};
    inline string state() const { DARABONBA_PTR_GET_DEFAULT(state_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setState(string state) { DARABONBA_PTR_SET_VALUE(state_, state) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeARMServerInstancesResponseBodyServers& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // tags Field Functions 
    bool hasTags() const { return this->tags_ != nullptr;};
    void deleteTags() { this->tags_ = nullptr;};
    inline const vector<Models::DescribeARMServerInstancesResponseBodyServersTags> & tags() const { DARABONBA_PTR_GET_CONST(tags_, vector<Models::DescribeARMServerInstancesResponseBodyServersTags>) };
    inline vector<Models::DescribeARMServerInstancesResponseBodyServersTags> tags() { DARABONBA_PTR_GET(tags_, vector<Models::DescribeARMServerInstancesResponseBodyServersTags>) };
    inline DescribeARMServerInstancesResponseBodyServers& setTags(const vector<Models::DescribeARMServerInstancesResponseBodyServersTags> & tags) { DARABONBA_PTR_SET_VALUE(tags_, tags) };
    inline DescribeARMServerInstancesResponseBodyServers& setTags(vector<Models::DescribeARMServerInstancesResponseBodyServersTags> && tags) { DARABONBA_PTR_SET_RVALUE(tags_, tags) };


  protected:
    // The information about the AIC instances.
    std::shared_ptr<vector<Models::DescribeARMServerInstancesResponseBodyServersAICInstances>> AICInstances_ = nullptr;
    // The time when the instance was created.
    std::shared_ptr<string> creationTime_ = nullptr;
    // The ID of the ENS node.
    std::shared_ptr<string> ensRegionId_ = nullptr;
    // The time when the instance expires.
    std::shared_ptr<string> expiredTime_ = nullptr;
    // The operation that was most recently performed.
    std::shared_ptr<string> latestAction_ = nullptr;
    // The name of the server.
    std::shared_ptr<string> name_ = nullptr;
    // The namespace of the cluster to which the server belongs.
    std::shared_ptr<string> namespace_ = nullptr;
    // The billing method.
    std::shared_ptr<string> payType_ = nullptr;
    // The ID of the server.
    std::shared_ptr<string> serverId_ = nullptr;
    // The server specification.
    std::shared_ptr<string> specName_ = nullptr;
    // The operation status of the server. Valid values:
    // 
    // *   **success**
    // *   **failed**
    // *   **creating**
    // *   **releasing**
    // *   **rebooting**
    // *   **upgrading**
    std::shared_ptr<string> state_ = nullptr;
    // The running status of the server. Valid values:
    // 
    // *   **running**
    // *   **stopping**
    // *   **down**
    // *   **starting**
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<vector<Models::DescribeARMServerInstancesResponseBodyServersTags>> tags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
