// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCOMPUTEMETRICSBYINSTANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTCOMPUTEMETRICSBYINSTANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace MaxCompute20220104
{
namespace Models
{
  class ListComputeMetricsByInstanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListComputeMetricsByInstanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(endDate, endDate_);
      DARABONBA_PTR_TO_JSON(instanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(projectNames, projectNames_);
      DARABONBA_PTR_TO_JSON(region, region_);
      DARABONBA_PTR_TO_JSON(signature, signature_);
      DARABONBA_PTR_TO_JSON(specCodes, specCodes_);
      DARABONBA_PTR_TO_JSON(startDate, startDate_);
      DARABONBA_PTR_TO_JSON(types, types_);
    };
    friend void from_json(const Darabonba::Json& j, ListComputeMetricsByInstanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(endDate, endDate_);
      DARABONBA_PTR_FROM_JSON(instanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(jobOwner, jobOwner_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(projectNames, projectNames_);
      DARABONBA_PTR_FROM_JSON(region, region_);
      DARABONBA_PTR_FROM_JSON(signature, signature_);
      DARABONBA_PTR_FROM_JSON(specCodes, specCodes_);
      DARABONBA_PTR_FROM_JSON(startDate, startDate_);
      DARABONBA_PTR_FROM_JSON(types, types_);
    };
    ListComputeMetricsByInstanceRequest() = default ;
    ListComputeMetricsByInstanceRequest(const ListComputeMetricsByInstanceRequest &) = default ;
    ListComputeMetricsByInstanceRequest(ListComputeMetricsByInstanceRequest &&) = default ;
    ListComputeMetricsByInstanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListComputeMetricsByInstanceRequest() = default ;
    ListComputeMetricsByInstanceRequest& operator=(const ListComputeMetricsByInstanceRequest &) = default ;
    ListComputeMetricsByInstanceRequest& operator=(ListComputeMetricsByInstanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && return this->instanceId_ == nullptr && return this->jobOwner_ == nullptr && return this->pageNumber_ == nullptr && return this->pageSize_ == nullptr && return this->projectNames_ == nullptr
        && return this->region_ == nullptr && return this->signature_ == nullptr && return this->specCodes_ == nullptr && return this->startDate_ == nullptr && return this->types_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline int64_t endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, 0L) };
    inline ListComputeMetricsByInstanceRequest& setEndDate(int64_t endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListComputeMetricsByInstanceRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // jobOwner Field Functions 
    bool hasJobOwner() const { return this->jobOwner_ != nullptr;};
    void deleteJobOwner() { this->jobOwner_ = nullptr;};
    inline string jobOwner() const { DARABONBA_PTR_GET_DEFAULT(jobOwner_, "") };
    inline ListComputeMetricsByInstanceRequest& setJobOwner(string jobOwner) { DARABONBA_PTR_SET_VALUE(jobOwner_, jobOwner) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int64_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0L) };
    inline ListComputeMetricsByInstanceRequest& setPageNumber(int64_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline ListComputeMetricsByInstanceRequest& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectNames Field Functions 
    bool hasProjectNames() const { return this->projectNames_ != nullptr;};
    void deleteProjectNames() { this->projectNames_ = nullptr;};
    inline const vector<string> & projectNames() const { DARABONBA_PTR_GET_CONST(projectNames_, vector<string>) };
    inline vector<string> projectNames() { DARABONBA_PTR_GET(projectNames_, vector<string>) };
    inline ListComputeMetricsByInstanceRequest& setProjectNames(const vector<string> & projectNames) { DARABONBA_PTR_SET_VALUE(projectNames_, projectNames) };
    inline ListComputeMetricsByInstanceRequest& setProjectNames(vector<string> && projectNames) { DARABONBA_PTR_SET_RVALUE(projectNames_, projectNames) };


    // region Field Functions 
    bool hasRegion() const { return this->region_ != nullptr;};
    void deleteRegion() { this->region_ = nullptr;};
    inline string region() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
    inline ListComputeMetricsByInstanceRequest& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    // signature Field Functions 
    bool hasSignature() const { return this->signature_ != nullptr;};
    void deleteSignature() { this->signature_ = nullptr;};
    inline string signature() const { DARABONBA_PTR_GET_DEFAULT(signature_, "") };
    inline ListComputeMetricsByInstanceRequest& setSignature(string signature) { DARABONBA_PTR_SET_VALUE(signature_, signature) };


    // specCodes Field Functions 
    bool hasSpecCodes() const { return this->specCodes_ != nullptr;};
    void deleteSpecCodes() { this->specCodes_ = nullptr;};
    inline const vector<string> & specCodes() const { DARABONBA_PTR_GET_CONST(specCodes_, vector<string>) };
    inline vector<string> specCodes() { DARABONBA_PTR_GET(specCodes_, vector<string>) };
    inline ListComputeMetricsByInstanceRequest& setSpecCodes(const vector<string> & specCodes) { DARABONBA_PTR_SET_VALUE(specCodes_, specCodes) };
    inline ListComputeMetricsByInstanceRequest& setSpecCodes(vector<string> && specCodes) { DARABONBA_PTR_SET_RVALUE(specCodes_, specCodes) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline int64_t startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, 0L) };
    inline ListComputeMetricsByInstanceRequest& setStartDate(int64_t startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // types Field Functions 
    bool hasTypes() const { return this->types_ != nullptr;};
    void deleteTypes() { this->types_ = nullptr;};
    inline const vector<string> & types() const { DARABONBA_PTR_GET_CONST(types_, vector<string>) };
    inline vector<string> types() { DARABONBA_PTR_GET(types_, vector<string>) };
    inline ListComputeMetricsByInstanceRequest& setTypes(const vector<string> & types) { DARABONBA_PTR_SET_VALUE(types_, types) };
    inline ListComputeMetricsByInstanceRequest& setTypes(vector<string> && types) { DARABONBA_PTR_SET_RVALUE(types_, types) };


  protected:
    // The end time for the period.
    std::shared_ptr<int64_t> endDate_ = nullptr;
    // The job(instance) ID.
    std::shared_ptr<string> instanceId_ = nullptr;
    // The Alibaba Cloud account that is used to run the MaxCompute job.
    std::shared_ptr<string> jobOwner_ = nullptr;
    // The page number.
    std::shared_ptr<int64_t> pageNumber_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int64_t> pageSize_ = nullptr;
    // The name of MaxCompute project.
    std::shared_ptr<vector<string>> projectNames_ = nullptr;
    // The region ID.
    std::shared_ptr<string> region_ = nullptr;
    // The signature of the SQL job.
    std::shared_ptr<string> signature_ = nullptr;
    // Specification types.
    std::shared_ptr<vector<string>> specCodes_ = nullptr;
    // The start time for the period.
    std::shared_ptr<int64_t> startDate_ = nullptr;
    // Metering types.
    std::shared_ptr<vector<string>> types_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace MaxCompute20220104
#endif
