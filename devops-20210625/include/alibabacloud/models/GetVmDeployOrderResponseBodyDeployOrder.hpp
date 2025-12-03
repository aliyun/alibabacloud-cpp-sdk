// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMDEPLOYORDERRESPONSEBODYDEPLOYORDER_HPP_
#define ALIBABACLOUD_MODELS_GETVMDEPLOYORDERRESPONSEBODYDEPLOYORDER_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVMDeployOrderResponseBodyDeployOrderActions.hpp>
#include <alibabacloud/models/GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetVMDeployOrderResponseBodyDeployOrder : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVMDeployOrderResponseBodyDeployOrder& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(creator, creator_);
      DARABONBA_PTR_TO_JSON(currentBatch, currentBatch_);
      DARABONBA_PTR_TO_JSON(deployMachineInfo, deployMachineInfo_);
      DARABONBA_PTR_TO_JSON(deployOrderId, deployOrderId_);
      DARABONBA_PTR_TO_JSON(exceptionCode, exceptionCode_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(totalBatch, totalBatch_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetVMDeployOrderResponseBodyDeployOrder& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(creator, creator_);
      DARABONBA_PTR_FROM_JSON(currentBatch, currentBatch_);
      DARABONBA_PTR_FROM_JSON(deployMachineInfo, deployMachineInfo_);
      DARABONBA_PTR_FROM_JSON(deployOrderId, deployOrderId_);
      DARABONBA_PTR_FROM_JSON(exceptionCode, exceptionCode_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(totalBatch, totalBatch_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetVMDeployOrderResponseBodyDeployOrder() = default ;
    GetVMDeployOrderResponseBodyDeployOrder(const GetVMDeployOrderResponseBodyDeployOrder &) = default ;
    GetVMDeployOrderResponseBodyDeployOrder(GetVMDeployOrderResponseBodyDeployOrder &&) = default ;
    GetVMDeployOrderResponseBodyDeployOrder(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVMDeployOrderResponseBodyDeployOrder() = default ;
    GetVMDeployOrderResponseBodyDeployOrder& operator=(const GetVMDeployOrderResponseBodyDeployOrder &) = default ;
    GetVMDeployOrderResponseBodyDeployOrder& operator=(GetVMDeployOrderResponseBodyDeployOrder &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && return this->createTime_ == nullptr && return this->creator_ == nullptr && return this->currentBatch_ == nullptr && return this->deployMachineInfo_ == nullptr && return this->deployOrderId_ == nullptr
        && return this->exceptionCode_ == nullptr && return this->status_ == nullptr && return this->totalBatch_ == nullptr && return this->updateTime_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<Models::GetVMDeployOrderResponseBodyDeployOrderActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Models::GetVMDeployOrderResponseBodyDeployOrderActions>) };
    inline vector<Models::GetVMDeployOrderResponseBodyDeployOrderActions> actions() { DARABONBA_PTR_GET(actions_, vector<Models::GetVMDeployOrderResponseBodyDeployOrderActions>) };
    inline GetVMDeployOrderResponseBodyDeployOrder& setActions(const vector<Models::GetVMDeployOrderResponseBodyDeployOrderActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline GetVMDeployOrderResponseBodyDeployOrder& setActions(vector<Models::GetVMDeployOrderResponseBodyDeployOrderActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetVMDeployOrderResponseBodyDeployOrder& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // creator Field Functions 
    bool hasCreator() const { return this->creator_ != nullptr;};
    void deleteCreator() { this->creator_ = nullptr;};
    inline string creator() const { DARABONBA_PTR_GET_DEFAULT(creator_, "") };
    inline GetVMDeployOrderResponseBodyDeployOrder& setCreator(string creator) { DARABONBA_PTR_SET_VALUE(creator_, creator) };


    // currentBatch Field Functions 
    bool hasCurrentBatch() const { return this->currentBatch_ != nullptr;};
    void deleteCurrentBatch() { this->currentBatch_ = nullptr;};
    inline int32_t currentBatch() const { DARABONBA_PTR_GET_DEFAULT(currentBatch_, 0) };
    inline GetVMDeployOrderResponseBodyDeployOrder& setCurrentBatch(int32_t currentBatch) { DARABONBA_PTR_SET_VALUE(currentBatch_, currentBatch) };


    // deployMachineInfo Field Functions 
    bool hasDeployMachineInfo() const { return this->deployMachineInfo_ != nullptr;};
    void deleteDeployMachineInfo() { this->deployMachineInfo_ = nullptr;};
    inline const Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo & deployMachineInfo() const { DARABONBA_PTR_GET_CONST(deployMachineInfo_, Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo) };
    inline Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo deployMachineInfo() { DARABONBA_PTR_GET(deployMachineInfo_, Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo) };
    inline GetVMDeployOrderResponseBodyDeployOrder& setDeployMachineInfo(const Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo & deployMachineInfo) { DARABONBA_PTR_SET_VALUE(deployMachineInfo_, deployMachineInfo) };
    inline GetVMDeployOrderResponseBodyDeployOrder& setDeployMachineInfo(Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo && deployMachineInfo) { DARABONBA_PTR_SET_RVALUE(deployMachineInfo_, deployMachineInfo) };


    // deployOrderId Field Functions 
    bool hasDeployOrderId() const { return this->deployOrderId_ != nullptr;};
    void deleteDeployOrderId() { this->deployOrderId_ = nullptr;};
    inline string deployOrderId() const { DARABONBA_PTR_GET_DEFAULT(deployOrderId_, "") };
    inline GetVMDeployOrderResponseBodyDeployOrder& setDeployOrderId(string deployOrderId) { DARABONBA_PTR_SET_VALUE(deployOrderId_, deployOrderId) };


    // exceptionCode Field Functions 
    bool hasExceptionCode() const { return this->exceptionCode_ != nullptr;};
    void deleteExceptionCode() { this->exceptionCode_ = nullptr;};
    inline string exceptionCode() const { DARABONBA_PTR_GET_DEFAULT(exceptionCode_, "") };
    inline GetVMDeployOrderResponseBodyDeployOrder& setExceptionCode(string exceptionCode) { DARABONBA_PTR_SET_VALUE(exceptionCode_, exceptionCode) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVMDeployOrderResponseBodyDeployOrder& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // totalBatch Field Functions 
    bool hasTotalBatch() const { return this->totalBatch_ != nullptr;};
    void deleteTotalBatch() { this->totalBatch_ = nullptr;};
    inline int32_t totalBatch() const { DARABONBA_PTR_GET_DEFAULT(totalBatch_, 0) };
    inline GetVMDeployOrderResponseBodyDeployOrder& setTotalBatch(int32_t totalBatch) { DARABONBA_PTR_SET_VALUE(totalBatch_, totalBatch) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetVMDeployOrderResponseBodyDeployOrder& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<Models::GetVMDeployOrderResponseBodyDeployOrderActions>> actions_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> creator_ = nullptr;
    std::shared_ptr<int32_t> currentBatch_ = nullptr;
    std::shared_ptr<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo> deployMachineInfo_ = nullptr;
    std::shared_ptr<string> deployOrderId_ = nullptr;
    std::shared_ptr<string> exceptionCode_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int32_t> totalBatch_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
