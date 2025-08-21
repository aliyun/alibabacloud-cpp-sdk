// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BATCHFORBIDVSSTREAMRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_BATCHFORBIDVSSTREAMRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/BatchForbidVsStreamResponseBodyForbidResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class BatchForbidVsStreamResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BatchForbidVsStreamResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ForbidResult, forbidResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, BatchForbidVsStreamResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ForbidResult, forbidResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    BatchForbidVsStreamResponseBody() = default ;
    BatchForbidVsStreamResponseBody(const BatchForbidVsStreamResponseBody &) = default ;
    BatchForbidVsStreamResponseBody(BatchForbidVsStreamResponseBody &&) = default ;
    BatchForbidVsStreamResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BatchForbidVsStreamResponseBody() = default ;
    BatchForbidVsStreamResponseBody& operator=(const BatchForbidVsStreamResponseBody &) = default ;
    BatchForbidVsStreamResponseBody& operator=(BatchForbidVsStreamResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->forbidResult_ != nullptr
        && this->requestId_ != nullptr; };
    // forbidResult Field Functions 
    bool hasForbidResult() const { return this->forbidResult_ != nullptr;};
    void deleteForbidResult() { this->forbidResult_ = nullptr;};
    inline const BatchForbidVsStreamResponseBodyForbidResult & forbidResult() const { DARABONBA_PTR_GET_CONST(forbidResult_, BatchForbidVsStreamResponseBodyForbidResult) };
    inline BatchForbidVsStreamResponseBodyForbidResult forbidResult() { DARABONBA_PTR_GET(forbidResult_, BatchForbidVsStreamResponseBodyForbidResult) };
    inline BatchForbidVsStreamResponseBody& setForbidResult(const BatchForbidVsStreamResponseBodyForbidResult & forbidResult) { DARABONBA_PTR_SET_VALUE(forbidResult_, forbidResult) };
    inline BatchForbidVsStreamResponseBody& setForbidResult(BatchForbidVsStreamResponseBodyForbidResult && forbidResult) { DARABONBA_PTR_SET_RVALUE(forbidResult_, forbidResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline BatchForbidVsStreamResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<BatchForbidVsStreamResponseBodyForbidResult> forbidResult_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
