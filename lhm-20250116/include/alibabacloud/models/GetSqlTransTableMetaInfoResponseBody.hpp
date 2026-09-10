// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSQLTRANSTABLEMETAINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETSQLTRANSTABLEMETAINFORESPONSEBODY_HPP_
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
  class GetSqlTransTableMetaInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetSqlTransTableMetaInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(errCode, errCode_);
      DARABONBA_PTR_TO_JSON(errMessage, errMessage_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetSqlTransTableMetaInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(errCode, errCode_);
      DARABONBA_PTR_FROM_JSON(errMessage, errMessage_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(success, success_);
    };
    GetSqlTransTableMetaInfoResponseBody() = default ;
    GetSqlTransTableMetaInfoResponseBody(const GetSqlTransTableMetaInfoResponseBody &) = default ;
    GetSqlTransTableMetaInfoResponseBody(GetSqlTransTableMetaInfoResponseBody &&) = default ;
    GetSqlTransTableMetaInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetSqlTransTableMetaInfoResponseBody() = default ;
    GetSqlTransTableMetaInfoResponseBody& operator=(const GetSqlTransTableMetaInfoResponseBody &) = default ;
    GetSqlTransTableMetaInfoResponseBody& operator=(GetSqlTransTableMetaInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->data_ == nullptr
        && this->errCode_ == nullptr && this->errMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<string> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<string>) };
    inline vector<string> getData() { DARABONBA_PTR_GET(data_, vector<string>) };
    inline GetSqlTransTableMetaInfoResponseBody& setData(const vector<string> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetSqlTransTableMetaInfoResponseBody& setData(vector<string> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // errCode Field Functions 
    bool hasErrCode() const { return this->errCode_ != nullptr;};
    void deleteErrCode() { this->errCode_ = nullptr;};
    inline string getErrCode() const { DARABONBA_PTR_GET_DEFAULT(errCode_, "") };
    inline GetSqlTransTableMetaInfoResponseBody& setErrCode(string errCode) { DARABONBA_PTR_SET_VALUE(errCode_, errCode) };


    // errMessage Field Functions 
    bool hasErrMessage() const { return this->errMessage_ != nullptr;};
    void deleteErrMessage() { this->errMessage_ = nullptr;};
    inline string getErrMessage() const { DARABONBA_PTR_GET_DEFAULT(errMessage_, "") };
    inline GetSqlTransTableMetaInfoResponseBody& setErrMessage(string errMessage) { DARABONBA_PTR_SET_VALUE(errMessage_, errMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetSqlTransTableMetaInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetSqlTransTableMetaInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The list of table names parsed from the script.
    shared_ptr<vector<string>> data_ {};
    // The error code. This value is an empty string if the call succeeds.
    shared_ptr<string> errCode_ {};
    // The error message. This value is an empty string if the call succeeds.
    shared_ptr<string> errMessage_ {};
    // The request ID that uniquely identifies the call. Provide this value when troubleshooting issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call is successful. Valid values:
    // - true: The call is successful.
    // - false: The call failed. Check errCode and errMessage for troubleshooting.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace LHM20250116
#endif
