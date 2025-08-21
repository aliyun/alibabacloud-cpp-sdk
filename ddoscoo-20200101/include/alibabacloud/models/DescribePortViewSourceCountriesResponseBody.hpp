// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCECOUNTRIESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPORTVIEWSOURCECOUNTRIESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePortViewSourceCountriesResponseBodySourceCountrys.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribePortViewSourceCountriesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePortViewSourceCountriesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SourceCountrys, sourceCountrys_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePortViewSourceCountriesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SourceCountrys, sourceCountrys_);
    };
    DescribePortViewSourceCountriesResponseBody() = default ;
    DescribePortViewSourceCountriesResponseBody(const DescribePortViewSourceCountriesResponseBody &) = default ;
    DescribePortViewSourceCountriesResponseBody(DescribePortViewSourceCountriesResponseBody &&) = default ;
    DescribePortViewSourceCountriesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePortViewSourceCountriesResponseBody() = default ;
    DescribePortViewSourceCountriesResponseBody& operator=(const DescribePortViewSourceCountriesResponseBody &) = default ;
    DescribePortViewSourceCountriesResponseBody& operator=(DescribePortViewSourceCountriesResponseBody &&) = default ;
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
    inline DescribePortViewSourceCountriesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // sourceCountrys Field Functions 
    bool hasSourceCountrys() const { return this->sourceCountrys_ != nullptr;};
    void deleteSourceCountrys() { this->sourceCountrys_ = nullptr;};
    inline const vector<DescribePortViewSourceCountriesResponseBodySourceCountrys> & sourceCountrys() const { DARABONBA_PTR_GET_CONST(sourceCountrys_, vector<DescribePortViewSourceCountriesResponseBodySourceCountrys>) };
    inline vector<DescribePortViewSourceCountriesResponseBodySourceCountrys> sourceCountrys() { DARABONBA_PTR_GET(sourceCountrys_, vector<DescribePortViewSourceCountriesResponseBodySourceCountrys>) };
    inline DescribePortViewSourceCountriesResponseBody& setSourceCountrys(const vector<DescribePortViewSourceCountriesResponseBodySourceCountrys> & sourceCountrys) { DARABONBA_PTR_SET_VALUE(sourceCountrys_, sourceCountrys) };
    inline DescribePortViewSourceCountriesResponseBody& setSourceCountrys(vector<DescribePortViewSourceCountriesResponseBodySourceCountrys> && sourceCountrys) { DARABONBA_PTR_SET_RVALUE(sourceCountrys_, sourceCountrys) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details about the country or area from which the requests are sent.
    std::shared_ptr<vector<DescribePortViewSourceCountriesResponseBodySourceCountrys>> sourceCountrys_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
