// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERHOSTSECURITYSUMMARYRESPONSEBODYCLUSTERHOSTEVENT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERHOSTSECURITYSUMMARYRESPONSEBODYCLUSTERHOSTEVENT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventAlarmEvent.hpp>
#include <alibabacloud/models/DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventBaselineEvent.hpp>
#include <alibabacloud/models/DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventVulEvent.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent& obj) { 
      DARABONBA_PTR_TO_JSON(AlarmEvent, alarmEvent_);
      DARABONBA_PTR_TO_JSON(BaselineEvent, baselineEvent_);
      DARABONBA_PTR_TO_JSON(VulEvent, vulEvent_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent& obj) { 
      DARABONBA_PTR_FROM_JSON(AlarmEvent, alarmEvent_);
      DARABONBA_PTR_FROM_JSON(BaselineEvent, baselineEvent_);
      DARABONBA_PTR_FROM_JSON(VulEvent, vulEvent_);
    };
    DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent() = default ;
    DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent(const DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent &) = default ;
    DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent(DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent &&) = default ;
    DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent() = default ;
    DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent& operator=(const DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent &) = default ;
    DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent& operator=(DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alarmEvent_ == nullptr
        && return this->baselineEvent_ == nullptr && return this->vulEvent_ == nullptr; };
    // alarmEvent Field Functions 
    bool hasAlarmEvent() const { return this->alarmEvent_ != nullptr;};
    void deleteAlarmEvent() { this->alarmEvent_ = nullptr;};
    inline const vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventAlarmEvent> & alarmEvent() const { DARABONBA_PTR_GET_CONST(alarmEvent_, vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventAlarmEvent>) };
    inline vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventAlarmEvent> alarmEvent() { DARABONBA_PTR_GET(alarmEvent_, vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventAlarmEvent>) };
    inline DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent& setAlarmEvent(const vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventAlarmEvent> & alarmEvent) { DARABONBA_PTR_SET_VALUE(alarmEvent_, alarmEvent) };
    inline DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent& setAlarmEvent(vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventAlarmEvent> && alarmEvent) { DARABONBA_PTR_SET_RVALUE(alarmEvent_, alarmEvent) };


    // baselineEvent Field Functions 
    bool hasBaselineEvent() const { return this->baselineEvent_ != nullptr;};
    void deleteBaselineEvent() { this->baselineEvent_ = nullptr;};
    inline const vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventBaselineEvent> & baselineEvent() const { DARABONBA_PTR_GET_CONST(baselineEvent_, vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventBaselineEvent>) };
    inline vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventBaselineEvent> baselineEvent() { DARABONBA_PTR_GET(baselineEvent_, vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventBaselineEvent>) };
    inline DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent& setBaselineEvent(const vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventBaselineEvent> & baselineEvent) { DARABONBA_PTR_SET_VALUE(baselineEvent_, baselineEvent) };
    inline DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent& setBaselineEvent(vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventBaselineEvent> && baselineEvent) { DARABONBA_PTR_SET_RVALUE(baselineEvent_, baselineEvent) };


    // vulEvent Field Functions 
    bool hasVulEvent() const { return this->vulEvent_ != nullptr;};
    void deleteVulEvent() { this->vulEvent_ = nullptr;};
    inline const vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventVulEvent> & vulEvent() const { DARABONBA_PTR_GET_CONST(vulEvent_, vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventVulEvent>) };
    inline vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventVulEvent> vulEvent() { DARABONBA_PTR_GET(vulEvent_, vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventVulEvent>) };
    inline DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent& setVulEvent(const vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventVulEvent> & vulEvent) { DARABONBA_PTR_SET_VALUE(vulEvent_, vulEvent) };
    inline DescribeClusterHostSecuritySummaryResponseBodyClusterHostEvent& setVulEvent(vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventVulEvent> && vulEvent) { DARABONBA_PTR_SET_RVALUE(vulEvent_, vulEvent) };


  protected:
    // The alert details of the host.
    std::shared_ptr<vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventAlarmEvent>> alarmEvent_ = nullptr;
    // The baseline details of the host.
    std::shared_ptr<vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventBaselineEvent>> baselineEvent_ = nullptr;
    // The vulnerability details of the host.
    std::shared_ptr<vector<Models::DescribeClusterHostSecuritySummaryResponseBodyClusterHostEventVulEvent>> vulEvent_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
