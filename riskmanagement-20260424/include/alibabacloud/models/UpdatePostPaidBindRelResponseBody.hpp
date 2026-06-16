// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPOSTPAIDBINDRELRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPOSTPAIDBINDRELRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class UpdatePostPaidBindRelResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePostPaidBindRelResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePostPaidBindRelResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    UpdatePostPaidBindRelResponseBody() = default ;
    UpdatePostPaidBindRelResponseBody(const UpdatePostPaidBindRelResponseBody &) = default ;
    UpdatePostPaidBindRelResponseBody(UpdatePostPaidBindRelResponseBody &&) = default ;
    UpdatePostPaidBindRelResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePostPaidBindRelResponseBody() = default ;
    UpdatePostPaidBindRelResponseBody& operator=(const UpdatePostPaidBindRelResponseBody &) = default ;
    UpdatePostPaidBindRelResponseBody& operator=(UpdatePostPaidBindRelResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(Body, body_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(Body, body_);
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
      class Body : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Body& obj) { 
          DARABONBA_PTR_TO_JSON(BindCount, bindCount_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
          DARABONBA_PTR_TO_JSON(ResultCode, resultCode_);
        };
        friend void from_json(const Darabonba::Json& j, Body& obj) { 
          DARABONBA_PTR_FROM_JSON(BindCount, bindCount_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
          DARABONBA_PTR_FROM_JSON(ResultCode, resultCode_);
        };
        Body() = default ;
        Body(const Body &) = default ;
        Body(Body &&) = default ;
        Body(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Body() = default ;
        Body& operator=(const Body &) = default ;
        Body& operator=(Body &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->bindCount_ == nullptr
        && this->requestId_ == nullptr && this->resultCode_ == nullptr; };
        // bindCount Field Functions 
        bool hasBindCount() const { return this->bindCount_ != nullptr;};
        void deleteBindCount() { this->bindCount_ = nullptr;};
        inline int64_t getBindCount() const { DARABONBA_PTR_GET_DEFAULT(bindCount_, 0L) };
        inline Body& setBindCount(int64_t bindCount) { DARABONBA_PTR_SET_VALUE(bindCount_, bindCount) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Body& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


        // resultCode Field Functions 
        bool hasResultCode() const { return this->resultCode_ != nullptr;};
        void deleteResultCode() { this->resultCode_ = nullptr;};
        inline int32_t getResultCode() const { DARABONBA_PTR_GET_DEFAULT(resultCode_, 0) };
        inline Body& setResultCode(int32_t resultCode) { DARABONBA_PTR_SET_VALUE(resultCode_, resultCode) };


      protected:
        shared_ptr<int64_t> bindCount_ {};
        shared_ptr<string> requestId_ {};
        shared_ptr<int32_t> resultCode_ {};
      };

      virtual bool empty() const override { return this->body_ == nullptr; };
      // body Field Functions 
      bool hasBody() const { return this->body_ != nullptr;};
      void deleteBody() { this->body_ = nullptr;};
      inline const Data::Body & getBody() const { DARABONBA_PTR_GET_CONST(body_, Data::Body) };
      inline Data::Body getBody() { DARABONBA_PTR_GET(body_, Data::Body) };
      inline Data& setBody(const Data::Body & body) { DARABONBA_PTR_SET_VALUE(body_, body) };
      inline Data& setBody(Data::Body && body) { DARABONBA_PTR_SET_RVALUE(body_, body) };


    protected:
      shared_ptr<Data::Body> body_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline UpdatePostPaidBindRelResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const UpdatePostPaidBindRelResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, UpdatePostPaidBindRelResponseBody::Data) };
    inline UpdatePostPaidBindRelResponseBody::Data getData() { DARABONBA_PTR_GET(data_, UpdatePostPaidBindRelResponseBody::Data) };
    inline UpdatePostPaidBindRelResponseBody& setData(const UpdatePostPaidBindRelResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline UpdatePostPaidBindRelResponseBody& setData(UpdatePostPaidBindRelResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline UpdatePostPaidBindRelResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline UpdatePostPaidBindRelResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline UpdatePostPaidBindRelResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<UpdatePostPaidBindRelResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
