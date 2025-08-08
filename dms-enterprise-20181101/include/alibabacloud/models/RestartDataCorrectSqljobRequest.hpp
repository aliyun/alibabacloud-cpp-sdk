// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RESTARTDATACORRECTSQLJOBREQUEST_HPP_
#define ALIBABACLOUD_MODELS_RESTARTDATACORRECTSQLJOBREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class RestartDataCorrectSQLJobRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RestartDataCorrectSQLJobRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, RestartDataCorrectSQLJobRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    RestartDataCorrectSQLJobRequest() = default ;
    RestartDataCorrectSQLJobRequest(const RestartDataCorrectSQLJobRequest &) = default ;
    RestartDataCorrectSQLJobRequest(RestartDataCorrectSQLJobRequest &&) = default ;
    RestartDataCorrectSQLJobRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RestartDataCorrectSQLJobRequest() = default ;
    RestartDataCorrectSQLJobRequest& operator=(const RestartDataCorrectSQLJobRequest &) = default ;
    RestartDataCorrectSQLJobRequest& operator=(RestartDataCorrectSQLJobRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->jobId_ != nullptr
        && this->orderId_ != nullptr && this->realLoginUserUid_ != nullptr && this->tid_ != nullptr && this->type_ != nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline RestartDataCorrectSQLJobRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline RestartDataCorrectSQLJobRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string realLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline RestartDataCorrectSQLJobRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline RestartDataCorrectSQLJobRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline RestartDataCorrectSQLJobRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the SQL task. You can call the [GetDataCorrectTaskDetail](https://help.aliyun.com/document_detail/208481.html) and [ListDBTaskSQLJob](https://help.aliyun.com/document_detail/207049.html) operations to obtain the value of this parameter.
    // 
    // If the Type parameter is set to SINGLE, you must pass the value of the JobId parameter to confirm the ID of the SQL task that you want to rerun.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The ID of the data change ticket. You can call the [ListOrders](https://help.aliyun.com/document_detail/144643.html) operation to query the ID of the data change ticket.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> realLoginUserUid_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
    // The type of the rerun operation. Valid values:
    // 
    // *   **ALL**: reruns all SQL tasks.
    // *   **SINGLE**: reruns a single SQL task.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
