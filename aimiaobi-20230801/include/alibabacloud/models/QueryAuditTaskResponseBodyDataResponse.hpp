// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYAUDITTASKRESPONSEBODYDATARESPONSE_HPP_
#define ALIBABACLOUD_MODELS_QUERYAUDITTASKRESPONSEBODYDATARESPONSE_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryAuditTaskResponseBodyDataResponseHeader.hpp>
#include <alibabacloud/models/QueryAuditTaskResponseBodyDataResponsePayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class QueryAuditTaskResponseBodyDataResponse : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryAuditTaskResponseBodyDataResponse& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
    };
    friend void from_json(const Darabonba::Json& j, QueryAuditTaskResponseBodyDataResponse& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
    };
    QueryAuditTaskResponseBodyDataResponse() = default ;
    QueryAuditTaskResponseBodyDataResponse(const QueryAuditTaskResponseBodyDataResponse &) = default ;
    QueryAuditTaskResponseBodyDataResponse(QueryAuditTaskResponseBodyDataResponse &&) = default ;
    QueryAuditTaskResponseBodyDataResponse(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryAuditTaskResponseBodyDataResponse() = default ;
    QueryAuditTaskResponseBodyDataResponse& operator=(const QueryAuditTaskResponseBodyDataResponse &) = default ;
    QueryAuditTaskResponseBodyDataResponse& operator=(QueryAuditTaskResponseBodyDataResponse &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const Models::QueryAuditTaskResponseBodyDataResponseHeader & header() const { DARABONBA_PTR_GET_CONST(header_, Models::QueryAuditTaskResponseBodyDataResponseHeader) };
    inline Models::QueryAuditTaskResponseBodyDataResponseHeader header() { DARABONBA_PTR_GET(header_, Models::QueryAuditTaskResponseBodyDataResponseHeader) };
    inline QueryAuditTaskResponseBodyDataResponse& setHeader(const Models::QueryAuditTaskResponseBodyDataResponseHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline QueryAuditTaskResponseBodyDataResponse& setHeader(Models::QueryAuditTaskResponseBodyDataResponseHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const Models::QueryAuditTaskResponseBodyDataResponsePayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, Models::QueryAuditTaskResponseBodyDataResponsePayload) };
    inline Models::QueryAuditTaskResponseBodyDataResponsePayload payload() { DARABONBA_PTR_GET(payload_, Models::QueryAuditTaskResponseBodyDataResponsePayload) };
    inline QueryAuditTaskResponseBodyDataResponse& setPayload(const Models::QueryAuditTaskResponseBodyDataResponsePayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline QueryAuditTaskResponseBodyDataResponse& setPayload(Models::QueryAuditTaskResponseBodyDataResponsePayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


  protected:
    std::shared_ptr<Models::QueryAuditTaskResponseBodyDataResponseHeader> header_ = nullptr;
    std::shared_ptr<Models::QueryAuditTaskResponseBodyDataResponsePayload> payload_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
