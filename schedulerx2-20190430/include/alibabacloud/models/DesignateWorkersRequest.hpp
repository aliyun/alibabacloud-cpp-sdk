// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESIGNATEWORKERSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESIGNATEWORKERSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Schedulerx220190430
{
namespace Models
{
  class DesignateWorkersRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DesignateWorkersRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DesignateType, designateType_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(JobId, jobId_);
      DARABONBA_PTR_TO_JSON(Labels, labels_);
      DARABONBA_PTR_TO_JSON(Namespace, namespace_);
      DARABONBA_PTR_TO_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Transferable, transferable_);
      DARABONBA_PTR_TO_JSON(Workers, workers_);
    };
    friend void from_json(const Darabonba::Json& j, DesignateWorkersRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DesignateType, designateType_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(JobId, jobId_);
      DARABONBA_PTR_FROM_JSON(Labels, labels_);
      DARABONBA_PTR_FROM_JSON(Namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(NamespaceSource, namespaceSource_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Transferable, transferable_);
      DARABONBA_PTR_FROM_JSON(Workers, workers_);
    };
    DesignateWorkersRequest() = default ;
    DesignateWorkersRequest(const DesignateWorkersRequest &) = default ;
    DesignateWorkersRequest(DesignateWorkersRequest &&) = default ;
    DesignateWorkersRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DesignateWorkersRequest() = default ;
    DesignateWorkersRequest& operator=(const DesignateWorkersRequest &) = default ;
    DesignateWorkersRequest& operator=(DesignateWorkersRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->designateType_ == nullptr
        && return this->groupId_ == nullptr && return this->jobId_ == nullptr && return this->labels_ == nullptr && return this->namespace_ == nullptr && return this->namespaceSource_ == nullptr
        && return this->regionId_ == nullptr && return this->transferable_ == nullptr && return this->workers_ == nullptr; };
    // designateType Field Functions 
    bool hasDesignateType() const { return this->designateType_ != nullptr;};
    void deleteDesignateType() { this->designateType_ = nullptr;};
    inline int32_t designateType() const { DARABONBA_PTR_GET_DEFAULT(designateType_, 0) };
    inline DesignateWorkersRequest& setDesignateType(int32_t designateType) { DARABONBA_PTR_SET_VALUE(designateType_, designateType) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DesignateWorkersRequest& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // jobId Field Functions 
    bool hasJobId() const { return this->jobId_ != nullptr;};
    void deleteJobId() { this->jobId_ = nullptr;};
    inline int64_t jobId() const { DARABONBA_PTR_GET_DEFAULT(jobId_, 0L) };
    inline DesignateWorkersRequest& setJobId(int64_t jobId) { DARABONBA_PTR_SET_VALUE(jobId_, jobId) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline string labels() const { DARABONBA_PTR_GET_DEFAULT(labels_, "") };
    inline DesignateWorkersRequest& setLabels(string labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline DesignateWorkersRequest& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // namespaceSource Field Functions 
    bool hasNamespaceSource() const { return this->namespaceSource_ != nullptr;};
    void deleteNamespaceSource() { this->namespaceSource_ = nullptr;};
    inline string namespaceSource() const { DARABONBA_PTR_GET_DEFAULT(namespaceSource_, "") };
    inline DesignateWorkersRequest& setNamespaceSource(string namespaceSource) { DARABONBA_PTR_SET_VALUE(namespaceSource_, namespaceSource) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DesignateWorkersRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // transferable Field Functions 
    bool hasTransferable() const { return this->transferable_ != nullptr;};
    void deleteTransferable() { this->transferable_ = nullptr;};
    inline bool transferable() const { DARABONBA_PTR_GET_DEFAULT(transferable_, false) };
    inline DesignateWorkersRequest& setTransferable(bool transferable) { DARABONBA_PTR_SET_VALUE(transferable_, transferable) };


    // workers Field Functions 
    bool hasWorkers() const { return this->workers_ != nullptr;};
    void deleteWorkers() { this->workers_ = nullptr;};
    inline string workers() const { DARABONBA_PTR_GET_DEFAULT(workers_, "") };
    inline DesignateWorkersRequest& setWorkers(string workers) { DARABONBA_PTR_SET_VALUE(workers_, workers) };


  protected:
    // The type of the machines to be designated. Valid values: 1 and 2. The value 1 specifies the worker type. The value 2 specifies the label type.
    // 
    // This parameter is required.
    std::shared_ptr<int32_t> designateType_ = nullptr;
    // The application group ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> groupId_ = nullptr;
    // The job ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> jobId_ = nullptr;
    // The designated `labels`. Specify the value of the parameter in a `JSON` string.
    std::shared_ptr<string> labels_ = nullptr;
    // The unique identifier (UID) of the namespace.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespace_ = nullptr;
    // The source of the namespace.
    std::shared_ptr<string> namespaceSource_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // Specifies whether to allow a failover.
    // 
    // This parameter is required.
    std::shared_ptr<bool> transferable_ = nullptr;
    // The designated machines. Specify the value of the parameter in a JSON string.
    std::shared_ptr<string> workers_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Schedulerx220190430
#endif
