// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MQTOPICDIGEST_HPP_
#define ALIBABACLOUD_MODELS_MQTOPICDIGEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class MqTopicDigest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const MqTopicDigest& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MessageType, messageType_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
    };
    friend void from_json(const Darabonba::Json& j, MqTopicDigest& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MessageType, messageType_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
    };
    MqTopicDigest() = default ;
    MqTopicDigest(const MqTopicDigest &) = default ;
    MqTopicDigest(MqTopicDigest &&) = default ;
    MqTopicDigest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~MqTopicDigest() = default ;
    MqTopicDigest& operator=(const MqTopicDigest &) = default ;
    MqTopicDigest& operator=(MqTopicDigest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && this->createTime_ == nullptr && this->id_ == nullptr && this->messageType_ == nullptr && this->name_ == nullptr && this->remark_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string getAlias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline MqTopicDigest& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
    inline MqTopicDigest& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline MqTopicDigest& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // messageType Field Functions 
    bool hasMessageType() const { return this->messageType_ != nullptr;};
    void deleteMessageType() { this->messageType_ = nullptr;};
    inline string getMessageType() const { DARABONBA_PTR_GET_DEFAULT(messageType_, "") };
    inline MqTopicDigest& setMessageType(string messageType) { DARABONBA_PTR_SET_VALUE(messageType_, messageType) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline MqTopicDigest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline MqTopicDigest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


  protected:
    shared_ptr<string> alias_ {};
    shared_ptr<string> createTime_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<string> messageType_ {};
    shared_ptr<string> name_ {};
    shared_ptr<string> remark_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
