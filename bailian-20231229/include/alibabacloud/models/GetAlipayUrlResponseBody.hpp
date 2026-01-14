// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETALIPAYURLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETALIPAYURLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class GetAlipayUrlResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAlipayUrlResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAlipayUrlResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetAlipayUrlResponseBody() = default ;
    GetAlipayUrlResponseBody(const GetAlipayUrlResponseBody &) = default ;
    GetAlipayUrlResponseBody(GetAlipayUrlResponseBody &&) = default ;
    GetAlipayUrlResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAlipayUrlResponseBody() = default ;
    GetAlipayUrlResponseBody& operator=(const GetAlipayUrlResponseBody &) = default ;
    GetAlipayUrlResponseBody& operator=(GetAlipayUrlResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_PTR_TO_JSON(code, code_);
        DARABONBA_PTR_TO_JSON(qrUrl, qrUrl_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_PTR_FROM_JSON(code, code_);
        DARABONBA_PTR_FROM_JSON(qrUrl, qrUrl_);
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
      virtual bool empty() const override { return this->code_ == nullptr
        && this->qrUrl_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // qrUrl Field Functions 
      bool hasQrUrl() const { return this->qrUrl_ != nullptr;};
      void deleteQrUrl() { this->qrUrl_ = nullptr;};
      inline string getQrUrl() const { DARABONBA_PTR_GET_DEFAULT(qrUrl_, "") };
      inline Data& setQrUrl(string qrUrl) { DARABONBA_PTR_SET_VALUE(qrUrl_, qrUrl) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> qrUrl_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const GetAlipayUrlResponseBody::Data & getData() const { DARABONBA_PTR_GET_CONST(data_, GetAlipayUrlResponseBody::Data) };
    inline GetAlipayUrlResponseBody::Data getData() { DARABONBA_PTR_GET(data_, GetAlipayUrlResponseBody::Data) };
    inline GetAlipayUrlResponseBody& setData(const GetAlipayUrlResponseBody::Data & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetAlipayUrlResponseBody& setData(GetAlipayUrlResponseBody::Data && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAlipayUrlResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<GetAlipayUrlResponseBody::Data> data_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
