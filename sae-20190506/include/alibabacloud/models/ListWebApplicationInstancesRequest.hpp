// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONINSTANCESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONINSTANCESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListWebApplicationInstancesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebApplicationInstancesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Statuses, statuses_);
      DARABONBA_PTR_TO_JSON(VersionIds, versionIds_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebApplicationInstancesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIds_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Statuses, statuses_);
      DARABONBA_PTR_FROM_JSON(VersionIds, versionIds_);
    };
    ListWebApplicationInstancesRequest() = default ;
    ListWebApplicationInstancesRequest(const ListWebApplicationInstancesRequest &) = default ;
    ListWebApplicationInstancesRequest(ListWebApplicationInstancesRequest &&) = default ;
    ListWebApplicationInstancesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebApplicationInstancesRequest() = default ;
    ListWebApplicationInstancesRequest& operator=(const ListWebApplicationInstancesRequest &) = default ;
    ListWebApplicationInstancesRequest& operator=(ListWebApplicationInstancesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && return this->instanceIds_ == nullptr && return this->limit_ == nullptr && return this->namespaceId_ == nullptr && return this->startTime_ == nullptr && return this->statuses_ == nullptr
        && return this->versionIds_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t endTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListWebApplicationInstancesRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceIds Field Functions 
    bool hasInstanceIds() const { return this->instanceIds_ != nullptr;};
    void deleteInstanceIds() { this->instanceIds_ = nullptr;};
    inline const vector<string> & instanceIds() const { DARABONBA_PTR_GET_CONST(instanceIds_, vector<string>) };
    inline vector<string> instanceIds() { DARABONBA_PTR_GET(instanceIds_, vector<string>) };
    inline ListWebApplicationInstancesRequest& setInstanceIds(const vector<string> & instanceIds) { DARABONBA_PTR_SET_VALUE(instanceIds_, instanceIds) };
    inline ListWebApplicationInstancesRequest& setInstanceIds(vector<string> && instanceIds) { DARABONBA_PTR_SET_RVALUE(instanceIds_, instanceIds) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string limit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline ListWebApplicationInstancesRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string namespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListWebApplicationInstancesRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t startTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListWebApplicationInstancesRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statuses Field Functions 
    bool hasStatuses() const { return this->statuses_ != nullptr;};
    void deleteStatuses() { this->statuses_ = nullptr;};
    inline const vector<string> & statuses() const { DARABONBA_PTR_GET_CONST(statuses_, vector<string>) };
    inline vector<string> statuses() { DARABONBA_PTR_GET(statuses_, vector<string>) };
    inline ListWebApplicationInstancesRequest& setStatuses(const vector<string> & statuses) { DARABONBA_PTR_SET_VALUE(statuses_, statuses) };
    inline ListWebApplicationInstancesRequest& setStatuses(vector<string> && statuses) { DARABONBA_PTR_SET_RVALUE(statuses_, statuses) };


    // versionIds Field Functions 
    bool hasVersionIds() const { return this->versionIds_ != nullptr;};
    void deleteVersionIds() { this->versionIds_ = nullptr;};
    inline const vector<string> & versionIds() const { DARABONBA_PTR_GET_CONST(versionIds_, vector<string>) };
    inline vector<string> versionIds() { DARABONBA_PTR_GET(versionIds_, vector<string>) };
    inline ListWebApplicationInstancesRequest& setVersionIds(const vector<string> & versionIds) { DARABONBA_PTR_SET_VALUE(versionIds_, versionIds) };
    inline ListWebApplicationInstancesRequest& setVersionIds(vector<string> && versionIds) { DARABONBA_PTR_SET_RVALUE(versionIds_, versionIds) };


  protected:
    // The time when the operation ended.
    std::shared_ptr<int64_t> endTime_ = nullptr;
    // The instance ID.
    std::shared_ptr<vector<string>> instanceIds_ = nullptr;
    // The number of application instances returned.
    std::shared_ptr<string> limit_ = nullptr;
    // The namespace ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> namespaceId_ = nullptr;
    // The time when the task was created.
    std::shared_ptr<int64_t> startTime_ = nullptr;
    // The status of the application instance.
    std::shared_ptr<vector<string>> statuses_ = nullptr;
    // The ID of the application version.
    std::shared_ptr<vector<string>> versionIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
