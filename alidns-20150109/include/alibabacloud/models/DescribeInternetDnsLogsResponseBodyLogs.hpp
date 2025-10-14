// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINTERNETDNSLOGSRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeInternetDnsLogsResponseBodyLogsLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeInternetDnsLogsResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInternetDnsLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Log, log_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInternetDnsLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Log, log_);
    };
    DescribeInternetDnsLogsResponseBodyLogs() = default ;
    DescribeInternetDnsLogsResponseBodyLogs(const DescribeInternetDnsLogsResponseBodyLogs &) = default ;
    DescribeInternetDnsLogsResponseBodyLogs(DescribeInternetDnsLogsResponseBodyLogs &&) = default ;
    DescribeInternetDnsLogsResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInternetDnsLogsResponseBodyLogs() = default ;
    DescribeInternetDnsLogsResponseBodyLogs& operator=(const DescribeInternetDnsLogsResponseBodyLogs &) = default ;
    DescribeInternetDnsLogsResponseBodyLogs& operator=(DescribeInternetDnsLogsResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->log_ == nullptr; };
    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const vector<Models::DescribeInternetDnsLogsResponseBodyLogsLog> & log() const { DARABONBA_PTR_GET_CONST(log_, vector<Models::DescribeInternetDnsLogsResponseBodyLogsLog>) };
    inline vector<Models::DescribeInternetDnsLogsResponseBodyLogsLog> log() { DARABONBA_PTR_GET(log_, vector<Models::DescribeInternetDnsLogsResponseBodyLogsLog>) };
    inline DescribeInternetDnsLogsResponseBodyLogs& setLog(const vector<Models::DescribeInternetDnsLogsResponseBodyLogsLog> & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline DescribeInternetDnsLogsResponseBodyLogs& setLog(vector<Models::DescribeInternetDnsLogsResponseBodyLogsLog> && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


  protected:
    std::shared_ptr<vector<Models::DescribeInternetDnsLogsResponseBodyLogsLog>> log_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
