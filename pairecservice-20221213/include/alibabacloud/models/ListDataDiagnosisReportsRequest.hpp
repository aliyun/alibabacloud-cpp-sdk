// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATADIAGNOSISREPORTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTDATADIAGNOSISREPORTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace PaiRecService20221213
{
namespace Models
{
  class ListDataDiagnosisReportsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataDiagnosisReportsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EndDate, endDate_);
      DARABONBA_PTR_TO_JSON(FeatureName, featureName_);
      DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_TO_JSON(RemainRateType, remainRateType_);
      DARABONBA_PTR_TO_JSON(StartDate, startDate_);
      DARABONBA_PTR_TO_JSON(TopN, topN_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataDiagnosisReportsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EndDate, endDate_);
      DARABONBA_PTR_FROM_JSON(FeatureName, featureName_);
      DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
      DARABONBA_PTR_FROM_JSON(RemainRateType, remainRateType_);
      DARABONBA_PTR_FROM_JSON(StartDate, startDate_);
      DARABONBA_PTR_FROM_JSON(TopN, topN_);
    };
    ListDataDiagnosisReportsRequest() = default ;
    ListDataDiagnosisReportsRequest(const ListDataDiagnosisReportsRequest &) = default ;
    ListDataDiagnosisReportsRequest(ListDataDiagnosisReportsRequest &&) = default ;
    ListDataDiagnosisReportsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataDiagnosisReportsRequest() = default ;
    ListDataDiagnosisReportsRequest& operator=(const ListDataDiagnosisReportsRequest &) = default ;
    ListDataDiagnosisReportsRequest& operator=(ListDataDiagnosisReportsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->endDate_ == nullptr
        && this->featureName_ == nullptr && this->instanceId_ == nullptr && this->remainRateType_ == nullptr && this->startDate_ == nullptr && this->topN_ == nullptr; };
    // endDate Field Functions 
    bool hasEndDate() const { return this->endDate_ != nullptr;};
    void deleteEndDate() { this->endDate_ = nullptr;};
    inline string getEndDate() const { DARABONBA_PTR_GET_DEFAULT(endDate_, "") };
    inline ListDataDiagnosisReportsRequest& setEndDate(string endDate) { DARABONBA_PTR_SET_VALUE(endDate_, endDate) };


    // featureName Field Functions 
    bool hasFeatureName() const { return this->featureName_ != nullptr;};
    void deleteFeatureName() { this->featureName_ = nullptr;};
    inline string getFeatureName() const { DARABONBA_PTR_GET_DEFAULT(featureName_, "") };
    inline ListDataDiagnosisReportsRequest& setFeatureName(string featureName) { DARABONBA_PTR_SET_VALUE(featureName_, featureName) };


    // instanceId Field Functions 
    bool hasInstanceId() const { return this->instanceId_ != nullptr;};
    void deleteInstanceId() { this->instanceId_ = nullptr;};
    inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
    inline ListDataDiagnosisReportsRequest& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


    // remainRateType Field Functions 
    bool hasRemainRateType() const { return this->remainRateType_ != nullptr;};
    void deleteRemainRateType() { this->remainRateType_ = nullptr;};
    inline string getRemainRateType() const { DARABONBA_PTR_GET_DEFAULT(remainRateType_, "") };
    inline ListDataDiagnosisReportsRequest& setRemainRateType(string remainRateType) { DARABONBA_PTR_SET_VALUE(remainRateType_, remainRateType) };


    // startDate Field Functions 
    bool hasStartDate() const { return this->startDate_ != nullptr;};
    void deleteStartDate() { this->startDate_ = nullptr;};
    inline string getStartDate() const { DARABONBA_PTR_GET_DEFAULT(startDate_, "") };
    inline ListDataDiagnosisReportsRequest& setStartDate(string startDate) { DARABONBA_PTR_SET_VALUE(startDate_, startDate) };


    // topN Field Functions 
    bool hasTopN() const { return this->topN_ != nullptr;};
    void deleteTopN() { this->topN_ = nullptr;};
    inline int64_t getTopN() const { DARABONBA_PTR_GET_DEFAULT(topN_, 0L) };
    inline ListDataDiagnosisReportsRequest& setTopN(int64_t topN) { DARABONBA_PTR_SET_VALUE(topN_, topN) };


  protected:
    // This parameter is required.
    shared_ptr<string> endDate_ {};
    shared_ptr<string> featureName_ {};
    // This parameter is required.
    shared_ptr<string> instanceId_ {};
    shared_ptr<string> remainRateType_ {};
    // This parameter is required.
    shared_ptr<string> startDate_ {};
    shared_ptr<int64_t> topN_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace PaiRecService20221213
#endif
