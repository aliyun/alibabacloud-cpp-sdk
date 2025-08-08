// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLOGICDATABASERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETLOGICDATABASERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetLogicDatabaseResponseBodyLogicDatabase.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetLogicDatabaseResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLogicDatabaseResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(LogicDatabase, logicDatabase_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetLogicDatabaseResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(LogicDatabase, logicDatabase_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetLogicDatabaseResponseBody() = default ;
    GetLogicDatabaseResponseBody(const GetLogicDatabaseResponseBody &) = default ;
    GetLogicDatabaseResponseBody(GetLogicDatabaseResponseBody &&) = default ;
    GetLogicDatabaseResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLogicDatabaseResponseBody() = default ;
    GetLogicDatabaseResponseBody& operator=(const GetLogicDatabaseResponseBody &) = default ;
    GetLogicDatabaseResponseBody& operator=(GetLogicDatabaseResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->errorCode_ != nullptr
        && this->errorMessage_ != nullptr && this->logicDatabase_ != nullptr && this->requestId_ != nullptr && this->success_ != nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string errorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetLogicDatabaseResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string errorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetLogicDatabaseResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // logicDatabase Field Functions 
    bool hasLogicDatabase() const { return this->logicDatabase_ != nullptr;};
    void deleteLogicDatabase() { this->logicDatabase_ = nullptr;};
    inline const GetLogicDatabaseResponseBodyLogicDatabase & logicDatabase() const { DARABONBA_PTR_GET_CONST(logicDatabase_, GetLogicDatabaseResponseBodyLogicDatabase) };
    inline GetLogicDatabaseResponseBodyLogicDatabase logicDatabase() { DARABONBA_PTR_GET(logicDatabase_, GetLogicDatabaseResponseBodyLogicDatabase) };
    inline GetLogicDatabaseResponseBody& setLogicDatabase(const GetLogicDatabaseResponseBodyLogicDatabase & logicDatabase) { DARABONBA_PTR_SET_VALUE(logicDatabase_, logicDatabase) };
    inline GetLogicDatabaseResponseBody& setLogicDatabase(GetLogicDatabaseResponseBodyLogicDatabase && logicDatabase) { DARABONBA_PTR_SET_RVALUE(logicDatabase_, logicDatabase) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetLogicDatabaseResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetLogicDatabaseResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code.
    std::shared_ptr<string> errorCode_ = nullptr;
    // The error message.
    std::shared_ptr<string> errorMessage_ = nullptr;
    // The details of the logical database.
    std::shared_ptr<GetLogicDatabaseResponseBodyLogicDatabase> logicDatabase_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
