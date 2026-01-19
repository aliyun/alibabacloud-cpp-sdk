// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETKVDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETKVDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ESA20240910
{
namespace Models
{
  class GetKvDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetKvDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetKvDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetKvDetailResponseBody() = default ;
    GetKvDetailResponseBody(const GetKvDetailResponseBody &) = default ;
    GetKvDetailResponseBody(GetKvDetailResponseBody &&) = default ;
    GetKvDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetKvDetailResponseBody() = default ;
    GetKvDetailResponseBody& operator=(const GetKvDetailResponseBody &) = default ;
    GetKvDetailResponseBody& operator=(GetKvDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expirationTtl_ == nullptr
        && this->requestId_ == nullptr && this->value_ == nullptr; };
    // expirationTtl Field Functions 
    bool hasExpirationTtl() const { return this->expirationTtl_ != nullptr;};
    void deleteExpirationTtl() { this->expirationTtl_ = nullptr;};
    inline string getExpirationTtl() const { DARABONBA_PTR_GET_DEFAULT(expirationTtl_, "") };
    inline GetKvDetailResponseBody& setExpirationTtl(string expirationTtl) { DARABONBA_PTR_SET_VALUE(expirationTtl_, expirationTtl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetKvDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetKvDetailResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // The expiration time of the key. Unit: seconds.
    shared_ptr<string> expirationTtl_ {};
    // The expiration time of the key. Unit: seconds.
    shared_ptr<string> requestId_ {};
    // The value of the key. The value of the root node.
    shared_ptr<string> value_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ESA20240910
#endif
