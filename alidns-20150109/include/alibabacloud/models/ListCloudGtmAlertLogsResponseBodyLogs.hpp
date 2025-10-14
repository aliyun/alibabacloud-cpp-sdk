// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMALERTLOGSRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMALERTLOGSRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmAlertLogsResponseBodyLogsLog.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAlertLogsResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAlertLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_TO_JSON(Log, log_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAlertLogsResponseBodyLogs& obj) { 
      DARABONBA_PTR_FROM_JSON(Log, log_);
    };
    ListCloudGtmAlertLogsResponseBodyLogs() = default ;
    ListCloudGtmAlertLogsResponseBodyLogs(const ListCloudGtmAlertLogsResponseBodyLogs &) = default ;
    ListCloudGtmAlertLogsResponseBodyLogs(ListCloudGtmAlertLogsResponseBodyLogs &&) = default ;
    ListCloudGtmAlertLogsResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAlertLogsResponseBodyLogs() = default ;
    ListCloudGtmAlertLogsResponseBodyLogs& operator=(const ListCloudGtmAlertLogsResponseBodyLogs &) = default ;
    ListCloudGtmAlertLogsResponseBodyLogs& operator=(ListCloudGtmAlertLogsResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->log_ == nullptr; };
    // log Field Functions 
    bool hasLog() const { return this->log_ != nullptr;};
    void deleteLog() { this->log_ = nullptr;};
    inline const vector<Models::ListCloudGtmAlertLogsResponseBodyLogsLog> & log() const { DARABONBA_PTR_GET_CONST(log_, vector<Models::ListCloudGtmAlertLogsResponseBodyLogsLog>) };
    inline vector<Models::ListCloudGtmAlertLogsResponseBodyLogsLog> log() { DARABONBA_PTR_GET(log_, vector<Models::ListCloudGtmAlertLogsResponseBodyLogsLog>) };
    inline ListCloudGtmAlertLogsResponseBodyLogs& setLog(const vector<Models::ListCloudGtmAlertLogsResponseBodyLogsLog> & log) { DARABONBA_PTR_SET_VALUE(log_, log) };
    inline ListCloudGtmAlertLogsResponseBodyLogs& setLog(vector<Models::ListCloudGtmAlertLogsResponseBodyLogsLog> && log) { DARABONBA_PTR_SET_RVALUE(log_, log) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmAlertLogsResponseBodyLogsLog>> log_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
