// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXPERIMENTPLANDATA_HPP_
#define ALIBABACLOUD_MODELS_EXPERIMENTPLANDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class ExperimentPlanData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExperimentPlanData& obj) { 
      DARABONBA_PTR_TO_JSON(createdAt, createdAt_);
      DARABONBA_PTR_TO_JSON(datasetId, datasetId_);
      DARABONBA_PTR_TO_JSON(description, description_);
      DARABONBA_PTR_TO_JSON(experimentCount, experimentCount_);
      DARABONBA_PTR_TO_JSON(planId, planId_);
      DARABONBA_PTR_TO_JSON(planName, planName_);
      DARABONBA_PTR_TO_JSON(status, status_);
      DARABONBA_PTR_TO_JSON(updatedAt, updatedAt_);
    };
    friend void from_json(const Darabonba::Json& j, ExperimentPlanData& obj) { 
      DARABONBA_PTR_FROM_JSON(createdAt, createdAt_);
      DARABONBA_PTR_FROM_JSON(datasetId, datasetId_);
      DARABONBA_PTR_FROM_JSON(description, description_);
      DARABONBA_PTR_FROM_JSON(experimentCount, experimentCount_);
      DARABONBA_PTR_FROM_JSON(planId, planId_);
      DARABONBA_PTR_FROM_JSON(planName, planName_);
      DARABONBA_PTR_FROM_JSON(status, status_);
      DARABONBA_PTR_FROM_JSON(updatedAt, updatedAt_);
    };
    ExperimentPlanData() = default ;
    ExperimentPlanData(const ExperimentPlanData &) = default ;
    ExperimentPlanData(ExperimentPlanData &&) = default ;
    ExperimentPlanData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExperimentPlanData() = default ;
    ExperimentPlanData& operator=(const ExperimentPlanData &) = default ;
    ExperimentPlanData& operator=(ExperimentPlanData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->createdAt_ == nullptr
        && this->datasetId_ == nullptr && this->description_ == nullptr && this->experimentCount_ == nullptr && this->planId_ == nullptr && this->planName_ == nullptr
        && this->status_ == nullptr && this->updatedAt_ == nullptr; };
    // createdAt Field Functions 
    bool hasCreatedAt() const { return this->createdAt_ != nullptr;};
    void deleteCreatedAt() { this->createdAt_ = nullptr;};
    inline int64_t getCreatedAt() const { DARABONBA_PTR_GET_DEFAULT(createdAt_, 0L) };
    inline ExperimentPlanData& setCreatedAt(int64_t createdAt) { DARABONBA_PTR_SET_VALUE(createdAt_, createdAt) };


    // datasetId Field Functions 
    bool hasDatasetId() const { return this->datasetId_ != nullptr;};
    void deleteDatasetId() { this->datasetId_ = nullptr;};
    inline string getDatasetId() const { DARABONBA_PTR_GET_DEFAULT(datasetId_, "") };
    inline ExperimentPlanData& setDatasetId(string datasetId) { DARABONBA_PTR_SET_VALUE(datasetId_, datasetId) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline ExperimentPlanData& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // experimentCount Field Functions 
    bool hasExperimentCount() const { return this->experimentCount_ != nullptr;};
    void deleteExperimentCount() { this->experimentCount_ = nullptr;};
    inline int32_t getExperimentCount() const { DARABONBA_PTR_GET_DEFAULT(experimentCount_, 0) };
    inline ExperimentPlanData& setExperimentCount(int32_t experimentCount) { DARABONBA_PTR_SET_VALUE(experimentCount_, experimentCount) };


    // planId Field Functions 
    bool hasPlanId() const { return this->planId_ != nullptr;};
    void deletePlanId() { this->planId_ = nullptr;};
    inline string getPlanId() const { DARABONBA_PTR_GET_DEFAULT(planId_, "") };
    inline ExperimentPlanData& setPlanId(string planId) { DARABONBA_PTR_SET_VALUE(planId_, planId) };


    // planName Field Functions 
    bool hasPlanName() const { return this->planName_ != nullptr;};
    void deletePlanName() { this->planName_ = nullptr;};
    inline string getPlanName() const { DARABONBA_PTR_GET_DEFAULT(planName_, "") };
    inline ExperimentPlanData& setPlanName(string planName) { DARABONBA_PTR_SET_VALUE(planName_, planName) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline ExperimentPlanData& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // updatedAt Field Functions 
    bool hasUpdatedAt() const { return this->updatedAt_ != nullptr;};
    void deleteUpdatedAt() { this->updatedAt_ = nullptr;};
    inline int64_t getUpdatedAt() const { DARABONBA_PTR_GET_DEFAULT(updatedAt_, 0L) };
    inline ExperimentPlanData& setUpdatedAt(int64_t updatedAt) { DARABONBA_PTR_SET_VALUE(updatedAt_, updatedAt) };


  protected:
    shared_ptr<int64_t> createdAt_ {};
    shared_ptr<string> datasetId_ {};
    shared_ptr<string> description_ {};
    shared_ptr<int32_t> experimentCount_ {};
    shared_ptr<string> planId_ {};
    shared_ptr<string> planName_ {};
    shared_ptr<string> status_ {};
    shared_ptr<int64_t> updatedAt_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
