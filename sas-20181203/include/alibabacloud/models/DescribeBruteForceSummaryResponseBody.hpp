// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEBRUTEFORCESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeBruteForceSummaryResponseBodyBruteForceSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeBruteForceSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeBruteForceSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(BruteForceSummary, bruteForceSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeBruteForceSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(BruteForceSummary, bruteForceSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeBruteForceSummaryResponseBody() = default ;
    DescribeBruteForceSummaryResponseBody(const DescribeBruteForceSummaryResponseBody &) = default ;
    DescribeBruteForceSummaryResponseBody(DescribeBruteForceSummaryResponseBody &&) = default ;
    DescribeBruteForceSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeBruteForceSummaryResponseBody() = default ;
    DescribeBruteForceSummaryResponseBody& operator=(const DescribeBruteForceSummaryResponseBody &) = default ;
    DescribeBruteForceSummaryResponseBody& operator=(DescribeBruteForceSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bruteForceSummary_ != nullptr
        && this->requestId_ != nullptr; };
    // bruteForceSummary Field Functions 
    bool hasBruteForceSummary() const { return this->bruteForceSummary_ != nullptr;};
    void deleteBruteForceSummary() { this->bruteForceSummary_ = nullptr;};
    inline const DescribeBruteForceSummaryResponseBodyBruteForceSummary & bruteForceSummary() const { DARABONBA_PTR_GET_CONST(bruteForceSummary_, DescribeBruteForceSummaryResponseBodyBruteForceSummary) };
    inline DescribeBruteForceSummaryResponseBodyBruteForceSummary bruteForceSummary() { DARABONBA_PTR_GET(bruteForceSummary_, DescribeBruteForceSummaryResponseBodyBruteForceSummary) };
    inline DescribeBruteForceSummaryResponseBody& setBruteForceSummary(const DescribeBruteForceSummaryResponseBodyBruteForceSummary & bruteForceSummary) { DARABONBA_PTR_SET_VALUE(bruteForceSummary_, bruteForceSummary) };
    inline DescribeBruteForceSummaryResponseBody& setBruteForceSummary(DescribeBruteForceSummaryResponseBodyBruteForceSummary && bruteForceSummary) { DARABONBA_PTR_SET_RVALUE(bruteForceSummary_, bruteForceSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeBruteForceSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics of IP address blocking policies.
    std::shared_ptr<DescribeBruteForceSummaryResponseBodyBruteForceSummary> bruteForceSummary_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
