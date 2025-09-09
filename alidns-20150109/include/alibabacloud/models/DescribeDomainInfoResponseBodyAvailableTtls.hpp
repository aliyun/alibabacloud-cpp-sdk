// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAININFORESPONSEBODYAVAILABLETTLS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAININFORESPONSEBODYAVAILABLETTLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainInfoResponseBodyAvailableTtls : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainInfoResponseBodyAvailableTtls& obj) { 
      DARABONBA_PTR_TO_JSON(AvailableTtl, availableTtl_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainInfoResponseBodyAvailableTtls& obj) { 
      DARABONBA_PTR_FROM_JSON(AvailableTtl, availableTtl_);
    };
    DescribeDomainInfoResponseBodyAvailableTtls() = default ;
    DescribeDomainInfoResponseBodyAvailableTtls(const DescribeDomainInfoResponseBodyAvailableTtls &) = default ;
    DescribeDomainInfoResponseBodyAvailableTtls(DescribeDomainInfoResponseBodyAvailableTtls &&) = default ;
    DescribeDomainInfoResponseBodyAvailableTtls(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainInfoResponseBodyAvailableTtls() = default ;
    DescribeDomainInfoResponseBodyAvailableTtls& operator=(const DescribeDomainInfoResponseBodyAvailableTtls &) = default ;
    DescribeDomainInfoResponseBodyAvailableTtls& operator=(DescribeDomainInfoResponseBodyAvailableTtls &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->availableTtl_ != nullptr; };
    // availableTtl Field Functions 
    bool hasAvailableTtl() const { return this->availableTtl_ != nullptr;};
    void deleteAvailableTtl() { this->availableTtl_ = nullptr;};
    inline const vector<string> & availableTtl() const { DARABONBA_PTR_GET_CONST(availableTtl_, vector<string>) };
    inline vector<string> availableTtl() { DARABONBA_PTR_GET(availableTtl_, vector<string>) };
    inline DescribeDomainInfoResponseBodyAvailableTtls& setAvailableTtl(const vector<string> & availableTtl) { DARABONBA_PTR_SET_VALUE(availableTtl_, availableTtl) };
    inline DescribeDomainInfoResponseBodyAvailableTtls& setAvailableTtl(vector<string> && availableTtl) { DARABONBA_PTR_SET_RVALUE(availableTtl_, availableTtl) };


  protected:
    std::shared_ptr<vector<string>> availableTtl_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
