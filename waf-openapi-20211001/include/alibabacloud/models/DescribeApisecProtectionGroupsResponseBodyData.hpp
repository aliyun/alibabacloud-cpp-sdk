// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAPISECPROTECTIONGROUPSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAPISECPROTECTIONGROUPSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeApisecProtectionGroupsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeApisecProtectionGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ApisecStatus, apisecStatus_);
      DARABONBA_PTR_TO_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_TO_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_TO_JSON(TraceStatus, traceStatus_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeApisecProtectionGroupsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ApisecStatus, apisecStatus_);
      DARABONBA_PTR_FROM_JSON(ReportStatus, reportStatus_);
      DARABONBA_PTR_FROM_JSON(ResourceGroup, resourceGroup_);
      DARABONBA_PTR_FROM_JSON(TraceStatus, traceStatus_);
    };
    DescribeApisecProtectionGroupsResponseBodyData() = default ;
    DescribeApisecProtectionGroupsResponseBodyData(const DescribeApisecProtectionGroupsResponseBodyData &) = default ;
    DescribeApisecProtectionGroupsResponseBodyData(DescribeApisecProtectionGroupsResponseBodyData &&) = default ;
    DescribeApisecProtectionGroupsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeApisecProtectionGroupsResponseBodyData() = default ;
    DescribeApisecProtectionGroupsResponseBodyData& operator=(const DescribeApisecProtectionGroupsResponseBodyData &) = default ;
    DescribeApisecProtectionGroupsResponseBodyData& operator=(DescribeApisecProtectionGroupsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->apisecStatus_ == nullptr
        && return this->reportStatus_ == nullptr && return this->resourceGroup_ == nullptr && return this->traceStatus_ == nullptr; };
    // apisecStatus Field Functions 
    bool hasApisecStatus() const { return this->apisecStatus_ != nullptr;};
    void deleteApisecStatus() { this->apisecStatus_ = nullptr;};
    inline int64_t apisecStatus() const { DARABONBA_PTR_GET_DEFAULT(apisecStatus_, 0L) };
    inline DescribeApisecProtectionGroupsResponseBodyData& setApisecStatus(int64_t apisecStatus) { DARABONBA_PTR_SET_VALUE(apisecStatus_, apisecStatus) };


    // reportStatus Field Functions 
    bool hasReportStatus() const { return this->reportStatus_ != nullptr;};
    void deleteReportStatus() { this->reportStatus_ = nullptr;};
    inline int64_t reportStatus() const { DARABONBA_PTR_GET_DEFAULT(reportStatus_, 0L) };
    inline DescribeApisecProtectionGroupsResponseBodyData& setReportStatus(int64_t reportStatus) { DARABONBA_PTR_SET_VALUE(reportStatus_, reportStatus) };


    // resourceGroup Field Functions 
    bool hasResourceGroup() const { return this->resourceGroup_ != nullptr;};
    void deleteResourceGroup() { this->resourceGroup_ = nullptr;};
    inline string resourceGroup() const { DARABONBA_PTR_GET_DEFAULT(resourceGroup_, "") };
    inline DescribeApisecProtectionGroupsResponseBodyData& setResourceGroup(string resourceGroup) { DARABONBA_PTR_SET_VALUE(resourceGroup_, resourceGroup) };


    // traceStatus Field Functions 
    bool hasTraceStatus() const { return this->traceStatus_ != nullptr;};
    void deleteTraceStatus() { this->traceStatus_ = nullptr;};
    inline int64_t traceStatus() const { DARABONBA_PTR_GET_DEFAULT(traceStatus_, 0L) };
    inline DescribeApisecProtectionGroupsResponseBodyData& setTraceStatus(int64_t traceStatus) { DARABONBA_PTR_SET_VALUE(traceStatus_, traceStatus) };


  protected:
    // The switch of the API security module.
    std::shared_ptr<int64_t> apisecStatus_ = nullptr;
    // The switch of the compliance check feature.
    std::shared_ptr<int64_t> reportStatus_ = nullptr;
    // The name of the protected object group.
    std::shared_ptr<string> resourceGroup_ = nullptr;
    // The switch of the tracing and auditing feature.
    std::shared_ptr<int64_t> traceStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
