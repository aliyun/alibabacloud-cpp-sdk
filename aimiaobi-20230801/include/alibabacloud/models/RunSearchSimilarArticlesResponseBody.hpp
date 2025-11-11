// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_RUNSEARCHSIMILARARTICLESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/RunSearchSimilarArticlesResponseBodyHeader.hpp>
#include <alibabacloud/models/RunSearchSimilarArticlesResponseBodyPayload.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AiMiaoBi20230801
{
namespace Models
{
  class RunSearchSimilarArticlesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RunSearchSimilarArticlesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Header, header_);
      DARABONBA_PTR_TO_JSON(Payload, payload_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, RunSearchSimilarArticlesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Header, header_);
      DARABONBA_PTR_FROM_JSON(Payload, payload_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    RunSearchSimilarArticlesResponseBody() = default ;
    RunSearchSimilarArticlesResponseBody(const RunSearchSimilarArticlesResponseBody &) = default ;
    RunSearchSimilarArticlesResponseBody(RunSearchSimilarArticlesResponseBody &&) = default ;
    RunSearchSimilarArticlesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RunSearchSimilarArticlesResponseBody() = default ;
    RunSearchSimilarArticlesResponseBody& operator=(const RunSearchSimilarArticlesResponseBody &) = default ;
    RunSearchSimilarArticlesResponseBody& operator=(RunSearchSimilarArticlesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->header_ == nullptr
        && return this->payload_ == nullptr && return this->requestId_ == nullptr; };
    // header Field Functions 
    bool hasHeader() const { return this->header_ != nullptr;};
    void deleteHeader() { this->header_ = nullptr;};
    inline const RunSearchSimilarArticlesResponseBodyHeader & header() const { DARABONBA_PTR_GET_CONST(header_, RunSearchSimilarArticlesResponseBodyHeader) };
    inline RunSearchSimilarArticlesResponseBodyHeader header() { DARABONBA_PTR_GET(header_, RunSearchSimilarArticlesResponseBodyHeader) };
    inline RunSearchSimilarArticlesResponseBody& setHeader(const RunSearchSimilarArticlesResponseBodyHeader & header) { DARABONBA_PTR_SET_VALUE(header_, header) };
    inline RunSearchSimilarArticlesResponseBody& setHeader(RunSearchSimilarArticlesResponseBodyHeader && header) { DARABONBA_PTR_SET_RVALUE(header_, header) };


    // payload Field Functions 
    bool hasPayload() const { return this->payload_ != nullptr;};
    void deletePayload() { this->payload_ = nullptr;};
    inline const RunSearchSimilarArticlesResponseBodyPayload & payload() const { DARABONBA_PTR_GET_CONST(payload_, RunSearchSimilarArticlesResponseBodyPayload) };
    inline RunSearchSimilarArticlesResponseBodyPayload payload() { DARABONBA_PTR_GET(payload_, RunSearchSimilarArticlesResponseBodyPayload) };
    inline RunSearchSimilarArticlesResponseBody& setPayload(const RunSearchSimilarArticlesResponseBodyPayload & payload) { DARABONBA_PTR_SET_VALUE(payload_, payload) };
    inline RunSearchSimilarArticlesResponseBody& setPayload(RunSearchSimilarArticlesResponseBodyPayload && payload) { DARABONBA_PTR_SET_RVALUE(payload_, payload) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline RunSearchSimilarArticlesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<RunSearchSimilarArticlesResponseBodyHeader> header_ = nullptr;
    std::shared_ptr<RunSearchSimilarArticlesResponseBodyPayload> payload_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AiMiaoBi20230801
#endif
