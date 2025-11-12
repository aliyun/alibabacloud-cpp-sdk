// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSYSLOGSRESPONSEBODYLOGS_HPP_
#define ALIBABACLOUD_MODELS_LISTSYSLOGSRESPONSEBODYLOGS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EfloController20221215
{
namespace Models
{
  class ListSyslogsResponseBodyLogs : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListSyslogsResponseBodyLogs& obj) { 
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
    friend void from_json(const Darabonba::Json& j, ListSyslogsResponseBodyLogs& obj) { 
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
    ListSyslogsResponseBodyLogs() = default ;
    ListSyslogsResponseBodyLogs(const ListSyslogsResponseBodyLogs &) = default ;
    ListSyslogsResponseBodyLogs(ListSyslogsResponseBodyLogs &&) = default ;
    ListSyslogsResponseBodyLogs(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListSyslogsResponseBodyLogs() = default ;
    ListSyslogsResponseBodyLogs& operator=(const ListSyslogsResponseBodyLogs &) = default ;
    ListSyslogsResponseBodyLogs& operator=(ListSyslogsResponseBodyLogs &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && return this->domain_ == nullptr && return this->facility_ == nullptr && return this->hostname_ == nullptr && return this->ip_ == nullptr && return this->msg_ == nullptr
        && return this->nodeId_ == nullptr && return this->severity_ == nullptr && return this->sn_ == nullptr && return this->source_ == nullptr && return this->syslogtag_ == nullptr
        && return this->tagHostname_ == nullptr && return this->tagPackId_ == nullptr && return this->tagPath_ == nullptr && return this->tagReceiveTime_ == nullptr && return this->tagUserDefinedId_ == nullptr
        && return this->time_ == nullptr && return this->topic_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string clusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ListSyslogsResponseBodyLogs& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // domain Field Functions 
    bool hasDomain() const { return this->domain_ != nullptr;};
    void deleteDomain() { this->domain_ = nullptr;};
    inline string domain() const { DARABONBA_PTR_GET_DEFAULT(domain_, "") };
    inline ListSyslogsResponseBodyLogs& setDomain(string domain) { DARABONBA_PTR_SET_VALUE(domain_, domain) };


    // facility Field Functions 
    bool hasFacility() const { return this->facility_ != nullptr;};
    void deleteFacility() { this->facility_ = nullptr;};
    inline string facility() const { DARABONBA_PTR_GET_DEFAULT(facility_, "") };
    inline ListSyslogsResponseBodyLogs& setFacility(string facility) { DARABONBA_PTR_SET_VALUE(facility_, facility) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline ListSyslogsResponseBodyLogs& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline ListSyslogsResponseBodyLogs& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string msg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline ListSyslogsResponseBodyLogs& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // nodeId Field Functions 
    bool hasNodeId() const { return this->nodeId_ != nullptr;};
    void deleteNodeId() { this->nodeId_ = nullptr;};
    inline string nodeId() const { DARABONBA_PTR_GET_DEFAULT(nodeId_, "") };
    inline ListSyslogsResponseBodyLogs& setNodeId(string nodeId) { DARABONBA_PTR_SET_VALUE(nodeId_, nodeId) };


    // severity Field Functions 
    bool hasSeverity() const { return this->severity_ != nullptr;};
    void deleteSeverity() { this->severity_ = nullptr;};
    inline string severity() const { DARABONBA_PTR_GET_DEFAULT(severity_, "") };
    inline ListSyslogsResponseBodyLogs& setSeverity(string severity) { DARABONBA_PTR_SET_VALUE(severity_, severity) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline ListSyslogsResponseBodyLogs& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string source() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline ListSyslogsResponseBodyLogs& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // syslogtag Field Functions 
    bool hasSyslogtag() const { return this->syslogtag_ != nullptr;};
    void deleteSyslogtag() { this->syslogtag_ = nullptr;};
    inline string syslogtag() const { DARABONBA_PTR_GET_DEFAULT(syslogtag_, "") };
    inline ListSyslogsResponseBodyLogs& setSyslogtag(string syslogtag) { DARABONBA_PTR_SET_VALUE(syslogtag_, syslogtag) };


    // tagHostname Field Functions 
    bool hasTagHostname() const { return this->tagHostname_ != nullptr;};
    void deleteTagHostname() { this->tagHostname_ = nullptr;};
    inline string tagHostname() const { DARABONBA_PTR_GET_DEFAULT(tagHostname_, "") };
    inline ListSyslogsResponseBodyLogs& setTagHostname(string tagHostname) { DARABONBA_PTR_SET_VALUE(tagHostname_, tagHostname) };


    // tagPackId Field Functions 
    bool hasTagPackId() const { return this->tagPackId_ != nullptr;};
    void deleteTagPackId() { this->tagPackId_ = nullptr;};
    inline string tagPackId() const { DARABONBA_PTR_GET_DEFAULT(tagPackId_, "") };
    inline ListSyslogsResponseBodyLogs& setTagPackId(string tagPackId) { DARABONBA_PTR_SET_VALUE(tagPackId_, tagPackId) };


    // tagPath Field Functions 
    bool hasTagPath() const { return this->tagPath_ != nullptr;};
    void deleteTagPath() { this->tagPath_ = nullptr;};
    inline string tagPath() const { DARABONBA_PTR_GET_DEFAULT(tagPath_, "") };
    inline ListSyslogsResponseBodyLogs& setTagPath(string tagPath) { DARABONBA_PTR_SET_VALUE(tagPath_, tagPath) };


    // tagReceiveTime Field Functions 
    bool hasTagReceiveTime() const { return this->tagReceiveTime_ != nullptr;};
    void deleteTagReceiveTime() { this->tagReceiveTime_ = nullptr;};
    inline string tagReceiveTime() const { DARABONBA_PTR_GET_DEFAULT(tagReceiveTime_, "") };
    inline ListSyslogsResponseBodyLogs& setTagReceiveTime(string tagReceiveTime) { DARABONBA_PTR_SET_VALUE(tagReceiveTime_, tagReceiveTime) };


    // tagUserDefinedId Field Functions 
    bool hasTagUserDefinedId() const { return this->tagUserDefinedId_ != nullptr;};
    void deleteTagUserDefinedId() { this->tagUserDefinedId_ = nullptr;};
    inline string tagUserDefinedId() const { DARABONBA_PTR_GET_DEFAULT(tagUserDefinedId_, "") };
    inline ListSyslogsResponseBodyLogs& setTagUserDefinedId(string tagUserDefinedId) { DARABONBA_PTR_SET_VALUE(tagUserDefinedId_, tagUserDefinedId) };


    // time Field Functions 
    bool hasTime() const { return this->time_ != nullptr;};
    void deleteTime() { this->time_ = nullptr;};
    inline string time() const { DARABONBA_PTR_GET_DEFAULT(time_, "") };
    inline ListSyslogsResponseBodyLogs& setTime(string time) { DARABONBA_PTR_SET_VALUE(time_, time) };


    // topic Field Functions 
    bool hasTopic() const { return this->topic_ != nullptr;};
    void deleteTopic() { this->topic_ = nullptr;};
    inline string topic() const { DARABONBA_PTR_GET_DEFAULT(topic_, "") };
    inline ListSyslogsResponseBodyLogs& setTopic(string topic) { DARABONBA_PTR_SET_VALUE(topic_, topic) };


  protected:
    std::shared_ptr<string> clusterId_ = nullptr;
    std::shared_ptr<string> domain_ = nullptr;
    std::shared_ptr<string> facility_ = nullptr;
    std::shared_ptr<string> hostname_ = nullptr;
    std::shared_ptr<string> ip_ = nullptr;
    std::shared_ptr<string> msg_ = nullptr;
    std::shared_ptr<string> nodeId_ = nullptr;
    std::shared_ptr<string> severity_ = nullptr;
    std::shared_ptr<string> sn_ = nullptr;
    std::shared_ptr<string> source_ = nullptr;
    std::shared_ptr<string> syslogtag_ = nullptr;
    std::shared_ptr<string> tagHostname_ = nullptr;
    std::shared_ptr<string> tagPackId_ = nullptr;
    std::shared_ptr<string> tagPath_ = nullptr;
    std::shared_ptr<string> tagReceiveTime_ = nullptr;
    std::shared_ptr<string> tagUserDefinedId_ = nullptr;
    std::shared_ptr<string> time_ = nullptr;
    std::shared_ptr<string> topic_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EfloController20221215
#endif
