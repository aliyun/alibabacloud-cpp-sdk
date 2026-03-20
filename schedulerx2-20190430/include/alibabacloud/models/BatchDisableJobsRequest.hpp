// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDISABLEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDISABLEJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class BatchDisableJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDisableJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(JobIdList, jobIdList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDisableJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(JobIdList, jobIdList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    BatchDisableJobsRequest() = default ;
    BatchDisableJobsRequest(const BatchDisableJobsRequest &) = default ;
    BatchDisableJobsRequest(BatchDisableJobsRequest &&) = default ;
    BatchDisableJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDisableJobsRequest() = default ;
    BatchDisableJobsRequest& operator=(const BatchDisableJobsRequest &) = default ;
    BatchDisableJobsRequest& operator=(BatchDisableJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->groupId_ == nullptr
        && this->jobIdList_ == nullptr && this->namespace_ == nullptr && this->namespaceSource_ == nullptr && this->regionId_ == nullptr; };
    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline BatchDisableJobsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // jobIdList Field Functions 
    bool hasJobIdList() const { return this->jobIdList_ != nullptr;};
    void deleteJobIdList() { this->jobIdList_ = nullptr;};
    inline const vector<int64_t> & getJobIdList() const { DARABONBA_PTR_GET_CONST(jobIdList_, vector<int64_t>) };
    inline vector<int64_t> getJobIdList() { DARABONBA_PTR_GET(jobIdList_, vector<int64_t>) };
    inline BatchDisableJobsRequest& setJobIdList(const vector<int64_t> & jobIdList) { DARABONBA_PTR_SET_VALUE(jobIdList_, jobIdList) };
    inline BatchDisableJobsRequest& setJobIdList(vector<int64_t> && jobIdList) { DARABONBA_PTR_SET_RVALUE(jobIdList_, jobIdList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchDisableJobsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string getNamespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline BatchDisableJobsRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchDisableJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the application. You can obtain the application ID on the **Application Management** page in the SchedulerX console.
    shared_ptr<string> groupId_ {};
    // The job IDs. Separate multiple job IDs with commas (,).
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> jobIdList_ {};
    // The ID of the namespace to which the job belongs. You can obtain the ID of the namespace on the **Namespace** page in the SchedulerX console.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // The source of the namespace. This parameter is required only for a special third party.
    shared_ptr<string> namespaceSource_ {};
    // The ID of the region to which the job belongs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
