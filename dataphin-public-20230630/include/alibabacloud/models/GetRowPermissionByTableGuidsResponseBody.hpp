// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETROWPERMISSIONBYTABLEGUIDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETROWPERMISSIONBYTABLEGUIDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class GetRowPermissionByTableGuidsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRowPermissionByTableGuidsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetRowPermissionByTableGuidsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetRowPermissionByTableGuidsResponseBody() = default ;
    GetRowPermissionByTableGuidsResponseBody(const GetRowPermissionByTableGuidsResponseBody &) = default ;
    GetRowPermissionByTableGuidsResponseBody(GetRowPermissionByTableGuidsResponseBody &&) = default ;
    GetRowPermissionByTableGuidsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRowPermissionByTableGuidsResponseBody() = default ;
    GetRowPermissionByTableGuidsResponseBody& operator=(const GetRowPermissionByTableGuidsResponseBody &) = default ;
    GetRowPermissionByTableGuidsResponseBody& operator=(GetRowPermissionByTableGuidsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(RowPermissionDesc, rowPermissionDesc_);
        DARABONBA_PTR_TO_JSON(RowPermissionId, rowPermissionId_);
        DARABONBA_PTR_TO_JSON(RowPermissionName, rowPermissionName_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(RowPermissionDesc, rowPermissionDesc_);
        DARABONBA_PTR_FROM_JSON(RowPermissionId, rowPermissionId_);
        DARABONBA_PTR_FROM_JSON(RowPermissionName, rowPermissionName_);
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
      virtual bool empty() const override { return this->rowPermissionDesc_ == nullptr
        && this->rowPermissionId_ == nullptr && this->rowPermissionName_ == nullptr; };
      // rowPermissionDesc Field Functions 
      bool hasRowPermissionDesc() const { return this->rowPermissionDesc_ != nullptr;};
      void deleteRowPermissionDesc() { this->rowPermissionDesc_ = nullptr;};
      inline string getRowPermissionDesc() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionDesc_, "") };
      inline Data& setRowPermissionDesc(string rowPermissionDesc) { DARABONBA_PTR_SET_VALUE(rowPermissionDesc_, rowPermissionDesc) };


      // rowPermissionId Field Functions 
      bool hasRowPermissionId() const { return this->rowPermissionId_ != nullptr;};
      void deleteRowPermissionId() { this->rowPermissionId_ = nullptr;};
      inline string getRowPermissionId() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionId_, "") };
      inline Data& setRowPermissionId(string rowPermissionId) { DARABONBA_PTR_SET_VALUE(rowPermissionId_, rowPermissionId) };


      // rowPermissionName Field Functions 
      bool hasRowPermissionName() const { return this->rowPermissionName_ != nullptr;};
      void deleteRowPermissionName() { this->rowPermissionName_ = nullptr;};
      inline string getRowPermissionName() const { DARABONBA_PTR_GET_DEFAULT(rowPermissionName_, "") };
      inline Data& setRowPermissionName(string rowPermissionName) { DARABONBA_PTR_SET_VALUE(rowPermissionName_, rowPermissionName) };


    protected:
      // Row permission description
      shared_ptr<string> rowPermissionDesc_ {};
      // Row permission ID
      shared_ptr<string> rowPermissionId_ {};
      // Row permission name
      shared_ptr<string> rowPermissionName_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetRowPermissionByTableGuidsResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetRowPermissionByTableGuidsResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetRowPermissionByTableGuidsResponseBody::Data>) };
    inline vector<GetRowPermissionByTableGuidsResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetRowPermissionByTableGuidsResponseBody::Data>) };
    inline GetRowPermissionByTableGuidsResponseBody& setData(const vector<GetRowPermissionByTableGuidsResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetRowPermissionByTableGuidsResponseBody& setData(vector<GetRowPermissionByTableGuidsResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetRowPermissionByTableGuidsResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetRowPermissionByTableGuidsResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetRowPermissionByTableGuidsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetRowPermissionByTableGuidsResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error code. A value of OK indicates that the request was successful
    shared_ptr<string> code_ {};
    // Response data
    shared_ptr<vector<GetRowPermissionByTableGuidsResponseBody::Data>> data_ {};
    // HTTP status code of the backend response
    shared_ptr<int32_t> httpStatusCode_ {};
    // Error message
    shared_ptr<string> message_ {};
    // Request ID
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
