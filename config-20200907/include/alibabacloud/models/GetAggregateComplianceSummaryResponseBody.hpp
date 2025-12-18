// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCESUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATECOMPLIANCESUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateComplianceSummaryResponseBodyComplianceSummary.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateComplianceSummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateComplianceSummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceSummary, complianceSummary_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateComplianceSummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceSummary, complianceSummary_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateComplianceSummaryResponseBody() = default ;
    GetAggregateComplianceSummaryResponseBody(const GetAggregateComplianceSummaryResponseBody &) = default ;
    GetAggregateComplianceSummaryResponseBody(GetAggregateComplianceSummaryResponseBody &&) = default ;
    GetAggregateComplianceSummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateComplianceSummaryResponseBody() = default ;
    GetAggregateComplianceSummaryResponseBody& operator=(const GetAggregateComplianceSummaryResponseBody &) = default ;
    GetAggregateComplianceSummaryResponseBody& operator=(GetAggregateComplianceSummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceSummary_ == nullptr
        && return this->requestId_ == nullptr; };
    // complianceSummary Field Functions 
    bool hasComplianceSummary() const { return this->complianceSummary_ != nullptr;};
    void deleteComplianceSummary() { this->complianceSummary_ = nullptr;};
    inline const GetAggregateComplianceSummaryResponseBodyComplianceSummary & complianceSummary() const { DARABONBA_PTR_GET_CONST(complianceSummary_, GetAggregateComplianceSummaryResponseBodyComplianceSummary) };
    inline GetAggregateComplianceSummaryResponseBodyComplianceSummary complianceSummary() { DARABONBA_PTR_GET(complianceSummary_, GetAggregateComplianceSummaryResponseBodyComplianceSummary) };
    inline GetAggregateComplianceSummaryResponseBody& setComplianceSummary(const GetAggregateComplianceSummaryResponseBodyComplianceSummary & complianceSummary) { DARABONBA_PTR_SET_VALUE(complianceSummary_, complianceSummary) };
    inline GetAggregateComplianceSummaryResponseBody& setComplianceSummary(GetAggregateComplianceSummaryResponseBodyComplianceSummary && complianceSummary) { DARABONBA_PTR_SET_RVALUE(complianceSummary_, complianceSummary) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateComplianceSummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The compliance statistics.
    std::shared_ptr<GetAggregateComplianceSummaryResponseBodyComplianceSummary> complianceSummary_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
