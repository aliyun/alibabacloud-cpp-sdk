// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCEPROVINCESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINVIEWSOURCEPROVINCESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainViewSourceProvincesResponseBodySourceProvinces.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeDomainViewSourceProvincesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainViewSourceProvincesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceProvinces, sourceProvinces_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainViewSourceProvincesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceProvinces, sourceProvinces_);
    };
    DescribeDomainViewSourceProvincesResponseBody() = default ;
    DescribeDomainViewSourceProvincesResponseBody(const DescribeDomainViewSourceProvincesResponseBody &) = default ;
    DescribeDomainViewSourceProvincesResponseBody(DescribeDomainViewSourceProvincesResponseBody &&) = default ;
    DescribeDomainViewSourceProvincesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainViewSourceProvincesResponseBody() = default ;
    DescribeDomainViewSourceProvincesResponseBody& operator=(const DescribeDomainViewSourceProvincesResponseBody &) = default ;
    DescribeDomainViewSourceProvincesResponseBody& operator=(DescribeDomainViewSourceProvincesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->sourceProvinces_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDomainViewSourceProvincesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceProvinces Field Functions 
    bool hasSourceProvinces() const { return this->sourceProvinces_ != nullptr;};
    void deleteSourceProvinces() { this->sourceProvinces_ = nullptr;};
    inline const vector<DescribeDomainViewSourceProvincesResponseBodySourceProvinces> & sourceProvinces() const { DARABONBA_PTR_GET_CONST(sourceProvinces_, vector<DescribeDomainViewSourceProvincesResponseBodySourceProvinces>) };
    inline vector<DescribeDomainViewSourceProvincesResponseBodySourceProvinces> sourceProvinces() { DARABONBA_PTR_GET(sourceProvinces_, vector<DescribeDomainViewSourceProvincesResponseBodySourceProvinces>) };
    inline DescribeDomainViewSourceProvincesResponseBody& setSourceProvinces(const vector<DescribeDomainViewSourceProvincesResponseBodySourceProvinces> & sourceProvinces) { DARABONBA_PTR_SET_VALUE(sourceProvinces_, sourceProvinces) };
    inline DescribeDomainViewSourceProvincesResponseBody& setSourceProvinces(vector<DescribeDomainViewSourceProvincesResponseBodySourceProvinces> && sourceProvinces) { DARABONBA_PTR_SET_RVALUE(sourceProvinces_, sourceProvinces) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // An array consisting of the details of the administrative region in China from which the requests are sent.
    std::shared_ptr<vector<DescribeDomainViewSourceProvincesResponseBodySourceProvinces>> sourceProvinces_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
