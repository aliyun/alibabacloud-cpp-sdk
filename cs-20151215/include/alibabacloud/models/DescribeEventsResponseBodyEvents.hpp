// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYEVENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTSRESPONSEBODYEVENTS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEventsResponseBodyEventsData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CS20151215
{
namespace Models
{
  class DescribeEventsResponseBodyEvents : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_TO_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_TO_JSON(data, data_);
      DARABONBA_PTR_TO_JSON(event_id, eventId_);
      DARABONBA_PTR_TO_JSON(source, source_);
      DARABONBA_PTR_TO_JSON(subject, subject_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventsResponseBodyEvents& obj) { 
      DARABONBA_PTR_FROM_JSON(cluster_id, clusterId_);
      DARABONBA_PTR_FROM_JSON(data, data_);
      DARABONBA_PTR_FROM_JSON(event_id, eventId_);
      DARABONBA_PTR_FROM_JSON(source, source_);
      DARABONBA_PTR_FROM_JSON(subject, subject_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(type, type_);
    };
    DescribeEventsResponseBodyEvents() = default ;
    DescribeEventsResponseBodyEvents(const DescribeEventsResponseBodyEvents &) = default ;
    DescribeEventsResponseBodyEvents(DescribeEventsResponseBodyEvents &&) = default ;
    DescribeEventsResponseBodyEvents(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventsResponseBodyEvents() = default ;
    DescribeEventsResponseBodyEvents& operator=(const DescribeEventsResponseBodyEvents &) = default ;
    DescribeEventsResponseBodyEvents& operator=(DescribeEventsResponseBodyEvents &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clusterId_ != nullptr
        && this->data_ != nullptr && this->eventId_ != nullptr && this->source_ != nullptr && this->subject_ != nullptr && this->time_ != nullptr
        && this->type_ != nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline DescribeEventsResponseBodyEvents& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const Models::DescribeEventsResponseBodyEventsData & data() const { DARABONBA_PTR_GET_CONST(data_, Models::DescribeEventsResponseBodyEventsData) };
    inline Models::DescribeEventsResponseBodyEventsData data() { DARABONBA_PTR_GET(data_, Models::DescribeEventsResponseBodyEventsData) };
    inline DescribeEventsResponseBodyEvents& setData(const Models::DescribeEventsResponseBodyEventsData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeEventsResponseBodyEvents& setData(Models::DescribeEventsResponseBodyEventsData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // eventId Field Functions 
    bool hasEventId() const { return this->eventId_ != nullptr;};
    void deleteEventId() { this->eventId_ = nullptr;};
    inline string eventId() const { DARABONBA_PTR_GET_DEFAULT(eventId_, "") };
    inline DescribeEventsResponseBodyEvents& setEventId(string eventId) { DARABONBA_PTR_SET_VALUE(eventId_, eventId) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeEventsResponseBodyEvents& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // subject Field Functions 
    bool hasSubject() const { return this->subject_ != nullptr;};
    void deleteSubject() { this->subject_ = nullptr;};
    inline string subject() const { DARABONBA_PTR_GET_DEFAULT(subject_, "") };
    inline DescribeEventsResponseBodyEvents& setSubject(string subject) { DARABONBA_PTR_SET_VALUE(subject_, subject) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline DescribeEventsResponseBodyEvents& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeEventsResponseBodyEvents& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The ID of the cluster.
    std::shared_ptr<string> clusterId_ = nullptr;
    // The description of the event.
    std::shared_ptr<Models::DescribeEventsResponseBodyEventsData> data_ = nullptr;
    // The event ID.
    std::shared_ptr<string> eventId_ = nullptr;
    // The source of the event.
    std::shared_ptr<string> source_ = nullptr;
    // The subject of the event.
    std::shared_ptr<string> subject_ = nullptr;
    // The time when the event started.
    std::shared_ptr<string> time_ = nullptr;
    // The event type. Valid values:
    // 
    // *   `cluster_create`: cluster creation.
    // *   `cluster_scaleout`: cluster scale-out.
    // *   `cluster_attach`: node addition.
    // *   `cluster_delete`: cluster deletion.
    // *   `cluster_upgrade`: cluster upgrades.
    // *   `cluster_migrate`: cluster migration.
    // *   `cluster_node_delete`: node removal.
    // *   `cluster_node_drain`: node draining.
    // *   `cluster_modify`: cluster modifications.
    // *   `cluster_configuration_modify`: modifications of control plane configurations.
    // *   `cluster_addon_install`: component installation.
    // *   `cluster_addon_upgrade`: component updates.
    // *   `cluster_addon_uninstall`: component uninstallation.
    // *   `runtime_upgrade`: runtime updates.
    // *   `nodepool_upgrade`: node pool upgrades.
    // *   `nodepool_update`: node pool updates.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CS20151215
#endif
