// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDOMAINLOGSRESPONSEBODYDOMAINLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDOMAINLOGSRESPONSEBODYDOMAINLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDomainLogsResponseBodyDomainLogsDomainLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDomainLogsResponseBodyDomainLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDomainLogsResponseBodyDomainLogs& obj) { 
      DARABONBA_PTR_TO_JSON(DomainLog, domainLog_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDomainLogsResponseBodyDomainLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(DomainLog, domainLog_);
    };
    DescribeDomainLogsResponseBodyDomainLogs() = default ;
    DescribeDomainLogsResponseBodyDomainLogs(const DescribeDomainLogsResponseBodyDomainLogs &) = default ;
    DescribeDomainLogsResponseBodyDomainLogs(DescribeDomainLogsResponseBodyDomainLogs &&) = default ;
    DescribeDomainLogsResponseBodyDomainLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDomainLogsResponseBodyDomainLogs() = default ;
    DescribeDomainLogsResponseBodyDomainLogs& operator=(const DescribeDomainLogsResponseBodyDomainLogs &) = default ;
    DescribeDomainLogsResponseBodyDomainLogs& operator=(DescribeDomainLogsResponseBodyDomainLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->domainLog_ == nullptr; };
    // domainLog Field Functions 
    bool hasDomainLog() const { return this->domainLog_ != nullptr;};
    void deleteDomainLog() { this->domainLog_ = nullptr;};
    inline const vector<Models::DescribeDomainLogsResponseBodyDomainLogsDomainLog> & domainLog() const { DARABONBA_PTR_GET_CONST(domainLog_, vector<Models::DescribeDomainLogsResponseBodyDomainLogsDomainLog>) };
    inline vector<Models::DescribeDomainLogsResponseBodyDomainLogsDomainLog> domainLog() { DARABONBA_PTR_GET(domainLog_, vector<Models::DescribeDomainLogsResponseBodyDomainLogsDomainLog>) };
    inline DescribeDomainLogsResponseBodyDomainLogs& setDomainLog(const vector<Models::DescribeDomainLogsResponseBodyDomainLogsDomainLog> & domainLog) { DARABONBA_PTR_SET_VALUE(domainLog_, domainLog) };
    inline DescribeDomainLogsResponseBodyDomainLogs& setDomainLog(vector<Models::DescribeDomainLogsResponseBodyDomainLogsDomainLog> && domainLog) { DARABONBA_PTR_SET_RVALUE(domainLog_, domainLog) };


  protected:
    std::shared_ptr<vector<Models::DescribeDomainLogsResponseBodyDomainLogsDomainLog>> domainLog_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
