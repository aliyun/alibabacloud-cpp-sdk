// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATETABLEFROMAUTHORIZEDOSSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATETABLEFROMAUTHORIZEDOSSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class UpdateTableFromAuthorizedOssResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateTableFromAuthorizedOssResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateTableFromAuthorizedOssResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdateTableFromAuthorizedOssResponseBody() = default ;
    UpdateTableFromAuthorizedOssResponseBody(const UpdateTableFromAuthorizedOssResponseBody &) = default ;
    UpdateTableFromAuthorizedOssResponseBody(UpdateTableFromAuthorizedOssResponseBody &&) = default ;
    UpdateTableFromAuthorizedOssResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateTableFromAuthorizedOssResponseBody() = default ;
    UpdateTableFromAuthorizedOssResponseBody& operator=(const UpdateTableFromAuthorizedOssResponseBody &) = default ;
    UpdateTableFromAuthorizedOssResponseBody& operator=(UpdateTableFromAuthorizedOssResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Status, status_);
        DARABONBA_PTR_TO_JSON(TableId, tableId_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Status, status_);
        DARABONBA_PTR_FROM_JSON(TableId, tableId_);
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
      virtual bool empty() const override { return this->status_ == nullptr
        && this->tableId_ == nullptr; };
      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Data& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      // tableId Field Functions 
      bool hasTableId() const { return this->tableId_ != nullptr;};
      void deleteTableId() { this->tableId_ = nullptr;};
      inline string getTableId() const { DARABONBA_PTR_GET_DEFAULT(tableId_, "") };
      inline Data& setTableId(string tableId) { DARABONBA_PTR_SET_VALUE(tableId_, tableId) };


    protected:
      // Current table status. After upload, the status usually changes to TO_IMPORT. This means the system has accepted the uploaded file and is waiting to schedule it into the data table.
      shared_ptr<string> status_ {};
      // Same as the input TableId parameter.
      shared_ptr<string> tableId_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->status_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdateTableFromAuthorizedOssResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdateTableFromAuthorizedOssResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdateTableFromAuthorizedOssResponseBody::Data) };
    inline UpdateTableFromAuthorizedOssResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdateTableFromAuthorizedOssResponseBody::Data) };
    inline UpdateTableFromAuthorizedOssResponseBody& setData(const UpdateTableFromAuthorizedOssResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdateTableFromAuthorizedOssResponseBody& setData(UpdateTableFromAuthorizedOssResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdateTableFromAuthorizedOssResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdateTableFromAuthorizedOssResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline UpdateTableFromAuthorizedOssResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdateTableFromAuthorizedOssResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Error status code.
    shared_ptr<string> code_ {};
    // Data field of the response.
    shared_ptr<UpdateTableFromAuthorizedOssResponseBody::Data> data_ {};
    // Error message.
    shared_ptr<string> message_ {};
    // ID of the request.
    shared_ptr<string> requestId_ {};
    // Status code returned by the operation.
    shared_ptr<string> status_ {};
    // Indicates whether the operation succeeded.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
