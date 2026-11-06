// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATAPROCESSJOBATTRIBUTEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATAPROCESSJOBATTRIBUTEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DescribeDataProcessJobAttributeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataProcessJobAttributeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataProcessJobAttributeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    DescribeDataProcessJobAttributeRequest() = default ;
    DescribeDataProcessJobAttributeRequest(const DescribeDataProcessJobAttributeRequest &) = default ;
    DescribeDataProcessJobAttributeRequest(DescribeDataProcessJobAttributeRequest &&) = default ;
    DescribeDataProcessJobAttributeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataProcessJobAttributeRequest() = default ;
    DescribeDataProcessJobAttributeRequest& operator=(const DescribeDataProcessJobAttributeRequest &) = default ;
    DescribeDataProcessJobAttributeRequest& operator=(DescribeDataProcessJobAttributeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->jobId_ == nullptr
        && this->regionId_ == nullptr; };
    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline string getJobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, "") };
    inline DescribeDataProcessJobAttributeRequest& setJobId(string jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeDataProcessJobAttributeRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the data processing job to query.
    // 
    // This parameter is required.
    shared_ptr<string> jobId_ {};
    // The ID of the region where the job is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
