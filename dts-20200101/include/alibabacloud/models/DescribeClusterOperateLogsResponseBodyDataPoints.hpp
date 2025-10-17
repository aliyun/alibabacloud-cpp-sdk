// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTEROPERATELOGSRESPONSEBODYDATAPOINTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTEROPERATELOGSRESPONSEBODYDATAPOINTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class DescribeClusterOperateLogsResponseBodyDataPoints : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterOperateLogsResponseBodyDataPoints& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(LogDatetime, logDatetime_);
      DARABONBA_PTR_TO_JSON(NewValue, newValue_);
      DARABONBA_PTR_TO_JSON(OldValue, oldValue_);
      DARABONBA_PTR_TO_JSON(OperationName, operationName_);
      DARABONBA_PTR_TO_JSON(OperationUser, operationUser_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterOperateLogsResponseBodyDataPoints& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(LogDatetime, logDatetime_);
      DARABONBA_PTR_FROM_JSON(NewValue, newValue_);
      DARABONBA_PTR_FROM_JSON(OldValue, oldValue_);
      DARABONBA_PTR_FROM_JSON(OperationName, operationName_);
      DARABONBA_PTR_FROM_JSON(OperationUser, operationUser_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribeClusterOperateLogsResponseBodyDataPoints() = default ;
    DescribeClusterOperateLogsResponseBodyDataPoints(const DescribeClusterOperateLogsResponseBodyDataPoints &) = default ;
    DescribeClusterOperateLogsResponseBodyDataPoints(DescribeClusterOperateLogsResponseBodyDataPoints &&) = default ;
    DescribeClusterOperateLogsResponseBodyDataPoints(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterOperateLogsResponseBodyDataPoints() = default ;
    DescribeClusterOperateLogsResponseBodyDataPoints& operator=(const DescribeClusterOperateLogsResponseBodyDataPoints &) = default ;
    DescribeClusterOperateLogsResponseBodyDataPoints& operator=(DescribeClusterOperateLogsResponseBodyDataPoints &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->id_ == nullptr && return this->logDatetime_ == nullptr && return this->newValue_ == nullptr && return this->oldValue_ == nullptr && return this->operationName_ == nullptr
        && return this->operationUser_ == nullptr && return this->success_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeClusterOperateLogsResponseBodyDataPoints& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeClusterOperateLogsResponseBodyDataPoints& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // logDatetime Field Functions 
    bool hasLogDatetime() const { return this->logDatetime_ != nullptr;};
    void deleteLogDatetime() { this->logDatetime_ = nullptr;};
    inline int64_t logDatetime() const { DARABONBA_PTR_GET_DEFAULT(logDatetime_, 0L) };
    inline DescribeClusterOperateLogsResponseBodyDataPoints& setLogDatetime(int64_t logDatetime) { DARABONBA_PTR_SET_VALUE(logDatetime_, logDatetime) };


    // newValue Field Functions 
    bool hasNewValue() const { return this->newValue_ != nullptr;};
    void deleteNewValue() { this->newValue_ = nullptr;};
    inline string newValue() const { DARABONBA_PTR_GET_DEFAULT(newValue_, "") };
    inline DescribeClusterOperateLogsResponseBodyDataPoints& setNewValue(string newValue) { DARABONBA_PTR_SET_VALUE(newValue_, newValue) };


    // oldValue Field Functions 
    bool hasOldValue() const { return this->oldValue_ != nullptr;};
    void deleteOldValue() { this->oldValue_ = nullptr;};
    inline string oldValue() const { DARABONBA_PTR_GET_DEFAULT(oldValue_, "") };
    inline DescribeClusterOperateLogsResponseBodyDataPoints& setOldValue(string oldValue) { DARABONBA_PTR_SET_VALUE(oldValue_, oldValue) };


    // operationName Field Functions 
    bool hasOperationName() const { return this->operationName_ != nullptr;};
    void deleteOperationName() { this->operationName_ = nullptr;};
    inline string operationName() const { DARABONBA_PTR_GET_DEFAULT(operationName_, "") };
    inline DescribeClusterOperateLogsResponseBodyDataPoints& setOperationName(string operationName) { DARABONBA_PTR_SET_VALUE(operationName_, operationName) };


    // operationUser Field Functions 
    bool hasOperationUser() const { return this->operationUser_ != nullptr;};
    void deleteOperationUser() { this->operationUser_ = nullptr;};
    inline string operationUser() const { DARABONBA_PTR_GET_DEFAULT(operationUser_, "") };
    inline DescribeClusterOperateLogsResponseBodyDataPoints& setOperationUser(string operationUser) { DARABONBA_PTR_SET_VALUE(operationUser_, operationUser) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline int32_t success() const { DARABONBA_PTR_GET_DEFAULT(success_, 0) };
    inline DescribeClusterOperateLogsResponseBodyDataPoints& setSuccess(int32_t success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Other description of the operation.
    std::shared_ptr<string> content_ = nullptr;
    // The primary key of the log table.
    std::shared_ptr<string> id_ = nullptr;
    // The time when the operation is recorded. The value is in the UNIX timestamp format. Unit: milliseconds.
    std::shared_ptr<int64_t> logDatetime_ = nullptr;
    // The value of the parameter after the operation if the operation is an UPDATE operation.
    std::shared_ptr<string> newValue_ = nullptr;
    // The value of the parameter before the operation if the operation is an UPDATE operation.
    std::shared_ptr<string> oldValue_ = nullptr;
    // The type of the operation.
    std::shared_ptr<string> operationName_ = nullptr;
    // The user who performed the operation.
    std::shared_ptr<string> operationUser_ = nullptr;
    // Indicates whether the request was successful. A value of **1** indicates that the request was successful.
    std::shared_ptr<int32_t> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
