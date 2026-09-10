// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLTABLELINEAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLTABLELINEAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace LHM20250116
{
namespace Models
{
  class GetSqlTableLineageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlTableLineageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlTableLineageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetSqlTableLineageResponseBody() = default ;
    GetSqlTableLineageResponseBody(const GetSqlTableLineageResponseBody &) = default ;
    GetSqlTableLineageResponseBody(GetSqlTableLineageResponseBody &&) = default ;
    GetSqlTableLineageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlTableLineageResponseBody() = default ;
    GetSqlTableLineageResponseBody& operator=(const GetSqlTableLineageResponseBody &) = default ;
    GetSqlTableLineageResponseBody& operator=(GetSqlTableLineageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(downstreamTables, downstreamTables_);
        DARABONBA_PTR_TO_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_TO_JSON(success, success_);
        DARABONBA_PTR_TO_JSON(upstreamTables, upstreamTables_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(downstreamTables, downstreamTables_);
        DARABONBA_PTR_FROM_JSON(errorMsg, errorMsg_);
        DARABONBA_PTR_FROM_JSON(success, success_);
        DARABONBA_PTR_FROM_JSON(upstreamTables, upstreamTables_);
      };
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->downstreamTables_ == nullptr
        && this->errorMsg_ == nullptr && this->success_ == nullptr && this->upstreamTables_ == nullptr; };
      // downstreamTables Field Functions 
      bool hasDownstreamTables() const { return this->downstreamTables_ != nullptr;};
      void deleteDownstreamTables() { this->downstreamTables_ = nullptr;};
      inline const vector<string> & getDownstreamTables() const { DARABONBA_PTR_GET_CONST(downstreamTables_, vector<string>) };
      inline vector<string> getDownstreamTables() { DARABONBA_PTR_GET(downstreamTables_, vector<string>) };
      inline Data& setDownstreamTables(const vector<string> & downstreamTables) { DARABONBA_PTR_SET_VALUE(downstreamTables_, downstreamTables) };
      inline Data& setDownstreamTables(vector<string> && downstreamTables) { DARABONBA_PTR_SET_RVALUE(downstreamTables_, downstreamTables) };


      // errorMsg Field Functions 
      bool hasErrorMsg() const { return this->errorMsg_ != nullptr;};
      void deleteErrorMsg() { this->errorMsg_ = nullptr;};
      inline string getErrorMsg() const { DARABONBA_PTR_GET_DEFAULT(errorMsg_, "") };
      inline Data& setErrorMsg(string errorMsg) { DARABONBA_PTR_SET_VALUE(errorMsg_, errorMsg) };


      // success Field Functions 
      bool hasSuccess() const { return this->success_ != nullptr;};
      void deleteSuccess() { this->success_ = nullptr;};
      inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
      inline Data& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


      // upstreamTables Field Functions 
      bool hasUpstreamTables() const { return this->upstreamTables_ != nullptr;};
      void deleteUpstreamTables() { this->upstreamTables_ = nullptr;};
      inline const vector<string> & getUpstreamTables() const { DARABONBA_PTR_GET_CONST(upstreamTables_, vector<string>) };
      inline vector<string> getUpstreamTables() { DARABONBA_PTR_GET(upstreamTables_, vector<string>) };
      inline Data& setUpstreamTables(const vector<string> & upstreamTables) { DARABONBA_PTR_SET_VALUE(upstreamTables_, upstreamTables) };
      inline Data& setUpstreamTables(vector<string> && upstreamTables) { DARABONBA_PTR_SET_RVALUE(upstreamTables_, upstreamTables) };


    protected:
      // The list of downstream tables.
      shared_ptr<vector<string>> downstreamTables_ {};
      // The error message.
      shared_ptr<string> errorMsg_ {};
      // Indicates whether the call was successful. Valid values:
      // - true: Successful.
      // - false: Failed. Use errCode and errMessage to troubleshoot the issue.
      shared_ptr<bool> success_ {};
      // The list of upstream tables.
      shared_ptr<vector<string>> upstreamTables_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetSqlTableLineageResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetSqlTableLineageResponseBody::Data) };
    inline GetSqlTableLineageResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetSqlTableLineageResponseBody::Data) };
    inline GetSqlTableLineageResponseBody& setData(const GetSqlTableLineageResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSqlTableLineageResponseBody& setData(GetSqlTableLineageResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetSqlTableLineageResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetSqlTableLineageResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSqlTableLineageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSqlTableLineageResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The data body returned by the operation. For the field structure, see the child parameters.
    shared_ptr<GetSqlTableLineageResponseBody::Data> data_ {};
    // The error code. An empty string is returned if the call is successful.
    shared_ptr<string> errCode_ {};
    // The error message. An empty string is returned if the call is successful.
    shared_ptr<string> errMessage_ {};
    // The request ID, which is used to locate and troubleshoot issues with the current call.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful. Valid values:
    // - true: Successful.
    // - false: Failed. Use errCode and errMessage to troubleshoot the issue.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
