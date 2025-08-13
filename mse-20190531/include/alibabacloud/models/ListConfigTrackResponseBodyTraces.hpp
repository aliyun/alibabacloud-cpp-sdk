// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCONFIGTRACKRESPONSEBODYTRACES_HPP_
#define ALIBABACLOUD_MODELS_LISTCONFIGTRACKRESPONSEBODYTRACES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mse20190531
{
namespace Models
{
  class ListConfigTrackResponseBodyTraces : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListConfigTrackResponseBodyTraces& obj) { 
      DARABONBA_PTR_TO_JSON(Client, client_);
      DARABONBA_PTR_TO_JSON(DataId, dataId_);
      DARABONBA_PTR_TO_JSON(Delay, delay_);
      DARABONBA_PTR_TO_JSON(Event, event_);
      DARABONBA_PTR_TO_JSON(Group, group_);
      DARABONBA_PTR_TO_JSON(LogDate, logDate_);
      DARABONBA_PTR_TO_JSON(Md5, md5_);
      DARABONBA_PTR_TO_JSON(Push, push_);
      DARABONBA_PTR_TO_JSON(RequestIp, requestIp_);
      DARABONBA_PTR_TO_JSON(ResponseIp, responseIp_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Ts, ts_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, ListConfigTrackResponseBodyTraces& obj) { 
      DARABONBA_PTR_FROM_JSON(Client, client_);
      DARABONBA_PTR_FROM_JSON(DataId, dataId_);
      DARABONBA_PTR_FROM_JSON(Delay, delay_);
      DARABONBA_PTR_FROM_JSON(Event, event_);
      DARABONBA_PTR_FROM_JSON(Group, group_);
      DARABONBA_PTR_FROM_JSON(LogDate, logDate_);
      DARABONBA_PTR_FROM_JSON(Md5, md5_);
      DARABONBA_PTR_FROM_JSON(Push, push_);
      DARABONBA_PTR_FROM_JSON(RequestIp, requestIp_);
      DARABONBA_PTR_FROM_JSON(ResponseIp, responseIp_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Ts, ts_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    ListConfigTrackResponseBodyTraces() = default ;
    ListConfigTrackResponseBodyTraces(const ListConfigTrackResponseBodyTraces &) = default ;
    ListConfigTrackResponseBodyTraces(ListConfigTrackResponseBodyTraces &&) = default ;
    ListConfigTrackResponseBodyTraces(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListConfigTrackResponseBodyTraces() = default ;
    ListConfigTrackResponseBodyTraces& operator=(const ListConfigTrackResponseBodyTraces &) = default ;
    ListConfigTrackResponseBodyTraces& operator=(ListConfigTrackResponseBodyTraces &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->client_ != nullptr
        && this->dataId_ != nullptr && this->delay_ != nullptr && this->event_ != nullptr && this->group_ != nullptr && this->logDate_ != nullptr
        && this->md5_ != nullptr && this->push_ != nullptr && this->requestIp_ != nullptr && this->responseIp_ != nullptr && this->result_ != nullptr
        && this->ts_ != nullptr && this->type_ != nullptr; };
    // client Field Functions 
    bool hasClient() const { return this->client_ != nullptr;};
    void deleteClient() { this->client_ = nullptr;};
    inline bool client() const { DARABONBA_PTR_GET_DEFAULT(client_, false) };
    inline ListConfigTrackResponseBodyTraces& setClient(bool client) { DARABONBA_PTR_SET_VALUE(client_, client) };


    // dataId Field Functions 
    bool hasDataId() const { return this->dataId_ != nullptr;};
    void deleteDataId() { this->dataId_ = nullptr;};
    inline string dataId() const { DARABONBA_PTR_GET_DEFAULT(dataId_, "") };
    inline ListConfigTrackResponseBodyTraces& setDataId(string dataId) { DARABONBA_PTR_SET_VALUE(dataId_, dataId) };


    // delay Field Functions 
    bool hasDelay() const { return this->delay_ != nullptr;};
    void deleteDelay() { this->delay_ = nullptr;};
    inline string delay() const { DARABONBA_PTR_GET_DEFAULT(delay_, "") };
    inline ListConfigTrackResponseBodyTraces& setDelay(string delay) { DARABONBA_PTR_SET_VALUE(delay_, delay) };


    // event Field Functions 
    bool hasEvent() const { return this->event_ != nullptr;};
    void deleteEvent() { this->event_ = nullptr;};
    inline string event() const { DARABONBA_PTR_GET_DEFAULT(event_, "") };
    inline ListConfigTrackResponseBodyTraces& setEvent(string event) { DARABONBA_PTR_SET_VALUE(event_, event) };


    // group Field Functions 
    bool hasGroup() const { return this->group_ != nullptr;};
    void deleteGroup() { this->group_ = nullptr;};
    inline string group() const { DARABONBA_PTR_GET_DEFAULT(group_, "") };
    inline ListConfigTrackResponseBodyTraces& setGroup(string group) { DARABONBA_PTR_SET_VALUE(group_, group) };


    // logDate Field Functions 
    bool hasLogDate() const { return this->logDate_ != nullptr;};
    void deleteLogDate() { this->logDate_ = nullptr;};
    inline string logDate() const { DARABONBA_PTR_GET_DEFAULT(logDate_, "") };
    inline ListConfigTrackResponseBodyTraces& setLogDate(string logDate) { DARABONBA_PTR_SET_VALUE(logDate_, logDate) };


    // md5 Field Functions 
    bool hasMd5() const { return this->md5_ != nullptr;};
    void deleteMd5() { this->md5_ = nullptr;};
    inline string md5() const { DARABONBA_PTR_GET_DEFAULT(md5_, "") };
    inline ListConfigTrackResponseBodyTraces& setMd5(string md5) { DARABONBA_PTR_SET_VALUE(md5_, md5) };


    // push Field Functions 
    bool hasPush() const { return this->push_ != nullptr;};
    void deletePush() { this->push_ = nullptr;};
    inline bool push() const { DARABONBA_PTR_GET_DEFAULT(push_, false) };
    inline ListConfigTrackResponseBodyTraces& setPush(bool push) { DARABONBA_PTR_SET_VALUE(push_, push) };


    // requestIp Field Functions 
    bool hasRequestIp() const { return this->requestIp_ != nullptr;};
    void deleteRequestIp() { this->requestIp_ = nullptr;};
    inline string requestIp() const { DARABONBA_PTR_GET_DEFAULT(requestIp_, "") };
    inline ListConfigTrackResponseBodyTraces& setRequestIp(string requestIp) { DARABONBA_PTR_SET_VALUE(requestIp_, requestIp) };


    // responseIp Field Functions 
    bool hasResponseIp() const { return this->responseIp_ != nullptr;};
    void deleteResponseIp() { this->responseIp_ = nullptr;};
    inline string responseIp() const { DARABONBA_PTR_GET_DEFAULT(responseIp_, "") };
    inline ListConfigTrackResponseBodyTraces& setResponseIp(string responseIp) { DARABONBA_PTR_SET_VALUE(responseIp_, responseIp) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline string result() const { DARABONBA_PTR_GET_DEFAULT(result_, "") };
    inline ListConfigTrackResponseBodyTraces& setResult(string result) { DARABONBA_PTR_SET_VALUE(result_, result) };


    // ts Field Functions 
    bool hasTs() const { return this->ts_ != nullptr;};
    void deleteTs() { this->ts_ = nullptr;};
    inline string ts() const { DARABONBA_PTR_GET_DEFAULT(ts_, "") };
    inline ListConfigTrackResponseBodyTraces& setTs(string ts) { DARABONBA_PTR_SET_VALUE(ts_, ts) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ListConfigTrackResponseBodyTraces& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // Indicates whether the request is sent from the client. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> client_ = nullptr;
    // The ID of the configuration.
    std::shared_ptr<string> dataId_ = nullptr;
    // The response latency. Unit: milliseconds.
    std::shared_ptr<string> delay_ = nullptr;
    // The event. Valid values:
    // 
    // *   pull: configuration acquisition events
    // *   persist: persistence events
    std::shared_ptr<string> event_ = nullptr;
    // The name of the configuration group.
    std::shared_ptr<string> group_ = nullptr;
    // The logging time.
    std::shared_ptr<string> logDate_ = nullptr;
    // The MD5 value.
    std::shared_ptr<string> md5_ = nullptr;
    // Indicates whether messages are pushed by a server. Valid values:
    // 
    // *   true
    // *   false
    std::shared_ptr<bool> push_ = nullptr;
    // The source IP address of the request.
    std::shared_ptr<string> requestIp_ = nullptr;
    // The response node.
    std::shared_ptr<string> responseIp_ = nullptr;
    // The result.
    std::shared_ptr<string> result_ = nullptr;
    // The timestamp that indicates the time when the metric value is collected.
    // 
    // Unit: seconds.
    std::shared_ptr<string> ts_ = nullptr;
    // The release type. Valid values:
    // 
    // *   beta: beta release
    // *   tag: canary release
    // *   batch: batch release
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mse20190531
#endif
