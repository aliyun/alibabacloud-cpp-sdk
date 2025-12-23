// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEABTESTGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEABTESTGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeABTestGroupResponseBodyResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace OpenSearch20171225
{
namespace Models
{
  class DescribeABTestGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeABTestGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(result, result_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeABTestGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(result, result_);
    };
    DescribeABTestGroupResponseBody() = default ;
    DescribeABTestGroupResponseBody(const DescribeABTestGroupResponseBody &) = default ;
    DescribeABTestGroupResponseBody(DescribeABTestGroupResponseBody &&) = default ;
    DescribeABTestGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeABTestGroupResponseBody() = default ;
    DescribeABTestGroupResponseBody& operator=(const DescribeABTestGroupResponseBody &) = default ;
    DescribeABTestGroupResponseBody& operator=(DescribeABTestGroupResponseBody &&) = default ;
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
    inline DescribeABTestGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const DescribeABTestGroupResponseBodyResult & result() const { DARABONBA_PTR_GET_CONST(result_, DescribeABTestGroupResponseBodyResult) };
    inline DescribeABTestGroupResponseBodyResult result() { DARABONBA_PTR_GET(result_, DescribeABTestGroupResponseBodyResult) };
    inline DescribeABTestGroupResponseBody& setResult(const DescribeABTestGroupResponseBodyResult & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline DescribeABTestGroupResponseBody& setResult(DescribeABTestGroupResponseBodyResult && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The details of the test group.
    std::shared_ptr<DescribeABTestGroupResponseBodyResult> result_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace OpenSearch20171225
#endif
