// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECPROTECTIONRESOURCESRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECPROTECTIONRESOURCESRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecProtectionResourcesResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecProtectionResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApisecStatus, apisecStatus_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(Resource, resource_);
      DARABONBA_PTR_TO_JSON(TraceStatus, traceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecProtectionResourcesResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApisecStatus, apisecStatus_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(Resource, resource_);
      DARABONBA_PTR_FROM_JSON(TraceStatus, traceStatus_);
    };
    DescribeApisecProtectionResourcesResponseBodyData() = default ;
    DescribeApisecProtectionResourcesResponseBodyData(const DescribeApisecProtectionResourcesResponseBodyData &) = default ;
    DescribeApisecProtectionResourcesResponseBodyData(DescribeApisecProtectionResourcesResponseBodyData &&) = default ;
    DescribeApisecProtectionResourcesResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecProtectionResourcesResponseBodyData() = default ;
    DescribeApisecProtectionResourcesResponseBodyData& operator=(const DescribeApisecProtectionResourcesResponseBodyData &) = default ;
    DescribeApisecProtectionResourcesResponseBodyData& operator=(DescribeApisecProtectionResourcesResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->apisecStatus_ != nullptr
        && this->reportStatus_ != nullptr && this->resource_ != nullptr && this->traceStatus_ != nullptr; };
    // apisecStatus Field Functions 
    bool hasApisecStatus() const { return this->apisecStatus_ != nullptr;};
    void deleteApisecStatus() { this->apisecStatus_ = nullptr;};
    inline int64_t apisecStatus() const { DARABONBA_PTR_GET_DEFAULT(apisecStatus_, 0L) };
    inline DescribeApisecProtectionResourcesResponseBodyData& setApisecStatus(int64_t apisecStatus) { DARABONBA_PTR_SET_VALUE(apisecStatus_, apisecStatus) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline int64_t reportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, 0L) };
    inline DescribeApisecProtectionResourcesResponseBodyData& setReportStatus(int64_t reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline string resource() const { DARABONBA_PTR_GET_DEFAULT(resource_, "") };
    inline DescribeApisecProtectionResourcesResponseBodyData& setResource(string resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };


    // traceStatus Field Functions 
    bool hasTraceStatus() const { return this->traceStatus_ != nullptr;};
    void deleteTraceStatus() { this->traceStatus_ = nullptr;};
    inline int64_t traceStatus() const { DARABONBA_PTR_GET_DEFAULT(traceStatus_, 0L) };
    inline DescribeApisecProtectionResourcesResponseBodyData& setTraceStatus(int64_t traceStatus) { DARABONBA_PTR_SET_VALUE(traceStatus_, traceStatus) };


  protected:
    // The switch of the API security module.
    std::shared_ptr<int64_t> apisecStatus_ = nullptr;
    // The switch of the compliance check feature.
    std::shared_ptr<int64_t> reportStatus_ = nullptr;
    // The protected object.
    std::shared_ptr<string> resource_ = nullptr;
    // The switch of the tracing and auditing feature.
    std::shared_ptr<int64_t> traceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
