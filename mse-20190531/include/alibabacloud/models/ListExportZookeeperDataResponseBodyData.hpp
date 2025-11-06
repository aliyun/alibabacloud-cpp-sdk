// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXPORTZOOKEEPERDATARESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTEXPORTZOOKEEPERDATARESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListExportZookeeperDataResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExportZookeeperDataResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(ContentMap, contentMap_);
      DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
      DARABONBA_PTR_TO_JSON(ExportType, exportType_);
      DARABONBA_PTR_TO_JSON(Extend, extend_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(KubeoneTaskIds, kubeoneTaskIds_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(UpdateTime, updateTime_);
    };
    friend void from_json(const Darabonba::Json& j, ListExportZookeeperDataResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(ContentMap, contentMap_);
      DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
      DARABONBA_PTR_FROM_JSON(ExportType, exportType_);
      DARABONBA_PTR_FROM_JSON(Extend, extend_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(KubeoneTaskIds, kubeoneTaskIds_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(UpdateTime, updateTime_);
    };
    ListExportZookeeperDataResponseBodyData() = default ;
    ListExportZookeeperDataResponseBodyData(const ListExportZookeeperDataResponseBodyData &) = default ;
    ListExportZookeeperDataResponseBodyData(ListExportZookeeperDataResponseBodyData &&) = default ;
    ListExportZookeeperDataResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExportZookeeperDataResponseBodyData() = default ;
    ListExportZookeeperDataResponseBodyData& operator=(const ListExportZookeeperDataResponseBodyData &) = default ;
    ListExportZookeeperDataResponseBodyData& operator=(ListExportZookeeperDataResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->contentMap_ == nullptr
        && return this->createTime_ == nullptr && return this->exportType_ == nullptr && return this->extend_ == nullptr && return this->id_ == nullptr && return this->instanceId_ == nullptr
        && return this->kubeoneTaskIds_ == nullptr && return this->status_ == nullptr && return this->updateTime_ == nullptr; };
    // contentMap Field Functions 
    bool hasContentMap() const { return this->contentMap_ != nullptr;};
    void deleteContentMap() { this->contentMap_ = nullptr;};
    inline string contentMap() const { DARABONBA_PTR_GET_DEFAULT(contentMap_, "") };
    inline ListExportZookeeperDataResponseBodyData& setContentMap(string contentMap) { DARABONBA_PTR_SET_VALUE(contentMap_, contentMap) };


    // createTime Field Functions 
    bool hasCreateTime() const { return this->createTime_ != nullptr;};
    void deleteCreateTime() { this->createTime_ = nullptr;};
    inline int64_t createTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
    inline ListExportZookeeperDataResponseBodyData& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


    // exportType Field Functions 
    bool hasExportType() const { return this->exportType_ != nullptr;};
    void deleteExportType() { this->exportType_ = nullptr;};
    inline string exportType() const { DARABONBA_PTR_GET_DEFAULT(exportType_, "") };
    inline ListExportZookeeperDataResponseBodyData& setExportType(string exportType) { DARABONBA_PTR_SET_VALUE(exportType_, exportType) };


    // extend Field Functions 
    bool hasExtend() const { return this->extend_ != nullptr;};
    void deleteExtend() { this->extend_ = nullptr;};
    inline string extend() const { DARABONBA_PTR_GET_DEFAULT(extend_, "") };
    inline ListExportZookeeperDataResponseBodyData& setExtend(string extend) { DARABONBA_PTR_SET_VALUE(extend_, extend) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int32_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
    inline ListExportZookeeperDataResponseBodyData& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListExportZookeeperDataResponseBodyData& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // kubeoneTaskIds Field Functions 
    bool hasKubeoneTaskIds() const { return this->kubeoneTaskIds_ != nullptr;};
    void deleteKubeoneTaskIds() { this->kubeoneTaskIds_ = nullptr;};
    inline string kubeoneTaskIds() const { DARABONBA_PTR_GET_DEFAULT(kubeoneTaskIds_, "") };
    inline ListExportZookeeperDataResponseBodyData& setKubeoneTaskIds(string kubeoneTaskIds) { DARABONBA_PTR_SET_VALUE(kubeoneTaskIds_, kubeoneTaskIds) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListExportZookeeperDataResponseBodyData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updateTime Field Functions 
    bool hasUpdateTime() const { return this->updateTime_ != nullptr;};
    void deleteUpdateTime() { this->updateTime_ = nullptr;};
    inline int64_t updateTime() const { DARABONBA_PTR_GET_DEFAULT(updateTime_, 0L) };
    inline ListExportZookeeperDataResponseBodyData& setUpdateTime(int64_t updateTime) { DARABONBA_PTR_SET_VALUE(updateTime_, updateTime) };


  protected:
    // The details of the task.
    std::shared_ptr<string> contentMap_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<int64_t> createTime_ = nullptr;
    // The type of the object that is exported. Valid values:
    // 
    // *   transactionLog: transaction logs
    // *   snapshot: snapshots
    std::shared_ptr<string> exportType_ = nullptr;
    // The extension information that is in the JSON format. The extension information facilitates addition of parameters.
    std::shared_ptr<string> extend_ = nullptr;
    // The ID of the task.
    std::shared_ptr<int32_t> id_ = nullptr;
    // The ID of the instance
    std::shared_ptr<string> instanceId_ = nullptr;
    // The ID of the associated task at the underlying layer. This parameter is used only to troubleshoot failures.
    std::shared_ptr<string> kubeoneTaskIds_ = nullptr;
    // The status of the task. Valid values:
    // 
    // *   CREATE: The task is being created.
    // *   RUNNING: The task is being executed.
    // *   FINISH: The task is completed.
    // *   FAILED: The task failed.
    // *   EXPIRE: The task has expired.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the task was updated.
    std::shared_ptr<int64_t> updateTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
