// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETDATACORRECTORDERDETAILRESPONSEBODYDATACORRECTORDERDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail.hpp>
#include <alibabacloud/models/GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList.hpp>
#include <alibabacloud/models/GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail.hpp>
#include <alibabacloud/models/GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(ConfigDetail, configDetail_);
      DARABONBA_PTR_TO_JSON(DatabaseList, databaseList_);
      DARABONBA_PTR_TO_JSON(ExecMode, execMode_);
      DARABONBA_PTR_TO_JSON(OrderDetail, orderDetail_);
      DARABONBA_PTR_TO_JSON(PreCheckDetail, preCheckDetail_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(ConfigDetail, configDetail_);
      DARABONBA_PTR_FROM_JSON(DatabaseList, databaseList_);
      DARABONBA_PTR_FROM_JSON(ExecMode, execMode_);
      DARABONBA_PTR_FROM_JSON(OrderDetail, orderDetail_);
      DARABONBA_PTR_FROM_JSON(PreCheckDetail, preCheckDetail_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail &&) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail() = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& operator=(const GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail &) = default ;
    GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& operator=(GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->configDetail_ != nullptr
        && this->databaseList_ != nullptr && this->execMode_ != nullptr && this->orderDetail_ != nullptr && this->preCheckDetail_ != nullptr && this->status_ != nullptr; };
    // configDetail Field Functions 
    bool hasConfigDetail() const { return this->configDetail_ != nullptr;};
    void deleteConfigDetail() { this->configDetail_ = nullptr;};
    inline const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail & configDetail() const { DARABONBA_PTR_GET_CONST(configDetail_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail) };
    inline Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail configDetail() { DARABONBA_PTR_GET(configDetail_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& setConfigDetail(const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail & configDetail) { DARABONBA_PTR_SET_VALUE(configDetail_, configDetail) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& setConfigDetail(Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail && configDetail) { DARABONBA_PTR_SET_RVALUE(configDetail_, configDetail) };


    // databaseList Field Functions 
    bool hasDatabaseList() const { return this->databaseList_ != nullptr;};
    void deleteDatabaseList() { this->databaseList_ = nullptr;};
    inline const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList & databaseList() const { DARABONBA_PTR_GET_CONST(databaseList_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList) };
    inline Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList databaseList() { DARABONBA_PTR_GET(databaseList_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& setDatabaseList(const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList & databaseList) { DARABONBA_PTR_SET_VALUE(databaseList_, databaseList) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& setDatabaseList(Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList && databaseList) { DARABONBA_PTR_SET_RVALUE(databaseList_, databaseList) };


    // execMode Field Functions 
    bool hasExecMode() const { return this->execMode_ != nullptr;};
    void deleteExecMode() { this->execMode_ = nullptr;};
    inline string execMode() const { DARABONBA_PTR_GET_DEFAULT(execMode_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& setExecMode(string execMode) { DARABONBA_PTR_SET_VALUE(execMode_, execMode) };


    // orderDetail Field Functions 
    bool hasOrderDetail() const { return this->orderDetail_ != nullptr;};
    void deleteOrderDetail() { this->orderDetail_ = nullptr;};
    inline const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail & orderDetail() const { DARABONBA_PTR_GET_CONST(orderDetail_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail) };
    inline Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail orderDetail() { DARABONBA_PTR_GET(orderDetail_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& setOrderDetail(const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail & orderDetail) { DARABONBA_PTR_SET_VALUE(orderDetail_, orderDetail) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& setOrderDetail(Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail && orderDetail) { DARABONBA_PTR_SET_RVALUE(orderDetail_, orderDetail) };


    // preCheckDetail Field Functions 
    bool hasPreCheckDetail() const { return this->preCheckDetail_ != nullptr;};
    void deletePreCheckDetail() { this->preCheckDetail_ = nullptr;};
    inline const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail & preCheckDetail() const { DARABONBA_PTR_GET_CONST(preCheckDetail_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail) };
    inline Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail preCheckDetail() { DARABONBA_PTR_GET(preCheckDetail_, Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& setPreCheckDetail(const Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail & preCheckDetail) { DARABONBA_PTR_SET_VALUE(preCheckDetail_, preCheckDetail) };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& setPreCheckDetail(Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail && preCheckDetail) { DARABONBA_PTR_SET_RVALUE(preCheckDetail_, preCheckDetail) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetail& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    // The configurations of the ticket. This parameter is used to store the configuration information specific to a data change ticket type.
    std::shared_ptr<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailConfigDetail> configDetail_ = nullptr;
    // The information about the database in which data is changed.
    std::shared_ptr<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailDatabaseList> databaseList_ = nullptr;
    // The execution mode of the ticket after the ticket is approved. Valid values:
    // 
    // - **COMMITOR**: The data change is performed by the user who submits the ticket.
    // - **AUTO**: The data change is automatically performed after the ticket is approved.
    // - **LAST_AUDITOR**: The data change is performed by the last approver of the ticket.
    std::shared_ptr<string> execMode_ = nullptr;
    // The details of the ticket.
    std::shared_ptr<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailOrderDetail> orderDetail_ = nullptr;
    // The precheck details of the ticket.
    std::shared_ptr<Models::GetDataCorrectOrderDetailResponseBodyDataCorrectOrderDetailPreCheckDetail> preCheckDetail_ = nullptr;
    // The specific state of the data change ticket. Valid values:
    // 
    // >  The state of the ticket is not exactly equivalent to the status code for the ticket. To query the status code of the ticket, you can call the [GetOrderBaseInfo](https://help.aliyun.com/document_detail/465868.html) operation and check the value of StatusCode in the response.
    // 
    // *   **new**: The ticket is created.
    // *   **precheck**: The ticket is in the pre-check phase.
    // *   **precheckFailed**: The ticket failed to pass the precheck.
    // *   **precheck_success**: The ticket passes the precheck and waits to be submitted for approval.
    // *   **toaudit**: The ticket is being reviewed.
    // *   **Approved**: The ticket is approved.
    // *   **reject**: The ticket is rejected.
    // *   **waiting**: The task is submitted and waits to be scheduled.
    // *   **processing**: The task is being executed.
    // *   **Success**: The task is successful.
    std::shared_ptr<string> status_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
