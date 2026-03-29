// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATADIAGNOSISSTATISTICSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATADIAGNOSISSTATISTICSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class QueryDataDiagnosisStatisticsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataDiagnosisStatisticsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RemainRateType, remainRateType_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataDiagnosisStatisticsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RemainRateType, remainRateType_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
    };
    QueryDataDiagnosisStatisticsRequest() = default ;
    QueryDataDiagnosisStatisticsRequest(const QueryDataDiagnosisStatisticsRequest &) = default ;
    QueryDataDiagnosisStatisticsRequest(QueryDataDiagnosisStatisticsRequest &&) = default ;
    QueryDataDiagnosisStatisticsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataDiagnosisStatisticsRequest() = default ;
    QueryDataDiagnosisStatisticsRequest& operator=(const QueryDataDiagnosisStatisticsRequest &) = default ;
    QueryDataDiagnosisStatisticsRequest& operator=(QueryDataDiagnosisStatisticsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->instanceId_ == nullptr && this->remainRateType_ == nullptr && this->startDate_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline QueryDataDiagnosisStatisticsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline QueryDataDiagnosisStatisticsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // remainRateType Field Functions 
    bool hasRemainRateType() const { return this->remainRateType_ != nullptr;};
    void deleteRemainRateType() { this->remainRateType_ = nullptr;};
    inline string getRemainRateType() const { DARABONBA_PTR_GET_DEFAULT(remainRateType_, "") };
    inline QueryDataDiagnosisStatisticsRequest& setRemainRateType(string remainRateType) { DARABONBA_PTR_SET_VALUE(remainRateType_, remainRateType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline QueryDataDiagnosisStatisticsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


  protected:
    shared_ptr<string> endDate_ {};
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> remainRateType_ {};
    shared_ptr<string> startDate_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
