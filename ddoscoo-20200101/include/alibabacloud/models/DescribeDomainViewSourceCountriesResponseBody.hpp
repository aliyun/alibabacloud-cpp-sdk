// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCECOUNTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCECOUNTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainViewSourceCountriesResponseBodySourceCountrys.hpp>
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
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->sourceCountrys_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainViewSourceCountriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceCountrys Field Functions 
    bool hasSourceCountrys() const { return this->sourceCountrys_ != nullptr;};
    void deleteSourceCountrys() { this->sourceCountrys_ = nullptr;};
    inline const vector<DescribeDomainViewSourceCountriesResponseBodySourceCountrys> & sourceCountrys() const { DARABONBA_PTR_GET_CONST(sourceCountrys_, vector<DescribeDomainViewSourceCountriesResponseBodySourceCountrys>) };
    inline vector<DescribeDomainViewSourceCountriesResponseBodySourceCountrys> sourceCountrys() { DARABONBA_PTR_GET(sourceCountrys_, vector<DescribeDomainViewSourceCountriesResponseBodySourceCountrys>) };
    inline DescribeDomainViewSourceCountriesResponseBody& setSourceCountrys(const vector<DescribeDomainViewSourceCountriesResponseBodySourceCountrys> & sourceCountrys) { DARABONBA_PTR_SET_VALUE(sourceCountrys_, sourceCountrys) };
    inline DescribeDomainViewSourceCountriesResponseBody& setSourceCountrys(vector<DescribeDomainViewSourceCountriesResponseBodySourceCountrys> && sourceCountrys) { DARABONBA_PTR_SET_RVALUE(sourceCountrys_, sourceCountrys) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array consisting of the country or area from which the requests are sent.
    std::shared_ptr<vector<DescribeDomainViewSourceCountriesResponseBodySourceCountrys>> sourceCountrys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
