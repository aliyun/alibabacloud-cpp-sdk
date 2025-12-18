// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCECOMPLIANCEGROUPBYREGIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetResourceComplianceGroupByRegionResponseBodyComplianceResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Config20200907
{
namespace Models
{
  class GetResourceComplianceGroupByRegionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceComplianceGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ComplianceResult, complianceResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceComplianceGroupByRegionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ComplianceResult, complianceResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    GetResourceComplianceGroupByRegionResponseBody() = default ;
    GetResourceComplianceGroupByRegionResponseBody(const GetResourceComplianceGroupByRegionResponseBody &) = default ;
    GetResourceComplianceGroupByRegionResponseBody(GetResourceComplianceGroupByRegionResponseBody &&) = default ;
    GetResourceComplianceGroupByRegionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceComplianceGroupByRegionResponseBody() = default ;
    GetResourceComplianceGroupByRegionResponseBody& operator=(const GetResourceComplianceGroupByRegionResponseBody &) = default ;
    GetResourceComplianceGroupByRegionResponseBody& operator=(GetResourceComplianceGroupByRegionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->complianceResult_ == nullptr
        && return this->requestId_ == nullptr; };
    // complianceResult Field Functions 
    bool hasComplianceResult() const { return this->complianceResult_ != nullptr;};
    void deleteComplianceResult() { this->complianceResult_ = nullptr;};
    inline const GetResourceComplianceGroupByRegionResponseBodyComplianceResult & complianceResult() const { DARABONBA_PTR_GET_CONST(complianceResult_, GetResourceComplianceGroupByRegionResponseBodyComplianceResult) };
    inline GetResourceComplianceGroupByRegionResponseBodyComplianceResult complianceResult() { DARABONBA_PTR_GET(complianceResult_, GetResourceComplianceGroupByRegionResponseBodyComplianceResult) };
    inline GetResourceComplianceGroupByRegionResponseBody& setComplianceResult(const GetResourceComplianceGroupByRegionResponseBodyComplianceResult & complianceResult) { DARABONBA_PTR_SET_VALUE(complianceResult_, complianceResult) };
    inline GetResourceComplianceGroupByRegionResponseBody& setComplianceResult(GetResourceComplianceGroupByRegionResponseBodyComplianceResult && complianceResult) { DARABONBA_PTR_SET_RVALUE(complianceResult_, complianceResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetResourceComplianceGroupByRegionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried evaluation results.
    std::shared_ptr<GetResourceComplianceGroupByRegionResponseBodyComplianceResult> complianceResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Config20200907
#endif
