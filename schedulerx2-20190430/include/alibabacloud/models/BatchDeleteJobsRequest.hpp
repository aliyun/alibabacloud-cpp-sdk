// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHDELETEJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_BATCHDELETEJOBSREQUEST_HPP_
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
  class BatchDeleteJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchDeleteJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(JobIdList, jobIdList_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchDeleteJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(JobIdList, jobIdList_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
    };
    BatchDeleteJobsRequest() = default ;
    BatchDeleteJobsRequest(const BatchDeleteJobsRequest &) = default ;
    BatchDeleteJobsRequest(BatchDeleteJobsRequest &&) = default ;
    BatchDeleteJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchDeleteJobsRequest() = default ;
    BatchDeleteJobsRequest& operator=(const BatchDeleteJobsRequest &) = default ;
    BatchDeleteJobsRequest& operator=(BatchDeleteJobsRequest &&) = default ;
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
    inline BatchDeleteJobsRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // jobIdList Field Functions 
    bool hasJobIdList() const { return this->jobIdList_ != nullptr;};
    void deleteJobIdList() { this->jobIdList_ = nullptr;};
    inline const vector<int64_t> & getJobIdList() const { DARABONBA_PTR_GET_CONST(jobIdList_, vector<int64_t>) };
    inline vector<int64_t> getJobIdList() { DARABONBA_PTR_GET(jobIdList_, vector<int64_t>) };
    inline BatchDeleteJobsRequest& setJobIdList(const vector<int64_t> & jobIdList) { DARABONBA_PTR_SET_VALUE(jobIdList_, jobIdList) };
    inline BatchDeleteJobsRequest& setJobIdList(vector<int64_t> && jobIdList) { DARABONBA_PTR_SET_RVALUE(jobIdList_, jobIdList) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string getNamespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline BatchDeleteJobsRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string getNamespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline BatchDeleteJobsRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline BatchDeleteJobsRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


  protected:
    // The ID of the Application. You can find this ID on the **Application Management** page in the Console.
    // 
    // This parameter is required.
    shared_ptr<string> groupId_ {};
    // The IDs of the Jobs to delete.
    // 
    // This parameter is required.
    shared_ptr<vector<int64_t>> jobIdList_ {};
    // The ID of the Namespace that contains the Jobs. You can find this ID on the **Namespace** page in the Console.
    // 
    // This parameter is required.
    shared_ptr<string> namespace_ {};
    // This parameter is required only for specific third-party integrations.
    shared_ptr<string> namespaceSource_ {};
    // The Region where the Jobs are located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
