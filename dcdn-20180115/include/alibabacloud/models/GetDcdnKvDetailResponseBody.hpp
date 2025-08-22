// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDCDNKVDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETDCDNKVDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dcdn20180115
{
namespace Models
{
  class GetDcdnKvDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDcdnKvDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Value, value_);
    };
    friend void from_json(const Darabonba::Json& j, GetDcdnKvDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpirationTtl, expirationTtl_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
    };
    GetDcdnKvDetailResponseBody() = default ;
    GetDcdnKvDetailResponseBody(const GetDcdnKvDetailResponseBody &) = default ;
    GetDcdnKvDetailResponseBody(GetDcdnKvDetailResponseBody &&) = default ;
    GetDcdnKvDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDcdnKvDetailResponseBody() = default ;
    GetDcdnKvDetailResponseBody& operator=(const GetDcdnKvDetailResponseBody &) = default ;
    GetDcdnKvDetailResponseBody& operator=(GetDcdnKvDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->expirationTtl_ != nullptr
        && this->requestId_ != nullptr && this->value_ != nullptr; };
    // expirationTtl Field Functions 
    bool hasExpirationTtl() const { return this->expirationTtl_ != nullptr;};
    void deleteExpirationTtl() { this->expirationTtl_ = nullptr;};
    inline string expirationTtl() const { DARABONBA_PTR_GET_DEFAULT(expirationTtl_, "") };
    inline GetDcdnKvDetailResponseBody& setExpirationTtl(string expirationTtl) { DARABONBA_PTR_SET_VALUE(expirationTtl_, expirationTtl) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetDcdnKvDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline GetDcdnKvDetailResponseBody& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    std::shared_ptr<string> expirationTtl_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dcdn20180115
#endif
