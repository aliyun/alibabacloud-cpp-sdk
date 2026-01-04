// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCECOUNTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCECOUNTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewSourceCountriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewSourceCountriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceCountrys, sourceCountrys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewSourceCountriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceCountrys, sourceCountrys_);
    };
    DescribeDomainViewSourceCountriesResponseBody() = default ;
    DescribeDomainViewSourceCountriesResponseBody(const DescribeDomainViewSourceCountriesResponseBody &) = default ;
    DescribeDomainViewSourceCountriesResponseBody(DescribeDomainViewSourceCountriesResponseBody &&) = default ;
    DescribeDomainViewSourceCountriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewSourceCountriesResponseBody() = default ;
    DescribeDomainViewSourceCountriesResponseBody& operator=(const DescribeDomainViewSourceCountriesResponseBody &) = default ;
    DescribeDomainViewSourceCountriesResponseBody& operator=(DescribeDomainViewSourceCountriesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class SourceCountrys : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const SourceCountrys& obj) { 
        DARABONBA_PTR_TO_JSON(Count, count_);
        DARABONBA_PTR_TO_JSON(CountryId, countryId_);
      };
      friend void from_json(const Darabonba::Json& j, SourceCountrys& obj) { 
        DARABONBA_PTR_FROM_JSON(Count, count_);
        DARABONBA_PTR_FROM_JSON(CountryId, countryId_);
      };
      SourceCountrys() = default ;
      SourceCountrys(const SourceCountrys &) = default ;
      SourceCountrys(SourceCountrys &&) = default ;
      SourceCountrys(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~SourceCountrys() = default ;
      SourceCountrys& operator=(const SourceCountrys &) = default ;
      SourceCountrys& operator=(SourceCountrys &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->count_ == nullptr
        && this->countryId_ == nullptr; };
      // count Field Functions 
      bool hasCount() const { return this->count_ != nullptr;};
      void deleteCount() { this->count_ = nullptr;};
      inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
      inline SourceCountrys& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


      // countryId Field Functions 
      bool hasCountryId() const { return this->countryId_ != nullptr;};
      void deleteCountryId() { this->countryId_ = nullptr;};
      inline string getCountryId() const { DARABONBA_PTR_GET_DEFAULT(countryId_, "") };
      inline SourceCountrys& setCountryId(string countryId) { DARABONBA_PTR_SET_VALUE(countryId_, countryId) };


    protected:
      // The total number of requests.
      shared_ptr<int64_t> count_ {};
      // The abbreviation of the country or area. For more information, see the **Codes of countries and areas** section of the [Codes of administrative regions in China and codes of countries and areas](https://help.aliyun.com/document_detail/167926.html) topic. For example, **cn** indicates China, and **us** indicates the United States.
      shared_ptr<string> countryId_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->sourceCountrys_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainViewSourceCountriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceCountrys Field Functions 
    bool hasSourceCountrys() const { return this->sourceCountrys_ != nullptr;};
    void deleteSourceCountrys() { this->sourceCountrys_ = nullptr;};
    inline const vector<DescribeDomainViewSourceCountriesResponseBody::SourceCountrys> & getSourceCountrys() const { DARABONBA_PTR_GET_CONST(sourceCountrys_, vector<DescribeDomainViewSourceCountriesResponseBody::SourceCountrys>) };
    inline vector<DescribeDomainViewSourceCountriesResponseBody::SourceCountrys> getSourceCountrys() { DARABONBA_PTR_GET(sourceCountrys_, vector<DescribeDomainViewSourceCountriesResponseBody::SourceCountrys>) };
    inline DescribeDomainViewSourceCountriesResponseBody& setSourceCountrys(const vector<DescribeDomainViewSourceCountriesResponseBody::SourceCountrys> & sourceCountrys) { DARABONBA_PTR_SET_VALUE(sourceCountrys_, sourceCountrys) };
    inline DescribeDomainViewSourceCountriesResponseBody& setSourceCountrys(vector<DescribeDomainViewSourceCountriesResponseBody::SourceCountrys> && sourceCountrys) { DARABONBA_PTR_SET_RVALUE(sourceCountrys_, sourceCountrys) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // An array consisting of the country or area from which the requests are sent.
    shared_ptr<vector<DescribeDomainViewSourceCountriesResponseBody::SourceCountrys>> sourceCountrys_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
