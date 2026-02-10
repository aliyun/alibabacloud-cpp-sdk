// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERHOSTSECURITYSUMMARYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERHOSTSECURITYSUMMARYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeClusterHostSecuritySummaryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterHostSecuritySummaryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterHostEvent, clusterHostEvent_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterHostSecuritySummaryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterHostEvent, clusterHostEvent_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterHostSecuritySummaryResponseBody() = default ;
    DescribeClusterHostSecuritySummaryResponseBody(const DescribeClusterHostSecuritySummaryResponseBody &) = default ;
    DescribeClusterHostSecuritySummaryResponseBody(DescribeClusterHostSecuritySummaryResponseBody &&) = default ;
    DescribeClusterHostSecuritySummaryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterHostSecuritySummaryResponseBody() = default ;
    DescribeClusterHostSecuritySummaryResponseBody& operator=(const DescribeClusterHostSecuritySummaryResponseBody &) = default ;
    DescribeClusterHostSecuritySummaryResponseBody& operator=(DescribeClusterHostSecuritySummaryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClusterHostEvent : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClusterHostEvent& obj) { 
        DARABONBA_PTR_TO_JSON(AlarmEvent, alarmEvent_);
        DARABONBA_PTR_TO_JSON(BaselineEvent, baselineEvent_);
        DARABONBA_PTR_TO_JSON(VulEvent, vulEvent_);
      };
      friend void from_json(const Darabonba::Json& j, ClusterHostEvent& obj) { 
        DARABONBA_PTR_FROM_JSON(AlarmEvent, alarmEvent_);
        DARABONBA_PTR_FROM_JSON(BaselineEvent, baselineEvent_);
        DARABONBA_PTR_FROM_JSON(VulEvent, vulEvent_);
      };
      ClusterHostEvent() = default ;
      ClusterHostEvent(const ClusterHostEvent &) = default ;
      ClusterHostEvent(ClusterHostEvent &&) = default ;
      ClusterHostEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClusterHostEvent() = default ;
      ClusterHostEvent& operator=(const ClusterHostEvent &) = default ;
      ClusterHostEvent& operator=(ClusterHostEvent &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class VulEvent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const VulEvent& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, VulEvent& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        VulEvent() = default ;
        VulEvent(const VulEvent &) = default ;
        VulEvent(VulEvent &&) = default ;
        VulEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~VulEvent() = default ;
        VulEvent& operator=(const VulEvent &) = default ;
        VulEvent& operator=(VulEvent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->riskLevel_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline VulEvent& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline VulEvent& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The number of vulnerabilities.
        shared_ptr<int64_t> count_ {};
        // The risk level of the vulnerability. Valid values:
        // 
        // *   **asap**: high. You must fix the vulnerability at the earliest opportunity.
        // *   **nntf**: medium. You can fix the vulnerability based on your business requirements.
        // *   **later**: low. You can ignore the vulnerability.
        shared_ptr<string> riskLevel_ {};
      };

      class BaselineEvent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const BaselineEvent& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, BaselineEvent& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        BaselineEvent() = default ;
        BaselineEvent(const BaselineEvent &) = default ;
        BaselineEvent(BaselineEvent &&) = default ;
        BaselineEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~BaselineEvent() = default ;
        BaselineEvent& operator=(const BaselineEvent &) = default ;
        BaselineEvent& operator=(BaselineEvent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->riskLevel_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline BaselineEvent& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline BaselineEvent& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The number of baselines.
        shared_ptr<int64_t> count_ {};
        // The risk level of the baseline. Valid values:
        // 
        // *   **high**
        // *   **medium**
        // *   **low**
        shared_ptr<string> riskLevel_ {};
      };

      class AlarmEvent : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AlarmEvent& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
        };
        friend void from_json(const Darabonba::Json& j, AlarmEvent& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
        };
        AlarmEvent() = default ;
        AlarmEvent(const AlarmEvent &) = default ;
        AlarmEvent(AlarmEvent &&) = default ;
        AlarmEvent(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AlarmEvent() = default ;
        AlarmEvent& operator=(const AlarmEvent &) = default ;
        AlarmEvent& operator=(AlarmEvent &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->riskLevel_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline AlarmEvent& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // riskLevel Field Functions 
        bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
        void deleteRiskLevel() { this->riskLevel_ = nullptr;};
        inline string getRiskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
        inline AlarmEvent& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


      protected:
        // The number of alerts.
        shared_ptr<int64_t> count_ {};
        // The alert level. Valid values:
        // 
        // *   **serious**
        // *   **suspicious**
        // *   **remind**
        shared_ptr<string> riskLevel_ {};
      };

      virtual bool empty() const override { return this->alarmEvent_ == nullptr
        && this->baselineEvent_ == nullptr && this->vulEvent_ == nullptr; };
      // alarmEvent Field Functions 
      bool hasAlarmEvent() const { return this->alarmEvent_ != nullptr;};
      void deleteAlarmEvent() { this->alarmEvent_ = nullptr;};
      inline const vector<ClusterHostEvent::AlarmEvent> & getAlarmEvent() const { DARABONBA_PTR_GET_CONST(alarmEvent_, vector<ClusterHostEvent::AlarmEvent>) };
      inline vector<ClusterHostEvent::AlarmEvent> getAlarmEvent() { DARABONBA_PTR_GET(alarmEvent_, vector<ClusterHostEvent::AlarmEvent>) };
      inline ClusterHostEvent& setAlarmEvent(const vector<ClusterHostEvent::AlarmEvent> & alarmEvent) { DARABONBA_PTR_SET_VALUE(alarmEvent_, alarmEvent) };
      inline ClusterHostEvent& setAlarmEvent(vector<ClusterHostEvent::AlarmEvent> && alarmEvent) { DARABONBA_PTR_SET_RVALUE(alarmEvent_, alarmEvent) };


      // baselineEvent Field Functions 
      bool hasBaselineEvent() const { return this->baselineEvent_ != nullptr;};
      void deleteBaselineEvent() { this->baselineEvent_ = nullptr;};
      inline const vector<ClusterHostEvent::BaselineEvent> & getBaselineEvent() const { DARABONBA_PTR_GET_CONST(baselineEvent_, vector<ClusterHostEvent::BaselineEvent>) };
      inline vector<ClusterHostEvent::BaselineEvent> getBaselineEvent() { DARABONBA_PTR_GET(baselineEvent_, vector<ClusterHostEvent::BaselineEvent>) };
      inline ClusterHostEvent& setBaselineEvent(const vector<ClusterHostEvent::BaselineEvent> & baselineEvent) { DARABONBA_PTR_SET_VALUE(baselineEvent_, baselineEvent) };
      inline ClusterHostEvent& setBaselineEvent(vector<ClusterHostEvent::BaselineEvent> && baselineEvent) { DARABONBA_PTR_SET_RVALUE(baselineEvent_, baselineEvent) };


      // vulEvent Field Functions 
      bool hasVulEvent() const { return this->vulEvent_ != nullptr;};
      void deleteVulEvent() { this->vulEvent_ = nullptr;};
      inline const vector<ClusterHostEvent::VulEvent> & getVulEvent() const { DARABONBA_PTR_GET_CONST(vulEvent_, vector<ClusterHostEvent::VulEvent>) };
      inline vector<ClusterHostEvent::VulEvent> getVulEvent() { DARABONBA_PTR_GET(vulEvent_, vector<ClusterHostEvent::VulEvent>) };
      inline ClusterHostEvent& setVulEvent(const vector<ClusterHostEvent::VulEvent> & vulEvent) { DARABONBA_PTR_SET_VALUE(vulEvent_, vulEvent) };
      inline ClusterHostEvent& setVulEvent(vector<ClusterHostEvent::VulEvent> && vulEvent) { DARABONBA_PTR_SET_RVALUE(vulEvent_, vulEvent) };


    protected:
      // The alert details of the host.
      shared_ptr<vector<ClusterHostEvent::AlarmEvent>> alarmEvent_ {};
      // The baseline details of the host.
      shared_ptr<vector<ClusterHostEvent::BaselineEvent>> baselineEvent_ {};
      // The vulnerability details of the host.
      shared_ptr<vector<ClusterHostEvent::VulEvent>> vulEvent_ {};
    };

    virtual bool empty() const override { return this->clusterHostEvent_ == nullptr
        && this->requestId_ == nullptr; };
    // clusterHostEvent Field Functions 
    bool hasClusterHostEvent() const { return this->clusterHostEvent_ != nullptr;};
    void deleteClusterHostEvent() { this->clusterHostEvent_ = nullptr;};
    inline const DescribeClusterHostSecuritySummaryResponseBody::ClusterHostEvent & getClusterHostEvent() const { DARABONBA_PTR_GET_CONST(clusterHostEvent_, DescribeClusterHostSecuritySummaryResponseBody::ClusterHostEvent) };
    inline DescribeClusterHostSecuritySummaryResponseBody::ClusterHostEvent getClusterHostEvent() { DARABONBA_PTR_GET(clusterHostEvent_, DescribeClusterHostSecuritySummaryResponseBody::ClusterHostEvent) };
    inline DescribeClusterHostSecuritySummaryResponseBody& setClusterHostEvent(const DescribeClusterHostSecuritySummaryResponseBody::ClusterHostEvent & clusterHostEvent) { DARABONBA_PTR_SET_VALUE(clusterHostEvent_, clusterHostEvent) };
    inline DescribeClusterHostSecuritySummaryResponseBody& setClusterHostEvent(DescribeClusterHostSecuritySummaryResponseBody::ClusterHostEvent && clusterHostEvent) { DARABONBA_PTR_SET_RVALUE(clusterHostEvent_, clusterHostEvent) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterHostSecuritySummaryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The alert details of the hosts.
    shared_ptr<DescribeClusterHostSecuritySummaryResponseBody::ClusterHostEvent> clusterHostEvent_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
