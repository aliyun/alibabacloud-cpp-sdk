// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETVMDEPLOYORDERRESPONSEBODYDEPLOYORDERDEPLOYMACHINEINFO_HPP_
#define ALIBABACLOUD_MODELS_GETVMDEPLOYORDERRESPONSEBODYDEPLOYORDERDEPLOYMACHINEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Devops20210625
{
namespace Models
{
  class GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo& obj) { 
      DARABONBA_PTR_TO_JSON(batchNum, batchNum_);
      DARABONBA_PTR_TO_JSON(deployMachines, deployMachines_);
      DARABONBA_PTR_TO_JSON(hostGroupId, hostGroupId_);
    };
    friend void from_json(const Darabonba::Json& j, GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(batchNum, batchNum_);
      DARABONBA_PTR_FROM_JSON(deployMachines, deployMachines_);
      DARABONBA_PTR_FROM_JSON(hostGroupId, hostGroupId_);
    };
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo() = default ;
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo(const GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo &) = default ;
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo(GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo &&) = default ;
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo() = default ;
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo& operator=(const GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo &) = default ;
    GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo& operator=(GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->batchNum_ == nullptr
        && return this->deployMachines_ == nullptr && return this->hostGroupId_ == nullptr; };
    // batchNum Field Functions 
    bool hasBatchNum() const { return this->batchNum_ != nullptr;};
    void deleteBatchNum() { this->batchNum_ = nullptr;};
    inline int32_t batchNum() const { DARABONBA_PTR_GET_DEFAULT(batchNum_, 0) };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo& setBatchNum(int32_t batchNum) { DARABONBA_PTR_SET_VALUE(batchNum_, batchNum) };


    // deployMachines Field Functions 
    bool hasDeployMachines() const { return this->deployMachines_ != nullptr;};
    void deleteDeployMachines() { this->deployMachines_ = nullptr;};
    inline const vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines> & deployMachines() const { DARABONBA_PTR_GET_CONST(deployMachines_, vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines>) };
    inline vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines> deployMachines() { DARABONBA_PTR_GET(deployMachines_, vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines>) };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo& setDeployMachines(const vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines> & deployMachines) { DARABONBA_PTR_SET_VALUE(deployMachines_, deployMachines) };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo& setDeployMachines(vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines> && deployMachines) { DARABONBA_PTR_SET_RVALUE(deployMachines_, deployMachines) };


    // hostGroupId Field Functions 
    bool hasHostGroupId() const { return this->hostGroupId_ != nullptr;};
    void deleteHostGroupId() { this->hostGroupId_ = nullptr;};
    inline int64_t hostGroupId() const { DARABONBA_PTR_GET_DEFAULT(hostGroupId_, 0L) };
    inline GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfo& setHostGroupId(int64_t hostGroupId) { DARABONBA_PTR_SET_VALUE(hostGroupId_, hostGroupId) };


  protected:
    std::shared_ptr<int32_t> batchNum_ = nullptr;
    std::shared_ptr<vector<Models::GetVMDeployOrderResponseBodyDeployOrderDeployMachineInfoDeployMachines>> deployMachines_ = nullptr;
    std::shared_ptr<int64_t> hostGroupId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Devops20210625
#endif
