// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBESLOWQUERYSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBESLOWQUERYSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeSlowQueryStatusResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeSlowQueryStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeSlowQueryStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeSlowQueryStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DescribeSlowQueryStatusResponseBody() = default ;
    DescribeSlowQueryStatusResponseBody(const DescribeSlowQueryStatusResponseBody &) = default ;
    DescribeSlowQueryStatusResponseBody(DescribeSlowQueryStatusResponseBody &&) = default ;
    DescribeSlowQueryStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeSlowQueryStatusResponseBody() = default ;
    DescribeSlowQueryStatusResponseBody& operator=(const DescribeSlowQueryStatusResponseBody &) = default ;
    DescribeSlowQueryStatusResponseBody& operator=(DescribeSlowQueryStatusResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeSlowQueryStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeSlowQueryStatusResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, DescribeSlowQueryStatusResponseBodyResult) };
    inline DescribeSlowQueryStatusResponseBodyResult result() { DARABONBA_PTR_GET(result_, DescribeSlowQueryStatusResponseBodyResult) };
    inline DescribeSlowQueryStatusResponseBody& setResult(const DescribeSlowQueryStatusResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeSlowQueryStatusResponseBody& setResult(DescribeSlowQueryStatusResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The return result.
    std::shared_ptr<DescribeSlowQueryStatusResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
