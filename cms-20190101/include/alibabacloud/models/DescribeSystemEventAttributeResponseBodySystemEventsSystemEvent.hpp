// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTATTRIBUTERESPONSEBODYSYSTEMEVENTSSYSTEMEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESYSTEMEVENTATTRIBUTERESPONSEBODYSYSTEMEVENTSSYSTEMEVENT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Time, time_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Time, time_);
    };
    DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent() = default ;
    DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent(const DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent &) = default ;
    DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent(DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent &&) = default ;
    DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent() = default ;
    DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& operator=(const DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent &) = default ;
    DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& operator=(DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->groupId_ == nullptr && return this->id_ == nullptr && return this->instanceName_ == nullptr && return this->level_ == nullptr && return this->name_ == nullptr
        && return this->product_ == nullptr && return this->regionId_ == nullptr && return this->resourceId_ == nullptr && return this->status_ == nullptr && return this->time_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline string groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, "") };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setGroupId(string groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // instanceName Field Functions 
    bool hasInstanceName() const { return this->instanceName_ != nullptr;};
    void deleteInstanceName() { this->instanceName_ = nullptr;};
    inline string instanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string product() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline DescribeSystemEventAttributeResponseBodySystemEventsSystemEvent& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


  protected:
    // The details of the event.
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the application group.
    std::shared_ptr<string> groupId_ = nullptr;
    // The event ID.
    std::shared_ptr<string> id_ = nullptr;
    // The instance name.
    std::shared_ptr<string> instanceName_ = nullptr;
    // The level of the event. Valid values:
    // 
    // *   CRITICAL
    // *   WARN
    // *   INFO
    std::shared_ptr<string> level_ = nullptr;
    // The event name.
    std::shared_ptr<string> name_ = nullptr;
    // The abbreviation of the service name.
    std::shared_ptr<string> product_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The status of the event.
    std::shared_ptr<string> status_ = nullptr;
    // The time when the event occurred. The value is a timestamp.
    // 
    // Unit: milliseconds.
    std::shared_ptr<int64_t> time_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
