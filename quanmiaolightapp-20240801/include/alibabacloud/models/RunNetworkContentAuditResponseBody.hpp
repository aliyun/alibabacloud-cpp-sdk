// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNNETWORKCONTENTAUDITRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNNETWORKCONTENTAUDITRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunNetworkContentAuditResponseBodyHeader.hpp>
#include <alibabacloud/models/RunNetworkContentAuditResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunNetworkContentAuditResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunNetworkContentAuditResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunNetworkContentAuditResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RunNetworkContentAuditResponseBody() = default ;
    RunNetworkContentAuditResponseBody(const RunNetworkContentAuditResponseBody &) = default ;
    RunNetworkContentAuditResponseBody(RunNetworkContentAuditResponseBody &&) = default ;
    RunNetworkContentAuditResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunNetworkContentAuditResponseBody() = default ;
    RunNetworkContentAuditResponseBody& operator=(const RunNetworkContentAuditResponseBody &) = default ;
    RunNetworkContentAuditResponseBody& operator=(RunNetworkContentAuditResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunNetworkContentAuditResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunNetworkContentAuditResponseBodyHeader) };
    inline RunNetworkContentAuditResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunNetworkContentAuditResponseBodyHeader) };
    inline RunNetworkContentAuditResponseBody& setHeader(const RunNetworkContentAuditResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunNetworkContentAuditResponseBody& setHeader(RunNetworkContentAuditResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunNetworkContentAuditResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunNetworkContentAuditResponseBodyPayload) };
    inline RunNetworkContentAuditResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunNetworkContentAuditResponseBodyPayload) };
    inline RunNetworkContentAuditResponseBody& setPayload(const RunNetworkContentAuditResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunNetworkContentAuditResponseBody& setPayload(RunNetworkContentAuditResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunNetworkContentAuditResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunNetworkContentAuditResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunNetworkContentAuditResponseBodyPayload> payload_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
