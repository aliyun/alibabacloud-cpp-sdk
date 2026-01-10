// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEDATACORRECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEDATACORRECTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ExecuteDataCorrectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteDataCorrectRequest& obj) { 
      DARABONBA_ANY_TO_JSON(ActionDetail, actionDetail_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteDataCorrectRequest& obj) { 
      DARABONBA_ANY_FROM_JSON(ActionDetail, actionDetail_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ExecuteDataCorrectRequest() = default ;
    ExecuteDataCorrectRequest(const ExecuteDataCorrectRequest &) = default ;
    ExecuteDataCorrectRequest(ExecuteDataCorrectRequest &&) = default ;
    ExecuteDataCorrectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteDataCorrectRequest() = default ;
    ExecuteDataCorrectRequest& operator=(const ExecuteDataCorrectRequest &) = default ;
    ExecuteDataCorrectRequest& operator=(ExecuteDataCorrectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionDetail_ == nullptr
        && this->orderId_ == nullptr && this->realLoginUserUid_ == nullptr && this->tid_ == nullptr; };
    // actionDetail Field Functions 
    bool hasActionDetail() const { return this->actionDetail_ != nullptr;};
    void deleteActionDetail() { this->actionDetail_ = nullptr;};
    inline     const Darabonba::Json & getActionDetail() const { DARABONBA_GET(actionDetail_) };
    Darabonba::Json & getActionDetail() { DARABONBA_GET(actionDetail_) };
    inline ExecuteDataCorrectRequest& setActionDetail(const Darabonba::Json & actionDetail) { DARABONBA_SET_VALUE(actionDetail_, actionDetail) };
    inline ExecuteDataCorrectRequest& setActionDetail(Darabonba::Json && actionDetail) { DARABONBA_SET_RVALUE(actionDetail_, actionDetail) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ExecuteDataCorrectRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline ExecuteDataCorrectRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline string getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
    inline ExecuteDataCorrectRequest& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The parameters that are required to perform the data change.
    // 
    // ```
    // 
    // json
    // "actionDetail" : {
    //     "startTime" :"2021-07-01 00:00:00", // Specify the start time to change data. If you want to immediately change data, you do not need to set this parameter. 
    //     "endTime" : "2021-07-01 01:00:00", // Specify the end time to change data. If you want to immediately change data, you do not need to set this parameter. 
    //     "transaction" : false, // Specify whether to change data as a transaction. 
    //     "backupData" : true // Specify whether to back up data. 
    //   }
    // ```
    Darabonba::Json actionDetail_ {};
    // The ID of the ticket. You can call the [ListOrders](https://help.aliyun.com/document_detail/144643.html) operation to query the ID of the ticket.
    // 
    // This parameter is required.
    shared_ptr<int64_t> orderId_ {};
    // The ID of the Alibaba Cloud account that is used to call the API operation.
    shared_ptr<string> realLoginUserUid_ {};
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    shared_ptr<string> tid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
