// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALERTRULESFILTER_HPP_
#define ALIBABACLOUD_MODELS_QUERYALERTRULESFILTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DatasourceTypeFilter.hpp>
#include <alibabacloud/models/DisplayNameFilter.hpp>
#include <alibabacloud/models/EnabledFilter.hpp>
#include <alibabacloud/models/LabelsFilter.hpp>
#include <alibabacloud/models/NotifyStrategyIdFilter.hpp>
#include <alibabacloud/models/ObserveResourceGlobalScopeFilter.hpp>
#include <alibabacloud/models/ObserveResourceListFilter.hpp>
#include <alibabacloud/models/ObserveResourceTypeFilter.hpp>
#include <alibabacloud/models/PartitionKeyFilter.hpp>
#include <alibabacloud/models/SeverityLevelsFilter.hpp>
#include <alibabacloud/models/StatusFilter.hpp>
#include <alibabacloud/models/UuidFilter.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class QueryAlertRulesFilter : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAlertRulesFilter& obj) { 
      DARABONBA_PTR_TO_JSON(datasourceType, datasourceType_);
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_TO_JSON(observeResourceGlobalScope, observeResourceGlobalScope_);
      DARABONBA_PTR_TO_JSON(observeResourceInstanceId, observeResourceInstanceId_);
      DARABONBA_PTR_TO_JSON(observeResourceList, observeResourceList_);
      DARABONBA_PTR_TO_JSON(observeResourceType, observeResourceType_);
      DARABONBA_PTR_TO_JSON(partitionKey, partitionKey_);
      DARABONBA_PTR_TO_JSON(severityLevels, severityLevels_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAlertRulesFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(datasourceType, datasourceType_);
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
      DARABONBA_PTR_FROM_JSON(notifyStrategyId, notifyStrategyId_);
      DARABONBA_PTR_FROM_JSON(observeResourceGlobalScope, observeResourceGlobalScope_);
      DARABONBA_PTR_FROM_JSON(observeResourceInstanceId, observeResourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(observeResourceList, observeResourceList_);
      DARABONBA_PTR_FROM_JSON(observeResourceType, observeResourceType_);
      DARABONBA_PTR_FROM_JSON(partitionKey, partitionKey_);
      DARABONBA_PTR_FROM_JSON(severityLevels, severityLevels_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(uuid, uuid_);
    };
    QueryAlertRulesFilter() = default ;
    QueryAlertRulesFilter(const QueryAlertRulesFilter &) = default ;
    QueryAlertRulesFilter(QueryAlertRulesFilter &&) = default ;
    QueryAlertRulesFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAlertRulesFilter() = default ;
    QueryAlertRulesFilter& operator=(const QueryAlertRulesFilter &) = default ;
    QueryAlertRulesFilter& operator=(QueryAlertRulesFilter &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasourceType_ == nullptr
        && this->displayName_ == nullptr && this->enabled_ == nullptr && this->labels_ == nullptr && this->notifyStrategyId_ == nullptr && this->observeResourceGlobalScope_ == nullptr
        && this->observeResourceInstanceId_ == nullptr && this->observeResourceList_ == nullptr && this->observeResourceType_ == nullptr && this->partitionKey_ == nullptr && this->severityLevels_ == nullptr
        && this->status_ == nullptr && this->uuid_ == nullptr; };
    // datasourceType Field Functions 
    bool hasDatasourceType() const { return this->datasourceType_ != nullptr;};
    void deleteDatasourceType() { this->datasourceType_ = nullptr;};
    inline const DatasourceTypeFilter & getDatasourceType() const { DARABONBA_PTR_GET_CONST(datasourceType_, DatasourceTypeFilter) };
    inline DatasourceTypeFilter getDatasourceType() { DARABONBA_PTR_GET(datasourceType_, DatasourceTypeFilter) };
    inline QueryAlertRulesFilter& setDatasourceType(const DatasourceTypeFilter & datasourceType) { DARABONBA_PTR_SET_VALUE(datasourceType_, datasourceType) };
    inline QueryAlertRulesFilter& setDatasourceType(DatasourceTypeFilter && datasourceType) { DARABONBA_PTR_SET_RVALUE(datasourceType_, datasourceType) };


    // displayName Field Functions 
    bool hasDisplayName() const { return this->displayName_ != nullptr;};
    void deleteDisplayName() { this->displayName_ = nullptr;};
    inline const DisplayNameFilter & getDisplayName() const { DARABONBA_PTR_GET_CONST(displayName_, DisplayNameFilter) };
    inline DisplayNameFilter getDisplayName() { DARABONBA_PTR_GET(displayName_, DisplayNameFilter) };
    inline QueryAlertRulesFilter& setDisplayName(const DisplayNameFilter & displayName) { DARABONBA_PTR_SET_VALUE(displayName_, displayName) };
    inline QueryAlertRulesFilter& setDisplayName(DisplayNameFilter && displayName) { DARABONBA_PTR_SET_RVALUE(displayName_, displayName) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline const EnabledFilter & getEnabled() const { DARABONBA_PTR_GET_CONST(enabled_, EnabledFilter) };
    inline EnabledFilter getEnabled() { DARABONBA_PTR_GET(enabled_, EnabledFilter) };
    inline QueryAlertRulesFilter& setEnabled(const EnabledFilter & enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };
    inline QueryAlertRulesFilter& setEnabled(EnabledFilter && enabled) { DARABONBA_PTR_SET_RVALUE(enabled_, enabled) };


    // labels Field Functions 
    bool hasLabels() const { return this->labels_ != nullptr;};
    void deleteLabels() { this->labels_ = nullptr;};
    inline const LabelsFilter & getLabels() const { DARABONBA_PTR_GET_CONST(labels_, LabelsFilter) };
    inline LabelsFilter getLabels() { DARABONBA_PTR_GET(labels_, LabelsFilter) };
    inline QueryAlertRulesFilter& setLabels(const LabelsFilter & labels) { DARABONBA_PTR_SET_VALUE(labels_, labels) };
    inline QueryAlertRulesFilter& setLabels(LabelsFilter && labels) { DARABONBA_PTR_SET_RVALUE(labels_, labels) };


    // notifyStrategyId Field Functions 
    bool hasNotifyStrategyId() const { return this->notifyStrategyId_ != nullptr;};
    void deleteNotifyStrategyId() { this->notifyStrategyId_ = nullptr;};
    inline const NotifyStrategyIdFilter & getNotifyStrategyId() const { DARABONBA_PTR_GET_CONST(notifyStrategyId_, NotifyStrategyIdFilter) };
    inline NotifyStrategyIdFilter getNotifyStrategyId() { DARABONBA_PTR_GET(notifyStrategyId_, NotifyStrategyIdFilter) };
    inline QueryAlertRulesFilter& setNotifyStrategyId(const NotifyStrategyIdFilter & notifyStrategyId) { DARABONBA_PTR_SET_VALUE(notifyStrategyId_, notifyStrategyId) };
    inline QueryAlertRulesFilter& setNotifyStrategyId(NotifyStrategyIdFilter && notifyStrategyId) { DARABONBA_PTR_SET_RVALUE(notifyStrategyId_, notifyStrategyId) };


    // observeResourceGlobalScope Field Functions 
    bool hasObserveResourceGlobalScope() const { return this->observeResourceGlobalScope_ != nullptr;};
    void deleteObserveResourceGlobalScope() { this->observeResourceGlobalScope_ = nullptr;};
    inline const ObserveResourceGlobalScopeFilter & getObserveResourceGlobalScope() const { DARABONBA_PTR_GET_CONST(observeResourceGlobalScope_, ObserveResourceGlobalScopeFilter) };
    inline ObserveResourceGlobalScopeFilter getObserveResourceGlobalScope() { DARABONBA_PTR_GET(observeResourceGlobalScope_, ObserveResourceGlobalScopeFilter) };
    inline QueryAlertRulesFilter& setObserveResourceGlobalScope(const ObserveResourceGlobalScopeFilter & observeResourceGlobalScope) { DARABONBA_PTR_SET_VALUE(observeResourceGlobalScope_, observeResourceGlobalScope) };
    inline QueryAlertRulesFilter& setObserveResourceGlobalScope(ObserveResourceGlobalScopeFilter && observeResourceGlobalScope) { DARABONBA_PTR_SET_RVALUE(observeResourceGlobalScope_, observeResourceGlobalScope) };


    // observeResourceInstanceId Field Functions 
    bool hasObserveResourceInstanceId() const { return this->observeResourceInstanceId_ != nullptr;};
    void deleteObserveResourceInstanceId() { this->observeResourceInstanceId_ = nullptr;};
    inline string getObserveResourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(observeResourceInstanceId_, "") };
    inline QueryAlertRulesFilter& setObserveResourceInstanceId(string observeResourceInstanceId) { DARABONBA_PTR_SET_VALUE(observeResourceInstanceId_, observeResourceInstanceId) };


    // observeResourceList Field Functions 
    bool hasObserveResourceList() const { return this->observeResourceList_ != nullptr;};
    void deleteObserveResourceList() { this->observeResourceList_ = nullptr;};
    inline const ObserveResourceListFilter & getObserveResourceList() const { DARABONBA_PTR_GET_CONST(observeResourceList_, ObserveResourceListFilter) };
    inline ObserveResourceListFilter getObserveResourceList() { DARABONBA_PTR_GET(observeResourceList_, ObserveResourceListFilter) };
    inline QueryAlertRulesFilter& setObserveResourceList(const ObserveResourceListFilter & observeResourceList) { DARABONBA_PTR_SET_VALUE(observeResourceList_, observeResourceList) };
    inline QueryAlertRulesFilter& setObserveResourceList(ObserveResourceListFilter && observeResourceList) { DARABONBA_PTR_SET_RVALUE(observeResourceList_, observeResourceList) };


    // observeResourceType Field Functions 
    bool hasObserveResourceType() const { return this->observeResourceType_ != nullptr;};
    void deleteObserveResourceType() { this->observeResourceType_ = nullptr;};
    inline const ObserveResourceTypeFilter & getObserveResourceType() const { DARABONBA_PTR_GET_CONST(observeResourceType_, ObserveResourceTypeFilter) };
    inline ObserveResourceTypeFilter getObserveResourceType() { DARABONBA_PTR_GET(observeResourceType_, ObserveResourceTypeFilter) };
    inline QueryAlertRulesFilter& setObserveResourceType(const ObserveResourceTypeFilter & observeResourceType) { DARABONBA_PTR_SET_VALUE(observeResourceType_, observeResourceType) };
    inline QueryAlertRulesFilter& setObserveResourceType(ObserveResourceTypeFilter && observeResourceType) { DARABONBA_PTR_SET_RVALUE(observeResourceType_, observeResourceType) };


    // partitionKey Field Functions 
    bool hasPartitionKey() const { return this->partitionKey_ != nullptr;};
    void deletePartitionKey() { this->partitionKey_ = nullptr;};
    inline const PartitionKeyFilter & getPartitionKey() const { DARABONBA_PTR_GET_CONST(partitionKey_, PartitionKeyFilter) };
    inline PartitionKeyFilter getPartitionKey() { DARABONBA_PTR_GET(partitionKey_, PartitionKeyFilter) };
    inline QueryAlertRulesFilter& setPartitionKey(const PartitionKeyFilter & partitionKey) { DARABONBA_PTR_SET_VALUE(partitionKey_, partitionKey) };
    inline QueryAlertRulesFilter& setPartitionKey(PartitionKeyFilter && partitionKey) { DARABONBA_PTR_SET_RVALUE(partitionKey_, partitionKey) };


    // severityLevels Field Functions 
    bool hasSeverityLevels() const { return this->severityLevels_ != nullptr;};
    void deleteSeverityLevels() { this->severityLevels_ = nullptr;};
    inline const SeverityLevelsFilter & getSeverityLevels() const { DARABONBA_PTR_GET_CONST(severityLevels_, SeverityLevelsFilter) };
    inline SeverityLevelsFilter getSeverityLevels() { DARABONBA_PTR_GET(severityLevels_, SeverityLevelsFilter) };
    inline QueryAlertRulesFilter& setSeverityLevels(const SeverityLevelsFilter & severityLevels) { DARABONBA_PTR_SET_VALUE(severityLevels_, severityLevels) };
    inline QueryAlertRulesFilter& setSeverityLevels(SeverityLevelsFilter && severityLevels) { DARABONBA_PTR_SET_RVALUE(severityLevels_, severityLevels) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline const StatusFilter & getStatus() const { DARABONBA_PTR_GET_CONST(status_, StatusFilter) };
    inline StatusFilter getStatus() { DARABONBA_PTR_GET(status_, StatusFilter) };
    inline QueryAlertRulesFilter& setStatus(const StatusFilter & status) { DARABONBA_PTR_SET_VALUE(status_, status) };
    inline QueryAlertRulesFilter& setStatus(StatusFilter && status) { DARABONBA_PTR_SET_RVALUE(status_, status) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline const UuidFilter & getUuid() const { DARABONBA_PTR_GET_CONST(uuid_, UuidFilter) };
    inline UuidFilter getUuid() { DARABONBA_PTR_GET(uuid_, UuidFilter) };
    inline QueryAlertRulesFilter& setUuid(const UuidFilter & uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };
    inline QueryAlertRulesFilter& setUuid(UuidFilter && uuid) { DARABONBA_PTR_SET_RVALUE(uuid_, uuid) };


  protected:
    shared_ptr<DatasourceTypeFilter> datasourceType_ {};
    // Filters alert rules by display name.
    shared_ptr<DisplayNameFilter> displayName_ {};
    // Filters alert rules by enabled status.
    shared_ptr<EnabledFilter> enabled_ {};
    // Filters alert rules by label.
    shared_ptr<LabelsFilter> labels_ {};
    shared_ptr<NotifyStrategyIdFilter> notifyStrategyId_ {};
    shared_ptr<ObserveResourceGlobalScopeFilter> observeResourceGlobalScope_ {};
    shared_ptr<string> observeResourceInstanceId_ {};
    shared_ptr<ObserveResourceListFilter> observeResourceList_ {};
    shared_ptr<ObserveResourceTypeFilter> observeResourceType_ {};
    shared_ptr<PartitionKeyFilter> partitionKey_ {};
    shared_ptr<SeverityLevelsFilter> severityLevels_ {};
    // Filters alert rules by status.
    shared_ptr<StatusFilter> status_ {};
    // Filters alert rules by UUID.
    shared_ptr<UuidFilter> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
