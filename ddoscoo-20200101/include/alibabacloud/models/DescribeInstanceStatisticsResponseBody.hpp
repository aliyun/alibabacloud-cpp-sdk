// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTANCESTATISTICSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeInstanceStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstanceStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceStatistics, instanceStatistics_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstanceStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceStatistics, instanceStatistics_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstanceStatisticsResponseBody() = default ;
    DescribeInstanceStatisticsResponseBody(const DescribeInstanceStatisticsResponseBody &) = default ;
    DescribeInstanceStatisticsResponseBody(DescribeInstanceStatisticsResponseBody &&) = default ;
    DescribeInstanceStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstanceStatisticsResponseBody() = default ;
    DescribeInstanceStatisticsResponseBody& operator=(const DescribeInstanceStatisticsResponseBody &) = default ;
    DescribeInstanceStatisticsResponseBody& operator=(DescribeInstanceStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstanceStatistics : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstanceStatistics& obj) { 
        DARABONBA_PTR_TO_JSON(DefenseCountUsage, defenseCountUsage_);
        DARABONBA_PTR_TO_JSON(DomainUsage, domainUsage_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(PortUsage, portUsage_);
        DARABONBA_PTR_TO_JSON(SiteUsage, siteUsage_);
      };
      friend void from_json(const Darabonba::Json& j, InstanceStatistics& obj) { 
        DARABONBA_PTR_FROM_JSON(DefenseCountUsage, defenseCountUsage_);
        DARABONBA_PTR_FROM_JSON(DomainUsage, domainUsage_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(PortUsage, portUsage_);
        DARABONBA_PTR_FROM_JSON(SiteUsage, siteUsage_);
      };
      InstanceStatistics() = default ;
      InstanceStatistics(const InstanceStatistics &) = default ;
      InstanceStatistics(InstanceStatistics &&) = default ;
      InstanceStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstanceStatistics() = default ;
      InstanceStatistics& operator=(const InstanceStatistics &) = default ;
      InstanceStatistics& operator=(InstanceStatistics &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->defenseCountUsage_ == nullptr
        && this->domainUsage_ == nullptr && this->instanceId_ == nullptr && this->portUsage_ == nullptr && this->siteUsage_ == nullptr; };
      // defenseCountUsage Field Functions 
      bool hasDefenseCountUsage() const { return this->defenseCountUsage_ != nullptr;};
      void deleteDefenseCountUsage() { this->defenseCountUsage_ = nullptr;};
      inline int32_t getDefenseCountUsage() const { DARABONBA_PTR_GET_DEFAULT(defenseCountUsage_, 0) };
      inline InstanceStatistics& setDefenseCountUsage(int32_t defenseCountUsage) { DARABONBA_PTR_SET_VALUE(defenseCountUsage_, defenseCountUsage) };


      // domainUsage Field Functions 
      bool hasDomainUsage() const { return this->domainUsage_ != nullptr;};
      void deleteDomainUsage() { this->domainUsage_ = nullptr;};
      inline int32_t getDomainUsage() const { DARABONBA_PTR_GET_DEFAULT(domainUsage_, 0) };
      inline InstanceStatistics& setDomainUsage(int32_t domainUsage) { DARABONBA_PTR_SET_VALUE(domainUsage_, domainUsage) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline InstanceStatistics& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // portUsage Field Functions 
      bool hasPortUsage() const { return this->portUsage_ != nullptr;};
      void deletePortUsage() { this->portUsage_ = nullptr;};
      inline int32_t getPortUsage() const { DARABONBA_PTR_GET_DEFAULT(portUsage_, 0) };
      inline InstanceStatistics& setPortUsage(int32_t portUsage) { DARABONBA_PTR_SET_VALUE(portUsage_, portUsage) };


      // siteUsage Field Functions 
      bool hasSiteUsage() const { return this->siteUsage_ != nullptr;};
      void deleteSiteUsage() { this->siteUsage_ = nullptr;};
      inline int32_t getSiteUsage() const { DARABONBA_PTR_GET_DEFAULT(siteUsage_, 0) };
      inline InstanceStatistics& setSiteUsage(int32_t siteUsage) { DARABONBA_PTR_SET_VALUE(siteUsage_, siteUsage) };


    protected:
      // The number of advanced mitigation sessions that are used in this month.
      // 
      // >  This parameter is returned only if Anti-DDoS Proxy (Outside Chinese Mainland) instances are queried.
      shared_ptr<int32_t> defenseCountUsage_ {};
      // The number of domain names that are protected by the instance.
      shared_ptr<int32_t> domainUsage_ {};
      // The ID of the instance.
      shared_ptr<string> instanceId_ {};
      // The number of ports that are protected by the instance.
      shared_ptr<int32_t> portUsage_ {};
      // The number of websites that are protected by the instance.
      shared_ptr<int32_t> siteUsage_ {};
    };

    virtual bool empty() const override { return this->instanceStatistics_ == nullptr
        && this->requestId_ == nullptr; };
    // instanceStatistics Field Functions 
    bool hasInstanceStatistics() const { return this->instanceStatistics_ != nullptr;};
    void deleteInstanceStatistics() { this->instanceStatistics_ = nullptr;};
    inline const vector<DescribeInstanceStatisticsResponseBody::InstanceStatistics> & getInstanceStatistics() const { DARABONBA_PTR_GET_CONST(instanceStatistics_, vector<DescribeInstanceStatisticsResponseBody::InstanceStatistics>) };
    inline vector<DescribeInstanceStatisticsResponseBody::InstanceStatistics> getInstanceStatistics() { DARABONBA_PTR_GET(instanceStatistics_, vector<DescribeInstanceStatisticsResponseBody::InstanceStatistics>) };
    inline DescribeInstanceStatisticsResponseBody& setInstanceStatistics(const vector<DescribeInstanceStatisticsResponseBody::InstanceStatistics> & instanceStatistics) { DARABONBA_PTR_SET_VALUE(instanceStatistics_, instanceStatistics) };
    inline DescribeInstanceStatisticsResponseBody& setInstanceStatistics(vector<DescribeInstanceStatisticsResponseBody::InstanceStatistics> && instanceStatistics) { DARABONBA_PTR_SET_RVALUE(instanceStatistics_, instanceStatistics) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstanceStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The statistics on the instance.
    shared_ptr<vector<DescribeInstanceStatisticsResponseBody::InstanceStatistics>> instanceStatistics_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
