// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSTYLEFEATUREANALYSISRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSTYLEFEATUREANALYSISRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunStyleFeatureAnalysisResponseBodyHeader.hpp>
#include <alibabacloud/models/RunStyleFeatureAnalysisResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunStyleFeatureAnalysisResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunStyleFeatureAnalysisResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(End, end_);
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunStyleFeatureAnalysisResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(End, end_);
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunStyleFeatureAnalysisResponseBody() = default ;
    RunStyleFeatureAnalysisResponseBody(const RunStyleFeatureAnalysisResponseBody &) = default ;
    RunStyleFeatureAnalysisResponseBody(RunStyleFeatureAnalysisResponseBody &&) = default ;
    RunStyleFeatureAnalysisResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunStyleFeatureAnalysisResponseBody() = default ;
    RunStyleFeatureAnalysisResponseBody& operator=(const RunStyleFeatureAnalysisResponseBody &) = default ;
    RunStyleFeatureAnalysisResponseBody& operator=(RunStyleFeatureAnalysisResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->end_ == nullptr
        && return this->header_ == nullptr && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // end Field Functions 
    bool hasEnd() const { return this->end_ != nullptr;};
    void deleteEnd() { this->end_ = nullptr;};
    inline bool end() const { DARABONBA_PTR_GET_DEFAULT(end_, false) };
    inline RunStyleFeatureAnalysisResponseBody& setEnd(bool end) { DARABONBA_PTR_SET_VALUE(end_, end) };


    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunStyleFeatureAnalysisResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunStyleFeatureAnalysisResponseBodyHeader) };
    inline RunStyleFeatureAnalysisResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunStyleFeatureAnalysisResponseBodyHeader) };
    inline RunStyleFeatureAnalysisResponseBody& setHeader(const RunStyleFeatureAnalysisResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunStyleFeatureAnalysisResponseBody& setHeader(RunStyleFeatureAnalysisResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunStyleFeatureAnalysisResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunStyleFeatureAnalysisResponseBodyPayload) };
    inline RunStyleFeatureAnalysisResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunStyleFeatureAnalysisResponseBodyPayload) };
    inline RunStyleFeatureAnalysisResponseBody& setPayload(const RunStyleFeatureAnalysisResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunStyleFeatureAnalysisResponseBody& setPayload(RunStyleFeatureAnalysisResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunStyleFeatureAnalysisResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> end_ = nullptr;
    std::shared_ptr<RunStyleFeatureAnalysisResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunStyleFeatureAnalysisResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
