// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CERTNOTHREEELEMENTVERIFICATIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CERTNOTHREEELEMENTVERIFICATIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dytnsapi20200217
{
namespace Models
{
  class CertNoThreeElementVerificationResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CertNoThreeElementVerificationResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, CertNoThreeElementVerificationResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AccessDeniedDetail, accessDeniedDetail_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    CertNoThreeElementVerificationResponseBody() = default ;
    CertNoThreeElementVerificationResponseBody(const CertNoThreeElementVerificationResponseBody &) = default ;
    CertNoThreeElementVerificationResponseBody(CertNoThreeElementVerificationResponseBody &&) = default ;
    CertNoThreeElementVerificationResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CertNoThreeElementVerificationResponseBody() = default ;
    CertNoThreeElementVerificationResponseBody& operator=(const CertNoThreeElementVerificationResponseBody &) = default ;
    CertNoThreeElementVerificationResponseBody& operator=(CertNoThreeElementVerificationResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(IsConsistent, isConsistent_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(IsConsistent, isConsistent_);
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
      virtual bool empty() const override { return this->isConsistent_ == nullptr; };
      // isConsistent Field Functions 
      bool hasIsConsistent() const { return this->isConsistent_ != nullptr;};
      void deleteIsConsistent() { this->isConsistent_ = nullptr;};
      inline string getIsConsistent() const { DARABONBA_PTR_GET_DEFAULT(isConsistent_, "") };
      inline Data& setIsConsistent(string isConsistent) { DARABONBA_PTR_SET_VALUE(isConsistent_, isConsistent) };


    protected:
      shared_ptr<string> isConsistent_ {};
    };

    virtual bool empty() const override { return this->accessDeniedDetail_ == nullptr
        && this->code_ == nullptr && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr; };
    // accessDeniedDetail Field Functions 
    bool hasAccessDeniedDetail() const { return this->accessDeniedDetail_ != nullptr;};
    void deleteAccessDeniedDetail() { this->accessDeniedDetail_ = nullptr;};
    inline string getAccessDeniedDetail() const { DARABONBA_PTR_GET_DEFAULT(accessDeniedDetail_, "") };
    inline CertNoThreeElementVerificationResponseBody& setAccessDeniedDetail(string accessDeniedDetail) { DARABONBA_PTR_SET_VALUE(accessDeniedDetail_, accessDeniedDetail) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline CertNoThreeElementVerificationResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const CertNoThreeElementVerificationResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, CertNoThreeElementVerificationResponseBody::Data) };
    inline CertNoThreeElementVerificationResponseBody::Data getData() { DARABONBA_PTR_GET(data_, CertNoThreeElementVerificationResponseBody::Data) };
    inline CertNoThreeElementVerificationResponseBody& setData(const CertNoThreeElementVerificationResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline CertNoThreeElementVerificationResponseBody& setData(CertNoThreeElementVerificationResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline CertNoThreeElementVerificationResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CertNoThreeElementVerificationResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<string> accessDeniedDetail_ {};
    shared_ptr<string> code_ {};
    shared_ptr<CertNoThreeElementVerificationResponseBody::Data> data_ {};
    shared_ptr<string> message_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dytnsapi20200217
#endif
