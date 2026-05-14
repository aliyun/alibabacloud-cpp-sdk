// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLINKLISTCLIENTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLINKLISTCLIENTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class ClinkListClientsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ClinkListClientsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(BindTel, bindTel_);
      DARABONBA_PTR_TO_JSON(Clid, clid_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Qno, qno_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(UpdateEndTime, updateEndTime_);
      DARABONBA_PTR_TO_JSON(UpdateStartTime, updateStartTime_);
    };
    friend void from_json(const Darabonba::Json& j, ClinkListClientsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(BindTel, bindTel_);
      DARABONBA_PTR_FROM_JSON(Clid, clid_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Qno, qno_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(UpdateEndTime, updateEndTime_);
      DARABONBA_PTR_FROM_JSON(UpdateStartTime, updateStartTime_);
    };
    ClinkListClientsRequest() = default ;
    ClinkListClientsRequest(const ClinkListClientsRequest &) = default ;
    ClinkListClientsRequest(ClinkListClientsRequest &&) = default ;
    ClinkListClientsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ClinkListClientsRequest() = default ;
    ClinkListClientsRequest& operator=(const ClinkListClientsRequest &) = default ;
    ClinkListClientsRequest& operator=(ClinkListClientsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->bindTel_ == nullptr && this->clid_ == nullptr && this->endTime_ == nullptr && this->enterpriseId_ == nullptr && this->limit_ == nullptr
        && this->offset_ == nullptr && this->ownerId_ == nullptr && this->qno_ == nullptr && this->resourceOwnerAccount_ == nullptr && this->resourceOwnerId_ == nullptr
        && this->startTime_ == nullptr && this->updateEndTime_ == nullptr && this->updateStartTime_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
    inline ClinkListClientsRequest& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // bindTel Field Functions 
    bool hasBindTel() const { return this->bindTel_ != nullptr;};
    void deleteBindTel() { this->bindTel_ = nullptr;};
    inline string getBindTel() const { DARABONBA_PTR_GET_DEFAULT(bindTel_, "") };
    inline ClinkListClientsRequest& setBindTel(string bindTel) { DARABONBA_PTR_SET_VALUE(bindTel_, bindTel) };


    // clid Field Functions 
    bool hasClid() const { return this->clid_ != nullptr;};
    void deleteClid() { this->clid_ = nullptr;};
    inline string getClid() const { DARABONBA_PTR_GET_DEFAULT(clid_, "") };
    inline ClinkListClientsRequest& setClid(string clid) { DARABONBA_PTR_SET_VALUE(clid_, clid) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ClinkListClientsRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline ClinkListClientsRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline ClinkListClientsRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int64_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0L) };
    inline ClinkListClientsRequest& setOffset(int64_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ClinkListClientsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qno Field Functions 
    bool hasQno() const { return this->qno_ != nullptr;};
    void deleteQno() { this->qno_ = nullptr;};
    inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
    inline ClinkListClientsRequest& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline ClinkListClientsRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline ClinkListClientsRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ClinkListClientsRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // updateEndTime Field Functions 
    bool hasUpdateEndTime() const { return this->updateEndTime_ != nullptr;};
    void deleteUpdateEndTime() { this->updateEndTime_ = nullptr;};
    inline int64_t getUpdateEndTime() const { DARABONBA_PTR_GET_DEFAULT(updateEndTime_, 0L) };
    inline ClinkListClientsRequest& setUpdateEndTime(int64_t updateEndTime) { DARABONBA_PTR_SET_VALUE(updateEndTime_, updateEndTime) };


    // updateStartTime Field Functions 
    bool hasUpdateStartTime() const { return this->updateStartTime_ != nullptr;};
    void deleteUpdateStartTime() { this->updateStartTime_ = nullptr;};
    inline int64_t getUpdateStartTime() const { DARABONBA_PTR_GET_DEFAULT(updateStartTime_, 0L) };
    inline ClinkListClientsRequest& setUpdateStartTime(int64_t updateStartTime) { DARABONBA_PTR_SET_VALUE(updateStartTime_, updateStartTime) };


  protected:
    // 是否激活，1: 激活；0: 未激活
    shared_ptr<int64_t> active_ {};
    // 绑定电话
    shared_ptr<string> bindTel_ {};
    // 外显号码
    shared_ptr<string> clid_ {};
    // 创建时间查询范围-结束时间,秒级时间戳
    shared_ptr<int64_t> endTime_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 查询记录条数，默认值为 10，最大范围 100
    shared_ptr<int64_t> limit_ {};
    // 偏移量，默认值为 0，最大范围 10000
    shared_ptr<int64_t> offset_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 队列号
    shared_ptr<string> qno_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 创建时间查询范围-开始时间,秒级时间戳
    shared_ptr<int64_t> startTime_ {};
    // 修改时间查询范围-结束时间,秒级时间戳
    shared_ptr<int64_t> updateEndTime_ {};
    // 修改时间查询范围-开始时间,秒级时间戳
    shared_ptr<int64_t> updateStartTime_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
