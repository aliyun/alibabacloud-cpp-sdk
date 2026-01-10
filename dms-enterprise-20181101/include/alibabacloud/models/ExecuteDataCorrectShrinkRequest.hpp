// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEDATACORRECTSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEDATACORRECTSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ExecuteDataCorrectShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteDataCorrectShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ActionDetail, actionDetailShrink_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteDataCorrectShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ActionDetail, actionDetailShrink_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ExecuteDataCorrectShrinkRequest() = default ;
    ExecuteDataCorrectShrinkRequest(const ExecuteDataCorrectShrinkRequest &) = default ;
    ExecuteDataCorrectShrinkRequest(ExecuteDataCorrectShrinkRequest &&) = default ;
    ExecuteDataCorrectShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteDataCorrectShrinkRequest() = default ;
    ExecuteDataCorrectShrinkRequest& operator=(const ExecuteDataCorrectShrinkRequest &) = default ;
    ExecuteDataCorrectShrinkRequest& operator=(ExecuteDataCorrectShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->actionDetailShrink_ == nullptr
        && this->orderId_ == nullptr && this->realLoginUserUid_ == nullptr && this->tid_ == nullptr; };
    // actionDetailShrink Field Functions 
    bool hasActionDetailShrink() const { return this->actionDetailShrink_ != nullptr;};
    void deleteActionDetailShrink() { this->actionDetailShrink_ = nullptr;};
    inline string getActionDetailShrink() const { DARABONBA_PTR_GET_DEFAULT(actionDetailShrink_, "") };
    inline ExecuteDataCorrectShrinkRequest& setActionDetailShrink(string actionDetailShrink) { DARABONBA_PTR_SET_VALUE(actionDetailShrink_, actionDetailShrink) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t getOrderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ExecuteDataCorrectShrinkRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string getRealLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline ExecuteDataCorrectShrinkRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline string getTid() const { DARABONBA_PTR_GET_DEFAULT(tid_, "") };
    inline ExecuteDataCorrectShrinkRequest& setTid(string tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


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
    shared_ptr<string> actionDetailShrink_ {};
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
