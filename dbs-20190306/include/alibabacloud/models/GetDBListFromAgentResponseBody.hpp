// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDBLISTFROMAGENTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDBLISTFROMAGENTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dbs20190306
{
namespace Models
{
  class GetDBListFromAgentResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDBListFromAgentResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(ErrCode, errCode_);
      DARABONBA_PTR_TO_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetDBListFromAgentResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(ErrCode, errCode_);
      DARABONBA_PTR_FROM_JSON(ErrMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetDBListFromAgentResponseBody() = default ;
    GetDBListFromAgentResponseBody(const GetDBListFromAgentResponseBody &) = default ;
    GetDBListFromAgentResponseBody(GetDBListFromAgentResponseBody &&) = default ;
    GetDBListFromAgentResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDBListFromAgentResponseBody() = default ;
    GetDBListFromAgentResponseBody& operator=(const GetDBListFromAgentResponseBody &) = default ;
    GetDBListFromAgentResponseBody& operator=(GetDBListFromAgentResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class DbList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const DbList& obj) { 
        DARABONBA_PTR_TO_JSON(dbName, dbName_);
      };
      friend void from_json(const Darabonba::Json& j, DbList& obj) { 
        DARABONBA_PTR_FROM_JSON(dbName, dbName_);
      };
      DbList() = default ;
      DbList(const DbList &) = default ;
      DbList(DbList &&) = default ;
      DbList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~DbList() = default ;
      DbList& operator=(const DbList &) = default ;
      DbList& operator=(DbList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->dbName_ == nullptr; };
      // dbName Field Functions 
      bool hasDbName() const { return this->dbName_ != nullptr;};
      void deleteDbName() { this->dbName_ = nullptr;};
      inline const vector<string> & getDbName() const { DARABONBA_PTR_GET_CONST(dbName_, vector<string>) };
      inline vector<string> getDbName() { DARABONBA_PTR_GET(dbName_, vector<string>) };
      inline DbList& setDbName(const vector<string> & dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };
      inline DbList& setDbName(vector<string> && dbName) { DARABONBA_PTR_SET_RVALUE(dbName_, dbName) };


    protected:
      shared_ptr<vector<string>> dbName_ {};
    };

    virtual bool empty() const override { return this->dbList_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline const GetDBListFromAgentResponseBody::DbList & getDbList() const { DARABONBA_PTR_GET_CONST(dbList_, GetDBListFromAgentResponseBody::DbList) };
    inline GetDBListFromAgentResponseBody::DbList getDbList() { DARABONBA_PTR_GET(dbList_, GetDBListFromAgentResponseBody::DbList) };
    inline GetDBListFromAgentResponseBody& setDbList(const GetDBListFromAgentResponseBody::DbList & dbList) { DARABONBA_PTR_SET_VALUE(dbList_, dbList) };
    inline GetDBListFromAgentResponseBody& setDbList(GetDBListFromAgentResponseBody::DbList && dbList) { DARABONBA_PTR_SET_RVALUE(dbList_, dbList) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetDBListFromAgentResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetDBListFromAgentResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetDBListFromAgentResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDBListFromAgentResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetDBListFromAgentResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<GetDBListFromAgentResponseBody::DbList> dbList_ {};
    // The error code.
    shared_ptr<string> errCode_ {};
    // The error message.
    shared_ptr<string> errMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dbs20190306
#endif
