// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTASKINSTANCEOPERATIONLOGSRESPONSEBODYPAGINGINFOOPERATIONLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTTASKINSTANCEOPERATIONLOGSRESPONSEBODYPAGINGINFOOPERATIONLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs& obj) { 
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(OperationContent, operationContent_);
      DARABONBA_PTR_TO_JSON(OperationSeq, operationSeq_);
      DARABONBA_PTR_TO_JSON(TaskInstanceId, taskInstanceId_);
      DARABONBA_PTR_TO_JSON(User, user_);
    };
    friend void from_json(const Darabonba::Json& j, ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(OperationContent, operationContent_);
      DARABONBA_PTR_FROM_JSON(OperationSeq, operationSeq_);
      DARABONBA_PTR_FROM_JSON(TaskInstanceId, taskInstanceId_);
      DARABONBA_PTR_FROM_JSON(User, user_);
    };
    ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs() = default ;
    ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs(const ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs &) = default ;
    ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs(ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs &&) = default ;
    ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs() = default ;
    ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs& operator=(const ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs &) = default ;
    ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs& operator=(ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->createTime_ != nullptr
        && this->operationContent_ != nullptr && this->operationSeq_ != nullptr && this->taskInstanceId_ != nullptr && this->user_ != nullptr; };
    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // operationContent Field Functions 
    bool hasOperationContent() const { return this->operationContent_ != nullptr;};
    void deleteOperationContent() { this->operationContent_ = nullptr;};
    inline string operationContent() const { DARABONBA_PTR_GET_DEFAULT(operationContent_, "") };
    inline ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs& setOperationContent(string operationContent) { DARABONBA_PTR_SET_VALUE(operationContent_, operationContent) };


    // operationSeq Field Functions 
    bool hasOperationSeq() const { return this->operationSeq_ != nullptr;};
    void deleteOperationSeq() { this->operationSeq_ = nullptr;};
    inline int64_t operationSeq() const { DARABONBA_PTR_GET_DEFAULT(operationSeq_, 0L) };
    inline ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs& setOperationSeq(int64_t operationSeq) { DARABONBA_PTR_SET_VALUE(operationSeq_, operationSeq) };


    // taskInstanceId Field Functions 
    bool hasTaskInstanceId() const { return this->taskInstanceId_ != nullptr;};
    void deleteTaskInstanceId() { this->taskInstanceId_ = nullptr;};
    inline int64_t taskInstanceId() const { DARABONBA_PTR_GET_DEFAULT(taskInstanceId_, 0L) };
    inline ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs& setTaskInstanceId(int64_t taskInstanceId) { DARABONBA_PTR_SET_VALUE(taskInstanceId_, taskInstanceId) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string user() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ListTaskInstanceOperationLogsResponseBodyPagingInfoOperationLogs& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


  protected:
    // The time when the operation log was generated.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The operation content.
    std::shared_ptr<string> operationContent_ = nullptr;
    // The serial number of the operation.
    std::shared_ptr<int64_t> operationSeq_ = nullptr;
    // The ID of the instance on which the operation was performed.
    std::shared_ptr<int64_t> taskInstanceId_ = nullptr;
    // The account ID of the operator.
    std::shared_ptr<string> user_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
