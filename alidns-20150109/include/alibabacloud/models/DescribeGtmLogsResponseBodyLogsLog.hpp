// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMLOGSRESPONSEBODYLOGSLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMLOGSRESPONSEBODYLOGSLOG_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmLogsResponseBodyLogsLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmLogsResponseBodyLogsLog& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(EntityId, entityId_);
      DARABONBA_PTR_TO_JSON(EntityName, entityName_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OperAction, operAction_);
      DARABONBA_PTR_TO_JSON(OperIp, operIp_);
      DARABONBA_PTR_TO_JSON(OperTime, operTime_);
      DARABONBA_PTR_TO_JSON(OperTimestamp, operTimestamp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmLogsResponseBodyLogsLog& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(EntityId, entityId_);
      DARABONBA_PTR_FROM_JSON(EntityName, entityName_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OperAction, operAction_);
      DARABONBA_PTR_FROM_JSON(OperIp, operIp_);
      DARABONBA_PTR_FROM_JSON(OperTime, operTime_);
      DARABONBA_PTR_FROM_JSON(OperTimestamp, operTimestamp_);
    };
    DescribeGtmLogsResponseBodyLogsLog() = default ;
    DescribeGtmLogsResponseBodyLogsLog(const DescribeGtmLogsResponseBodyLogsLog &) = default ;
    DescribeGtmLogsResponseBodyLogsLog(DescribeGtmLogsResponseBodyLogsLog &&) = default ;
    DescribeGtmLogsResponseBodyLogsLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmLogsResponseBodyLogsLog() = default ;
    DescribeGtmLogsResponseBodyLogsLog& operator=(const DescribeGtmLogsResponseBodyLogsLog &) = default ;
    DescribeGtmLogsResponseBodyLogsLog& operator=(DescribeGtmLogsResponseBodyLogsLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->entityId_ != nullptr && this->entityName_ != nullptr && this->entityType_ != nullptr && this->id_ != nullptr && this->operAction_ != nullptr
        && this->operIp_ != nullptr && this->operTime_ != nullptr && this->operTimestamp_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeGtmLogsResponseBodyLogsLog& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // entityId Field Functions 
    bool hasEntityId() const { return this->entityId_ != nullptr;};
    void deleteEntityId() { this->entityId_ = nullptr;};
    inline string entityId() const { DARABONBA_PTR_GET_DEFAULT(entityId_, "") };
    inline DescribeGtmLogsResponseBodyLogsLog& setEntityId(string entityId) { DARABONBA_PTR_SET_VALUE(entityId_, entityId) };


    // entityName Field Functions 
    bool hasEntityName() const { return this->entityName_ != nullptr;};
    void deleteEntityName() { this->entityName_ = nullptr;};
    inline string entityName() const { DARABONBA_PTR_GET_DEFAULT(entityName_, "") };
    inline DescribeGtmLogsResponseBodyLogsLog& setEntityName(string entityName) { DARABONBA_PTR_SET_VALUE(entityName_, entityName) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline DescribeGtmLogsResponseBodyLogsLog& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline DescribeGtmLogsResponseBodyLogsLog& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // operAction Field Functions 
    bool hasOperAction() const { return this->operAction_ != nullptr;};
    void deleteOperAction() { this->operAction_ = nullptr;};
    inline string operAction() const { DARABONBA_PTR_GET_DEFAULT(operAction_, "") };
    inline DescribeGtmLogsResponseBodyLogsLog& setOperAction(string operAction) { DARABONBA_PTR_SET_VALUE(operAction_, operAction) };


    // operIp Field Functions 
    bool hasOperIp() const { return this->operIp_ != nullptr;};
    void deleteOperIp() { this->operIp_ = nullptr;};
    inline string operIp() const { DARABONBA_PTR_GET_DEFAULT(operIp_, "") };
    inline DescribeGtmLogsResponseBodyLogsLog& setOperIp(string operIp) { DARABONBA_PTR_SET_VALUE(operIp_, operIp) };


    // operTime Field Functions 
    bool hasOperTime() const { return this->operTime_ != nullptr;};
    void deleteOperTime() { this->operTime_ = nullptr;};
    inline string operTime() const { DARABONBA_PTR_GET_DEFAULT(operTime_, "") };
    inline DescribeGtmLogsResponseBodyLogsLog& setOperTime(string operTime) { DARABONBA_PTR_SET_VALUE(operTime_, operTime) };


    // operTimestamp Field Functions 
    bool hasOperTimestamp() const { return this->operTimestamp_ != nullptr;};
    void deleteOperTimestamp() { this->operTimestamp_ = nullptr;};
    inline int64_t operTimestamp() const { DARABONBA_PTR_GET_DEFAULT(operTimestamp_, 0L) };
    inline DescribeGtmLogsResponseBodyLogsLog& setOperTimestamp(int64_t operTimestamp) { DARABONBA_PTR_SET_VALUE(operTimestamp_, operTimestamp) };


  protected:
    // The formatted message content.
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the object that was operated on.
    std::shared_ptr<string> entityId_ = nullptr;
    // The name of the object that was operated on.
    std::shared_ptr<string> entityName_ = nullptr;
    // The type of the object that was operated on.
    std::shared_ptr<string> entityType_ = nullptr;
    // The ID of the log record.
    std::shared_ptr<int64_t> id_ = nullptr;
    // The operation performed.
    std::shared_ptr<string> operAction_ = nullptr;
    // The IP address subject to the operation.
    std::shared_ptr<string> operIp_ = nullptr;
    // The time when the operation was performed.
    std::shared_ptr<string> operTime_ = nullptr;
    // A timestamp that indicates the time when the operation was performed.
    std::shared_ptr<int64_t> operTimestamp_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
