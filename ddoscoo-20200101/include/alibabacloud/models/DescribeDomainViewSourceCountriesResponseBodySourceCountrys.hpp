// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCECOUNTRIESRESPONSEBODYSOURCECOUNTRYS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCECOUNTRIESRESPONSEBODYSOURCECOUNTRYS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewSourceCountriesResponseBodySourceCountrys : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewSourceCountriesResponseBodySourceCountrys& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CountryId, countryId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewSourceCountriesResponseBodySourceCountrys& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CountryId, countryId_);
    };
    DescribeDomainViewSourceCountriesResponseBodySourceCountrys() = default ;
    DescribeDomainViewSourceCountriesResponseBodySourceCountrys(const DescribeDomainViewSourceCountriesResponseBodySourceCountrys &) = default ;
    DescribeDomainViewSourceCountriesResponseBodySourceCountrys(DescribeDomainViewSourceCountriesResponseBodySourceCountrys &&) = default ;
    DescribeDomainViewSourceCountriesResponseBodySourceCountrys(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewSourceCountriesResponseBodySourceCountrys() = default ;
    DescribeDomainViewSourceCountriesResponseBodySourceCountrys& operator=(const DescribeDomainViewSourceCountriesResponseBodySourceCountrys &) = default ;
    DescribeDomainViewSourceCountriesResponseBodySourceCountrys& operator=(DescribeDomainViewSourceCountriesResponseBodySourceCountrys &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->countryId_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeDomainViewSourceCountriesResponseBodySourceCountrys& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // countryId Field Functions 
    bool hasCountryId() const { return this->countryId_ != nullptr;};
    void deleteCountryId() { this->countryId_ = nullptr;};
    inline string countryId() const { DARABONBA_PTR_GET_DEFAULT(countryId_, "") };
    inline DescribeDomainViewSourceCountriesResponseBodySourceCountrys& setCountryId(string countryId) { DARABONBA_PTR_SET_VALUE(countryId_, countryId) };


  protected:
    // The total number of requests.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The abbreviation of the country or area. For more information, see the **Codes of countries and areas** section of the [Codes of administrative regions in China and codes of countries and areas](https://help.aliyun.com/document_detail/167926.html) topic. For example, **cn** indicates China, and **us** indicates the United States.
    std::shared_ptr<string> countryId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
