// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKDOMAINRESPONSEBODYSTATICPRICEINFO_HPP_
#define ALIBABACLOUD_MODELS_CHECKDOMAINRESPONSEBODYSTATICPRICEINFO_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CheckDomainResponseBodyStaticPriceInfoPriceInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Domain20180129
{
namespace Models
{
  class CheckDomainResponseBodyStaticPriceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckDomainResponseBodyStaticPriceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(PriceInfo, priceInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CheckDomainResponseBodyStaticPriceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(PriceInfo, priceInfo_);
    };
    CheckDomainResponseBodyStaticPriceInfo() = default ;
    CheckDomainResponseBodyStaticPriceInfo(const CheckDomainResponseBodyStaticPriceInfo &) = default ;
    CheckDomainResponseBodyStaticPriceInfo(CheckDomainResponseBodyStaticPriceInfo &&) = default ;
    CheckDomainResponseBodyStaticPriceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckDomainResponseBodyStaticPriceInfo() = default ;
    CheckDomainResponseBodyStaticPriceInfo& operator=(const CheckDomainResponseBodyStaticPriceInfo &) = default ;
    CheckDomainResponseBodyStaticPriceInfo& operator=(CheckDomainResponseBodyStaticPriceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->priceInfo_ == nullptr; };
    // priceInfo Field Functions 
    bool hasPriceInfo() const { return this->priceInfo_ != nullptr;};
    void deletePriceInfo() { this->priceInfo_ = nullptr;};
    inline const vector<Models::CheckDomainResponseBodyStaticPriceInfoPriceInfo> & priceInfo() const { DARABONBA_PTR_GET_CONST(priceInfo_, vector<Models::CheckDomainResponseBodyStaticPriceInfoPriceInfo>) };
    inline vector<Models::CheckDomainResponseBodyStaticPriceInfoPriceInfo> priceInfo() { DARABONBA_PTR_GET(priceInfo_, vector<Models::CheckDomainResponseBodyStaticPriceInfoPriceInfo>) };
    inline CheckDomainResponseBodyStaticPriceInfo& setPriceInfo(const vector<Models::CheckDomainResponseBodyStaticPriceInfoPriceInfo> & priceInfo) { DARABONBA_PTR_SET_VALUE(priceInfo_, priceInfo) };
    inline CheckDomainResponseBodyStaticPriceInfo& setPriceInfo(vector<Models::CheckDomainResponseBodyStaticPriceInfoPriceInfo> && priceInfo) { DARABONBA_PTR_SET_RVALUE(priceInfo_, priceInfo) };


  protected:
    std::shared_ptr<vector<Models::CheckDomainResponseBodyStaticPriceInfoPriceInfo>> priceInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Domain20180129
#endif
