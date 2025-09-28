// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETMOBILERESPONSEBODYGETMOBILERESULTDTO_HPP_
#define ALIBABACLOUD_MODELS_GETMOBILERESPONSEBODYGETMOBILERESULTDTO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dypnsapi20170525
{
namespace Models
{
  class GetMobileResponseBodyGetMobileResultDTO : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetMobileResponseBodyGetMobileResultDTO& obj) { 
      DARABONBA_PTR_TO_JSON(Mobile, mobile_);
    };
    friend void from_json(const Darabonba::Json& j, GetMobileResponseBodyGetMobileResultDTO& obj) { 
      DARABONBA_PTR_FROM_JSON(Mobile, mobile_);
    };
    GetMobileResponseBodyGetMobileResultDTO() = default ;
    GetMobileResponseBodyGetMobileResultDTO(const GetMobileResponseBodyGetMobileResultDTO &) = default ;
    GetMobileResponseBodyGetMobileResultDTO(GetMobileResponseBodyGetMobileResultDTO &&) = default ;
    GetMobileResponseBodyGetMobileResultDTO(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetMobileResponseBodyGetMobileResultDTO() = default ;
    GetMobileResponseBodyGetMobileResultDTO& operator=(const GetMobileResponseBodyGetMobileResultDTO &) = default ;
    GetMobileResponseBodyGetMobileResultDTO& operator=(GetMobileResponseBodyGetMobileResultDTO &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mobile_ != nullptr; };
    // mobile Field Functions 
    bool hasMobile() const { return this->mobile_ != nullptr;};
    void deleteMobile() { this->mobile_ = nullptr;};
    inline string mobile() const { DARABONBA_PTR_GET_DEFAULT(mobile_, "") };
    inline GetMobileResponseBodyGetMobileResultDTO& setMobile(string mobile) { DARABONBA_PTR_SET_VALUE(mobile_, mobile) };


  protected:
    // The phone number,
    std::shared_ptr<string> mobile_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dypnsapi20170525
#endif
