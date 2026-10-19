// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPRESOURCEPERMISSIONSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPRESOURCEPERMISSIONSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class DeleteAppResourcePermissionsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppResourcePermissionsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(code, code_);
      DARABONBA_PTR_TO_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_TO_JSON(message, message_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppResourcePermissionsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(code, code_);
      DARABONBA_PTR_FROM_JSON(deletedCount, deletedCount_);
      DARABONBA_PTR_FROM_JSON(message, message_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    DeleteAppResourcePermissionsResponseBody() = default ;
    DeleteAppResourcePermissionsResponseBody(const DeleteAppResourcePermissionsResponseBody &) = default ;
    DeleteAppResourcePermissionsResponseBody(DeleteAppResourcePermissionsResponseBody &&) = default ;
    DeleteAppResourcePermissionsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppResourcePermissionsResponseBody() = default ;
    DeleteAppResourcePermissionsResponseBody& operator=(const DeleteAppResourcePermissionsResponseBody &) = default ;
    DeleteAppResourcePermissionsResponseBody& operator=(DeleteAppResourcePermissionsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->code_ == nullptr
        && this->deletedCount_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DeleteAppResourcePermissionsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // deletedCount Field Functions 
    bool hasDeletedCount() const { return this->deletedCount_ != nullptr;};
    void deleteDeletedCount() { this->deletedCount_ = nullptr;};
    inline int64_t getDeletedCount() const { DARABONBA_PTR_GET_DEFAULT(deletedCount_, 0L) };
    inline DeleteAppResourcePermissionsResponseBody& setDeletedCount(int64_t deletedCount) { DARABONBA_PTR_SET_VALUE(deletedCount_, deletedCount) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline DeleteAppResourcePermissionsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DeleteAppResourcePermissionsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // 业务状态码；成功为 200
    shared_ptr<string> code_ {};
    // 删除的权限记录数
    shared_ptr<int64_t> deletedCount_ {};
    // 错误描述；成功时为空
    shared_ptr<string> message_ {};
    // 请求追踪 ID
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
