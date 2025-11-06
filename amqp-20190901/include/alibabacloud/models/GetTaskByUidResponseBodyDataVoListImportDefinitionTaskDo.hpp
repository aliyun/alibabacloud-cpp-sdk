// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTASKBYUIDRESPONSEBODYDATAVOLISTIMPORTDEFINITIONTASKDO_HPP_
#define ALIBABACLOUD_MODELS_GETTASKBYUIDRESPONSEBODYDATAVOLISTIMPORTDEFINITIONTASKDO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& obj) { 
      DARABONBA_PTR_TO_JSON(BindingNum, bindingNum_);
      DARABONBA_PTR_TO_JSON(ExchangeNum, exchangeNum_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(ImportType, importType_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(QueueNum, queueNum_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
      DARABONBA_PTR_TO_JSON(VhostNum, vhostNum_);
    };
    friend void from_json(const Darabonba::Json& j, GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& obj) { 
      DARABONBA_PTR_FROM_JSON(BindingNum, bindingNum_);
      DARABONBA_PTR_FROM_JSON(ExchangeNum, exchangeNum_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(ImportType, importType_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(QueueNum, queueNum_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
      DARABONBA_PTR_FROM_JSON(VhostNum, vhostNum_);
    };
    GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO() = default ;
    GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO(const GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO &) = default ;
    GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO(GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO &&) = default ;
    GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO() = default ;
    GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& operator=(const GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO &) = default ;
    GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& operator=(GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bindingNum_ == nullptr
        && return this->exchangeNum_ == nullptr && return this->gmtCreate_ == nullptr && return this->id_ == nullptr && return this->importType_ == nullptr && return this->instanceId_ == nullptr
        && return this->instanceName_ == nullptr && return this->queueNum_ == nullptr && return this->status_ == nullptr && return this->userId_ == nullptr && return this->vhostName_ == nullptr
        && return this->vhostNum_ == nullptr; };
    // bindingNum Field Functions 
    bool hasBindingNum() const { return this->bindingNum_ != nullptr;};
    void deleteBindingNum() { this->bindingNum_ = nullptr;};
    inline int32_t bindingNum() const { DARABONBA_PTR_GET_DEFAULT(bindingNum_, 0) };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setBindingNum(int32_t bindingNum) { DARABONBA_PTR_SET_VALUE(bindingNum_, bindingNum) };


    // exchangeNum Field Functions 
    bool hasExchangeNum() const { return this->exchangeNum_ != nullptr;};
    void deleteExchangeNum() { this->exchangeNum_ = nullptr;};
    inline int32_t exchangeNum() const { DARABONBA_PTR_GET_DEFAULT(exchangeNum_, 0) };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setExchangeNum(int32_t exchangeNum) { DARABONBA_PTR_SET_VALUE(exchangeNum_, exchangeNum) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string gmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // importType Field Functions 
    bool hasImportType() const { return this->importType_ != nullptr;};
    void deleteImportType() { this->importType_ = nullptr;};
    inline int32_t importType() const { DARABONBA_PTR_GET_DEFAULT(importType_, 0) };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setImportType(int32_t importType) { DARABONBA_PTR_SET_VALUE(importType_, importType) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // queueNum Field Functions 
    bool hasQueueNum() const { return this->queueNum_ != nullptr;};
    void deleteQueueNum() { this->queueNum_ = nullptr;};
    inline int32_t queueNum() const { DARABONBA_PTR_GET_DEFAULT(queueNum_, 0) };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setQueueNum(int32_t queueNum) { DARABONBA_PTR_SET_VALUE(queueNum_, queueNum) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int32_t status() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline int64_t userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, 0L) };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setUserId(int64_t userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


    // vhostNum Field Functions 
    bool hasVhostNum() const { return this->vhostNum_ != nullptr;};
    void deleteVhostNum() { this->vhostNum_ = nullptr;};
    inline int32_t vhostNum() const { DARABONBA_PTR_GET_DEFAULT(vhostNum_, 0) };
    inline GetTaskByUidResponseBodyDataVoListImportDefinitionTaskDO& setVhostNum(int32_t vhostNum) { DARABONBA_PTR_SET_VALUE(vhostNum_, vhostNum) };


  protected:
    std::shared_ptr<int32_t> bindingNum_ = nullptr;
    std::shared_ptr<int32_t> exchangeNum_ = nullptr;
    std::shared_ptr<string> gmtCreate_ = nullptr;
    std::shared_ptr<int64_t> id_ = nullptr;
    std::shared_ptr<int32_t> importType_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> instanceName_ = nullptr;
    std::shared_ptr<int32_t> queueNum_ = nullptr;
    std::shared_ptr<int32_t> status_ = nullptr;
    std::shared_ptr<int64_t> userId_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
    std::shared_ptr<int32_t> vhostNum_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
