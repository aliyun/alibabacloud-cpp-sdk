// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOUPONDEDUCTPRODUCTCODERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCOUPONDEDUCTPRODUCTCODERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCoupondeductProductCodeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCoupondeductProductCodeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(Message, message_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetCoupondeductProductCodeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(Message, message_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetCoupondeductProductCodeResponseBody() = default ;
    GetCoupondeductProductCodeResponseBody(const GetCoupondeductProductCodeResponseBody &) = default ;
    GetCoupondeductProductCodeResponseBody(GetCoupondeductProductCodeResponseBody &&) = default ;
    GetCoupondeductProductCodeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCoupondeductProductCodeResponseBody() = default ;
    GetCoupondeductProductCodeResponseBody& operator=(const GetCoupondeductProductCodeResponseBody &) = default ;
    GetCoupondeductProductCodeResponseBody& operator=(GetCoupondeductProductCodeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
        DARABONBA_ANY_TO_JSON(ProductType, productType_);
      };
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
        DARABONBA_ANY_FROM_JSON(ProductType, productType_);
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
      virtual bool empty() const override { return this->productType_ == nullptr; };
      // productType Field Functions 
      bool hasProductType() const { return this->productType_ != nullptr;};
      void deleteProductType() { this->productType_ = nullptr;};
      inline       const Darabonba::Json & getProductType() const { DARABONBA_GET(productType_) };
      Darabonba::Json & getProductType() { DARABONBA_GET(productType_) };
      inline Data& setProductType(const Darabonba::Json & productType) { DARABONBA_SET_VALUE(productType_, productType) };
      inline Data& setProductType(Darabonba::Json && productType) { DARABONBA_SET_RVALUE(productType_, productType) };


    protected:
      Darabonba::Json productType_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr && this->message_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline GetCoupondeductProductCodeResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<GetCoupondeductProductCodeResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<GetCoupondeductProductCodeResponseBody::Data>) };
    inline vector<GetCoupondeductProductCodeResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<GetCoupondeductProductCodeResponseBody::Data>) };
    inline GetCoupondeductProductCodeResponseBody& setData(const vector<GetCoupondeductProductCodeResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline GetCoupondeductProductCodeResponseBody& setData(vector<GetCoupondeductProductCodeResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // message Field Functions 
    bool hasMessage() const { return this->message_ != nullptr;};
    void deleteMessage() { this->message_ = nullptr;};
    inline string getMessage() const { DARABONBA_PTR_GET_DEFAULT(message_, "") };
    inline GetCoupondeductProductCodeResponseBody& setMessage(string message) { DARABONBA_PTR_SET_VALUE(message_, message) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetCoupondeductProductCodeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetCoupondeductProductCodeResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    shared_ptr<string> code_ {};
    shared_ptr<vector<GetCoupondeductProductCodeResponseBody::Data>> data_ {};
    shared_ptr<string> message_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
