// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTNODESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListNodesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListNodesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ContainerId, containerId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_TO_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_TO_JSON(Scene, scene_);
    };
    friend void from_json(const Darabonba::Json& j, ListNodesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ContainerId, containerId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(Recurrence, recurrence_);
      DARABONBA_PTR_FROM_JSON(RerunMode, rerunMode_);
      DARABONBA_PTR_FROM_JSON(Scene, scene_);
    };
    ListNodesRequest() = default ;
    ListNodesRequest(const ListNodesRequest &) = default ;
    ListNodesRequest(ListNodesRequest &&) = default ;
    ListNodesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListNodesRequest() = default ;
    ListNodesRequest& operator=(const ListNodesRequest &) = default ;
    ListNodesRequest& operator=(ListNodesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->containerId_ != nullptr
        && this->name_ != nullptr && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->projectId_ != nullptr && this->recurrence_ != nullptr
        && this->rerunMode_ != nullptr && this->scene_ != nullptr; };
    // containerId Field Functions 
    bool hasContainerId() const { return this->containerId_ != nullptr;};
    void deleteContainerId() { this->containerId_ = nullptr;};
    inline int64_t containerId() const { DARABONBA_PTR_GET_DEFAULT(containerId_, 0L) };
    inline ListNodesRequest& setContainerId(int64_t containerId) { DARABONBA_PTR_SET_VALUE(containerId_, containerId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListNodesRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListNodesRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListNodesRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline ListNodesRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // recurrence Field Functions 
    bool hasRecurrence() const { return this->recurrence_ != nullptr;};
    void deleteRecurrence() { this->recurrence_ = nullptr;};
    inline string recurrence() const { DARABONBA_PTR_GET_DEFAULT(recurrence_, "") };
    inline ListNodesRequest& setRecurrence(string recurrence) { DARABONBA_PTR_SET_VALUE(recurrence_, recurrence) };


    // rerunMode Field Functions 
    bool hasRerunMode() const { return this->rerunMode_ != nullptr;};
    void deleteRerunMode() { this->rerunMode_ = nullptr;};
    inline string rerunMode() const { DARABONBA_PTR_GET_DEFAULT(rerunMode_, "") };
    inline ListNodesRequest& setRerunMode(string rerunMode) { DARABONBA_PTR_SET_VALUE(rerunMode_, rerunMode) };


    // scene Field Functions 
    bool hasScene() const { return this->scene_ != nullptr;};
    void deleteScene() { this->scene_ = nullptr;};
    inline string scene() const { DARABONBA_PTR_GET_DEFAULT(scene_, "") };
    inline ListNodesRequest& setScene(string scene) { DARABONBA_PTR_SET_VALUE(scene_, scene) };


  protected:
    // The container ID, which is a filter condition. If you do not want to use this condition for filtering, you do not need to configure this parameter. The container ID that you specify is unrelated to the resource group ID indicated by the ResourceGroupId parameter.
    std::shared_ptr<int64_t> containerId_ = nullptr;
    // The name of the node. Fuzzy search is supported.
    std::shared_ptr<string> name_ = nullptr;
    // The page number of the data to retrieve, used for pagination.
    std::shared_ptr<int32_t> pageNumber_ = nullptr;
    // The number of entries per page. Default is 10, and the maximum is 100.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // The scheduling type, which is a filter condition. Valid values:
    // 
    // *   Normal: The nodes are scheduled as expected.
    // *   Pause: The nodes are paused, and the running of their descendant nodes is blocked.
    // *   Skip: The nodes are dry run. The system does not actually run the nodes, but directly returns a success response. The running duration of the nodes is 0 seconds. In addition, the nodes do not occupy resources or block the running of their descendant nodes.
    std::shared_ptr<string> recurrence_ = nullptr;
    // The rerun property, which is a filter condition. If you do not want to use this condition for filtering, you do not need to configure this parameter. Valid values:
    // 
    // *   Allowed: The nodes can be rerun regardless of whether they are successfully run or fail to run.
    // *   FailureAllowed: The nodes can be rerun only after they fail to run.
    // *   Denied: The nodes cannot be rerun regardless of whether they are successfully run or fail to run.
    std::shared_ptr<string> rerunMode_ = nullptr;
    // The location of the nodes in the left-side navigation pane of the Data Studio page, which is a filter condition. If you do not want to use this condition for filtering, you do not need to configure this parameter. Valid values:
    // 
    // *   DataworksProject
    // *   DataworksManualWorkflow
    // *   DataworksManualTask
    std::shared_ptr<string> scene_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
