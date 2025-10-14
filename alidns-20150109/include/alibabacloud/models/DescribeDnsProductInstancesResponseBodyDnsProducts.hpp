// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSPRODUCTINSTANCESRESPONSEBODYDNSPRODUCTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSPRODUCTINSTANCESRESPONSEBODYDNSPRODUCTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsProductInstancesResponseBodyDnsProductsDnsProduct.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsProductInstancesResponseBodyDnsProducts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsProductInstancesResponseBodyDnsProducts& obj) { 
      DARABONBA_PTR_TO_JSON(DnsProduct, dnsProduct_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsProductInstancesResponseBodyDnsProducts& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsProduct, dnsProduct_);
    };
    DescribeDnsProductInstancesResponseBodyDnsProducts() = default ;
    DescribeDnsProductInstancesResponseBodyDnsProducts(const DescribeDnsProductInstancesResponseBodyDnsProducts &) = default ;
    DescribeDnsProductInstancesResponseBodyDnsProducts(DescribeDnsProductInstancesResponseBodyDnsProducts &&) = default ;
    DescribeDnsProductInstancesResponseBodyDnsProducts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsProductInstancesResponseBodyDnsProducts() = default ;
    DescribeDnsProductInstancesResponseBodyDnsProducts& operator=(const DescribeDnsProductInstancesResponseBodyDnsProducts &) = default ;
    DescribeDnsProductInstancesResponseBodyDnsProducts& operator=(DescribeDnsProductInstancesResponseBodyDnsProducts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dnsProduct_ == nullptr; };
    // dnsProduct Field Functions 
    bool hasDnsProduct() const { return this->dnsProduct_ != nullptr;};
    void deleteDnsProduct() { this->dnsProduct_ = nullptr;};
    inline const vector<Models::DescribeDnsProductInstancesResponseBodyDnsProductsDnsProduct> & dnsProduct() const { DARABONBA_PTR_GET_CONST(dnsProduct_, vector<Models::DescribeDnsProductInstancesResponseBodyDnsProductsDnsProduct>) };
    inline vector<Models::DescribeDnsProductInstancesResponseBodyDnsProductsDnsProduct> dnsProduct() { DARABONBA_PTR_GET(dnsProduct_, vector<Models::DescribeDnsProductInstancesResponseBodyDnsProductsDnsProduct>) };
    inline DescribeDnsProductInstancesResponseBodyDnsProducts& setDnsProduct(const vector<Models::DescribeDnsProductInstancesResponseBodyDnsProductsDnsProduct> & dnsProduct) { DARABONBA_PTR_SET_VALUE(dnsProduct_, dnsProduct) };
    inline DescribeDnsProductInstancesResponseBodyDnsProducts& setDnsProduct(vector<Models::DescribeDnsProductInstancesResponseBodyDnsProductsDnsProduct> && dnsProduct) { DARABONBA_PTR_SET_RVALUE(dnsProduct_, dnsProduct) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsProductInstancesResponseBodyDnsProductsDnsProduct>> dnsProduct_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
