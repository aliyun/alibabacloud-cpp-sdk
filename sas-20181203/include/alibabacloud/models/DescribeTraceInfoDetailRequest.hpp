// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETRACEINFODETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeTraceInfoDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeTraceInfoDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(From, from_);
      DARABONBA_PTR_TO_JSON(IncidentTime, incidentTime_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(Uuid, uuid_);
      DARABONBA_PTR_TO_JSON(VertexId, vertexId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeTraceInfoDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(From, from_);
      DARABONBA_PTR_FROM_JSON(IncidentTime, incidentTime_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(Uuid, uuid_);
      DARABONBA_PTR_FROM_JSON(VertexId, vertexId_);
    };
    DescribeTraceInfoDetailRequest() = default ;
    DescribeTraceInfoDetailRequest(const DescribeTraceInfoDetailRequest &) = default ;
    DescribeTraceInfoDetailRequest(DescribeTraceInfoDetailRequest &&) = default ;
    DescribeTraceInfoDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeTraceInfoDetailRequest() = default ;
    DescribeTraceInfoDetailRequest& operator=(const DescribeTraceInfoDetailRequest &) = default ;
    DescribeTraceInfoDetailRequest& operator=(DescribeTraceInfoDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->from_ != nullptr
        && this->incidentTime_ != nullptr && this->lang_ != nullptr && this->sourceIp_ != nullptr && this->type_ != nullptr && this->uuid_ != nullptr
        && this->vertexId_ != nullptr; };
    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline string from() const { DARABONBA_PTR_GET_DEFAULT(from_, "") };
    inline DescribeTraceInfoDetailRequest& setFrom(string from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // incidentTime Field Functions 
    bool hasIncidentTime() const { return this->incidentTime_ != nullptr;};
    void deleteIncidentTime() { this->incidentTime_ = nullptr;};
    inline int64_t incidentTime() const { DARABONBA_PTR_GET_DEFAULT(incidentTime_, 0L) };
    inline DescribeTraceInfoDetailRequest& setIncidentTime(int64_t incidentTime) { DARABONBA_PTR_SET_VALUE(incidentTime_, incidentTime) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeTraceInfoDetailRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string sourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeTraceInfoDetailRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeTraceInfoDetailRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // uuid Field Functions 
    bool hasUuid() const { return this->uuid_ != nullptr;};
    void deleteUuid() { this->uuid_ = nullptr;};
    inline string uuid() const { DARABONBA_PTR_GET_DEFAULT(uuid_, "") };
    inline DescribeTraceInfoDetailRequest& setUuid(string uuid) { DARABONBA_PTR_SET_VALUE(uuid_, uuid) };


    // vertexId Field Functions 
    bool hasVertexId() const { return this->vertexId_ != nullptr;};
    void deleteVertexId() { this->vertexId_ = nullptr;};
    inline string vertexId() const { DARABONBA_PTR_GET_DEFAULT(vertexId_, "") };
    inline DescribeTraceInfoDetailRequest& setVertexId(string vertexId) { DARABONBA_PTR_SET_VALUE(vertexId_, vertexId) };


  protected:
    // The ID of the request source. Set the value to **sas**.
    // 
    // This parameter is required.
    std::shared_ptr<string> from_ = nullptr;
    // The timestamp of the detection. Unit: milliseconds.
    std::shared_ptr<int64_t> incidentTime_ = nullptr;
    // The language of the content within the request and response. Valid values:
    // 
    // *   **zh**: Chinese
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The source IP address of the request. The value of this parameter is specified by the system.
    std::shared_ptr<string> sourceIp_ = nullptr;
    // The type of the vertex. Set the value to **SAS_INCIDENT**.
    // 
    // This parameter is required.
    std::shared_ptr<string> type_ = nullptr;
    // The UUID of the server.
    // 
    // This parameter is required.
    std::shared_ptr<string> uuid_ = nullptr;
    // The ID of the vertex. You can call the [DescribeSuspEvents](~~DescribeSuspEvents~~) operation to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<string> vertexId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
