// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATLOGSRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPDNSTHREATLOGSRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribePdnsThreatLogsResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePdnsThreatLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_TO_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_TO_JSON(ThreatTime, threatTime_);
      DARABONBA_PTR_TO_JSON(ThreatType, threatType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePdnsThreatLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(SubDomain, subDomain_);
      DARABONBA_PTR_FROM_JSON(ThreatLevel, threatLevel_);
      DARABONBA_PTR_FROM_JSON(ThreatTime, threatTime_);
      DARABONBA_PTR_FROM_JSON(ThreatType, threatType_);
    };
    DescribePdnsThreatLogsResponseBodyLogs() = default ;
    DescribePdnsThreatLogsResponseBodyLogs(const DescribePdnsThreatLogsResponseBodyLogs &) = default ;
    DescribePdnsThreatLogsResponseBodyLogs(DescribePdnsThreatLogsResponseBodyLogs &&) = default ;
    DescribePdnsThreatLogsResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePdnsThreatLogsResponseBodyLogs() = default ;
    DescribePdnsThreatLogsResponseBodyLogs& operator=(const DescribePdnsThreatLogsResponseBodyLogs &) = default ;
    DescribePdnsThreatLogsResponseBodyLogs& operator=(DescribePdnsThreatLogsResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sourceIp_ != nullptr
        && this->subDomain_ != nullptr && this->threatLevel_ != nullptr && this->threatTime_ != nullptr && this->threatType_ != nullptr; };
    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribePdnsThreatLogsResponseBodyLogs& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // subDomain Field Functions 
    bool hasSubDomain() const { return this->subDomain_ != nullptr;};
    void deleteSubDomain() { this->subDomain_ = nullptr;};
    inline string subDomain() const { DARABONBA_PTR_GET_DEFAULT(subDomain_, "") };
    inline DescribePdnsThreatLogsResponseBodyLogs& setSubDomain(string subDomain) { DARABONBA_PTR_SET_VALUE(subDomain_, subDomain) };


    // threatLevel Field Functions 
    bool hasThreatLevel() const { return this->threatLevel_ != nullptr;};
    void deleteThreatLevel() { this->threatLevel_ = nullptr;};
    inline string threatLevel() const { DARABONBA_PTR_GET_DEFAULT(threatLevel_, "") };
    inline DescribePdnsThreatLogsResponseBodyLogs& setThreatLevel(string threatLevel) { DARABONBA_PTR_SET_VALUE(threatLevel_, threatLevel) };


    // threatTime Field Functions 
    bool hasThreatTime() const { return this->threatTime_ != nullptr;};
    void deleteThreatTime() { this->threatTime_ = nullptr;};
    inline string threatTime() const { DARABONBA_PTR_GET_DEFAULT(threatTime_, "") };
    inline DescribePdnsThreatLogsResponseBodyLogs& setThreatTime(string threatTime) { DARABONBA_PTR_SET_VALUE(threatTime_, threatTime) };


    // threatType Field Functions 
    bool hasThreatType() const { return this->threatType_ != nullptr;};
    void deleteThreatType() { this->threatType_ = nullptr;};
    inline string threatType() const { DARABONBA_PTR_GET_DEFAULT(threatType_, "") };
    inline DescribePdnsThreatLogsResponseBodyLogs& setThreatType(string threatType) { DARABONBA_PTR_SET_VALUE(threatType_, threatType) };


  protected:
    std::shared_ptr<string> sourceIp_ = nullptr;
    std::shared_ptr<string> subDomain_ = nullptr;
    std::shared_ptr<string> threatLevel_ = nullptr;
    std::shared_ptr<string> threatTime_ = nullptr;
    std::shared_ptr<string> threatType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
