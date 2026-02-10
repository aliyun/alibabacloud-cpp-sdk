// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFONODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFONODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoNodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoNodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(EventName, eventName_);
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(IncidentTime, incidentTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VertexId, vertexId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoNodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(EventName, eventName_);
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(IncidentTime, incidentTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VertexId, vertexId_);
    };
    DescribeTraceInfoNodeRequest() = default ;
    DescribeTraceInfoNodeRequest(const DescribeTraceInfoNodeRequest &) = default ;
    DescribeTraceInfoNodeRequest(DescribeTraceInfoNodeRequest &&) = default ;
    DescribeTraceInfoNodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoNodeRequest() = default ;
    DescribeTraceInfoNodeRequest& operator=(const DescribeTraceInfoNodeRequest &) = default ;
    DescribeTraceInfoNodeRequest& operator=(DescribeTraceInfoNodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eventName_ == nullptr
        && this->from_ == nullptr && this->incidentTime_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr && this->type_ == nullptr
        && this->uuid_ == nullptr && this->vertexId_ == nullptr; };
    // eventName Field Functions 
    bool hasEventName() const { return this->eventName_ != nullptr;};
    void deleteEventName() { this->eventName_ = nullptr;};
    inline string getEventName() const { DARABONBA_PTR_GET_DEFAULT(eventName_, "") };
    inline DescribeTraceInfoNodeRequest& setEventName(string eventName) { DARABONBA_PTR_SET_VALUE(eventName_, eventName) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeTraceInfoNodeRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // incidentTime Field Functions 
    bool hasIncidentTime() const { return this->incidentTime_ != nullptr;};
    void deleteIncidentTime() { this->incidentTime_ = nullptr;};
    inline int64_t getIncidentTime() const { DARABONBA_PTR_GET_DEFAULT(incidentTime_, 0L) };
    inline DescribeTraceInfoNodeRequest& setIncidentTime(int64_t incidentTime) { DARABONBA_PTR_SET_VALUE(incidentTime_, incidentTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTraceInfoNodeRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeTraceInfoNodeRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTraceInfoNodeRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string getUuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeTraceInfoNodeRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vertexId Field Functions 
    bool hasVertexId() const { return this->vertexId_ != nullptr;};
    void deleteVertexId() { this->vertexId_ = nullptr;};
    inline string getVertexId() const { DARABONBA_PTR_GET_DEFAULT(vertexId_, "") };
    inline DescribeTraceInfoNodeRequest& setVertexId(string vertexId) { DARABONBA_PTR_SET_VALUE(vertexId_, vertexId) };


  protected:
    // The name of the alert event.
    // 
    // > You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to query the names of alerts events.
    shared_ptr<string> eventName_ {};
    // The ID of the request source. Set the value to sas.
    // 
    // This parameter is required.
    shared_ptr<string> from_ {};
    // The time when the alert event was first detected.
    shared_ptr<int64_t> incidentTime_ {};
    // The language of the content within the request and response. Default value: **zh**. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The source IP address of the request. The value of this parameter is specified by the system.
    shared_ptr<string> sourceIp_ {};
    // The type of the vertex. You can call the [DescribeTraceInfoDetail](~~DescribeTraceInfoDetail~~) operation to query the types of vertexes.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The UUID of the server. You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to query the UUIDs of servers.
    // 
    // This parameter is required.
    shared_ptr<string> uuid_ {};
    // The ID of the vertex.
    // 
    // This parameter is required.
    shared_ptr<string> vertexId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
