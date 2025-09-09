// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSRESPONSEBODYLOGSLOG_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSRESPONSEBODYLOGSLOG_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeInternetDnsLogsResponseBodyLogsLogValue.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInternetDnsLogsResponseBodyLogsLog : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetDnsLogsResponseBodyLogsLog& obj) { 
      DARABONBA_PTR_TO_JSON(DnsMsgId, dnsMsgId_);
      DARABONBA_PTR_TO_JSON(LogTime, logTime_);
      DARABONBA_PTR_TO_JSON(Protocol, protocol_);
      DARABONBA_PTR_TO_JSON(QueryName, queryName_);
      DARABONBA_PTR_TO_JSON(QueryType, queryType_);
      DARABONBA_PTR_TO_JSON(Rt, rt_);
      DARABONBA_PTR_TO_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(SubnetIp, subnetIp_);
      DARABONBA_PTR_TO_JSON(Value, value_);
      DARABONBA_PTR_TO_JSON(ZoneName, zoneName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetDnsLogsResponseBodyLogsLog& obj) { 
      DARABONBA_PTR_FROM_JSON(DnsMsgId, dnsMsgId_);
      DARABONBA_PTR_FROM_JSON(LogTime, logTime_);
      DARABONBA_PTR_FROM_JSON(Protocol, protocol_);
      DARABONBA_PTR_FROM_JSON(QueryName, queryName_);
      DARABONBA_PTR_FROM_JSON(QueryType, queryType_);
      DARABONBA_PTR_FROM_JSON(Rt, rt_);
      DARABONBA_PTR_FROM_JSON(ServerIp, serverIp_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(SubnetIp, subnetIp_);
      DARABONBA_PTR_FROM_JSON(Value, value_);
      DARABONBA_PTR_FROM_JSON(ZoneName, zoneName_);
    };
    DescribeInternetDnsLogsResponseBodyLogsLog() = default ;
    DescribeInternetDnsLogsResponseBodyLogsLog(const DescribeInternetDnsLogsResponseBodyLogsLog &) = default ;
    DescribeInternetDnsLogsResponseBodyLogsLog(DescribeInternetDnsLogsResponseBodyLogsLog &&) = default ;
    DescribeInternetDnsLogsResponseBodyLogsLog(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetDnsLogsResponseBodyLogsLog() = default ;
    DescribeInternetDnsLogsResponseBodyLogsLog& operator=(const DescribeInternetDnsLogsResponseBodyLogsLog &) = default ;
    DescribeInternetDnsLogsResponseBodyLogsLog& operator=(DescribeInternetDnsLogsResponseBodyLogsLog &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dnsMsgId_ != nullptr
        && this->logTime_ != nullptr && this->protocol_ != nullptr && this->queryName_ != nullptr && this->queryType_ != nullptr && this->rt_ != nullptr
        && this->serverIp_ != nullptr && this->sourceIp_ != nullptr && this->status_ != nullptr && this->subnetIp_ != nullptr && this->value_ != nullptr
        && this->zoneName_ != nullptr; };
    // dnsMsgId Field Functions 
    bool hasDnsMsgId() const { return this->dnsMsgId_ != nullptr;};
    void deleteDnsMsgId() { this->dnsMsgId_ = nullptr;};
    inline string dnsMsgId() const { DARABONBA_PTR_GET_DEFAULT(dnsMsgId_, "") };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setDnsMsgId(string dnsMsgId) { DARABONBA_PTR_SET_VALUE(dnsMsgId_, dnsMsgId) };


    // logTime Field Functions 
    bool hasLogTime() const { return this->logTime_ != nullptr;};
    void deleteLogTime() { this->logTime_ = nullptr;};
    inline int64_t logTime() const { DARABONBA_PTR_GET_DEFAULT(logTime_, 0L) };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setLogTime(int64_t logTime) { DARABONBA_PTR_SET_VALUE(logTime_, logTime) };


    // protocol Field Functions 
    bool hasProtocol() const { return this->protocol_ != nullptr;};
    void deleteProtocol() { this->protocol_ = nullptr;};
    inline string protocol() const { DARABONBA_PTR_GET_DEFAULT(protocol_, "") };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setProtocol(string protocol) { DARABONBA_PTR_SET_VALUE(protocol_, protocol) };


    // queryName Field Functions 
    bool hasQueryName() const { return this->queryName_ != nullptr;};
    void deleteQueryName() { this->queryName_ = nullptr;};
    inline string queryName() const { DARABONBA_PTR_GET_DEFAULT(queryName_, "") };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setQueryName(string queryName) { DARABONBA_PTR_SET_VALUE(queryName_, queryName) };


    // queryType Field Functions 
    bool hasQueryType() const { return this->queryType_ != nullptr;};
    void deleteQueryType() { this->queryType_ = nullptr;};
    inline string queryType() const { DARABONBA_PTR_GET_DEFAULT(queryType_, "") };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setQueryType(string queryType) { DARABONBA_PTR_SET_VALUE(queryType_, queryType) };


    // rt Field Functions 
    bool hasRt() const { return this->rt_ != nullptr;};
    void deleteRt() { this->rt_ = nullptr;};
    inline int32_t rt() const { DARABONBA_PTR_GET_DEFAULT(rt_, 0) };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setRt(int32_t rt) { DARABONBA_PTR_SET_VALUE(rt_, rt) };


    // serverIp Field Functions 
    bool hasServerIp() const { return this->serverIp_ != nullptr;};
    void deleteServerIp() { this->serverIp_ = nullptr;};
    inline string serverIp() const { DARABONBA_PTR_GET_DEFAULT(serverIp_, "") };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setServerIp(string serverIp) { DARABONBA_PTR_SET_VALUE(serverIp_, serverIp) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // subnetIp Field Functions 
    bool hasSubnetIp() const { return this->subnetIp_ != nullptr;};
    void deleteSubnetIp() { this->subnetIp_ = nullptr;};
    inline string subnetIp() const { DARABONBA_PTR_GET_DEFAULT(subnetIp_, "") };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setSubnetIp(string subnetIp) { DARABONBA_PTR_SET_VALUE(subnetIp_, subnetIp) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline const Models::DescribeInternetDnsLogsResponseBodyLogsLogValue & value() const { DARABONBA_PTR_GET_CONST(value_, Models::DescribeInternetDnsLogsResponseBodyLogsLogValue) };
    inline Models::DescribeInternetDnsLogsResponseBodyLogsLogValue value() { DARABONBA_PTR_GET(value_, Models::DescribeInternetDnsLogsResponseBodyLogsLogValue) };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setValue(const Models::DescribeInternetDnsLogsResponseBodyLogsLogValue & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setValue(Models::DescribeInternetDnsLogsResponseBodyLogsLogValue && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


    // zoneName Field Functions 
    bool hasZoneName() const { return this->zoneName_ != nullptr;};
    void deleteZoneName() { this->zoneName_ = nullptr;};
    inline string zoneName() const { DARABONBA_PTR_GET_DEFAULT(zoneName_, "") };
    inline DescribeInternetDnsLogsResponseBodyLogsLog& setZoneName(string zoneName) { DARABONBA_PTR_SET_VALUE(zoneName_, zoneName) };


  protected:
    // Parse log ID (can be duplicated).
    std::shared_ptr<string> dnsMsgId_ = nullptr;
    // Parse timestamp.
    std::shared_ptr<int64_t> logTime_ = nullptr;
    // The protocol type of the domain name resolution query request:
    // - UDP
    // - TCP
    // - HTTP
    // - HTTPS
    // - DOH
    std::shared_ptr<string> protocol_ = nullptr;
    // The domain name for which you want to query Domain Name System (DNS) records.
    std::shared_ptr<string> queryName_ = nullptr;
    // Record type.
    std::shared_ptr<string> queryType_ = nullptr;
    // Parse response time.
    std::shared_ptr<int32_t> rt_ = nullptr;
    // Parse server IP.
    std::shared_ptr<string> serverIp_ = nullptr;
    // Source IP address.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // Response status.
    std::shared_ptr<string> status_ = nullptr;
    // The value set for the edns-client-subnet option.
    std::shared_ptr<string> subnetIp_ = nullptr;
    // Array of parsing results.
    std::shared_ptr<Models::DescribeInternetDnsLogsResponseBodyLogsLogValue> value_ = nullptr;
    // The zone name.
    std::shared_ptr<string> zoneName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
