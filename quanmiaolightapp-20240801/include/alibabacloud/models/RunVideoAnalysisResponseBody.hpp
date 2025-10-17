// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNVIDEOANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyHeader.hpp>
#include <alibabacloud/models/RunVideoAnalysisResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuanMiaoLightApp20240801
{
namespace Models
{
  class RunVideoAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunVideoAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(header, header_);
      DARABONBA_PTR_TO_JSON(payload, payload_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunVideoAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(header, header_);
      DARABONBA_PTR_FROM_JSON(payload, payload_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    RunVideoAnalysisResponseBody() = default ;
    RunVideoAnalysisResponseBody(const RunVideoAnalysisResponseBody &) = default ;
    RunVideoAnalysisResponseBody(RunVideoAnalysisResponseBody &&) = default ;
    RunVideoAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunVideoAnalysisResponseBody() = default ;
    RunVideoAnalysisResponseBody& operator=(const RunVideoAnalysisResponseBody &) = default ;
    RunVideoAnalysisResponseBody& operator=(RunVideoAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunVideoAnalysisResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunVideoAnalysisResponseBodyHeader) };
    inline RunVideoAnalysisResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunVideoAnalysisResponseBodyHeader) };
    inline RunVideoAnalysisResponseBody& setHeader(const RunVideoAnalysisResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunVideoAnalysisResponseBody& setHeader(RunVideoAnalysisResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunVideoAnalysisResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunVideoAnalysisResponseBodyPayload) };
    inline RunVideoAnalysisResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunVideoAnalysisResponseBodyPayload) };
    inline RunVideoAnalysisResponseBody& setPayload(const RunVideoAnalysisResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunVideoAnalysisResponseBody& setPayload(RunVideoAnalysisResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunVideoAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunVideoAnalysisResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunVideoAnalysisResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuanMiaoLightApp20240801
#endif
