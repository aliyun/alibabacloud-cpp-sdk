// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETAGGREGATERESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetAggregateResourceComplianceGroupByRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAggregateResourceComplianceGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResult, complianceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAggregateResourceComplianceGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResult, complianceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetAggregateResourceComplianceGroupByRegionResponseBody() = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBody(const GetAggregateResourceComplianceGroupByRegionResponseBody &) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBody(GetAggregateResourceComplianceGroupByRegionResponseBody &&) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAggregateResourceComplianceGroupByRegionResponseBody() = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBody& operator=(const GetAggregateResourceComplianceGroupByRegionResponseBody &) = default ;
    GetAggregateResourceComplianceGroupByRegionResponseBody& operator=(GetAggregateResourceComplianceGroupByRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // complianceResult Field Functions 
    bool hasComplianceResult() const { return this->complianceResult_ != nullptr;};
    void deleteComplianceResult() { this->complianceResult_ = nullptr;};
    inline const GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult & complianceResult() const { DARABONBA_PTR_GET_CONST(complianceResult_, GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult) };
    inline GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult complianceResult() { DARABONBA_PTR_GET(complianceResult_, GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult) };
    inline GetAggregateResourceComplianceGroupByRegionResponseBody& setComplianceResult(const GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult & complianceResult) { DARABONBA_PTR_SET_VALUE(complianceResult_, complianceResult) };
    inline GetAggregateResourceComplianceGroupByRegionResponseBody& setComplianceResult(GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult && complianceResult) { DARABONBA_PTR_SET_RVALUE(complianceResult_, complianceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetAggregateResourceComplianceGroupByRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried evaluation results.
    std::shared_ptr<GetAggregateResourceComplianceGroupByRegionResponseBodyComplianceResult> complianceResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
