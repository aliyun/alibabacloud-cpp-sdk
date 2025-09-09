// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEGTMLOGSRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEGTMLOGSRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeGtmLogsResponseBodyLogsLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeGtmLogsResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeGtmLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Log, log_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeGtmLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Log, log_);
    };
    DescribeGtmLogsResponseBodyLogs() = default ;
    DescribeGtmLogsResponseBodyLogs(const DescribeGtmLogsResponseBodyLogs &) = default ;
    DescribeGtmLogsResponseBodyLogs(DescribeGtmLogsResponseBodyLogs &&) = default ;
    DescribeGtmLogsResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeGtmLogsResponseBodyLogs() = default ;
    DescribeGtmLogsResponseBodyLogs& operator=(const DescribeGtmLogsResponseBodyLogs &) = default ;
    DescribeGtmLogsResponseBodyLogs& operator=(DescribeGtmLogsResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->log_ != nullptr; };
    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const vector<Models::DescribeGtmLogsResponseBodyLogsLog> & log() const { DARABONBA_PTR_GET_CONST(log_, vector<Models::DescribeGtmLogsResponseBodyLogsLog>) };
    inline vector<Models::DescribeGtmLogsResponseBodyLogsLog> log() { DARABONBA_PTR_GET(log_, vector<Models::DescribeGtmLogsResponseBodyLogsLog>) };
    inline DescribeGtmLogsResponseBodyLogs& setLog(const vector<Models::DescribeGtmLogsResponseBodyLogsLog> & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline DescribeGtmLogsResponseBodyLogs& setLog(vector<Models::DescribeGtmLogsResponseBodyLogsLog> && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


  protected:
    std::shared_ptr<vector<Models::DescribeGtmLogsResponseBodyLogsLog>> log_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
