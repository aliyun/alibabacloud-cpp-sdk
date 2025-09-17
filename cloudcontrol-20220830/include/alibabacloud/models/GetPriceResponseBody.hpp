// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPRICERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPRICERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetPriceResponseBodyPrice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class GetPriceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPriceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(price, price_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPriceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(price, price_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPriceResponseBody() = default ;
    GetPriceResponseBody(const GetPriceResponseBody &) = default ;
    GetPriceResponseBody(GetPriceResponseBody &&) = default ;
    GetPriceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPriceResponseBody() = default ;
    GetPriceResponseBody& operator=(const GetPriceResponseBody &) = default ;
    GetPriceResponseBody& operator=(GetPriceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->price_ != nullptr
        && this->requestId_ != nullptr; };
    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline const GetPriceResponseBodyPrice & price() const { DARABONBA_PTR_GET_CONST(price_, GetPriceResponseBodyPrice) };
    inline GetPriceResponseBodyPrice price() { DARABONBA_PTR_GET(price_, GetPriceResponseBodyPrice) };
    inline GetPriceResponseBody& setPrice(const GetPriceResponseBodyPrice & price) { DARABONBA_PTR_SET_VALUE(price_, price) };
    inline GetPriceResponseBody& setPrice(GetPriceResponseBodyPrice && price) { DARABONBA_PTR_SET_RVALUE(price_, price) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPriceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The price.
    std::shared_ptr<GetPriceResponseBodyPrice> price_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
