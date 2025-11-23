// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDATACORRECTEXECSQLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDATACORRECTEXECSQLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class ModifyDataCorrectExecSQLRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDataCorrectExecSQLRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExecSQL, execSQL_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_TO_JSON(Tid, tid_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDataCorrectExecSQLRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExecSQL, execSQL_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(RealLoginUserUid, realLoginUserUid_);
      DARABONBA_PTR_FROM_JSON(Tid, tid_);
    };
    ModifyDataCorrectExecSQLRequest() = default ;
    ModifyDataCorrectExecSQLRequest(const ModifyDataCorrectExecSQLRequest &) = default ;
    ModifyDataCorrectExecSQLRequest(ModifyDataCorrectExecSQLRequest &&) = default ;
    ModifyDataCorrectExecSQLRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDataCorrectExecSQLRequest() = default ;
    ModifyDataCorrectExecSQLRequest& operator=(const ModifyDataCorrectExecSQLRequest &) = default ;
    ModifyDataCorrectExecSQLRequest& operator=(ModifyDataCorrectExecSQLRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->execSQL_ == nullptr
        && return this->orderId_ == nullptr && return this->realLoginUserUid_ == nullptr && return this->tid_ == nullptr; };
    // execSQL Field Functions 
    bool hasExecSQL() const { return this->execSQL_ != nullptr;};
    void deleteExecSQL() { this->execSQL_ = nullptr;};
    inline string execSQL() const { DARABONBA_PTR_GET_DEFAULT(execSQL_, "") };
    inline ModifyDataCorrectExecSQLRequest& setExecSQL(string execSQL) { DARABONBA_PTR_SET_VALUE(execSQL_, execSQL) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline ModifyDataCorrectExecSQLRequest& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // realLoginUserUid Field Functions 
    bool hasRealLoginUserUid() const { return this->realLoginUserUid_ != nullptr;};
    void deleteRealLoginUserUid() { this->realLoginUserUid_ = nullptr;};
    inline string realLoginUserUid() const { DARABONBA_PTR_GET_DEFAULT(realLoginUserUid_, "") };
    inline ModifyDataCorrectExecSQLRequest& setRealLoginUserUid(string realLoginUserUid) { DARABONBA_PTR_SET_VALUE(realLoginUserUid_, realLoginUserUid) };


    // tid Field Functions 
    bool hasTid() const { return this->tid_ != nullptr;};
    void deleteTid() { this->tid_ = nullptr;};
    inline int64_t tid() const { DARABONBA_PTR_GET_DEFAULT(tid_, 0L) };
    inline ModifyDataCorrectExecSQLRequest& setTid(int64_t tid) { DARABONBA_PTR_SET_VALUE(tid_, tid) };


  protected:
    // The new SQL script.
    // 
    // This parameter is required.
    std::shared_ptr<string> execSQL_ = nullptr;
    // The ID of the data change ticket.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    std::shared_ptr<string> realLoginUserUid_ = nullptr;
    // The ID of the tenant. You can call the [GetUserActiveTenant](https://help.aliyun.com/document_detail/198073.html) operation to query the tenant ID.
    std::shared_ptr<int64_t> tid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
