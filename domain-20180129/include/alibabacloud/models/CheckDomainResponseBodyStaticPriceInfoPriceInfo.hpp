// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDOMAINRESPONSEBODYSTATICPRICEINFOPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_CHECKDOMAINRESPONSEBODYSTATICPRICEINFOPRICEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckDomainResponseBodyStaticPriceInfoPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDomainResponseBodyStaticPriceInfoPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(action, action_);
      DARABONBA_PTR_TO_JSON(money, money_);
      DARABONBA_PTR_TO_JSON(period, period_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDomainResponseBodyStaticPriceInfoPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(action, action_);
      DARABONBA_PTR_FROM_JSON(money, money_);
      DARABONBA_PTR_FROM_JSON(period, period_);
    };
    CheckDomainResponseBodyStaticPriceInfoPriceInfo() = default ;
    CheckDomainResponseBodyStaticPriceInfoPriceInfo(const CheckDomainResponseBodyStaticPriceInfoPriceInfo &) = default ;
    CheckDomainResponseBodyStaticPriceInfoPriceInfo(CheckDomainResponseBodyStaticPriceInfoPriceInfo &&) = default ;
    CheckDomainResponseBodyStaticPriceInfoPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDomainResponseBodyStaticPriceInfoPriceInfo() = default ;
    CheckDomainResponseBodyStaticPriceInfoPriceInfo& operator=(const CheckDomainResponseBodyStaticPriceInfoPriceInfo &) = default ;
    CheckDomainResponseBodyStaticPriceInfoPriceInfo& operator=(CheckDomainResponseBodyStaticPriceInfoPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->action_ == nullptr
        && return this->money_ == nullptr && return this->period_ == nullptr; };
    // action Field Functions 
    bool hasAction() const { return this->action_ != nullptr;};
    void deleteAction() { this->action_ = nullptr;};
    inline string action() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
    inline CheckDomainResponseBodyStaticPriceInfoPriceInfo& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


    // money Field Functions 
    bool hasMoney() const { return this->money_ != nullptr;};
    void deleteMoney() { this->money_ = nullptr;};
    inline double money() const { DARABONBA_PTR_GET_DEFAULT(money_, 0.0) };
    inline CheckDomainResponseBodyStaticPriceInfoPriceInfo& setMoney(double money) { DARABONBA_PTR_SET_VALUE(money_, money) };


    // period Field Functions 
    bool hasPeriod() const { return this->period_ != nullptr;};
    void deletePeriod() { this->period_ = nullptr;};
    inline int64_t period() const { DARABONBA_PTR_GET_DEFAULT(period_, 0L) };
    inline CheckDomainResponseBodyStaticPriceInfoPriceInfo& setPeriod(int64_t period) { DARABONBA_PTR_SET_VALUE(period_, period) };


  protected:
    std::shared_ptr<string> action_ = nullptr;
    std::shared_ptr<double> money_ = nullptr;
    std::shared_ptr<int64_t> period_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
