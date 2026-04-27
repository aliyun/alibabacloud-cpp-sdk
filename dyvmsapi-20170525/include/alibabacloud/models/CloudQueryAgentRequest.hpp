// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CLOUDQUERYAGENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CLOUDQUERYAGENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class CloudQueryAgentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CloudQueryAgentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Active, active_);
      DARABONBA_PTR_TO_JSON(Cnos, cnos_);
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Qno, qno_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_TO_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_TO_JSON(ReturnQueue, returnQueue_);
      DARABONBA_PTR_TO_JSON(Start, start_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(WebrtcUrlType, webrtcUrlType_);
    };
    friend void from_json(const Darabonba::Json& j, CloudQueryAgentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Active, active_);
      DARABONBA_PTR_FROM_JSON(Cnos, cnos_);
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(EnterpriseId, enterpriseId_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Qno, qno_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerAccount, resourceOwnerAccount_);
      DARABONBA_PTR_FROM_JSON(ResourceOwnerId, resourceOwnerId_);
      DARABONBA_PTR_FROM_JSON(ReturnQueue, returnQueue_);
      DARABONBA_PTR_FROM_JSON(Start, start_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(WebrtcUrlType, webrtcUrlType_);
    };
    CloudQueryAgentRequest() = default ;
    CloudQueryAgentRequest(const CloudQueryAgentRequest &) = default ;
    CloudQueryAgentRequest(CloudQueryAgentRequest &&) = default ;
    CloudQueryAgentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CloudQueryAgentRequest() = default ;
    CloudQueryAgentRequest& operator=(const CloudQueryAgentRequest &) = default ;
    CloudQueryAgentRequest& operator=(CloudQueryAgentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->active_ == nullptr
        && this->cnos_ == nullptr && this->comment_ == nullptr && this->endTime_ == nullptr && this->enterpriseId_ == nullptr && this->limit_ == nullptr
        && this->name_ == nullptr && this->order_ == nullptr && this->ownerId_ == nullptr && this->qno_ == nullptr && this->resourceOwnerAccount_ == nullptr
        && this->resourceOwnerId_ == nullptr && this->returnQueue_ == nullptr && this->start_ == nullptr && this->startTime_ == nullptr && this->status_ == nullptr
        && this->webrtcUrlType_ == nullptr; };
    // active Field Functions 
    bool hasActive() const { return this->active_ != nullptr;};
    void deleteActive() { this->active_ = nullptr;};
    inline int64_t getActive() const { DARABONBA_PTR_GET_DEFAULT(active_, 0L) };
    inline CloudQueryAgentRequest& setActive(int64_t active) { DARABONBA_PTR_SET_VALUE(active_, active) };


    // cnos Field Functions 
    bool hasCnos() const { return this->cnos_ != nullptr;};
    void deleteCnos() { this->cnos_ = nullptr;};
    inline string getCnos() const { DARABONBA_PTR_GET_DEFAULT(cnos_, "") };
    inline CloudQueryAgentRequest& setCnos(string cnos) { DARABONBA_PTR_SET_VALUE(cnos_, cnos) };


    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CloudQueryAgentRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline string getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, "") };
    inline CloudQueryAgentRequest& setEndTime(string endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // enterpriseId Field Functions 
    bool hasEnterpriseId() const { return this->enterpriseId_ != nullptr;};
    void deleteEnterpriseId() { this->enterpriseId_ = nullptr;};
    inline int64_t getEnterpriseId() const { DARABONBA_PTR_GET_DEFAULT(enterpriseId_, 0L) };
    inline CloudQueryAgentRequest& setEnterpriseId(int64_t enterpriseId) { DARABONBA_PTR_SET_VALUE(enterpriseId_, enterpriseId) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline int64_t getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, 0L) };
    inline CloudQueryAgentRequest& setLimit(int64_t limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CloudQueryAgentRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline int64_t getOrder() const { DARABONBA_PTR_GET_DEFAULT(order_, 0L) };
    inline CloudQueryAgentRequest& setOrder(int64_t order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline CloudQueryAgentRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // qno Field Functions 
    bool hasQno() const { return this->qno_ != nullptr;};
    void deleteQno() { this->qno_ = nullptr;};
    inline string getQno() const { DARABONBA_PTR_GET_DEFAULT(qno_, "") };
    inline CloudQueryAgentRequest& setQno(string qno) { DARABONBA_PTR_SET_VALUE(qno_, qno) };


    // resourceOwnerAccount Field Functions 
    bool hasResourceOwnerAccount() const { return this->resourceOwnerAccount_ != nullptr;};
    void deleteResourceOwnerAccount() { this->resourceOwnerAccount_ = nullptr;};
    inline string getResourceOwnerAccount() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerAccount_, "") };
    inline CloudQueryAgentRequest& setResourceOwnerAccount(string resourceOwnerAccount) { DARABONBA_PTR_SET_VALUE(resourceOwnerAccount_, resourceOwnerAccount) };


    // resourceOwnerId Field Functions 
    bool hasResourceOwnerId() const { return this->resourceOwnerId_ != nullptr;};
    void deleteResourceOwnerId() { this->resourceOwnerId_ = nullptr;};
    inline int64_t getResourceOwnerId() const { DARABONBA_PTR_GET_DEFAULT(resourceOwnerId_, 0L) };
    inline CloudQueryAgentRequest& setResourceOwnerId(int64_t resourceOwnerId) { DARABONBA_PTR_SET_VALUE(resourceOwnerId_, resourceOwnerId) };


    // returnQueue Field Functions 
    bool hasReturnQueue() const { return this->returnQueue_ != nullptr;};
    void deleteReturnQueue() { this->returnQueue_ = nullptr;};
    inline int64_t getReturnQueue() const { DARABONBA_PTR_GET_DEFAULT(returnQueue_, 0L) };
    inline CloudQueryAgentRequest& setReturnQueue(int64_t returnQueue) { DARABONBA_PTR_SET_VALUE(returnQueue_, returnQueue) };


    // start Field Functions 
    bool hasStart() const { return this->start_ != nullptr;};
    void deleteStart() { this->start_ = nullptr;};
    inline int64_t getStart() const { DARABONBA_PTR_GET_DEFAULT(start_, 0L) };
    inline CloudQueryAgentRequest& setStart(int64_t start) { DARABONBA_PTR_SET_VALUE(start_, start) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline string getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, "") };
    inline CloudQueryAgentRequest& setStartTime(string startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline int64_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0L) };
    inline CloudQueryAgentRequest& setStatus(int64_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // webrtcUrlType Field Functions 
    bool hasWebrtcUrlType() const { return this->webrtcUrlType_ != nullptr;};
    void deleteWebrtcUrlType() { this->webrtcUrlType_ = nullptr;};
    inline int64_t getWebrtcUrlType() const { DARABONBA_PTR_GET_DEFAULT(webrtcUrlType_, 0L) };
    inline CloudQueryAgentRequest& setWebrtcUrlType(int64_t webrtcUrlType) { DARABONBA_PTR_SET_VALUE(webrtcUrlType_, webrtcUrlType) };


  protected:
    // 是否启用；正整数，只能是0或者1，0是停用，1是启用
    shared_ptr<int64_t> active_ {};
    // 多个座席号以英文逗号分隔 最多支持500个座席
    shared_ptr<string> cnos_ {};
    // 通过座席备注信息检索；取值说明：前缀模糊匹配
    shared_ptr<string> comment_ {};
    // 创建时间终止时间点；取值说明："2019-10-11 23:59:59"
    shared_ptr<string> endTime_ {};
    // 呼叫中心 id
    // 
    // This parameter is required.
    shared_ptr<int64_t> enterpriseId_ {};
    // 查询条数；正整数，大于0，最大不能超过1000，默认10
    shared_ptr<int64_t> limit_ {};
    // 通过座席名称检索；取值说明：前后缀模糊匹配
    shared_ptr<string> name_ {};
    // 排序方式,按照创建时间排序；0正序 1倒序
    shared_ptr<int64_t> order_ {};
    shared_ptr<int64_t> ownerId_ {};
    // 队列号；当qno不为空时，查询指定队列的所有座席记录
    shared_ptr<string> qno_ {};
    shared_ptr<string> resourceOwnerAccount_ {};
    shared_ptr<int64_t> resourceOwnerId_ {};
    // 是否返回绑定座席的队列信息；0:不返回 1:需要返回 默认值:1
    shared_ptr<int64_t> returnQueue_ {};
    // 从第几条开始；正整数，大于等于0，默认0
    shared_ptr<int64_t> start_ {};
    // 创建时间起始时间点；取值说明："2019-10-11 00:00:00"
    shared_ptr<string> startTime_ {};
    // 是否在线；正整数，只能是0或者1，0是离线，1是在线
    shared_ptr<int64_t> status_ {};
    // webrtc软电话返回地址；取值说明：0：企业默认 1：公网域名 2：专线域名 3：公网IP 4：专线IP
    shared_ptr<int64_t> webrtcUrlType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
