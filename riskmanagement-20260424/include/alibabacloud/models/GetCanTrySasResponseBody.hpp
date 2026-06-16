// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCANTRYSASRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCANTRYSASRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace RiskManagement20260424
{
namespace Models
{
  class GetCanTrySasResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCanTrySasResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCanTrySasResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCanTrySasResponseBody() = default ;
    GetCanTrySasResponseBody(const GetCanTrySasResponseBody &) = default ;
    GetCanTrySasResponseBody(GetCanTrySasResponseBody &&) = default ;
    GetCanTrySasResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCanTrySasResponseBody() = default ;
    GetCanTrySasResponseBody& operator=(const GetCanTrySasResponseBody &) = default ;
    GetCanTrySasResponseBody& operator=(GetCanTrySasResponseBody &&) = default ;
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
          DARABONBA_PTR_TO_JSON(Data, data_);
          DARABONBA_PTR_TO_JSON(RequestId, requestId_);
        };
        friend void from_json(const Darabonba::Json& j, Body& obj) { 
          DARABONBA_PTR_FROM_JSON(Data, data_);
          DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
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
        class Data : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Data& obj) { 
            DARABONBA_PTR_TO_JSON(CanTry, canTry_);
            DARABONBA_PTR_TO_JSON(CanTryVersions, canTryVersions_);
            DARABONBA_PTR_TO_JSON(TryType, tryType_);
          };
          friend void from_json(const Darabonba::Json& j, Data& obj) { 
            DARABONBA_PTR_FROM_JSON(CanTry, canTry_);
            DARABONBA_PTR_FROM_JSON(CanTryVersions, canTryVersions_);
            DARABONBA_PTR_FROM_JSON(TryType, tryType_);
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
          virtual bool empty() const override { return this->canTry_ == nullptr
        && this->canTryVersions_ == nullptr && this->tryType_ == nullptr; };
          // canTry Field Functions 
          bool hasCanTry() const { return this->canTry_ != nullptr;};
          void deleteCanTry() { this->canTry_ = nullptr;};
          inline int32_t getCanTry() const { DARABONBA_PTR_GET_DEFAULT(canTry_, 0) };
          inline Data& setCanTry(int32_t canTry) { DARABONBA_PTR_SET_VALUE(canTry_, canTry) };


          // canTryVersions Field Functions 
          bool hasCanTryVersions() const { return this->canTryVersions_ != nullptr;};
          void deleteCanTryVersions() { this->canTryVersions_ = nullptr;};
          inline const vector<int32_t> & getCanTryVersions() const { DARABONBA_PTR_GET_CONST(canTryVersions_, vector<int32_t>) };
          inline vector<int32_t> getCanTryVersions() { DARABONBA_PTR_GET(canTryVersions_, vector<int32_t>) };
          inline Data& setCanTryVersions(const vector<int32_t> & canTryVersions) { DARABONBA_PTR_SET_VALUE(canTryVersions_, canTryVersions) };
          inline Data& setCanTryVersions(vector<int32_t> && canTryVersions) { DARABONBA_PTR_SET_RVALUE(canTryVersions_, canTryVersions) };


          // tryType Field Functions 
          bool hasTryType() const { return this->tryType_ != nullptr;};
          void deleteTryType() { this->tryType_ = nullptr;};
          inline int32_t getTryType() const { DARABONBA_PTR_GET_DEFAULT(tryType_, 0) };
          inline Data& setTryType(int32_t tryType) { DARABONBA_PTR_SET_VALUE(tryType_, tryType) };


        protected:
          shared_ptr<int32_t> canTry_ {};
          shared_ptr<vector<int32_t>> canTryVersions_ {};
          shared_ptr<int32_t> tryType_ {};
        };

        virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
        // data Field Functions 
        bool hasData() const { return this->data_ != nullptr;};
        void deleteData() { this->data_ = nullptr;};
        inline const Body::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, Body::Data) };
        inline Body::Data getData() { DARABONBA_PTR_GET(data_, Body::Data) };
        inline Body& setData(const Body::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
        inline Body& setData(Body::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        // requestId Field Functions 
        bool hasRequestId() const { return this->requestId_ != nullptr;};
        void deleteRequestId() { this->requestId_ = nullptr;};
        inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
        inline Body& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


      protected:
        shared_ptr<Body::Data> data_ {};
        shared_ptr<string> requestId_ {};
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
    inline GetCanTrySasResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetCanTrySasResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetCanTrySasResponseBody::Data) };
    inline GetCanTrySasResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetCanTrySasResponseBody::Data) };
    inline GetCanTrySasResponseBody& setData(const GetCanTrySasResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCanTrySasResponseBody& setData(GetCanTrySasResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCanTrySasResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCanTrySasResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCanTrySasResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<GetCanTrySasResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace RiskManagement20260424
#endif
