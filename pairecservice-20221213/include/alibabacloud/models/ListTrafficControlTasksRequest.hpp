// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTTRAFFICCONTROLTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListTrafficControlTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListTrafficControlTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(All, all_);
      DARABONBA_PTR_TO_JSON(ControlTargetFilter, controlTargetFilter_);
      DARABONBA_PTR_TO_JSON(Environment, environment_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Order, order_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(SceneId, sceneId_);
      DARABONBA_PTR_TO_JSON(SortBy, sortBy_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(TrafficControlTaskId, trafficControlTaskId_);
      DARABONBA_PTR_TO_JSON(Version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ListTrafficControlTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(All, all_);
      DARABONBA_PTR_FROM_JSON(ControlTargetFilter, controlTargetFilter_);
      DARABONBA_PTR_FROM_JSON(Environment, environment_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Order, order_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(SceneId, sceneId_);
      DARABONBA_PTR_FROM_JSON(SortBy, sortBy_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(TrafficControlTaskId, trafficControlTaskId_);
      DARABONBA_PTR_FROM_JSON(Version, version_);
    };
    ListTrafficControlTasksRequest() = default ;
    ListTrafficControlTasksRequest(const ListTrafficControlTasksRequest &) = default ;
    ListTrafficControlTasksRequest(ListTrafficControlTasksRequest &&) = default ;
    ListTrafficControlTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListTrafficControlTasksRequest() = default ;
    ListTrafficControlTasksRequest& operator=(const ListTrafficControlTasksRequest &) = default ;
    ListTrafficControlTasksRequest& operator=(ListTrafficControlTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->all_ != nullptr
        && this->controlTargetFilter_ != nullptr && this->environment_ != nullptr && this->instanceId_ != nullptr && this->name_ != nullptr && this->order_ != nullptr
        && this->pageNumber_ != nullptr && this->pageSize_ != nullptr && this->sceneId_ != nullptr && this->sortBy_ != nullptr && this->status_ != nullptr
        && this->trafficControlTaskId_ != nullptr && this->version_ != nullptr; };
    // all Field Functions 
    bool hasAll() const { return this->all_ != nullptr;};
    void deleteAll() { this->all_ = nullptr;};
    inline bool all() const { DARABONBA_PTR_GET_DEFAULT(all_, false) };
    inline ListTrafficControlTasksRequest& setAll(bool all) { DARABONBA_PTR_SET_VALUE(all_, all) };


    // controlTargetFilter Field Functions 
    bool hasControlTargetFilter() const { return this->controlTargetFilter_ != nullptr;};
    void deleteControlTargetFilter() { this->controlTargetFilter_ = nullptr;};
    inline string controlTargetFilter() const { DARABONBA_PTR_GET_DEFAULT(controlTargetFilter_, "") };
    inline ListTrafficControlTasksRequest& setControlTargetFilter(string controlTargetFilter) { DARABONBA_PTR_SET_VALUE(controlTargetFilter_, controlTargetFilter) };


    // environment Field Functions 
    bool hasEnvironment() const { return this->environment_ != nullptr;};
    void deleteEnvironment() { this->environment_ = nullptr;};
    inline string environment() const { DARABONBA_PTR_GET_DEFAULT(environment_, "") };
    inline ListTrafficControlTasksRequest& setEnvironment(string environment) { DARABONBA_PTR_SET_VALUE(environment_, environment) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListTrafficControlTasksRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListTrafficControlTasksRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // order Field Functions 
    bool hasOrder() const { return this->order_ != nullptr;};
    void deleteOrder() { this->order_ = nullptr;};
    inline string order() const { DARABONBA_PTR_GET_DEFAULT(order_, "") };
    inline ListTrafficControlTasksRequest& setOrder(string order) { DARABONBA_PTR_SET_VALUE(order_, order) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline string pageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, "") };
    inline ListTrafficControlTasksRequest& setPageNumber(string pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline ListTrafficControlTasksRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // sceneId Field Functions 
    bool hasSceneId() const { return this->sceneId_ != nullptr;};
    void deleteSceneId() { this->sceneId_ = nullptr;};
    inline string sceneId() const { DARABONBA_PTR_GET_DEFAULT(sceneId_, "") };
    inline ListTrafficControlTasksRequest& setSceneId(string sceneId) { DARABONBA_PTR_SET_VALUE(sceneId_, sceneId) };


    // sortBy Field Functions 
    bool hasSortBy() const { return this->sortBy_ != nullptr;};
    void deleteSortBy() { this->sortBy_ = nullptr;};
    inline string sortBy() const { DARABONBA_PTR_GET_DEFAULT(sortBy_, "") };
    inline ListTrafficControlTasksRequest& setSortBy(string sortBy) { DARABONBA_PTR_SET_VALUE(sortBy_, sortBy) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ListTrafficControlTasksRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // trafficControlTaskId Field Functions 
    bool hasTrafficControlTaskId() const { return this->trafficControlTaskId_ != nullptr;};
    void deleteTrafficControlTaskId() { this->trafficControlTaskId_ = nullptr;};
    inline string trafficControlTaskId() const { DARABONBA_PTR_GET_DEFAULT(trafficControlTaskId_, "") };
    inline ListTrafficControlTasksRequest& setTrafficControlTaskId(string trafficControlTaskId) { DARABONBA_PTR_SET_VALUE(trafficControlTaskId_, trafficControlTaskId) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string version() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ListTrafficControlTasksRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    std::shared_ptr<bool> all_ = nullptr;
    std::shared_ptr<string> controlTargetFilter_ = nullptr;
    std::shared_ptr<string> environment_ = nullptr;
    std::shared_ptr<string> instanceId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> order_ = nullptr;
    std::shared_ptr<string> pageNumber_ = nullptr;
    std::shared_ptr<string> pageSize_ = nullptr;
    std::shared_ptr<string> sceneId_ = nullptr;
    std::shared_ptr<string> sortBy_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<string> trafficControlTaskId_ = nullptr;
    std::shared_ptr<string> version_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
