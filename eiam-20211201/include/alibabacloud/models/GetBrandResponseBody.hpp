// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETBRANDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETBRANDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetBrandResponseBodyBrand.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class GetBrandResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetBrandResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Brand, brand_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetBrandResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Brand, brand_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetBrandResponseBody() = default ;
    GetBrandResponseBody(const GetBrandResponseBody &) = default ;
    GetBrandResponseBody(GetBrandResponseBody &&) = default ;
    GetBrandResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetBrandResponseBody() = default ;
    GetBrandResponseBody& operator=(const GetBrandResponseBody &) = default ;
    GetBrandResponseBody& operator=(GetBrandResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->brand_ == nullptr
        && return this->requestId_ == nullptr; };
    // brand Field Functions 
    bool hasBrand() const { return this->brand_ != nullptr;};
    void deleteBrand() { this->brand_ = nullptr;};
    inline const GetBrandResponseBodyBrand & brand() const { DARABONBA_PTR_GET_CONST(brand_, GetBrandResponseBodyBrand) };
    inline GetBrandResponseBodyBrand brand() { DARABONBA_PTR_GET(brand_, GetBrandResponseBodyBrand) };
    inline GetBrandResponseBody& setBrand(const GetBrandResponseBodyBrand & brand) { DARABONBA_PTR_SET_VALUE(brand_, brand) };
    inline GetBrandResponseBody& setBrand(GetBrandResponseBodyBrand && brand) { DARABONBA_PTR_SET_RVALUE(brand_, brand) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetBrandResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<GetBrandResponseBodyBrand> brand_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
