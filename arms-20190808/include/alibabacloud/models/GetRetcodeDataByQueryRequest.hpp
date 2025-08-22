// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRETCODEDATABYQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRETCODEDATABYQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ARMS20190808
{
namespace Models
{
  class GetRetcodeDataByQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetRetcodeDataByQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(Pid, pid_);
      DARABONBA_PTR_TO_JSON(Query, query_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(To, to_);
    };
    friend void from_json(const Darabonba::Json& j, GetRetcodeDataByQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(Pid, pid_);
      DARABONBA_PTR_FROM_JSON(Query, query_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(To, to_);
    };
    GetRetcodeDataByQueryRequest() = default ;
    GetRetcodeDataByQueryRequest(const GetRetcodeDataByQueryRequest &) = default ;
    GetRetcodeDataByQueryRequest(GetRetcodeDataByQueryRequest &&) = default ;
    GetRetcodeDataByQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetRetcodeDataByQueryRequest() = default ;
    GetRetcodeDataByQueryRequest& operator=(const GetRetcodeDataByQueryRequest &) = default ;
    GetRetcodeDataByQueryRequest& operator=(GetRetcodeDataByQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->pid_ != nullptr && this->query_ != nullptr && this->regionId_ != nullptr && this->to_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int64_t from() const { DARABONBA_PTR_GET_DEFAULT(from_, 0L) };
    inline GetRetcodeDataByQueryRequest& setFrom(int64_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // pid Field Functions 
    bool hasPid() const { return this->pid_ != nullptr;};
    void deletePid() { this->pid_ = nullptr;};
    inline string pid() const { DARABONBA_PTR_GET_DEFAULT(pid_, "") };
    inline GetRetcodeDataByQueryRequest& setPid(string pid) { DARABONBA_PTR_SET_VALUE(pid_, pid) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string query() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline GetRetcodeDataByQueryRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline GetRetcodeDataByQueryRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int64_t to() const { DARABONBA_PTR_GET_DEFAULT(to_, 0L) };
    inline GetRetcodeDataByQueryRequest& setTo(int64_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


  protected:
    // The beginning of the time range to query. This value is a UNIX timestamp representing the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> from_ = nullptr;
    // The ID of the application.
    // 
    // Log on to the **ARMS console**. In the left-side navigation pane, choose **Browser Monitoring** > **Browser Monitoring**. On the Browser Monitoring page, click the name of an application. The URL in the address bar contains the process ID (PID) of the application. The PID is indicated in the pid=xxx format. The PID is usually percent encoded as xxx%40xxx. You must modify this value to remove the percent encoding. For example, if the PID in the URL is eb4zdose6v%409781be0f44d\\*\\*\\*\\*, you must replace %40 with an at sign (@) to obtain eb4zdose6v@9781be0f44d\\*\\*\\*\\*.
    // 
    // This parameter is required.
    std::shared_ptr<string> pid_ = nullptr;
    // The query statement that conforms to the query syntax of a Log Service Logstore.
    // 
    // This parameter is required.
    std::shared_ptr<string> query_ = nullptr;
    // The region ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> regionId_ = nullptr;
    // The end of the time range to query. This value is a UNIX timestamp representing the number of seconds that have elapsed since the epoch time January 1, 1970, 00:00:00 UTC.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> to_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ARMS20190808
#endif
