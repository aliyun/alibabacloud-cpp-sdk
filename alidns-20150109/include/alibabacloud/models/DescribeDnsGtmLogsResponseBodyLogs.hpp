// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDNSGTMLOGSRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDNSGTMLOGSRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDnsGtmLogsResponseBodyLogsLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeDnsGtmLogsResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDnsGtmLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Log, log_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDnsGtmLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Log, log_);
    };
    DescribeDnsGtmLogsResponseBodyLogs() = default ;
    DescribeDnsGtmLogsResponseBodyLogs(const DescribeDnsGtmLogsResponseBodyLogs &) = default ;
    DescribeDnsGtmLogsResponseBodyLogs(DescribeDnsGtmLogsResponseBodyLogs &&) = default ;
    DescribeDnsGtmLogsResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDnsGtmLogsResponseBodyLogs() = default ;
    DescribeDnsGtmLogsResponseBodyLogs& operator=(const DescribeDnsGtmLogsResponseBodyLogs &) = default ;
    DescribeDnsGtmLogsResponseBodyLogs& operator=(DescribeDnsGtmLogsResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->log_ == nullptr; };
    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const vector<Models::DescribeDnsGtmLogsResponseBodyLogsLog> & log() const { DARABONBA_PTR_GET_CONST(log_, vector<Models::DescribeDnsGtmLogsResponseBodyLogsLog>) };
    inline vector<Models::DescribeDnsGtmLogsResponseBodyLogsLog> log() { DARABONBA_PTR_GET(log_, vector<Models::DescribeDnsGtmLogsResponseBodyLogsLog>) };
    inline DescribeDnsGtmLogsResponseBodyLogs& setLog(const vector<Models::DescribeDnsGtmLogsResponseBodyLogsLog> & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline DescribeDnsGtmLogsResponseBodyLogs& setLog(vector<Models::DescribeDnsGtmLogsResponseBodyLogsLog> && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


  protected:
    std::shared_ptr<vector<Models::DescribeDnsGtmLogsResponseBodyLogsLog>> log_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
