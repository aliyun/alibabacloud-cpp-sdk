// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPRECHECKRESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPRECHECKRESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribePreCheckResultResponseBodyPreCheckResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribePreCheckResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePreCheckResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePreCheckResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PreCheckResult, preCheckResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DescribePreCheckResultResponseBody() = default ;
    DescribePreCheckResultResponseBody(const DescribePreCheckResultResponseBody &) = default ;
    DescribePreCheckResultResponseBody(DescribePreCheckResultResponseBody &&) = default ;
    DescribePreCheckResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePreCheckResultResponseBody() = default ;
    DescribePreCheckResultResponseBody& operator=(const DescribePreCheckResultResponseBody &) = default ;
    DescribePreCheckResultResponseBody& operator=(DescribePreCheckResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->preCheckResult_ != nullptr
        && this->requestId_ != nullptr && this->success_ != nullptr; };
    // preCheckResult Field Functions 
    bool hasPreCheckResult() const { return this->preCheckResult_ != nullptr;};
    void deletePreCheckResult() { this->preCheckResult_ = nullptr;};
    inline const DescribePreCheckResultResponseBodyPreCheckResult & preCheckResult() const { DARABONBA_PTR_GET_CONST(preCheckResult_, DescribePreCheckResultResponseBodyPreCheckResult) };
    inline DescribePreCheckResultResponseBodyPreCheckResult preCheckResult() { DARABONBA_PTR_GET(preCheckResult_, DescribePreCheckResultResponseBodyPreCheckResult) };
    inline DescribePreCheckResultResponseBody& setPreCheckResult(const DescribePreCheckResultResponseBodyPreCheckResult & preCheckResult) { DARABONBA_PTR_SET_VALUE(preCheckResult_, preCheckResult) };
    inline DescribePreCheckResultResponseBody& setPreCheckResult(DescribePreCheckResultResponseBodyPreCheckResult && preCheckResult) { DARABONBA_PTR_SET_RVALUE(preCheckResult_, preCheckResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePreCheckResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool success() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DescribePreCheckResultResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // Indicates the result of the precheck task.
    std::shared_ptr<DescribePreCheckResultResponseBodyPreCheckResult> preCheckResult_ = nullptr;
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // Indicates whether the request is successful.
    std::shared_ptr<bool> success_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
