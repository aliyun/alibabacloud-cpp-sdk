// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREPORTATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCEREPORTATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeInstanceReportAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceReportAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ReportId, reportId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceReportAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ReportId, reportId_);
    };
    DescribeInstanceReportAttributeRequest() = default ;
    DescribeInstanceReportAttributeRequest(const DescribeInstanceReportAttributeRequest &) = default ;
    DescribeInstanceReportAttributeRequest(DescribeInstanceReportAttributeRequest &&) = default ;
    DescribeInstanceReportAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceReportAttributeRequest() = default ;
    DescribeInstanceReportAttributeRequest& operator=(const DescribeInstanceReportAttributeRequest &) = default ;
    DescribeInstanceReportAttributeRequest& operator=(DescribeInstanceReportAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->reportId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeInstanceReportAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reportId Field Functions 
    bool hasReportId() const { return this->reportId_ != nullptr;};
    void deleteReportId() { this->reportId_ = nullptr;};
    inline string getReportId() const { DARABONBA_PTR_GET_DEFAULT(reportId_, "") };
    inline DescribeInstanceReportAttributeRequest& setReportId(string reportId) { DARABONBA_PTR_SET_VALUE(reportId_, reportId) };


  protected:
    // The region ID of the instance.
    shared_ptr<string> regionId_ {};
    // The ID of the instance inspection report.
    shared_ptr<string> reportId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
