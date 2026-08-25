// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTERMINALCOUNTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETTERMINALCOUNTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Wyota20210420
{
namespace Models
{
  class GetTerminalCountResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTerminalCountResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetTerminalCountResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetTerminalCountResponseBody() = default ;
    GetTerminalCountResponseBody(const GetTerminalCountResponseBody &) = default ;
    GetTerminalCountResponseBody(GetTerminalCountResponseBody &&) = default ;
    GetTerminalCountResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTerminalCountResponseBody() = default ;
    GetTerminalCountResponseBody& operator=(const GetTerminalCountResponseBody &) = default ;
    GetTerminalCountResponseBody& operator=(GetTerminalCountResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(BindUserCount, bindUserCount_);
        DARABONBA_PTR_TO_JSON(InManageCount, inManageCount_);
        DARABONBA_PTR_TO_JSON(NotInManageCount, notInManageCount_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(BindUserCount, bindUserCount_);
        DARABONBA_PTR_FROM_JSON(InManageCount, inManageCount_);
        DARABONBA_PTR_FROM_JSON(NotInManageCount, notInManageCount_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
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
      virtual bool empty() const override { return this->bindUserCount_ == nullptr
        && this->inManageCount_ == nullptr && this->notInManageCount_ == nullptr && this->totalCount_ == nullptr; };
      // bindUserCount Field Functions 
      bool hasBindUserCount() const { return this->bindUserCount_ != nullptr;};
      void deleteBindUserCount() { this->bindUserCount_ = nullptr;};
      inline int64_t getBindUserCount() const { DARABONBA_PTR_GET_DEFAULT(bindUserCount_, 0L) };
      inline Data& setBindUserCount(int64_t bindUserCount) { DARABONBA_PTR_SET_VALUE(bindUserCount_, bindUserCount) };


      // inManageCount Field Functions 
      bool hasInManageCount() const { return this->inManageCount_ != nullptr;};
      void deleteInManageCount() { this->inManageCount_ = nullptr;};
      inline int64_t getInManageCount() const { DARABONBA_PTR_GET_DEFAULT(inManageCount_, 0L) };
      inline Data& setInManageCount(int64_t inManageCount) { DARABONBA_PTR_SET_VALUE(inManageCount_, inManageCount) };


      // notInManageCount Field Functions 
      bool hasNotInManageCount() const { return this->notInManageCount_ != nullptr;};
      void deleteNotInManageCount() { this->notInManageCount_ = nullptr;};
      inline int64_t getNotInManageCount() const { DARABONBA_PTR_GET_DEFAULT(notInManageCount_, 0L) };
      inline Data& setNotInManageCount(int64_t notInManageCount) { DARABONBA_PTR_SET_VALUE(notInManageCount_, notInManageCount) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
      inline Data& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The number of hardware terminals that are bound to users. This parameter is returned only when ClientType is set to 1.
      shared_ptr<int64_t> bindUserCount_ {};
      // The number of managed terminals.
      shared_ptr<int64_t> inManageCount_ {};
      // The number of unmanaged terminals.
      shared_ptr<int64_t> notInManageCount_ {};
      // The total number of terminals.
      shared_ptr<int64_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->httpStatusCode_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetTerminalCountResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetTerminalCountResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetTerminalCountResponseBody::Data) };
    inline GetTerminalCountResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetTerminalCountResponseBody::Data) };
    inline GetTerminalCountResponseBody& setData(const GetTerminalCountResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetTerminalCountResponseBody& setData(GetTerminalCountResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline GetTerminalCountResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetTerminalCountResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetTerminalCountResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetTerminalCountResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The status code. 200 is returned if the call is successful. An error code is returned if the call fails.
    shared_ptr<string> code_ {};
    // The terminal count statistics information.
    shared_ptr<GetTerminalCountResponseBody::Data> data_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The error message. This parameter is empty if the call is successful.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the call was successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Wyota20210420
#endif
