// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGSTATUSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERESOURCELOGSTATUSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeResourceLogStatusResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeResourceLogStatusResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeResourceLogStatusResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeResourceLogStatusResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    DescribeResourceLogStatusResponseBody() = default ;
    DescribeResourceLogStatusResponseBody(const DescribeResourceLogStatusResponseBody &) = default ;
    DescribeResourceLogStatusResponseBody(DescribeResourceLogStatusResponseBody &&) = default ;
    DescribeResourceLogStatusResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeResourceLogStatusResponseBody() = default ;
    DescribeResourceLogStatusResponseBody& operator=(const DescribeResourceLogStatusResponseBody &) = default ;
    DescribeResourceLogStatusResponseBody& operator=(DescribeResourceLogStatusResponseBody &&) = default ;
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
    inline DescribeResourceLogStatusResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const vector<DescribeResourceLogStatusResponseBodyResult> & result() const { DARABONBA_PTR_GET_CONST(result_, vector<DescribeResourceLogStatusResponseBodyResult>) };
    inline vector<DescribeResourceLogStatusResponseBodyResult> result() { DARABONBA_PTR_GET(result_, vector<DescribeResourceLogStatusResponseBodyResult>) };
    inline DescribeResourceLogStatusResponseBody& setResult(const vector<DescribeResourceLogStatusResponseBodyResult> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeResourceLogStatusResponseBody& setResult(vector<DescribeResourceLogStatusResponseBodyResult> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The returned result.
    std::shared_ptr<vector<DescribeResourceLogStatusResponseBodyResult>> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
