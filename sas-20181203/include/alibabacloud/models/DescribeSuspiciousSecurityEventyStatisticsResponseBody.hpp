// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSSECURITYEVENTYSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESUSPICIOUSSECURITYEVENTYSTATISTICSRESPONSEBODY_HPP_
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
  class DescribeSuspiciousSecurityEventyStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSuspiciousSecurityEventyStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Statistic, statistic_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSuspiciousSecurityEventyStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Statistic, statistic_);
    };
    DescribeSuspiciousSecurityEventyStatisticsResponseBody() = default ;
    DescribeSuspiciousSecurityEventyStatisticsResponseBody(const DescribeSuspiciousSecurityEventyStatisticsResponseBody &) = default ;
    DescribeSuspiciousSecurityEventyStatisticsResponseBody(DescribeSuspiciousSecurityEventyStatisticsResponseBody &&) = default ;
    DescribeSuspiciousSecurityEventyStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSuspiciousSecurityEventyStatisticsResponseBody() = default ;
    DescribeSuspiciousSecurityEventyStatisticsResponseBody& operator=(const DescribeSuspiciousSecurityEventyStatisticsResponseBody &) = default ;
    DescribeSuspiciousSecurityEventyStatisticsResponseBody& operator=(DescribeSuspiciousSecurityEventyStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Statistic : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Statistic& obj) { 
        DARABONBA_PTR_TO_JSON(AntiRansomwareStatistic, antiRansomwareStatistic_);
      };
      friend void from_json(const Darabonba::Json& j, Statistic& obj) { 
        DARABONBA_PTR_FROM_JSON(AntiRansomwareStatistic, antiRansomwareStatistic_);
      };
      Statistic() = default ;
      Statistic(const Statistic &) = default ;
      Statistic(Statistic &&) = default ;
      Statistic(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Statistic() = default ;
      Statistic& operator=(const Statistic &) = default ;
      Statistic& operator=(Statistic &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class AntiRansomwareStatistic : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AntiRansomwareStatistic& obj) { 
          DARABONBA_PTR_TO_JSON(SecurityEventCount, securityEventCount_);
          DARABONBA_PTR_TO_JSON(SecurityEventMachine, securityEventMachine_);
        };
        friend void from_json(const Darabonba::Json& j, AntiRansomwareStatistic& obj) { 
          DARABONBA_PTR_FROM_JSON(SecurityEventCount, securityEventCount_);
          DARABONBA_PTR_FROM_JSON(SecurityEventMachine, securityEventMachine_);
        };
        AntiRansomwareStatistic() = default ;
        AntiRansomwareStatistic(const AntiRansomwareStatistic &) = default ;
        AntiRansomwareStatistic(AntiRansomwareStatistic &&) = default ;
        AntiRansomwareStatistic(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AntiRansomwareStatistic() = default ;
        AntiRansomwareStatistic& operator=(const AntiRansomwareStatistic &) = default ;
        AntiRansomwareStatistic& operator=(AntiRansomwareStatistic &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class SecurityEventMachine : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const SecurityEventMachine& obj) { 
            DARABONBA_PTR_TO_JSON(InstanceName, instanceName_);
            DARABONBA_PTR_TO_JSON(RegionId, regionId_);
            DARABONBA_PTR_TO_JSON(Uuid, uuid_);
          };
          friend void from_json(const Darabonba::Json& j, SecurityEventMachine& obj) { 
            DARABONBA_PTR_FROM_JSON(InstanceName, instanceName_);
            DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
            DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
          };
          SecurityEventMachine() = default ;
          SecurityEventMachine(const SecurityEventMachine &) = default ;
          SecurityEventMachine(SecurityEventMachine &&) = default ;
          SecurityEventMachine(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~SecurityEventMachine() = default ;
          SecurityEventMachine& operator=(const SecurityEventMachine &) = default ;
          SecurityEventMachine& operator=(SecurityEventMachine &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->instanceName_ == nullptr
        && this->regionId_ == nullptr && this->uuid_ == nullptr; };
          // instanceName Field Functions 
          bool hasInstanceName() const { return this->instanceName_ != nullptr;};
          void deleteInstanceName() { this->instanceName_ = nullptr;};
          inline string getInstanceName() const { DARABONBA_PTR_GET_DEFAULT(instanceName_, "") };
          inline SecurityEventMachine& setInstanceName(string instanceName) { DARABONBA_PTR_SET_VALUE(instanceName_, instanceName) };


          // regionId Field Functions 
          bool hasRegionId() const { return this->regionId_ != nullptr;};
          void deleteRegionId() { this->regionId_ = nullptr;};
          inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
          inline SecurityEventMachine& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


          // uuid Field Functions 
          bool hasUuid() const { return this->uuid_ != nullptr;};
          void deleteUuid() { this->uuid_ = nullptr;};
          inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
          inline SecurityEventMachine& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


        protected:
          // Instance name.
          shared_ptr<string> instanceName_ {};
          // Region ID.
          shared_ptr<string> regionId_ {};
          // UUID of the asset instance.
          shared_ptr<string> uuid_ {};
        };

        virtual bool empty() const override { return this->securityEventCount_ == nullptr
        && this->securityEventMachine_ == nullptr; };
        // securityEventCount Field Functions 
        bool hasSecurityEventCount() const { return this->securityEventCount_ != nullptr;};
        void deleteSecurityEventCount() { this->securityEventCount_ = nullptr;};
        inline int32_t getSecurityEventCount() const { DARABONBA_PTR_GET_DEFAULT(securityEventCount_, 0) };
        inline AntiRansomwareStatistic& setSecurityEventCount(int32_t securityEventCount) { DARABONBA_PTR_SET_VALUE(securityEventCount_, securityEventCount) };


        // securityEventMachine Field Functions 
        bool hasSecurityEventMachine() const { return this->securityEventMachine_ != nullptr;};
        void deleteSecurityEventMachine() { this->securityEventMachine_ = nullptr;};
        inline const vector<AntiRansomwareStatistic::SecurityEventMachine> & getSecurityEventMachine() const { DARABONBA_PTR_GET_CONST(securityEventMachine_, vector<AntiRansomwareStatistic::SecurityEventMachine>) };
        inline vector<AntiRansomwareStatistic::SecurityEventMachine> getSecurityEventMachine() { DARABONBA_PTR_GET(securityEventMachine_, vector<AntiRansomwareStatistic::SecurityEventMachine>) };
        inline AntiRansomwareStatistic& setSecurityEventMachine(const vector<AntiRansomwareStatistic::SecurityEventMachine> & securityEventMachine) { DARABONBA_PTR_SET_VALUE(securityEventMachine_, securityEventMachine) };
        inline AntiRansomwareStatistic& setSecurityEventMachine(vector<AntiRansomwareStatistic::SecurityEventMachine> && securityEventMachine) { DARABONBA_PTR_SET_RVALUE(securityEventMachine_, securityEventMachine) };


      protected:
        // Number of security events.
        shared_ptr<int32_t> securityEventCount_ {};
        // Asset information associated with the security event.
        shared_ptr<vector<AntiRansomwareStatistic::SecurityEventMachine>> securityEventMachine_ {};
      };

      virtual bool empty() const override { return this->antiRansomwareStatistic_ == nullptr; };
      // antiRansomwareStatistic Field Functions 
      bool hasAntiRansomwareStatistic() const { return this->antiRansomwareStatistic_ != nullptr;};
      void deleteAntiRansomwareStatistic() { this->antiRansomwareStatistic_ = nullptr;};
      inline const Statistic::AntiRansomwareStatistic & getAntiRansomwareStatistic() const { DARABONBA_PTR_GET_CONST(antiRansomwareStatistic_, Statistic::AntiRansomwareStatistic) };
      inline Statistic::AntiRansomwareStatistic getAntiRansomwareStatistic() { DARABONBA_PTR_GET(antiRansomwareStatistic_, Statistic::AntiRansomwareStatistic) };
      inline Statistic& setAntiRansomwareStatistic(const Statistic::AntiRansomwareStatistic & antiRansomwareStatistic) { DARABONBA_PTR_SET_VALUE(antiRansomwareStatistic_, antiRansomwareStatistic) };
      inline Statistic& setAntiRansomwareStatistic(Statistic::AntiRansomwareStatistic && antiRansomwareStatistic) { DARABONBA_PTR_SET_RVALUE(antiRansomwareStatistic_, antiRansomwareStatistic) };


    protected:
      // Statistical information.
      shared_ptr<Statistic::AntiRansomwareStatistic> antiRansomwareStatistic_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->statistic_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSuspiciousSecurityEventyStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // statistic Field Functions 
    bool hasStatistic() const { return this->statistic_ != nullptr;};
    void deleteStatistic() { this->statistic_ = nullptr;};
    inline const DescribeSuspiciousSecurityEventyStatisticsResponseBody::Statistic & getStatistic() const { DARABONBA_PTR_GET_CONST(statistic_, DescribeSuspiciousSecurityEventyStatisticsResponseBody::Statistic) };
    inline DescribeSuspiciousSecurityEventyStatisticsResponseBody::Statistic getStatistic() { DARABONBA_PTR_GET(statistic_, DescribeSuspiciousSecurityEventyStatisticsResponseBody::Statistic) };
    inline DescribeSuspiciousSecurityEventyStatisticsResponseBody& setStatistic(const DescribeSuspiciousSecurityEventyStatisticsResponseBody::Statistic & statistic) { DARABONBA_PTR_SET_VALUE(statistic_, statistic) };
    inline DescribeSuspiciousSecurityEventyStatisticsResponseBody& setStatistic(DescribeSuspiciousSecurityEventyStatisticsResponseBody::Statistic && statistic) { DARABONBA_PTR_SET_RVALUE(statistic_, statistic) };


  protected:
    // The ID of the current request, which is a unique identifier generated by Alibaba Cloud for this request and can be used to troubleshoot and locate issues.
    shared_ptr<string> requestId_ {};
    // Statistical information.
    shared_ptr<DescribeSuspiciousSecurityEventyStatisticsResponseBody::Statistic> statistic_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
