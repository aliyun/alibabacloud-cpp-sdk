// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONINSTANCESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTWEBAPPLICATIONINSTANCESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sae20190506
{
namespace Models
{
  class ListWebApplicationInstancesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListWebApplicationInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndTime, endTime_);
      DARABONBA_PTR_TO_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_TO_JSON(Limit, limit_);
      DARABONBA_PTR_TO_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_TO_JSON(StartTime, startTime_);
      DARABONBA_PTR_TO_JSON(Statuses, statusesShrink_);
      DARABONBA_PTR_TO_JSON(VersionIds, versionIdsShrink_);
    };
    friend void from_json(const Darabonba::Json& j, ListWebApplicationInstancesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndTime, endTime_);
      DARABONBA_PTR_FROM_JSON(InstanceIds, instanceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Limit, limit_);
      DARABONBA_PTR_FROM_JSON(NamespaceId, namespaceId_);
      DARABONBA_PTR_FROM_JSON(StartTime, startTime_);
      DARABONBA_PTR_FROM_JSON(Statuses, statusesShrink_);
      DARABONBA_PTR_FROM_JSON(VersionIds, versionIdsShrink_);
    };
    ListWebApplicationInstancesShrinkRequest() = default ;
    ListWebApplicationInstancesShrinkRequest(const ListWebApplicationInstancesShrinkRequest &) = default ;
    ListWebApplicationInstancesShrinkRequest(ListWebApplicationInstancesShrinkRequest &&) = default ;
    ListWebApplicationInstancesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListWebApplicationInstancesShrinkRequest() = default ;
    ListWebApplicationInstancesShrinkRequest& operator=(const ListWebApplicationInstancesShrinkRequest &) = default ;
    ListWebApplicationInstancesShrinkRequest& operator=(ListWebApplicationInstancesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endTime_ == nullptr
        && this->instanceIdsShrink_ == nullptr && this->limit_ == nullptr && this->namespaceId_ == nullptr && this->startTime_ == nullptr && this->statusesShrink_ == nullptr
        && this->versionIdsShrink_ == nullptr; };
    // endTime Field Functions 
    bool hasEndTime() const { return this->endTime_ != nullptr;};
    void deleteEndTime() { this->endTime_ = nullptr;};
    inline int64_t getEndTime() const { DARABONBA_PTR_GET_DEFAULT(endTime_, 0L) };
    inline ListWebApplicationInstancesShrinkRequest& setEndTime(int64_t endTime) { DARABONBA_PTR_SET_VALUE(endTime_, endTime) };


    // instanceIdsShrink Field Functions 
    bool hasInstanceIdsShrink() const { return this->instanceIdsShrink_ != nullptr;};
    void deleteInstanceIdsShrink() { this->instanceIdsShrink_ = nullptr;};
    inline string getInstanceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(instanceIdsShrink_, "") };
    inline ListWebApplicationInstancesShrinkRequest& setInstanceIdsShrink(string instanceIdsShrink) { DARABONBA_PTR_SET_VALUE(instanceIdsShrink_, instanceIdsShrink) };


    // limit Field Functions 
    bool hasLimit() const { return this->limit_ != nullptr;};
    void deleteLimit() { this->limit_ = nullptr;};
    inline string getLimit() const { DARABONBA_PTR_GET_DEFAULT(limit_, "") };
    inline ListWebApplicationInstancesShrinkRequest& setLimit(string limit) { DARABONBA_PTR_SET_VALUE(limit_, limit) };


    // namespaceId Field Functions 
    bool hasNamespaceId() const { return this->namespaceId_ != nullptr;};
    void deleteNamespaceId() { this->namespaceId_ = nullptr;};
    inline string getNamespaceId() const { DARABONBA_PTR_GET_DEFAULT(namespaceId_, "") };
    inline ListWebApplicationInstancesShrinkRequest& setNamespaceId(string namespaceId) { DARABONBA_PTR_SET_VALUE(namespaceId_, namespaceId) };


    // startTime Field Functions 
    bool hasStartTime() const { return this->startTime_ != nullptr;};
    void deleteStartTime() { this->startTime_ = nullptr;};
    inline int64_t getStartTime() const { DARABONBA_PTR_GET_DEFAULT(startTime_, 0L) };
    inline ListWebApplicationInstancesShrinkRequest& setStartTime(int64_t startTime) { DARABONBA_PTR_SET_VALUE(startTime_, startTime) };


    // statusesShrink Field Functions 
    bool hasStatusesShrink() const { return this->statusesShrink_ != nullptr;};
    void deleteStatusesShrink() { this->statusesShrink_ = nullptr;};
    inline string getStatusesShrink() const { DARABONBA_PTR_GET_DEFAULT(statusesShrink_, "") };
    inline ListWebApplicationInstancesShrinkRequest& setStatusesShrink(string statusesShrink) { DARABONBA_PTR_SET_VALUE(statusesShrink_, statusesShrink) };


    // versionIdsShrink Field Functions 
    bool hasVersionIdsShrink() const { return this->versionIdsShrink_ != nullptr;};
    void deleteVersionIdsShrink() { this->versionIdsShrink_ = nullptr;};
    inline string getVersionIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(versionIdsShrink_, "") };
    inline ListWebApplicationInstancesShrinkRequest& setVersionIdsShrink(string versionIdsShrink) { DARABONBA_PTR_SET_VALUE(versionIdsShrink_, versionIdsShrink) };


  protected:
    // The time when the operation ended.
    shared_ptr<int64_t> endTime_ {};
    // The instance ID.
    shared_ptr<string> instanceIdsShrink_ {};
    // The number of application instances returned.
    shared_ptr<string> limit_ {};
    // The namespace ID.
    // 
    // This parameter is required.
    shared_ptr<string> namespaceId_ {};
    // The time when the task was created.
    shared_ptr<int64_t> startTime_ {};
    // The status of the application instance.
    shared_ptr<string> statusesShrink_ {};
    // The ID of the application version.
    shared_ptr<string> versionIdsShrink_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sae20190506
#endif
