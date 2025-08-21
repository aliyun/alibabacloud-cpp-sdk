// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPIPELINERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePipelineResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class DescribePipelineResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePipelineResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePipelineResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribePipelineResponseBody() = default ;
    DescribePipelineResponseBody(const DescribePipelineResponseBody &) = default ;
    DescribePipelineResponseBody(DescribePipelineResponseBody &&) = default ;
    DescribePipelineResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePipelineResponseBody() = default ;
    DescribePipelineResponseBody& operator=(const DescribePipelineResponseBody &) = default ;
    DescribePipelineResponseBody& operator=(DescribePipelineResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->result_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePipelineResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribePipelineResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, DescribePipelineResponseBodyResult) };
    inline DescribePipelineResponseBodyResult result() { DARABONBA_PTR_GET(result_, DescribePipelineResponseBodyResult) };
    inline DescribePipelineResponseBody& setResult(const DescribePipelineResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribePipelineResponseBody& setResult(DescribePipelineResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The time when the pipeline was updated.
    std::shared_ptr<string> requestId_ = nullptr;
    // The type of the queue. Valid values:
    // 
    // *   MEMORY: a traditional memory-based queue.
    // *   PERSISTED: disk-based ACKed queue (persistent queue).
    std::shared_ptr<DescribePipelineResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
