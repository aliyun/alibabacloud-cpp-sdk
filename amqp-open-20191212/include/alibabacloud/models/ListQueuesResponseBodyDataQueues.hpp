// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODYDATAQUEUES_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUESRESPONSEBODYDATAQUEUES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AmqpOpen20191212
{
namespace Models
{
  class ListQueuesResponseBodyDataQueues : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueuesResponseBodyDataQueues& obj) { 
      DARABONBA_ANY_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(AutoDeleteState, autoDeleteState_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExclusiveState, exclusiveState_);
      DARABONBA_PTR_TO_JSON(LastConsumeTime, lastConsumeTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(VHostName, VHostName_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueuesResponseBodyDataQueues& obj) { 
      DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(AutoDeleteState, autoDeleteState_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExclusiveState, exclusiveState_);
      DARABONBA_PTR_FROM_JSON(LastConsumeTime, lastConsumeTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(VHostName, VHostName_);
    };
    ListQueuesResponseBodyDataQueues() = default ;
    ListQueuesResponseBodyDataQueues(const ListQueuesResponseBodyDataQueues &) = default ;
    ListQueuesResponseBodyDataQueues(ListQueuesResponseBodyDataQueues &&) = default ;
    ListQueuesResponseBodyDataQueues(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueuesResponseBodyDataQueues() = default ;
    ListQueuesResponseBodyDataQueues& operator=(const ListQueuesResponseBodyDataQueues &) = default ;
    ListQueuesResponseBodyDataQueues& operator=(ListQueuesResponseBodyDataQueues &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->attributes_ != nullptr
        && this->autoDeleteState_ != nullptr && this->createTime_ != nullptr && this->exclusiveState_ != nullptr && this->lastConsumeTime_ != nullptr && this->name_ != nullptr
        && this->ownerId_ != nullptr && this->VHostName_ != nullptr; };
    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline     const Darabonba::Json & attributes() const { DARABONBA_GET(attributes_) };
    Darabonba::Json & attributes() { DARABONBA_GET(attributes_) };
    inline ListQueuesResponseBodyDataQueues& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
    inline ListQueuesResponseBodyDataQueues& setAttributes(Darabonba::Json & attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


    // autoDeleteState Field Functions 
    bool hasAutoDeleteState() const { return this->autoDeleteState_ != nullptr;};
    void deleteAutoDeleteState() { this->autoDeleteState_ = nullptr;};
    inline bool autoDeleteState() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteState_, false) };
    inline ListQueuesResponseBodyDataQueues& setAutoDeleteState(bool autoDeleteState) { DARABONBA_PTR_SET_VALUE(autoDeleteState_, autoDeleteState) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListQueuesResponseBodyDataQueues& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // exclusiveState Field Functions 
    bool hasExclusiveState() const { return this->exclusiveState_ != nullptr;};
    void deleteExclusiveState() { this->exclusiveState_ = nullptr;};
    inline bool exclusiveState() const { DARABONBA_PTR_GET_DEFAULT(exclusiveState_, false) };
    inline ListQueuesResponseBodyDataQueues& setExclusiveState(bool exclusiveState) { DARABONBA_PTR_SET_VALUE(exclusiveState_, exclusiveState) };


    // lastConsumeTime Field Functions 
    bool hasLastConsumeTime() const { return this->lastConsumeTime_ != nullptr;};
    void deleteLastConsumeTime() { this->lastConsumeTime_ = nullptr;};
    inline int64_t lastConsumeTime() const { DARABONBA_PTR_GET_DEFAULT(lastConsumeTime_, 0L) };
    inline ListQueuesResponseBodyDataQueues& setLastConsumeTime(int64_t lastConsumeTime) { DARABONBA_PTR_SET_VALUE(lastConsumeTime_, lastConsumeTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListQueuesResponseBodyDataQueues& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline string ownerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, "") };
    inline ListQueuesResponseBodyDataQueues& setOwnerId(string ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // VHostName Field Functions 
    bool hasVHostName() const { return this->VHostName_ != nullptr;};
    void deleteVHostName() { this->VHostName_ = nullptr;};
    inline string VHostName() const { DARABONBA_PTR_GET_DEFAULT(VHostName_, "") };
    inline ListQueuesResponseBodyDataQueues& setVHostName(string VHostName) { DARABONBA_PTR_SET_VALUE(VHostName_, VHostName) };


  protected:
    // The attributes.
    Darabonba::Json attributes_ = nullptr;
    // Indicates whether the queue was automatically deleted.
    std::shared_ptr<bool> autoDeleteState_ = nullptr;
    // The time when the queue was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // Indicates whether the queue is an exclusive queue.
    std::shared_ptr<bool> exclusiveState_ = nullptr;
    // The time when messages in the queue were last consumed.
    std::shared_ptr<int64_t> lastConsumeTime_ = nullptr;
    // The queue name.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the ApsaraMQ for RabbitMQ instance to which the queue belongs.
    std::shared_ptr<string> ownerId_ = nullptr;
    // The vhost name.
    std::shared_ptr<string> VHostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AmqpOpen20191212
#endif
