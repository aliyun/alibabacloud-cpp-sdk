// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMLOGSRESPONSEBODYLOGSLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMLOGSRESPONSEBODYLOGSLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmLogsResponseBodyLogsLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmLogsResponseBodyLogsLog& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityName, entityName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OperAction, operAction_);
      DARABONBA_PTR_TO_JSON(OperTime, operTime_);
      DARABONBA_PTR_TO_JSON(OperTimestamp, operTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmLogsResponseBodyLogsLog& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OperAction, operAction_);
      DARABONBA_PTR_FROM_JSON(OperTime, operTime_);
      DARABONBA_PTR_FROM_JSON(OperTimestamp, operTimestamp_);
    };
    DescribeDnsGtmLogsResponseBodyLogsLog() = default ;
    DescribeDnsGtmLogsResponseBodyLogsLog(const DescribeDnsGtmLogsResponseBodyLogsLog &) = default ;
    DescribeDnsGtmLogsResponseBodyLogsLog(DescribeDnsGtmLogsResponseBodyLogsLog &&) = default ;
    DescribeDnsGtmLogsResponseBodyLogsLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmLogsResponseBodyLogsLog() = default ;
    DescribeDnsGtmLogsResponseBodyLogsLog& operator=(const DescribeDnsGtmLogsResponseBodyLogsLog &) = default ;
    DescribeDnsGtmLogsResponseBodyLogsLog& operator=(DescribeDnsGtmLogsResponseBodyLogsLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->entityId_ == nullptr && return this->entityName_ == nullptr && return this->entityType_ == nullptr && return this->id_ == nullptr && return this->operAction_ == nullptr
        && return this->operTime_ == nullptr && return this->operTimestamp_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeDnsGtmLogsResponseBodyLogsLog& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline DescribeDnsGtmLogsResponseBodyLogsLog& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string entityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline DescribeDnsGtmLogsResponseBodyLogsLog& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline DescribeDnsGtmLogsResponseBodyLogsLog& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeDnsGtmLogsResponseBodyLogsLog& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operAction Field Functions 
    bool hasOperAction() const { return this->operAction_ != nullptr;};
    void deleteOperAction() { this->operAction_ = nullptr;};
    inline string operAction() const { DARABONBA_PTR_GET_DEFAULT(operAction_, "") };
    inline DescribeDnsGtmLogsResponseBodyLogsLog& setOperAction(string operAction) { DARABONBA_PTR_SET_VALUE(operAction_, operAction) };


    // operTime Field Functions 
    bool hasOperTime() const { return this->operTime_ != nullptr;};
    void deleteOperTime() { this->operTime_ = nullptr;};
    inline string operTime() const { DARABONBA_PTR_GET_DEFAULT(operTime_, "") };
    inline DescribeDnsGtmLogsResponseBodyLogsLog& setOperTime(string operTime) { DARABONBA_PTR_SET_VALUE(operTime_, operTime) };


    // operTimestamp Field Functions 
    bool hasOperTimestamp() const { return this->operTimestamp_ != nullptr;};
    void deleteOperTimestamp() { this->operTimestamp_ = nullptr;};
    inline int64_t operTimestamp() const { DARABONBA_PTR_GET_DEFAULT(operTimestamp_, 0L) };
    inline DescribeDnsGtmLogsResponseBodyLogsLog& setOperTimestamp(int64_t operTimestamp) { DARABONBA_PTR_SET_VALUE(operTimestamp_, operTimestamp) };


  protected:
    // The formatted message content.
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the object on which the operation was performed.
    std::shared_ptr<string> entityId_ = nullptr;
    // The name of the object on which the operation was performed.
    std::shared_ptr<string> entityName_ = nullptr;
    // The type of the object on which the operation was performed.
    std::shared_ptr<string> entityType_ = nullptr;
    // The ID of the record.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The operation performed.
    std::shared_ptr<string> operAction_ = nullptr;
    // The time when the operation was performed.
    std::shared_ptr<string> operTime_ = nullptr;
    // The timestamp of the operation.
    std::shared_ptr<int64_t> operTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
