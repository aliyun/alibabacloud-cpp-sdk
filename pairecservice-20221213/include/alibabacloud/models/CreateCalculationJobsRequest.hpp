// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECALCULATIONJOBSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATECALCULATIONJOBSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class CreateCalculationJobsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateCalculationJobsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ABMetricIds, ABMetricIds_);
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateCalculationJobsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ABMetricIds, ABMetricIds_);
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    CreateCalculationJobsRequest() = default ;
    CreateCalculationJobsRequest(const CreateCalculationJobsRequest &) = default ;
    CreateCalculationJobsRequest(CreateCalculationJobsRequest &&) = default ;
    CreateCalculationJobsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateCalculationJobsRequest() = default ;
    CreateCalculationJobsRequest& operator=(const CreateCalculationJobsRequest &) = default ;
    CreateCalculationJobsRequest& operator=(CreateCalculationJobsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ABMetricIds_ != nullptr
        && this->endDate_ != nullptr && this->instanceId_ != nullptr && this->startDate_ != nullptr; };
    // ABMetricIds Field Functions 
    bool hasABMetricIds() const { return this->ABMetricIds_ != nullptr;};
    void deleteABMetricIds() { this->ABMetricIds_ = nullptr;};
    inline string ABMetricIds() const { DARABONBA_PTR_GET_DEFAULT(ABMetricIds_, "") };
    inline CreateCalculationJobsRequest& setABMetricIds(string ABMetricIds) { DARABONBA_PTR_SET_VALUE(ABMetricIds_, ABMetricIds) };


    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string endDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline CreateCalculationJobsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string instanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline CreateCalculationJobsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string startDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline CreateCalculationJobsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> ABMetricIds_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> endDate_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> instanceId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> startDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
