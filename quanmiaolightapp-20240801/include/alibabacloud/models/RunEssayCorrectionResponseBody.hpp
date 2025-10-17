// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNESSAYCORRECTIONRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunEssayCorrectionResponseBodyHeader.hpp>
#include <alibabacloud/models/RunEssayCorrectionResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunEssayCorrectionResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunEssayCorrectionResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunEssayCorrectionResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RunEssayCorrectionResponseBody() = default ;
    RunEssayCorrectionResponseBody(const RunEssayCorrectionResponseBody &) = default ;
    RunEssayCorrectionResponseBody(RunEssayCorrectionResponseBody &&) = default ;
    RunEssayCorrectionResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunEssayCorrectionResponseBody() = default ;
    RunEssayCorrectionResponseBody& operator=(const RunEssayCorrectionResponseBody &) = default ;
    RunEssayCorrectionResponseBody& operator=(RunEssayCorrectionResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunEssayCorrectionResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunEssayCorrectionResponseBodyHeader) };
    inline RunEssayCorrectionResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunEssayCorrectionResponseBodyHeader) };
    inline RunEssayCorrectionResponseBody& setHeader(const RunEssayCorrectionResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunEssayCorrectionResponseBody& setHeader(RunEssayCorrectionResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunEssayCorrectionResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunEssayCorrectionResponseBodyPayload) };
    inline RunEssayCorrectionResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunEssayCorrectionResponseBodyPayload) };
    inline RunEssayCorrectionResponseBody& setPayload(const RunEssayCorrectionResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunEssayCorrectionResponseBody& setPayload(RunEssayCorrectionResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunEssayCorrectionResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunEssayCorrectionResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunEssayCorrectionResponseBodyPayload> payload_ = nullptr;
    // Id of the request
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
