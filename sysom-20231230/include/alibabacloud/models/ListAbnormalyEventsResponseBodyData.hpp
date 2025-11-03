// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTABNORMALYEVENTSRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListAbnormalyEventsResponseBodyDataOpts.hpp>
#include <alibabacloud/models/ListAbnormalyEventsResponseBodyDataRawMetrics.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace SysOM20231230
{
namespace Models
{
  class ListAbnormalyEventsResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAbnormalyEventsResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(created_at, createdAt_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(diag_status, diagStatus_);
      DARABONBA_PTR_TO_JSON(end_at, endAt_);
      DARABONBA_PTR_TO_JSON(instance, instance_);
      DARABONBA_PTR_TO_JSON(item, item_);
      DARABONBA_PTR_TO_JSON(level, level_);
      DARABONBA_PTR_TO_JSON(namespace, namespace_);
      DARABONBA_PTR_TO_JSON(opts, opts_);
      DARABONBA_PTR_TO_JSON(pod, pod_);
      DARABONBA_PTR_TO_JSON(raw_metrics, rawMetrics_);
      DARABONBA_PTR_TO_JSON(region_id, regionId_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, ListAbnormalyEventsResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(created_at, createdAt_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(diag_status, diagStatus_);
      DARABONBA_PTR_FROM_JSON(end_at, endAt_);
      DARABONBA_PTR_FROM_JSON(instance, instance_);
      DARABONBA_PTR_FROM_JSON(item, item_);
      DARABONBA_PTR_FROM_JSON(level, level_);
      DARABONBA_PTR_FROM_JSON(namespace, namespace_);
      DARABONBA_PTR_FROM_JSON(opts, opts_);
      DARABONBA_PTR_FROM_JSON(pod, pod_);
      DARABONBA_PTR_FROM_JSON(raw_metrics, rawMetrics_);
      DARABONBA_PTR_FROM_JSON(region_id, regionId_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    ListAbnormalyEventsResponseBodyData() = default ;
    ListAbnormalyEventsResponseBodyData(const ListAbnormalyEventsResponseBodyData &) = default ;
    ListAbnormalyEventsResponseBodyData(ListAbnormalyEventsResponseBodyData &&) = default ;
    ListAbnormalyEventsResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAbnormalyEventsResponseBodyData() = default ;
    ListAbnormalyEventsResponseBodyData& operator=(const ListAbnormalyEventsResponseBodyData &) = default ;
    ListAbnormalyEventsResponseBodyData& operator=(ListAbnormalyEventsResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && return this->description_ == nullptr && return this->diagStatus_ == nullptr && return this->endAt_ == nullptr && return this->instance_ == nullptr && return this->item_ == nullptr
        && return this->level_ == nullptr && return this->namespace_ == nullptr && return this->opts_ == nullptr && return this->pod_ == nullptr && return this->rawMetrics_ == nullptr
        && return this->regionId_ == nullptr && return this->type_ == nullptr && return this->uuid_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t createdAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline ListAbnormalyEventsResponseBodyData& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ListAbnormalyEventsResponseBodyData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // diagStatus Field Functions 
    bool hasDiagStatus() const { return this->diagStatus_ != nullptr;};
    void deleteDiagStatus() { this->diagStatus_ = nullptr;};
    inline int32_t diagStatus() const { DARABONBA_PTR_GET_DEFAULT(diagStatus_, 0) };
    inline ListAbnormalyEventsResponseBodyData& setDiagStatus(int32_t diagStatus) { DARABONBA_PTR_SET_VALUE(diagStatus_, diagStatus) };


    // endAt Field Functions 
    bool hasEndAt() const { return this->endAt_ != nullptr;};
    void deleteEndAt() { this->endAt_ = nullptr;};
    inline int64_t endAt() const { DARABONBA_PTR_GET_DEFAULT(endAt_, 0L) };
    inline ListAbnormalyEventsResponseBodyData& setEndAt(int64_t endAt) { DARABONBA_PTR_SET_VALUE(endAt_, endAt) };


    // instance Field Functions 
    bool hasInstance() const { return this->instance_ != nullptr;};
    void deleteInstance() { this->instance_ = nullptr;};
    inline string instance() const { DARABONBA_PTR_GET_DEFAULT(instance_, "") };
    inline ListAbnormalyEventsResponseBodyData& setInstance(string instance) { DARABONBA_PTR_SET_VALUE(instance_, instance) };


    // item Field Functions 
    bool hasItem() const { return this->item_ != nullptr;};
    void deleteItem() { this->item_ = nullptr;};
    inline string item() const { DARABONBA_PTR_GET_DEFAULT(item_, "") };
    inline ListAbnormalyEventsResponseBodyData& setItem(string item) { DARABONBA_PTR_SET_VALUE(item_, item) };


    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline ListAbnormalyEventsResponseBodyData& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // namespace Field Functions 
    bool hasNamespace() const { return this->namespace_ != nullptr;};
    void deleteNamespace() { this->namespace_ = nullptr;};
    inline string _namespace() const { DARABONBA_PTR_GET_DEFAULT(namespace_, "") };
    inline ListAbnormalyEventsResponseBodyData& setNamespace(string _namespace) { DARABONBA_PTR_SET_VALUE(namespace_, _namespace) };


    // opts Field Functions 
    bool hasOpts() const { return this->opts_ != nullptr;};
    void deleteOpts() { this->opts_ = nullptr;};
    inline const vector<Models::ListAbnormalyEventsResponseBodyDataOpts> & opts() const { DARABONBA_PTR_GET_CONST(opts_, vector<Models::ListAbnormalyEventsResponseBodyDataOpts>) };
    inline vector<Models::ListAbnormalyEventsResponseBodyDataOpts> opts() { DARABONBA_PTR_GET(opts_, vector<Models::ListAbnormalyEventsResponseBodyDataOpts>) };
    inline ListAbnormalyEventsResponseBodyData& setOpts(const vector<Models::ListAbnormalyEventsResponseBodyDataOpts> & opts) { DARABONBA_PTR_SET_VALUE(opts_, opts) };
    inline ListAbnormalyEventsResponseBodyData& setOpts(vector<Models::ListAbnormalyEventsResponseBodyDataOpts> && opts) { DARABONBA_PTR_SET_RVALUE(opts_, opts) };


    // pod Field Functions 
    bool hasPod() const { return this->pod_ != nullptr;};
    void deletePod() { this->pod_ = nullptr;};
    inline string pod() const { DARABONBA_PTR_GET_DEFAULT(pod_, "") };
    inline ListAbnormalyEventsResponseBodyData& setPod(string pod) { DARABONBA_PTR_SET_VALUE(pod_, pod) };


    // rawMetrics Field Functions 
    bool hasRawMetrics() const { return this->rawMetrics_ != nullptr;};
    void deleteRawMetrics() { this->rawMetrics_ = nullptr;};
    inline const Models::ListAbnormalyEventsResponseBodyDataRawMetrics & rawMetrics() const { DARABONBA_PTR_GET_CONST(rawMetrics_, Models::ListAbnormalyEventsResponseBodyDataRawMetrics) };
    inline Models::ListAbnormalyEventsResponseBodyDataRawMetrics rawMetrics() { DARABONBA_PTR_GET(rawMetrics_, Models::ListAbnormalyEventsResponseBodyDataRawMetrics) };
    inline ListAbnormalyEventsResponseBodyData& setRawMetrics(const Models::ListAbnormalyEventsResponseBodyDataRawMetrics & rawMetrics) { DARABONBA_PTR_SET_VALUE(rawMetrics_, rawMetrics) };
    inline ListAbnormalyEventsResponseBodyData& setRawMetrics(Models::ListAbnormalyEventsResponseBodyDataRawMetrics && rawMetrics) { DARABONBA_PTR_SET_RVALUE(rawMetrics_, rawMetrics) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAbnormalyEventsResponseBodyData& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListAbnormalyEventsResponseBodyData& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline ListAbnormalyEventsResponseBodyData& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


  protected:
    std::shared_ptr<int64_t> createdAt_ = nullptr;
    std::shared_ptr<string> description_ = nullptr;
    std::shared_ptr<int32_t> diagStatus_ = nullptr;
    std::shared_ptr<int64_t> endAt_ = nullptr;
    std::shared_ptr<string> instance_ = nullptr;
    std::shared_ptr<string> item_ = nullptr;
    std::shared_ptr<string> level_ = nullptr;
    std::shared_ptr<string> namespace_ = nullptr;
    std::shared_ptr<vector<Models::ListAbnormalyEventsResponseBodyDataOpts>> opts_ = nullptr;
    std::shared_ptr<string> pod_ = nullptr;
    std::shared_ptr<Models::ListAbnormalyEventsResponseBodyDataRawMetrics> rawMetrics_ = nullptr;
    std::shared_ptr<string> regionId_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> uuid_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace SysOM20231230
#endif
