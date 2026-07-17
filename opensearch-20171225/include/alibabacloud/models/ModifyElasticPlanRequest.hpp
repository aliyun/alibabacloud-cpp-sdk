// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYELASTICPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYELASTICPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class ModifyElasticPlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyElasticPlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(customDates, customDates_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(elasticLcu, elasticLcu_);
      DARABONBA_PTR_TO_JSON(enabled, enabled_);
      DARABONBA_PTR_TO_JSON(endHour, endHour_);
      DARABONBA_PTR_TO_JSON(scheduleType, scheduleType_);
      DARABONBA_PTR_TO_JSON(startHour, startHour_);
      DARABONBA_PTR_TO_JSON(dryRun, dryRun_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyElasticPlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(customDates, customDates_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(elasticLcu, elasticLcu_);
      DARABONBA_PTR_FROM_JSON(enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(endHour, endHour_);
      DARABONBA_PTR_FROM_JSON(scheduleType, scheduleType_);
      DARABONBA_PTR_FROM_JSON(startHour, startHour_);
      DARABONBA_PTR_FROM_JSON(dryRun, dryRun_);
    };
    ModifyElasticPlanRequest() = default ;
    ModifyElasticPlanRequest(const ModifyElasticPlanRequest &) = default ;
    ModifyElasticPlanRequest(ModifyElasticPlanRequest &&) = default ;
    ModifyElasticPlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyElasticPlanRequest() = default ;
    ModifyElasticPlanRequest& operator=(const ModifyElasticPlanRequest &) = default ;
    ModifyElasticPlanRequest& operator=(ModifyElasticPlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customDates_ == nullptr
        && this->description_ == nullptr && this->elasticLcu_ == nullptr && this->enabled_ == nullptr && this->endHour_ == nullptr && this->scheduleType_ == nullptr
        && this->startHour_ == nullptr && this->dryRun_ == nullptr; };
    // customDates Field Functions 
    bool hasCustomDates() const { return this->customDates_ != nullptr;};
    void deleteCustomDates() { this->customDates_ = nullptr;};
    inline const vector<string> & getCustomDates() const { DARABONBA_PTR_GET_CONST(customDates_, vector<string>) };
    inline vector<string> getCustomDates() { DARABONBA_PTR_GET(customDates_, vector<string>) };
    inline ModifyElasticPlanRequest& setCustomDates(const vector<string> & customDates) { DARABONBA_PTR_SET_VALUE(customDates_, customDates) };
    inline ModifyElasticPlanRequest& setCustomDates(vector<string> && customDates) { DARABONBA_PTR_SET_RVALUE(customDates_, customDates) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ModifyElasticPlanRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // elasticLcu Field Functions 
    bool hasElasticLcu() const { return this->elasticLcu_ != nullptr;};
    void deleteElasticLcu() { this->elasticLcu_ = nullptr;};
    inline int32_t getElasticLcu() const { DARABONBA_PTR_GET_DEFAULT(elasticLcu_, 0) };
    inline ModifyElasticPlanRequest& setElasticLcu(int32_t elasticLcu) { DARABONBA_PTR_SET_VALUE(elasticLcu_, elasticLcu) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline bool getEnabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, false) };
    inline ModifyElasticPlanRequest& setEnabled(bool enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // endHour Field Functions 
    bool hasEndHour() const { return this->endHour_ != nullptr;};
    void deleteEndHour() { this->endHour_ = nullptr;};
    inline int32_t getEndHour() const { DARABONBA_PTR_GET_DEFAULT(endHour_, 0) };
    inline ModifyElasticPlanRequest& setEndHour(int32_t endHour) { DARABONBA_PTR_SET_VALUE(endHour_, endHour) };


    // scheduleType Field Functions 
    bool hasScheduleType() const { return this->scheduleType_ != nullptr;};
    void deleteScheduleType() { this->scheduleType_ = nullptr;};
    inline string getScheduleType() const { DARABONBA_PTR_GET_DEFAULT(scheduleType_, "") };
    inline ModifyElasticPlanRequest& setScheduleType(string scheduleType) { DARABONBA_PTR_SET_VALUE(scheduleType_, scheduleType) };


    // startHour Field Functions 
    bool hasStartHour() const { return this->startHour_ != nullptr;};
    void deleteStartHour() { this->startHour_ = nullptr;};
    inline int32_t getStartHour() const { DARABONBA_PTR_GET_DEFAULT(startHour_, 0) };
    inline ModifyElasticPlanRequest& setStartHour(int32_t startHour) { DARABONBA_PTR_SET_VALUE(startHour_, startHour) };


    // dryRun Field Functions 
    bool hasDryRun() const { return this->dryRun_ != nullptr;};
    void deleteDryRun() { this->dryRun_ = nullptr;};
    inline bool getDryRun() const { DARABONBA_PTR_GET_DEFAULT(dryRun_, false) };
    inline ModifyElasticPlanRequest& setDryRun(bool dryRun) { DARABONBA_PTR_SET_VALUE(dryRun_, dryRun) };


  protected:
    shared_ptr<vector<string>> customDates_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> elasticLcu_ {};
    shared_ptr<bool> enabled_ {};
    shared_ptr<int32_t> endHour_ {};
    shared_ptr<string> scheduleType_ {};
    shared_ptr<int32_t> startHour_ {};
    shared_ptr<bool> dryRun_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
