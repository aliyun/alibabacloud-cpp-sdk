// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPLOGRESPONSEBODYOPLOGDETAILSOPLOGDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETOPLOGRESPONSEBODYOPLOGDETAILSOPLOGDETAIL_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetOpLogResponseBodyOpLogDetailsOpLogDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpLogResponseBodyOpLogDetailsOpLogDetail& obj) { 
      DARABONBA_PTR_TO_JSON(Database, database_);
      DARABONBA_PTR_TO_JSON(Module, module_);
      DARABONBA_PTR_TO_JSON(OpContent, opContent_);
      DARABONBA_PTR_TO_JSON(OpTime, opTime_);
      DARABONBA_PTR_TO_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_TO_JSON(OrderId, orderId_);
      DARABONBA_PTR_TO_JSON(UserId, userId_);
      DARABONBA_PTR_TO_JSON(UserNick, userNick_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpLogResponseBodyOpLogDetailsOpLogDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(Database, database_);
      DARABONBA_PTR_FROM_JSON(Module, module_);
      DARABONBA_PTR_FROM_JSON(OpContent, opContent_);
      DARABONBA_PTR_FROM_JSON(OpTime, opTime_);
      DARABONBA_PTR_FROM_JSON(OpUserId, opUserId_);
      DARABONBA_PTR_FROM_JSON(OrderId, orderId_);
      DARABONBA_PTR_FROM_JSON(UserId, userId_);
      DARABONBA_PTR_FROM_JSON(UserNick, userNick_);
    };
    GetOpLogResponseBodyOpLogDetailsOpLogDetail() = default ;
    GetOpLogResponseBodyOpLogDetailsOpLogDetail(const GetOpLogResponseBodyOpLogDetailsOpLogDetail &) = default ;
    GetOpLogResponseBodyOpLogDetailsOpLogDetail(GetOpLogResponseBodyOpLogDetailsOpLogDetail &&) = default ;
    GetOpLogResponseBodyOpLogDetailsOpLogDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpLogResponseBodyOpLogDetailsOpLogDetail() = default ;
    GetOpLogResponseBodyOpLogDetailsOpLogDetail& operator=(const GetOpLogResponseBodyOpLogDetailsOpLogDetail &) = default ;
    GetOpLogResponseBodyOpLogDetailsOpLogDetail& operator=(GetOpLogResponseBodyOpLogDetailsOpLogDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->database_ != nullptr
        && this->module_ != nullptr && this->opContent_ != nullptr && this->opTime_ != nullptr && this->opUserId_ != nullptr && this->orderId_ != nullptr
        && this->userId_ != nullptr && this->userNick_ != nullptr; };
    // database Field Functions 
    bool hasDatabase() const { return this->database_ != nullptr;};
    void deleteDatabase() { this->database_ = nullptr;};
    inline string database() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
    inline GetOpLogResponseBodyOpLogDetailsOpLogDetail& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


    // module Field Functions 
    bool hasModule() const { return this->module_ != nullptr;};
    void deleteModule() { this->module_ = nullptr;};
    inline string module() const { DARABONBA_PTR_GET_DEFAULT(module_, "") };
    inline GetOpLogResponseBodyOpLogDetailsOpLogDetail& setModule(string module) { DARABONBA_PTR_SET_VALUE(module_, module) };


    // opContent Field Functions 
    bool hasOpContent() const { return this->opContent_ != nullptr;};
    void deleteOpContent() { this->opContent_ = nullptr;};
    inline string opContent() const { DARABONBA_PTR_GET_DEFAULT(opContent_, "") };
    inline GetOpLogResponseBodyOpLogDetailsOpLogDetail& setOpContent(string opContent) { DARABONBA_PTR_SET_VALUE(opContent_, opContent) };


    // opTime Field Functions 
    bool hasOpTime() const { return this->opTime_ != nullptr;};
    void deleteOpTime() { this->opTime_ = nullptr;};
    inline string opTime() const { DARABONBA_PTR_GET_DEFAULT(opTime_, "") };
    inline GetOpLogResponseBodyOpLogDetailsOpLogDetail& setOpTime(string opTime) { DARABONBA_PTR_SET_VALUE(opTime_, opTime) };


    // opUserId Field Functions 
    bool hasOpUserId() const { return this->opUserId_ != nullptr;};
    void deleteOpUserId() { this->opUserId_ = nullptr;};
    inline int64_t opUserId() const { DARABONBA_PTR_GET_DEFAULT(opUserId_, 0L) };
    inline GetOpLogResponseBodyOpLogDetailsOpLogDetail& setOpUserId(int64_t opUserId) { DARABONBA_PTR_SET_VALUE(opUserId_, opUserId) };


    // orderId Field Functions 
    bool hasOrderId() const { return this->orderId_ != nullptr;};
    void deleteOrderId() { this->orderId_ = nullptr;};
    inline int64_t orderId() const { DARABONBA_PTR_GET_DEFAULT(orderId_, 0L) };
    inline GetOpLogResponseBodyOpLogDetailsOpLogDetail& setOrderId(int64_t orderId) { DARABONBA_PTR_SET_VALUE(orderId_, orderId) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline GetOpLogResponseBodyOpLogDetailsOpLogDetail& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


    // userNick Field Functions 
    bool hasUserNick() const { return this->userNick_ != nullptr;};
    void deleteUserNick() { this->userNick_ = nullptr;};
    inline string userNick() const { DARABONBA_PTR_GET_DEFAULT(userNick_, "") };
    inline GetOpLogResponseBodyOpLogDetailsOpLogDetail& setUserNick(string userNick) { DARABONBA_PTR_SET_VALUE(userNick_, userNick) };


  protected:
    // The endpoint of the database instance.
    // 
    // > 
    // 
    // *   This parameter is valid only for database instances of the LocalInstance type.
    // 
    // *   This parameter is valid only for operations on the functional modules related to tasks.
    std::shared_ptr<string> database_ = nullptr;
    // The functional module for which the operation log is queried.
    std::shared_ptr<string> module_ = nullptr;
    // The details of the operation.
    std::shared_ptr<string> opContent_ = nullptr;
    // The time when the operation was performed.
    std::shared_ptr<string> opTime_ = nullptr;
    // The ID of the user who performed the operation.
    std::shared_ptr<int64_t> opUserId_ = nullptr;
    // The ID of the ticket or task.
    // 
    // >  This parameter is valid only for operations on the functional modules related to tasks and the task management module in system management.
    std::shared_ptr<int64_t> orderId_ = nullptr;
    // The ID of the Alibaba Cloud account.
    std::shared_ptr<string> userId_ = nullptr;
    // The display name of the user.
    std::shared_ptr<string> userNick_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
