// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_INCIDENTSTRUCT_HPP_
#define ALIBABACLOUD_MODELS_INCIDENTSTRUCT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/Cms20240330.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class IncidentStruct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const IncidentStruct& obj) { 
      DARABONBA_PTR_TO_JSON(content, content_);
      DARABONBA_PTR_TO_JSON(escalations, escalations_);
      DARABONBA_PTR_TO_JSON(incidentId, incidentId_);
      DARABONBA_PTR_TO_JSON(incidentPlan, incidentPlan_);
      DARABONBA_PTR_TO_JSON(resource, resource_);
      DARABONBA_PTR_TO_JSON(severity, severity_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(time, time_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(userId, userId_);
    };
    friend void from_json(const Darabonba::Json& j, IncidentStruct& obj) { 
      DARABONBA_PTR_FROM_JSON(content, content_);
      DARABONBA_PTR_FROM_JSON(escalations, escalations_);
      DARABONBA_PTR_FROM_JSON(incidentId, incidentId_);
      DARABONBA_PTR_FROM_JSON(incidentPlan, incidentPlan_);
      DARABONBA_PTR_FROM_JSON(resource, resource_);
      DARABONBA_PTR_FROM_JSON(severity, severity_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(time, time_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(userId, userId_);
    };
    IncidentStruct() = default ;
    IncidentStruct(const IncidentStruct &) = default ;
    IncidentStruct(IncidentStruct &&) = default ;
    IncidentStruct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~IncidentStruct() = default ;
    IncidentStruct& operator=(const IncidentStruct &) = default ;
    IncidentStruct& operator=(IncidentStruct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->content_ != nullptr
        && this->escalations_ != nullptr && this->incidentId_ != nullptr && this->incidentPlan_ != nullptr && this->resource_ != nullptr && this->severity_ != nullptr
        && this->status_ != nullptr && this->time_ != nullptr && this->title_ != nullptr && this->userId_ != nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline IncidentStruct& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // escalations Field Functions 
    bool hasEscalations() const { return this->escalations_ != nullptr;};
    void deleteEscalations() { this->escalations_ = nullptr;};
    inline const vector<IncidentEscalationStruct> & escalations() const { DARABONBA_PTR_GET_CONST(escalations_, vector<IncidentEscalationStruct>) };
    inline vector<IncidentEscalationStruct> escalations() { DARABONBA_PTR_GET(escalations_, vector<IncidentEscalationStruct>) };
    inline IncidentStruct& setEscalations(const vector<IncidentEscalationStruct> & escalations) { DARABONBA_PTR_SET_VALUE(escalations_, escalations) };
    inline IncidentStruct& setEscalations(vector<IncidentEscalationStruct> && escalations) { DARABONBA_PTR_SET_RVALUE(escalations_, escalations) };


    // incidentId Field Functions 
    bool hasIncidentId() const { return this->incidentId_ != nullptr;};
    void deleteIncidentId() { this->incidentId_ = nullptr;};
    inline string incidentId() const { DARABONBA_PTR_GET_DEFAULT(incidentId_, "") };
    inline IncidentStruct& setIncidentId(string incidentId) { DARABONBA_PTR_SET_VALUE(incidentId_, incidentId) };


    // incidentPlan Field Functions 
    bool hasIncidentPlan() const { return this->incidentPlan_ != nullptr;};
    void deleteIncidentPlan() { this->incidentPlan_ = nullptr;};
    inline const IncidentPlanStruct & incidentPlan() const { DARABONBA_PTR_GET_CONST(incidentPlan_, IncidentPlanStruct) };
    inline IncidentPlanStruct incidentPlan() { DARABONBA_PTR_GET(incidentPlan_, IncidentPlanStruct) };
    inline IncidentStruct& setIncidentPlan(const IncidentPlanStruct & incidentPlan) { DARABONBA_PTR_SET_VALUE(incidentPlan_, incidentPlan) };
    inline IncidentStruct& setIncidentPlan(IncidentPlanStruct && incidentPlan) { DARABONBA_PTR_SET_RVALUE(incidentPlan_, incidentPlan) };


    // resource Field Functions 
    bool hasResource() const { return this->resource_ != nullptr;};
    void deleteResource() { this->resource_ = nullptr;};
    inline const IncidentResourceDetail & resource() const { DARABONBA_PTR_GET_CONST(resource_, IncidentResourceDetail) };
    inline IncidentResourceDetail resource() { DARABONBA_PTR_GET(resource_, IncidentResourceDetail) };
    inline IncidentStruct& setResource(const IncidentResourceDetail & resource) { DARABONBA_PTR_SET_VALUE(resource_, resource) };
    inline IncidentStruct& setResource(IncidentResourceDetail && resource) { DARABONBA_PTR_SET_RVALUE(resource_, resource) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline IncidentStruct& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline IncidentStruct& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline int64_t time() const { DARABONBA_PTR_GET_DEFAULT(time_, 0L) };
    inline IncidentStruct& setTime(int64_t time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string title() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline IncidentStruct& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // userId Field Functions 
    bool hasUserId() const { return this->userId_ != nullptr;};
    void deleteUserId() { this->userId_ = nullptr;};
    inline string userId() const { DARABONBA_PTR_GET_DEFAULT(userId_, "") };
    inline IncidentStruct& setUserId(string userId) { DARABONBA_PTR_SET_VALUE(userId_, userId) };


  protected:
    std::shared_ptr<string> content_ = nullptr;
    std::shared_ptr<vector<IncidentEscalationStruct>> escalations_ = nullptr;
    std::shared_ptr<string> incidentId_ = nullptr;
    std::shared_ptr<IncidentPlanStruct> incidentPlan_ = nullptr;
    std::shared_ptr<IncidentResourceDetail> resource_ = nullptr;
    std::shared_ptr<string> severity_ = nullptr;
    std::shared_ptr<string> status_ = nullptr;
    std::shared_ptr<int64_t> time_ = nullptr;
    std::shared_ptr<string> title_ = nullptr;
    std::shared_ptr<string> userId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
