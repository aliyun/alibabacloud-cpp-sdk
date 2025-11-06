// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUEUERESPONSEBODYDATAVOLISTQUEUEVO_HPP_
#define ALIBABACLOUD_MODELS_LISTQUEUERESPONSEBODYDATAVOLISTQUEUEVO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Amqp20190901
{
namespace Models
{
  class ListQueueResponseBodyDataVoListQueueVO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQueueResponseBodyDataVoListQueueVO& obj) { 
      DARABONBA_PTR_TO_JSON(AccumulationCount, accumulationCount_);
      DARABONBA_ANY_TO_JSON(Attributes, attributes_);
      DARABONBA_PTR_TO_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_TO_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Durable, durable_);
      DARABONBA_PTR_TO_JSON(Exclusive, exclusive_);
      DARABONBA_PTR_TO_JSON(LastConsumeTime, lastConsumeTime_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(VhostName, vhostName_);
    };
    friend void from_json(const Darabonba::Json& j, ListQueueResponseBodyDataVoListQueueVO& obj) { 
      DARABONBA_PTR_FROM_JSON(AccumulationCount, accumulationCount_);
      DARABONBA_ANY_FROM_JSON(Attributes, attributes_);
      DARABONBA_PTR_FROM_JSON(AutoDelete, autoDelete_);
      DARABONBA_PTR_FROM_JSON(CanDelete, canDelete_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Durable, durable_);
      DARABONBA_PTR_FROM_JSON(Exclusive, exclusive_);
      DARABONBA_PTR_FROM_JSON(LastConsumeTime, lastConsumeTime_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(VhostName, vhostName_);
    };
    ListQueueResponseBodyDataVoListQueueVO() = default ;
    ListQueueResponseBodyDataVoListQueueVO(const ListQueueResponseBodyDataVoListQueueVO &) = default ;
    ListQueueResponseBodyDataVoListQueueVO(ListQueueResponseBodyDataVoListQueueVO &&) = default ;
    ListQueueResponseBodyDataVoListQueueVO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQueueResponseBodyDataVoListQueueVO() = default ;
    ListQueueResponseBodyDataVoListQueueVO& operator=(const ListQueueResponseBodyDataVoListQueueVO &) = default ;
    ListQueueResponseBodyDataVoListQueueVO& operator=(ListQueueResponseBodyDataVoListQueueVO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->accumulationCount_ == nullptr
        && return this->attributes_ == nullptr && return this->autoDelete_ == nullptr && return this->canDelete_ == nullptr && return this->createTime_ == nullptr && return this->durable_ == nullptr
        && return this->exclusive_ == nullptr && return this->lastConsumeTime_ == nullptr && return this->name_ == nullptr && return this->vhostName_ == nullptr; };
    // accumulationCount Field Functions 
    bool hasAccumulationCount() const { return this->accumulationCount_ != nullptr;};
    void deleteAccumulationCount() { this->accumulationCount_ = nullptr;};
    inline int64_t accumulationCount() const { DARABONBA_PTR_GET_DEFAULT(accumulationCount_, 0L) };
    inline ListQueueResponseBodyDataVoListQueueVO& setAccumulationCount(int64_t accumulationCount) { DARABONBA_PTR_SET_VALUE(accumulationCount_, accumulationCount) };


    // attributes Field Functions 
    bool hasAttributes() const { return this->attributes_ != nullptr;};
    void deleteAttributes() { this->attributes_ = nullptr;};
    inline     const Darabonba::Json & attributes() const { DARABONBA_GET(attributes_) };
    Darabonba::Json & attributes() { DARABONBA_GET(attributes_) };
    inline ListQueueResponseBodyDataVoListQueueVO& setAttributes(const Darabonba::Json & attributes) { DARABONBA_SET_VALUE(attributes_, attributes) };
    inline ListQueueResponseBodyDataVoListQueueVO& setAttributes(Darabonba::Json & attributes) { DARABONBA_SET_RVALUE(attributes_, attributes) };


    // autoDelete Field Functions 
    bool hasAutoDelete() const { return this->autoDelete_ != nullptr;};
    void deleteAutoDelete() { this->autoDelete_ = nullptr;};
    inline bool autoDelete() const { DARABONBA_PTR_GET_DEFAULT(autoDelete_, false) };
    inline ListQueueResponseBodyDataVoListQueueVO& setAutoDelete(bool autoDelete) { DARABONBA_PTR_SET_VALUE(autoDelete_, autoDelete) };


    // canDelete Field Functions 
    bool hasCanDelete() const { return this->canDelete_ != nullptr;};
    void deleteCanDelete() { this->canDelete_ = nullptr;};
    inline bool canDelete() const { DARABONBA_PTR_GET_DEFAULT(canDelete_, false) };
    inline ListQueueResponseBodyDataVoListQueueVO& setCanDelete(bool canDelete) { DARABONBA_PTR_SET_VALUE(canDelete_, canDelete) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListQueueResponseBodyDataVoListQueueVO& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // durable Field Functions 
    bool hasDurable() const { return this->durable_ != nullptr;};
    void deleteDurable() { this->durable_ = nullptr;};
    inline bool durable() const { DARABONBA_PTR_GET_DEFAULT(durable_, false) };
    inline ListQueueResponseBodyDataVoListQueueVO& setDurable(bool durable) { DARABONBA_PTR_SET_VALUE(durable_, durable) };


    // exclusive Field Functions 
    bool hasExclusive() const { return this->exclusive_ != nullptr;};
    void deleteExclusive() { this->exclusive_ = nullptr;};
    inline bool exclusive() const { DARABONBA_PTR_GET_DEFAULT(exclusive_, false) };
    inline ListQueueResponseBodyDataVoListQueueVO& setExclusive(bool exclusive) { DARABONBA_PTR_SET_VALUE(exclusive_, exclusive) };


    // lastConsumeTime Field Functions 
    bool hasLastConsumeTime() const { return this->lastConsumeTime_ != nullptr;};
    void deleteLastConsumeTime() { this->lastConsumeTime_ = nullptr;};
    inline int64_t lastConsumeTime() const { DARABONBA_PTR_GET_DEFAULT(lastConsumeTime_, 0L) };
    inline ListQueueResponseBodyDataVoListQueueVO& setLastConsumeTime(int64_t lastConsumeTime) { DARABONBA_PTR_SET_VALUE(lastConsumeTime_, lastConsumeTime) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListQueueResponseBodyDataVoListQueueVO& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // vhostName Field Functions 
    bool hasVhostName() const { return this->vhostName_ != nullptr;};
    void deleteVhostName() { this->vhostName_ = nullptr;};
    inline string vhostName() const { DARABONBA_PTR_GET_DEFAULT(vhostName_, "") };
    inline ListQueueResponseBodyDataVoListQueueVO& setVhostName(string vhostName) { DARABONBA_PTR_SET_VALUE(vhostName_, vhostName) };


  protected:
    std::shared_ptr<int64_t> accumulationCount_ = nullptr;
    Darabonba::Json attributes_ = nullptr;
    std::shared_ptr<bool> autoDelete_ = nullptr;
    std::shared_ptr<bool> canDelete_ = nullptr;
    std::shared_ptr<int64_t> createTime_ = nullptr;
    std::shared_ptr<bool> durable_ = nullptr;
    std::shared_ptr<bool> exclusive_ = nullptr;
    std::shared_ptr<int64_t> lastConsumeTime_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> vhostName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Amqp20190901
#endif
