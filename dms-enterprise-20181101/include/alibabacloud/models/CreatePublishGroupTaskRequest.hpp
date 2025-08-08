// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPUBLISHGROUPTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPUBLISHGROUPTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class CreatePublishGroupTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreatePublishGroupTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbId, dbId_);
      DARABONBA_PTR_TO_JSON(Logic, logic_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(PlanTime, planTime_);
      DARABONBA_PTR_TO_JSON(PublishStrategy, publishStrategy_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, CreatePublishGroupTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbId, dbId_);
      DARABONBA_PTR_FROM_JSON(Logic, logic_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(PlanTime, planTime_);
      DARABONBA_PTR_FROM_JSON(PublishStrategy, publishStrategy_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    CreatePublishGroupTaskRequest() = default ;
    CreatePublishGroupTaskRequest(const CreatePublishGroupTaskRequest &) = default ;
    CreatePublishGroupTaskRequest(CreatePublishGroupTaskRequest &&) = default ;
    CreatePublishGroupTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreatePublishGroupTaskRequest() = default ;
    CreatePublishGroupTaskRequest& operator=(const CreatePublishGroupTaskRequest &) = default ;
    CreatePublishGroupTaskRequest& operator=(CreatePublishGroupTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbId_ != nullptr
        && this->logic_ != nullptr && this->orderId_ != nullptr && this->planTime_ != nullptr && this->publishStrategy_ != nullptr && this->tid_ != nullptr; };
    // dbId Field Functions 
    bool hasDbId() const { return this->dbId_ != nullptr;};
    void deleteDbId() { this->dbId_ = nullptr;};
    inline int32_t dbId() const { DARABONBA_PTR_GET_DEFAULT(dbId_, 0) };
    inline CreatePublishGroupTaskRequest& setDbId(int32_t dbId) { DARABONBA_PTR_SET_VALUE(dbId_, dbId) };


    // logic Field Functions 
    bool hasLogic() const { return this->logic_ != nullptr;};
    void deleteLogic() { this->logic_ = nullptr;};
    inline bool logic() const { DARABONBA_PTR_GET_DEFAULT(logic_, false) };
    inline CreatePublishGroupTaskRequest& setLogic(bool logic) { DARABONBA_PTR_SET_VALUE(logic_, logic) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline CreatePublishGroupTaskRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // planTime Field Functions 
    bool hasPlanTime() const { return this->planTime_ != nullptr;};
    void deletePlanTime() { this->planTime_ = nullptr;};
    inline string planTime() const { DARABONBA_PTR_GET_DEFAULT(planTime_, "") };
    inline CreatePublishGroupTaskRequest& setPlanTime(string planTime) { DARABONBA_PTR_SET_VALUE(planTime_, planTime) };


    // publishStrategy Field Functions 
    bool hasPublishStrategy() const { return this->publishStrategy_ != nullptr;};
    void deletePublishStrategy() { this->publishStrategy_ = nullptr;};
    inline string publishStrategy() const { DARABONBA_PTR_GET_DEFAULT(publishStrategy_, "") };
    inline CreatePublishGroupTaskRequest& setPublishStrategy(string publishStrategy) { DARABONBA_PTR_SET_VALUE(publishStrategy_, publishStrategy) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline CreatePublishGroupTaskRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The ID of the database for which the schema design is executed.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> dbId_ = nullptr;
    // Indicates whether the database is a logical database.
    // 
    // This parameter is required.
    std::shared_ptr<bool> logic_ = nullptr;
    // The ID of the ticket.
    // 
    // > : You can create a schema design ticket in the DMS console. For more information, see [Design schemas](https://help.aliyun.com/document_detail/69711.html). You can also create a schema design ticket by calling the [CreateOrder](https://help.aliyun.com/document_detail/144649.html) operation and obtain the ticket ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The time to execute the schema design ticket.
    std::shared_ptr<string> planTime_ = nullptr;
    // The policy to execute the schema design ticket. Valid values:
    // 
    // *   IMMEDIATELY: immediately executes the schema design ticket.
    // *   REGULARLY: executes the schema design ticket at a scheduled time.
    // 
    // This parameter is required.
    std::shared_ptr<string> publishStrategy_ = nullptr;
    // The ID of the tenant.
    // 
    // > : To view the ID of the tenant, log on to the Data Management (DMS) console and move the pointer over the profile picture in the upper-right corner. For more information, see [Manage DMS tenants](https://help.aliyun.com/document_detail/181330.html).
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
