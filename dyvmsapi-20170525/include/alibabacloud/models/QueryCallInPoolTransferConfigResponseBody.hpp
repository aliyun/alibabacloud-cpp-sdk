// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCALLINPOOLTRANSFERCONFIGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCALLINPOOLTRANSFERCONFIGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dyvmsapi20170525
{
namespace Models
{
  class QueryCallInPoolTransferConfigResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCallInPoolTransferConfigResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCallInPoolTransferConfigResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    QueryCallInPoolTransferConfigResponseBody() = default ;
    QueryCallInPoolTransferConfigResponseBody(const QueryCallInPoolTransferConfigResponseBody &) = default ;
    QueryCallInPoolTransferConfigResponseBody(QueryCallInPoolTransferConfigResponseBody &&) = default ;
    QueryCallInPoolTransferConfigResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCallInPoolTransferConfigResponseBody() = default ;
    QueryCallInPoolTransferConfigResponseBody& operator=(const QueryCallInPoolTransferConfigResponseBody &) = default ;
    QueryCallInPoolTransferConfigResponseBody& operator=(QueryCallInPoolTransferConfigResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(CalledRouteMode, calledRouteMode_);
        DARABONBA_PTR_TO_JSON(Details, details_);
        DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_TO_JSON(TransferTimeout, transferTimeout_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(CalledRouteMode, calledRouteMode_);
        DARABONBA_PTR_FROM_JSON(Details, details_);
        DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
        DARABONBA_PTR_FROM_JSON(TransferTimeout, transferTimeout_);
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
      class Details : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Details& obj) { 
          DARABONBA_PTR_TO_JSON(Called, called_);
        };
        friend void from_json(const Darabonba::Json& j, Details& obj) { 
          DARABONBA_PTR_FROM_JSON(Called, called_);
        };
        Details() = default ;
        Details(const Details &) = default ;
        Details(Details &&) = default ;
        Details(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Details() = default ;
        Details& operator=(const Details &) = default ;
        Details& operator=(Details &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->called_ == nullptr; };
        // called Field Functions 
        bool hasCalled() const { return this->called_ != nullptr;};
        void deleteCalled() { this->called_ = nullptr;};
        inline string getCalled() const { DARABONBA_PTR_GET_DEFAULT(called_, "") };
        inline Details& setCalled(string called) { DARABONBA_PTR_SET_VALUE(called_, called) };


      protected:
        // The number used to transfer the call.
        shared_ptr<string> called_ {};
      };

      virtual bool empty() const override { return this->calledRouteMode_ == nullptr
        && this->details_ == nullptr && this->gmtCreate_ == nullptr && this->transferTimeout_ == nullptr; };
      // calledRouteMode Field Functions 
      bool hasCalledRouteMode() const { return this->calledRouteMode_ != nullptr;};
      void deleteCalledRouteMode() { this->calledRouteMode_ = nullptr;};
      inline string getCalledRouteMode() const { DARABONBA_PTR_GET_DEFAULT(calledRouteMode_, "") };
      inline Data& setCalledRouteMode(string calledRouteMode) { DARABONBA_PTR_SET_VALUE(calledRouteMode_, calledRouteMode) };


      // details Field Functions 
      bool hasDetails() const { return this->details_ != nullptr;};
      void deleteDetails() { this->details_ = nullptr;};
      inline const vector<Data::Details> & getDetails() const { DARABONBA_PTR_GET_CONST(details_, vector<Data::Details>) };
      inline vector<Data::Details> getDetails() { DARABONBA_PTR_GET(details_, vector<Data::Details>) };
      inline Data& setDetails(const vector<Data::Details> & details) { DARABONBA_PTR_SET_VALUE(details_, details) };
      inline Data& setDetails(vector<Data::Details> && details) { DARABONBA_PTR_SET_RVALUE(details_, details) };


      // gmtCreate Field Functions 
      bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
      void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
      inline int64_t getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, 0L) };
      inline Data& setGmtCreate(int64_t gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


      // transferTimeout Field Functions 
      bool hasTransferTimeout() const { return this->transferTimeout_ != nullptr;};
      void deleteTransferTimeout() { this->transferTimeout_ = nullptr;};
      inline string getTransferTimeout() const { DARABONBA_PTR_GET_DEFAULT(transferTimeout_, "") };
      inline Data& setTransferTimeout(string transferTimeout) { DARABONBA_PTR_SET_VALUE(transferTimeout_, transferTimeout) };


    protected:
      // The call mode. Valid values:
      // 
      // *   **roundRobin**
      // *   **random**
      shared_ptr<string> calledRouteMode_ {};
      // The details of the response parameters.
      shared_ptr<vector<Data::Details>> details_ {};
      // The time when the call transfer task was created.
      shared_ptr<int64_t> gmtCreate_ {};
      // The timeout period for transferring the call.
      shared_ptr<string> transferTimeout_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryCallInPoolTransferConfigResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const QueryCallInPoolTransferConfigResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, QueryCallInPoolTransferConfigResponseBody::Data) };
    inline QueryCallInPoolTransferConfigResponseBody::Data getData() { DARABONBA_PTR_GET(data_, QueryCallInPoolTransferConfigResponseBody::Data) };
    inline QueryCallInPoolTransferConfigResponseBody& setData(const QueryCallInPoolTransferConfigResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline QueryCallInPoolTransferConfigResponseBody& setData(QueryCallInPoolTransferConfigResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline QueryCallInPoolTransferConfigResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCallInPoolTransferConfigResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The response code.
    // 
    // *   The value OK indicates that the request was successful.
    // *   For more information about other response codes, see [API error codes](https://help.aliyun.com/document_detail/112502.html).
    shared_ptr<string> code_ {};
    // The response parameters.
    shared_ptr<QueryCallInPoolTransferConfigResponseBody::Data> data_ {};
    // The returned message.
    shared_ptr<string> message_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dyvmsapi20170525
#endif
