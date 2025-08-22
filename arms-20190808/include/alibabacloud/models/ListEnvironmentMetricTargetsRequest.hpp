// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTENVIRONMENTMETRICTARGETSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTENVIRONMENTMETRICTARGETSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class ListEnvironmentMetricTargetsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListEnvironmentMetricTargetsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_TO_JSON(JobName, jobName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, ListEnvironmentMetricTargetsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EnvironmentId, environmentId_);
      DARABONBA_PTR_FROM_JSON(JobName, jobName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    ListEnvironmentMetricTargetsRequest() = default ;
    ListEnvironmentMetricTargetsRequest(const ListEnvironmentMetricTargetsRequest &) = default ;
    ListEnvironmentMetricTargetsRequest(ListEnvironmentMetricTargetsRequest &&) = default ;
    ListEnvironmentMetricTargetsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListEnvironmentMetricTargetsRequest() = default ;
    ListEnvironmentMetricTargetsRequest& operator=(const ListEnvironmentMetricTargetsRequest &) = default ;
    ListEnvironmentMetricTargetsRequest& operator=(ListEnvironmentMetricTargetsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->environmentId_ != nullptr
        && this->jobName_ != nullptr && this->regionId_ != nullptr; };
    // environmentId Field Functions 
    bool hasEnvironmentId() const { return this->environmentId_ != nullptr;};
    void deleteEnvironmentId() { this->environmentId_ = nullptr;};
    inline string environmentId() const { DARABONBA_PTR_GET_DEFAULT(environmentId_, "") };
    inline ListEnvironmentMetricTargetsRequest& setEnvironmentId(string environmentId) { DARABONBA_PTR_SET_VALUE(environmentId_, environmentId) };


    // jobName Field Functions 
    bool hasJobName() const { return this->jobName_ != nullptr;};
    void deleteJobName() { this->jobName_ = nullptr;};
    inline string jobName() const { DARABONBA_PTR_GET_DEFAULT(jobName_, "") };
    inline ListEnvironmentMetricTargetsRequest& setJobName(string jobName) { DARABONBA_PTR_SET_VALUE(jobName_, jobName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListEnvironmentMetricTargetsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The environment ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> environmentId_ = nullptr;
    // The job name.
    std::shared_ptr<string> jobName_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
