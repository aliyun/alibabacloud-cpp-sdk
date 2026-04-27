// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDLISTONLINEAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDLISTONLINEAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudListOnlineAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudListOnlineAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Cnos, cnos_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(PauseDescription, pauseDescription_);
      DARABONBA_PTR_TO_JSON(PauseType, pauseType_);
      DARABONBA_PTR_TO_JSON(Qnos, qnos_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StateCode, stateCode_);
    };
    friend void from_json(const Darabonba::Json& j, CloudListOnlineAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Cnos, cnos_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(PauseDescription, pauseDescription_);
      DARABONBA_PTR_FROM_JSON(PauseType, pauseType_);
      DARABONBA_PTR_FROM_JSON(Qnos, qnos_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StateCode, stateCode_);
    };
    CloudListOnlineAgentRequest() = default ;
    CloudListOnlineAgentRequest(const CloudListOnlineAgentRequest &) = default ;
    CloudListOnlineAgentRequest(CloudListOnlineAgentRequest &&) = default ;
    CloudListOnlineAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudListOnlineAgentRequest() = default ;
    CloudListOnlineAgentRequest& operator=(const CloudListOnlineAgentRequest &) = default ;
    CloudListOnlineAgentRequest& operator=(CloudListOnlineAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cnos_ == nullptr
        && this->enterpriseId_ == nullptr && this->ownerId_ == nullptr && this->pauseDescription_ == nullptr && this->pauseType_ == nullptr && this->qnos_ == nullptr
        && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr && this->stateCode_ == nullptr; };
    // cnos Field Functions 
    bool hasCnos() const { return this->cnos_ != nullptr;};
    void deleteCnos() { this->cnos_ = nullptr;};
    inline string getCnos() const { DARABONBA_PTR_GET_DEFAULT(cnos_, "") };
    inline CloudListOnlineAgentRequest& setCnos(string cnos) { DARABONBA_PTR_SET_VALUE(cnos_, cnos) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudListOnlineAgentRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudListOnlineAgentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // pauseDescription Field Functions 
    bool hasPauseDescription() const { return this->pauseDescription_ != nullptr;};
    void deletePauseDescription() { this->pauseDescription_ = nullptr;};
    inline string getPauseDescription() const { DARABONBA_PTR_GET_DEFAULT(pauseDescription_, "") };
    inline CloudListOnlineAgentRequest& setPauseDescription(string pauseDescription) { DARABONBA_PTR_SET_VALUE(pauseDescription_, pauseDescription) };


    // pauseType Field Functions 
    bool hasPauseType() const { return this->pauseType_ != nullptr;};
    void deletePauseType() { this->pauseType_ = nullptr;};
    inline string getPauseType() const { DARABONBA_PTR_GET_DEFAULT(pauseType_, "") };
    inline CloudListOnlineAgentRequest& setPauseType(string pauseType) { DARABONBA_PTR_SET_VALUE(pauseType_, pauseType) };


    // qnos Field Functions 
    bool hasQnos() const { return this->qnos_ != nullptr;};
    void deleteQnos() { this->qnos_ = nullptr;};
    inline string getQnos() const { DARABONBA_PTR_GET_DEFAULT(qnos_, "") };
    inline CloudListOnlineAgentRequest& setQnos(string qnos) { DARABONBA_PTR_SET_VALUE(qnos_, qnos) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudListOnlineAgentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudListOnlineAgentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // stateCode Field Functions 
    bool hasStateCode() const { return this->stateCode_ != nullptr;};
    void deleteStateCode() { this->stateCode_ = nullptr;};
    inline string getStateCode() const { DARABONBA_PTR_GET_DEFAULT(stateCode_, "") };
    inline CloudListOnlineAgentRequest& setStateCode(string stateCode) { DARABONBA_PTR_SET_VALUE(stateCode_, stateCode) };


  protected:
    // 坐席工号，指定座席工号则查询该工号座席的监控信息，可指定多个座席工号，指定多个座席工号使用英文逗号","分隔，不指定则查询所有队列监控信息，不指定则查询该账户下所有座席的监控信息
    shared_ptr<string> cnos_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 置忙原因，根据座席置忙原因过滤监控数据，可指定多个置忙原因，指定多个置忙原因使用英文逗号","分隔，不指定则默认查询所有设置状态的座席
    shared_ptr<string> pauseDescription_ {};
    // 置忙类型，根据座席置忙类型过滤监控数据，可指定多个置忙类型，指定多个置忙类型使用英文逗号","分隔，不指定则默认查询所有设置状态的座席。<br>取值说明1普通，2休息，3 IM，4 强制
    shared_ptr<string> pauseType_ {};
    // 队列号，指定队列号则查询该队列号所对应队列的监控信息，支持同时查询多个队列号对应队列的监控信息，多个队列号使用英文逗号","分隔，不指定则查询所有队列监控信息
    shared_ptr<string> qnos_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 坐席状态，s1:空闲，s2:置忙，s3:整理，s4:呼叫中，s5:响铃，s6通话   可传多个状态码，多个值之间以","分隔
    shared_ptr<string> stateCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
