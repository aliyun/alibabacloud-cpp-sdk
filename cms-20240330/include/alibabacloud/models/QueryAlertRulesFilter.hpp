// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYALERTRULESFILTER_HPP_
#define ALIBABACLOUD_MODELS_QUERYALERTRULESFILTER_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DisplayNameFilter.hpp>
#include <alibabacloud/models/EnabledFilter.hpp>
#include <alibabacloud/models/LabelsFilter.hpp>
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
      DARABONBA_PTR_TO_JSON(displayName, displayName_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(labels, labels_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(uuid, uuid_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAlertRulesFilter& obj) { 
      DARABONBA_PTR_FROM_JSON(displayName, displayName_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(labels, labels_);
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
    virtual bool empty() const override { return this->displayName_ == nullptr
        && this->enabled_ == nullptr && this->labels_ == nullptr && this->status_ == nullptr && this->uuid_ == nullptr; };
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
    shared_ptr<DisplayNameFilter> displayName_ {};
    shared_ptr<EnabledFilter> enabled_ {};
    shared_ptr<LabelsFilter> labels_ {};
    shared_ptr<StatusFilter> status_ {};
    shared_ptr<UuidFilter> uuid_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
