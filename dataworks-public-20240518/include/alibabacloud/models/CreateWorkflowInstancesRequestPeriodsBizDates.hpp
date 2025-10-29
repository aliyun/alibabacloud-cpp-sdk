// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTPERIODSBIZDATES_HPP_
#define ALIBABACLOUD_MODELS_CREATEWORKFLOWINSTANCESREQUESTPERIODSBIZDATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateWorkflowInstancesRequestPeriodsBizDates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateWorkflowInstancesRequestPeriodsBizDates& obj) { 
      DARABONBA_PTR_TO_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_TO_JSON(StartBizDate, startBizDate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateWorkflowInstancesRequestPeriodsBizDates& obj) { 
      DARABONBA_PTR_FROM_JSON(EndBizDate, endBizDate_);
      DARABONBA_PTR_FROM_JSON(StartBizDate, startBizDate_);
    };
    CreateWorkflowInstancesRequestPeriodsBizDates() = default ;
    CreateWorkflowInstancesRequestPeriodsBizDates(const CreateWorkflowInstancesRequestPeriodsBizDates &) = default ;
    CreateWorkflowInstancesRequestPeriodsBizDates(CreateWorkflowInstancesRequestPeriodsBizDates &&) = default ;
    CreateWorkflowInstancesRequestPeriodsBizDates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateWorkflowInstancesRequestPeriodsBizDates() = default ;
    CreateWorkflowInstancesRequestPeriodsBizDates& operator=(const CreateWorkflowInstancesRequestPeriodsBizDates &) = default ;
    CreateWorkflowInstancesRequestPeriodsBizDates& operator=(CreateWorkflowInstancesRequestPeriodsBizDates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endBizDate_ == nullptr
        && return this->startBizDate_ == nullptr; };
    // endBizDate Field Functions 
    bool hasEndBizDate() const { return this->endBizDate_ != nullptr;};
    void deleteEndBizDate() { this->endBizDate_ = nullptr;};
    inline string endBizDate() const { DARABONBA_PTR_GET_DEFAULT(endBizDate_, "") };
    inline CreateWorkflowInstancesRequestPeriodsBizDates& setEndBizDate(string endBizDate) { DARABONBA_PTR_SET_VALUE(endBizDate_, endBizDate) };


    // startBizDate Field Functions 
    bool hasStartBizDate() const { return this->startBizDate_ != nullptr;};
    void deleteStartBizDate() { this->startBizDate_ = nullptr;};
    inline string startBizDate() const { DARABONBA_PTR_GET_DEFAULT(startBizDate_, "") };
    inline CreateWorkflowInstancesRequestPeriodsBizDates& setStartBizDate(string startBizDate) { DARABONBA_PTR_SET_VALUE(startBizDate_, startBizDate) };


  protected:
    // The data timestamp at which data is no longer backfilled. Configure this parameter in the `yyyy-mm-dd` format.
    // 
    // This parameter is required.
    std::shared_ptr<string> endBizDate_ = nullptr;
    // The data timestamp at which the data starts to be backfilled. Configure this parameter in the `yyyy-mm-dd` format.
    // 
    // This parameter is required.
    std::shared_ptr<string> startBizDate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
