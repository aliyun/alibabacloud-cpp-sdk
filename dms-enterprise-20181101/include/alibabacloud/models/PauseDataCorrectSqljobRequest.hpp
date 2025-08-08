// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAUSEDATACORRECTSQLJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_PAUSEDATACORRECTSQLJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class PauseDataCorrectSQLJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PauseDataCorrectSQLJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, PauseDataCorrectSQLJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    PauseDataCorrectSQLJobRequest() = default ;
    PauseDataCorrectSQLJobRequest(const PauseDataCorrectSQLJobRequest &) = default ;
    PauseDataCorrectSQLJobRequest(PauseDataCorrectSQLJobRequest &&) = default ;
    PauseDataCorrectSQLJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PauseDataCorrectSQLJobRequest() = default ;
    PauseDataCorrectSQLJobRequest& operator=(const PauseDataCorrectSQLJobRequest &) = default ;
    PauseDataCorrectSQLJobRequest& operator=(PauseDataCorrectSQLJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->orderId_ != nullptr && this->tid_ != nullptr && this->type_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline PauseDataCorrectSQLJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline PauseDataCorrectSQLJobRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline PauseDataCorrectSQLJobRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline PauseDataCorrectSQLJobRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the SQL task. You can call the [GetDataCorrectTaskDetail](https://help.aliyun.com/document_detail/208481.html) or [ListDBTaskSQLJob](https://help.aliyun.com/document_detail/207049.html) operation to obtain the value of this parameter.
    // 
    // >  If Type is set to SINGLE, you must pass in the value of JobId to confirm the ID of the SQL task that you want to pause.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The ID of the data change ticket. You can call the [ListOrders](https://help.aliyun.com/document_detail/144643.html) operation to query the ID of the data change ticket.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The tenant ID. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The type of the pause operation. Valid values:
    // 
    // *   ALL: pauses all SQL tasks.
    // *   SINGLE: pauses a single SQL task.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
