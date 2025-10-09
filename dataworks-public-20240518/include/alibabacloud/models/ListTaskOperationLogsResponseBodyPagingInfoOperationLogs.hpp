// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKOPERATIONLOGSRESPONSEBODYPAGINGINFOOPERATIONLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKOPERATIONLOGSRESPONSEBODYPAGINGINFOOPERATIONLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTaskOperationLogsResponseBodyPagingInfoOperationLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskOperationLogsResponseBodyPagingInfoOperationLogs& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(OperationContent, operationContent_);
      DARABONBA_PTR_TO_JSON(OperationSeq, operationSeq_);
      DARABONBA_PTR_TO_JSON(TaskId, taskId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskOperationLogsResponseBodyPagingInfoOperationLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(OperationContent, operationContent_);
      DARABONBA_PTR_FROM_JSON(OperationSeq, operationSeq_);
      DARABONBA_PTR_FROM_JSON(TaskId, taskId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListTaskOperationLogsResponseBodyPagingInfoOperationLogs() = default ;
    ListTaskOperationLogsResponseBodyPagingInfoOperationLogs(const ListTaskOperationLogsResponseBodyPagingInfoOperationLogs &) = default ;
    ListTaskOperationLogsResponseBodyPagingInfoOperationLogs(ListTaskOperationLogsResponseBodyPagingInfoOperationLogs &&) = default ;
    ListTaskOperationLogsResponseBodyPagingInfoOperationLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskOperationLogsResponseBodyPagingInfoOperationLogs() = default ;
    ListTaskOperationLogsResponseBodyPagingInfoOperationLogs& operator=(const ListTaskOperationLogsResponseBodyPagingInfoOperationLogs &) = default ;
    ListTaskOperationLogsResponseBodyPagingInfoOperationLogs& operator=(ListTaskOperationLogsResponseBodyPagingInfoOperationLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->operationContent_ != nullptr && this->operationSeq_ != nullptr && this->taskId_ != nullptr && this->user_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListTaskOperationLogsResponseBodyPagingInfoOperationLogs& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // operationContent Field Functions 
    bool hasOperationContent() const { return this->operationContent_ != nullptr;};
    void deleteOperationContent() { this->operationContent_ = nullptr;};
    inline string operationContent() const { DARABONBA_PTR_GET_DEFAULT(operationContent_, "") };
    inline ListTaskOperationLogsResponseBodyPagingInfoOperationLogs& setOperationContent(string operationContent) { DARABONBA_PTR_SET_VALUE(operationContent_, operationContent) };


    // operationSeq Field Functions 
    bool hasOperationSeq() const { return this->operationSeq_ != nullptr;};
    void deleteOperationSeq() { this->operationSeq_ = nullptr;};
    inline int64_t operationSeq() const { DARABONBA_PTR_GET_DEFAULT(operationSeq_, 0L) };
    inline ListTaskOperationLogsResponseBodyPagingInfoOperationLogs& setOperationSeq(int64_t operationSeq) { DARABONBA_PTR_SET_VALUE(operationSeq_, operationSeq) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline int64_t taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, 0L) };
    inline ListTaskOperationLogsResponseBodyPagingInfoOperationLogs& setTaskId(int64_t taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ListTaskOperationLogsResponseBodyPagingInfoOperationLogs& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The time when the operation log was generated.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The operation content.
    std::shared_ptr<string> operationContent_ = nullptr;
    // The serial number of the operation.
    std::shared_ptr<int64_t> operationSeq_ = nullptr;
    // The ID of the task on which the operation was performed.
    std::shared_ptr<int64_t> taskId_ = nullptr;
    // The account ID of the operator.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
