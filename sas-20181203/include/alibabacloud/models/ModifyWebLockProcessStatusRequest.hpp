// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYWEBLOCKPROCESSSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYWEBLOCKPROCESSSTATUSREQUEST_HPP_
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
  class ModifyWebLockProcessStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyWebLockProcessStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DealAll, dealAll_);
      DARABONBA_PTR_TO_JSON(OperateInfo, operateInfo_);
      DARABONBA_PTR_TO_JSON(ProcessPath, processPath_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyWebLockProcessStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DealAll, dealAll_);
      DARABONBA_PTR_FROM_JSON(OperateInfo, operateInfo_);
      DARABONBA_PTR_FROM_JSON(ProcessPath, processPath_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
    };
    ModifyWebLockProcessStatusRequest() = default ;
    ModifyWebLockProcessStatusRequest(const ModifyWebLockProcessStatusRequest &) = default ;
    ModifyWebLockProcessStatusRequest(ModifyWebLockProcessStatusRequest &&) = default ;
    ModifyWebLockProcessStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyWebLockProcessStatusRequest() = default ;
    ModifyWebLockProcessStatusRequest& operator=(const ModifyWebLockProcessStatusRequest &) = default ;
    ModifyWebLockProcessStatusRequest& operator=(ModifyWebLockProcessStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dealAll_ == nullptr
        && this->operateInfo_ == nullptr && this->processPath_ == nullptr && this->status_ == nullptr && this->uuid_ == nullptr; };
    // dealAll Field Functions 
    bool hasDealAll() const { return this->dealAll_ != nullptr;};
    void deleteDealAll() { this->dealAll_ = nullptr;};
    inline int32_t getDealAll() const { DARABONBA_PTR_GET_DEFAULT(dealAll_, 0) };
    inline ModifyWebLockProcessStatusRequest& setDealAll(int32_t dealAll) { DARABONBA_PTR_SET_VALUE(dealAll_, dealAll) };


    // operateInfo Field Functions 
    bool hasOperateInfo() const { return this->operateInfo_ != nullptr;};
    void deleteOperateInfo() { this->operateInfo_ = nullptr;};
    inline string getOperateInfo() const { DARABONBA_PTR_GET_DEFAULT(operateInfo_, "") };
    inline ModifyWebLockProcessStatusRequest& setOperateInfo(string operateInfo) { DARABONBA_PTR_SET_VALUE(operateInfo_, operateInfo) };


    // processPath Field Functions 
    bool hasProcessPath() const { return this->processPath_ != nullptr;};
    void deleteProcessPath() { this->processPath_ = nullptr;};
    inline const vector<string> & getProcessPath() const { DARABONBA_PTR_GET_CONST(processPath_, vector<string>) };
    inline vector<string> getProcessPath() { DARABONBA_PTR_GET(processPath_, vector<string>) };
    inline ModifyWebLockProcessStatusRequest& setProcessPath(const vector<string> & processPath) { DARABONBA_PTR_SET_VALUE(processPath_, processPath) };
    inline ModifyWebLockProcessStatusRequest& setProcessPath(vector<string> && processPath) { DARABONBA_PTR_SET_RVALUE(processPath_, processPath) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline ModifyWebLockProcessStatusRequest& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ModifyWebLockProcessStatusRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    // Specifies whether to change the status of the process on multiple servers on which the process runs at the same time. Valid values:
    // 
    // *   **0**: no
    // *   **1**: yes
    shared_ptr<int32_t> dealAll_ {};
    // The parameters required to change the status of multiple processes at a time. The value is in the JSON format.
    shared_ptr<string> operateInfo_ {};
    // The paths to the processes.
    shared_ptr<vector<string>> processPath_ {};
    // The status of the process. Valid values:
    // 
    // *   **0**: cancels adding the process to the process whitelist
    // *   **1**: adds the process to the process whitelist
    shared_ptr<int32_t> status_ {};
    // The UUID of the server.
    shared_ptr<string> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
