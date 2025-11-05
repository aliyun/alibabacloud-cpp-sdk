// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCOUPONDEDUCTPRODUCTCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETCOUPONDEDUCTPRODUCTCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Agency20221216
{
namespace Models
{
  class GetCoupondeductProductCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetCoupondeductProductCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
    };
    friend void from_json(const Darabonba::Json& j, GetCoupondeductProductCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
    };
    GetCoupondeductProductCodeRequest() = default ;
    GetCoupondeductProductCodeRequest(const GetCoupondeductProductCodeRequest &) = default ;
    GetCoupondeductProductCodeRequest(GetCoupondeductProductCodeRequest &&) = default ;
    GetCoupondeductProductCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetCoupondeductProductCodeRequest() = default ;
    GetCoupondeductProductCodeRequest& operator=(const GetCoupondeductProductCodeRequest &) = default ;
    GetCoupondeductProductCodeRequest& operator=(GetCoupondeductProductCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string acceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline GetCoupondeductProductCodeRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> acceptLanguage_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Agency20221216
#endif
