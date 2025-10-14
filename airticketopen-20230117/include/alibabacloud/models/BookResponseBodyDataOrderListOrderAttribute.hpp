// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BOOKRESPONSEBODYDATAORDERLISTORDERATTRIBUTE_HPP_
#define ALIBABACLOUD_MODELS_BOOKRESPONSEBODYDATAORDERLISTORDERATTRIBUTE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AirticketOpen20230117
{
namespace Models
{
  class BookResponseBodyDataOrderListOrderAttribute : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BookResponseBodyDataOrderListOrderAttribute& obj) { 
      DARABONBA_PTR_TO_JSON(aba_pay_lock_rate_info, abaPayLockRateInfo_);
    };
    friend void from_json(const Darabonba::Json& j, BookResponseBodyDataOrderListOrderAttribute& obj) { 
      DARABONBA_PTR_FROM_JSON(aba_pay_lock_rate_info, abaPayLockRateInfo_);
    };
    BookResponseBodyDataOrderListOrderAttribute() = default ;
    BookResponseBodyDataOrderListOrderAttribute(const BookResponseBodyDataOrderListOrderAttribute &) = default ;
    BookResponseBodyDataOrderListOrderAttribute(BookResponseBodyDataOrderListOrderAttribute &&) = default ;
    BookResponseBodyDataOrderListOrderAttribute(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BookResponseBodyDataOrderListOrderAttribute() = default ;
    BookResponseBodyDataOrderListOrderAttribute& operator=(const BookResponseBodyDataOrderListOrderAttribute &) = default ;
    BookResponseBodyDataOrderListOrderAttribute& operator=(BookResponseBodyDataOrderListOrderAttribute &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->abaPayLockRateInfo_ == nullptr; };
    // abaPayLockRateInfo Field Functions 
    bool hasAbaPayLockRateInfo() const { return this->abaPayLockRateInfo_ != nullptr;};
    void deleteAbaPayLockRateInfo() { this->abaPayLockRateInfo_ = nullptr;};
    inline const Models::BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo & abaPayLockRateInfo() const { DARABONBA_PTR_GET_CONST(abaPayLockRateInfo_, Models::BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo) };
    inline Models::BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo abaPayLockRateInfo() { DARABONBA_PTR_GET(abaPayLockRateInfo_, Models::BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo) };
    inline BookResponseBodyDataOrderListOrderAttribute& setAbaPayLockRateInfo(const Models::BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo & abaPayLockRateInfo) { DARABONBA_PTR_SET_VALUE(abaPayLockRateInfo_, abaPayLockRateInfo) };
    inline BookResponseBodyDataOrderListOrderAttribute& setAbaPayLockRateInfo(Models::BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo && abaPayLockRateInfo) { DARABONBA_PTR_SET_RVALUE(abaPayLockRateInfo_, abaPayLockRateInfo) };


  protected:
    std::shared_ptr<Models::BookResponseBodyDataOrderListOrderAttributeAbaPayLockRateInfo> abaPayLockRateInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AirticketOpen20230117
#endif
