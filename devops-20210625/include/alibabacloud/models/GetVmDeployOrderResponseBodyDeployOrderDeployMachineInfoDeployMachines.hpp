// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMDEPLOYORDERRESPONSEBODYDEPLOYORDERDEPLOYMACHINEINFODEPLOYMACHINES_HPP_
#define ALIBABACLOUD_MODELS_GETVMDEPLOYORDERRESPONSEBODYDEPLOYORDERDEPLOYMACHINEINFODEPLOYMACHINES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& obj) { 
      DARABONBA_PTR_TO_JSON(actions, actions_);
      DARABONBA_PTR_TO_JSON(batchNum, batchNum_);
      DARABONBA_PTR_TO_JSON(clientStatus, clientStatus_);
      DARABONBA_PTR_TO_JSON(createTime, createTime_);
      DARABONBA_PTR_TO_JSON(ip, ip_);
      DARABONBA_PTR_TO_JSON(machineSn, machineSn_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& obj) { 
      DARABONBA_PTR_FROM_JSON(actions, actions_);
      DARABONBA_PTR_FROM_JSON(batchNum, batchNum_);
      DARABONBA_PTR_FROM_JSON(clientStatus, clientStatus_);
      DARABONBA_PTR_FROM_JSON(createTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ip, ip_);
      DARABONBA_PTR_FROM_JSON(machineSn, machineSn_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updateTime, updateTime_);
    };
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines() = default ;
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines(const GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines &) = default ;
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines(GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines &&) = default ;
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines() = default ;
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& operator=(const GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines &) = default ;
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& operator=(GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actions_ == nullptr
        && return this->batchNum_ == nullptr && return this->clientStatus_ == nullptr && return this->createTime_ == nullptr && return this->ip_ == nullptr && return this->machineSn_ == nullptr
        && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // actions Field Functions 
    bool hasActions() const { return this->actions_ != nullptr;};
    void deleteActions() { this->actions_ = nullptr;};
    inline const vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions> & actions() const { DARABONBA_PTR_GET_CONST(actions_, vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions>) };
    inline vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions> actions() { DARABONBA_PTR_GET(actions_, vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions>) };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& setActions(const vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions> & actions) { DARABONBA_PTR_SET_VALUE(actions_, actions) };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& setActions(vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions> && actions) { DARABONBA_PTR_SET_RVALUE(actions_, actions) };


    // batchNum Field Functions 
    bool hasBatchNum() const { return this->batchNum_ != nullptr;};
    void deleteBatchNum() { this->batchNum_ = nullptr;};
    inline int32_t batchNum() const { DARABONBA_PTR_GET_DEFAULT(batchNum_, 0) };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& setBatchNum(int32_t batchNum) { DARABONBA_PTR_SET_VALUE(batchNum_, batchNum) };


    // clientStatus Field Functions 
    bool hasClientStatus() const { return this->clientStatus_ != nullptr;};
    void deleteClientStatus() { this->clientStatus_ = nullptr;};
    inline string clientStatus() const { DARABONBA_PTR_GET_DEFAULT(clientStatus_, "") };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& setClientStatus(string clientStatus) { DARABONBA_PTR_SET_VALUE(clientStatus_, clientStatus) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // machineSn Field Functions 
    bool hasMachineSn() const { return this->machineSn_ != nullptr;};
    void deleteMachineSn() { this->machineSn_ = nullptr;};
    inline string machineSn() const { DARABONBA_PTR_GET_DEFAULT(machineSn_, "") };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& setMachineSn(string machineSn) { DARABONBA_PTR_SET_VALUE(machineSn_, machineSn) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    std::shared_ptr<vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachinesActions>> actions_ = nullptr;
    std::shared_ptr<int32_t> batchNum_ = nullptr;
    std::shared_ptr<string> clientStatus_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> machineSn_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
