// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSLOGSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSLOGSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListSyslogsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSyslogsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Logs, logs_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListSyslogsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Logs, logs_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListSyslogsResponseBody() = default ;
    ListSyslogsResponseBody(const ListSyslogsResponseBody &) = default ;
    ListSyslogsResponseBody(ListSyslogsResponseBody &&) = default ;
    ListSyslogsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSyslogsResponseBody() = default ;
    ListSyslogsResponseBody& operator=(const ListSyslogsResponseBody &) = default ;
    ListSyslogsResponseBody& operator=(ListSyslogsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Logs : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Logs& obj) { 
        DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_TO_JSON(Domain, domain_);
        DARABONBA_PTR_TO_JSON(Facility, facility_);
        DARABONBA_PTR_TO_JSON(Hostname, hostname_);
        DARABONBA_PTR_TO_JSON(Ip, ip_);
        DARABONBA_PTR_TO_JSON(Msg, msg_);
        DARABONBA_PTR_TO_JSON(NodeId, nodeId_);
        DARABONBA_PTR_TO_JSON(Severity, severity_);
        DARABONBA_PTR_TO_JSON(Sn, sn_);
        DARABONBA_PTR_TO_JSON(Source, source_);
        DARABONBA_PTR_TO_JSON(Syslogtag, syslogtag_);
        DARABONBA_PTR_TO_JSON(TagHostname, tagHostname_);
        DARABONBA_PTR_TO_JSON(TagPackId, tagPackId_);
        DARABONBA_PTR_TO_JSON(TagPath, tagPath_);
        DARABONBA_PTR_TO_JSON(TagReceiveTime, tagReceiveTime_);
        DARABONBA_PTR_TO_JSON(TagUserDefinedId, tagUserDefinedId_);
        DARABONBA_PTR_TO_JSON(Time, time_);
        DARABONBA_PTR_TO_JSON(Topic, topic_);
      };
      friend void from_json(const Darabonba::Json& j, Logs& obj) { 
        DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
        DARABONBA_PTR_FROM_JSON(Domain, domain_);
        DARABONBA_PTR_FROM_JSON(Facility, facility_);
        DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
        DARABONBA_PTR_FROM_JSON(Ip, ip_);
        DARABONBA_PTR_FROM_JSON(Msg, msg_);
        DARABONBA_PTR_FROM_JSON(NodeId, nodeId_);
        DARABONBA_PTR_FROM_JSON(Severity, severity_);
        DARABONBA_PTR_FROM_JSON(Sn, sn_);
        DARABONBA_PTR_FROM_JSON(Source, source_);
        DARABONBA_PTR_FROM_JSON(Syslogtag, syslogtag_);
        DARABONBA_PTR_FROM_JSON(TagHostname, tagHostname_);
        DARABONBA_PTR_FROM_JSON(TagPackId, tagPackId_);
        DARABONBA_PTR_FROM_JSON(TagPath, tagPath_);
        DARABONBA_PTR_FROM_JSON(TagReceiveTime, tagReceiveTime_);
        DARABONBA_PTR_FROM_JSON(TagUserDefinedId, tagUserDefinedId_);
        DARABONBA_PTR_FROM_JSON(Time, time_);
        DARABONBA_PTR_FROM_JSON(Topic, topic_);
      };
      Logs() = default ;
      Logs(const Logs &) = default ;
      Logs(Logs &&) = default ;
      Logs(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Logs() = default ;
      Logs& operator=(const Logs &) = default ;
      Logs& operator=(Logs &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->domain_ == nullptr && this->facility_ == nullptr && this->hostname_ == nullptr && this->ip_ == nullptr && this->msg_ == nullptr
        && this->nodeId_ == nullptr && this->severity_ == nullptr && this->sn_ == nullptr && this->source_ == nullptr && this->syslogtag_ == nullptr
        && this->tagHostname_ == nullptr && this->tagPackId_ == nullptr && this->tagPath_ == nullptr && this->tagReceiveTime_ == nullptr && this->tagUserDefinedId_ == nullptr
        && this->time_ == nullptr && this->topic_ == nullptr; };
      // clusterId Field Functions 
      bool hasClusterId() const { return this->clusterId_ != nullptr;};
      void deleteClusterId() { this->clusterId_ = nullptr;};
      inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
      inline Logs& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


      // domain Field Functions 
      bool hasDomain() const { return this->domain_ != nullptr;};
      void deleteDomain() { this->domain_ = nullptr;};
      inline string getDomain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
      inline Logs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


      // facility Field Functions 
      bool hasFacility() const { return this->facility_ != nullptr;};
      void deleteFacility() { this->facility_ = nullptr;};
      inline string getFacility() const { DARABONBA_PTR_GET_DEFAULT(facility_, "") };
      inline Logs& setFacility(string facility) { DARABONBA_PTR_SET_VALUE(facility_, facility) };


      // hostname Field Functions 
      bool hasHostname() const { return this->hostname_ != nullptr;};
      void deleteHostname() { this->hostname_ = nullptr;};
      inline string getHostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
      inline Logs& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


      // ip Field Functions 
      bool hasIp() const { return this->ip_ != nullptr;};
      void deleteIp() { this->ip_ = nullptr;};
      inline string getIp() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
      inline Logs& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


      // msg Field Functions 
      bool hasMsg() const { return this->msg_ != nullptr;};
      void deleteMsg() { this->msg_ = nullptr;};
      inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
      inline Logs& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


      // nodeId Field Functions 
      bool hasNodeId() const { return this->nodeId_ != nullptr;};
      void deleteNodeId() { this->nodeId_ = nullptr;};
      inline string getNodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
      inline Logs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


      // severity Field Functions 
      bool hasSeverity() const { return this->severity_ != nullptr;};
      void deleteSeverity() { this->severity_ = nullptr;};
      inline string getSeverity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
      inline Logs& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


      // sn Field Functions 
      bool hasSn() const { return this->sn_ != nullptr;};
      void deleteSn() { this->sn_ = nullptr;};
      inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
      inline Logs& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


      // source Field Functions 
      bool hasSource() const { return this->source_ != nullptr;};
      void deleteSource() { this->source_ = nullptr;};
      inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
      inline Logs& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


      // syslogtag Field Functions 
      bool hasSyslogtag() const { return this->syslogtag_ != nullptr;};
      void deleteSyslogtag() { this->syslogtag_ = nullptr;};
      inline string getSyslogtag() const { DARABONBA_PTR_GET_DEFAULT(syslogtag_, "") };
      inline Logs& setSyslogtag(string syslogtag) { DARABONBA_PTR_SET_VALUE(syslogtag_, syslogtag) };


      // tagHostname Field Functions 
      bool hasTagHostname() const { return this->tagHostname_ != nullptr;};
      void deleteTagHostname() { this->tagHostname_ = nullptr;};
      inline string getTagHostname() const { DARABONBA_PTR_GET_DEFAULT(tagHostname_, "") };
      inline Logs& setTagHostname(string tagHostname) { DARABONBA_PTR_SET_VALUE(tagHostname_, tagHostname) };


      // tagPackId Field Functions 
      bool hasTagPackId() const { return this->tagPackId_ != nullptr;};
      void deleteTagPackId() { this->tagPackId_ = nullptr;};
      inline string getTagPackId() const { DARABONBA_PTR_GET_DEFAULT(tagPackId_, "") };
      inline Logs& setTagPackId(string tagPackId) { DARABONBA_PTR_SET_VALUE(tagPackId_, tagPackId) };


      // tagPath Field Functions 
      bool hasTagPath() const { return this->tagPath_ != nullptr;};
      void deleteTagPath() { this->tagPath_ = nullptr;};
      inline string getTagPath() const { DARABONBA_PTR_GET_DEFAULT(tagPath_, "") };
      inline Logs& setTagPath(string tagPath) { DARABONBA_PTR_SET_VALUE(tagPath_, tagPath) };


      // tagReceiveTime Field Functions 
      bool hasTagReceiveTime() const { return this->tagReceiveTime_ != nullptr;};
      void deleteTagReceiveTime() { this->tagReceiveTime_ = nullptr;};
      inline string getTagReceiveTime() const { DARABONBA_PTR_GET_DEFAULT(tagReceiveTime_, "") };
      inline Logs& setTagReceiveTime(string tagReceiveTime) { DARABONBA_PTR_SET_VALUE(tagReceiveTime_, tagReceiveTime) };


      // tagUserDefinedId Field Functions 
      bool hasTagUserDefinedId() const { return this->tagUserDefinedId_ != nullptr;};
      void deleteTagUserDefinedId() { this->tagUserDefinedId_ = nullptr;};
      inline string getTagUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(tagUserDefinedId_, "") };
      inline Logs& setTagUserDefinedId(string tagUserDefinedId) { DARABONBA_PTR_SET_VALUE(tagUserDefinedId_, tagUserDefinedId) };


      // time Field Functions 
      bool hasTime() const { return this->time_ != nullptr;};
      void deleteTime() { this->time_ = nullptr;};
      inline string getTime() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
      inline Logs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


      // topic Field Functions 
      bool hasTopic() const { return this->topic_ != nullptr;};
      void deleteTopic() { this->topic_ = nullptr;};
      inline string getTopic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
      inline Logs& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


    protected:
      shared_ptr<string> clusterId_ {};
      shared_ptr<string> domain_ {};
      shared_ptr<string> facility_ {};
      shared_ptr<string> hostname_ {};
      shared_ptr<string> ip_ {};
      shared_ptr<string> msg_ {};
      shared_ptr<string> nodeId_ {};
      shared_ptr<string> severity_ {};
      shared_ptr<string> sn_ {};
      shared_ptr<string> source_ {};
      shared_ptr<string> syslogtag_ {};
      shared_ptr<string> tagHostname_ {};
      shared_ptr<string> tagPackId_ {};
      shared_ptr<string> tagPath_ {};
      shared_ptr<string> tagReceiveTime_ {};
      shared_ptr<string> tagUserDefinedId_ {};
      shared_ptr<string> time_ {};
      shared_ptr<string> topic_ {};
    };

    virtual bool empty() const override { return this->logs_ == nullptr
        && this->nextToken_ == nullptr && this->requestId_ == nullptr; };
    // logs Field Functions 
    bool hasLogs() const { return this->logs_ != nullptr;};
    void deleteLogs() { this->logs_ = nullptr;};
    inline const vector<ListSyslogsResponseBody::Logs> & getLogs() const { DARABONBA_PTR_GET_CONST(logs_, vector<ListSyslogsResponseBody::Logs>) };
    inline vector<ListSyslogsResponseBody::Logs> getLogs() { DARABONBA_PTR_GET(logs_, vector<ListSyslogsResponseBody::Logs>) };
    inline ListSyslogsResponseBody& setLogs(const vector<ListSyslogsResponseBody::Logs> & logs) { DARABONBA_PTR_SET_VALUE(logs_, logs) };
    inline ListSyslogsResponseBody& setLogs(vector<ListSyslogsResponseBody::Logs> && logs) { DARABONBA_PTR_SET_RVALUE(logs_, logs) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListSyslogsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListSyslogsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<ListSyslogsResponseBody::Logs>> logs_ {};
    shared_ptr<string> nextToken_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
