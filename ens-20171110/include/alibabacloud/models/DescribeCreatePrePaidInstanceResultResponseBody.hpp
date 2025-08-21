// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECREATEPREPAIDINSTANCERESULTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECREATEPREPAIDINSTANCERESULTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCreatePrePaidInstanceResultResponseBodyInstanceCreateResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ens20171110
{
namespace Models
{
  class DescribeCreatePrePaidInstanceResultResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCreatePrePaidInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstanceCreateResult, instanceCreateResult_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCreatePrePaidInstanceResultResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstanceCreateResult, instanceCreateResult_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeCreatePrePaidInstanceResultResponseBody() = default ;
    DescribeCreatePrePaidInstanceResultResponseBody(const DescribeCreatePrePaidInstanceResultResponseBody &) = default ;
    DescribeCreatePrePaidInstanceResultResponseBody(DescribeCreatePrePaidInstanceResultResponseBody &&) = default ;
    DescribeCreatePrePaidInstanceResultResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCreatePrePaidInstanceResultResponseBody() = default ;
    DescribeCreatePrePaidInstanceResultResponseBody& operator=(const DescribeCreatePrePaidInstanceResultResponseBody &) = default ;
    DescribeCreatePrePaidInstanceResultResponseBody& operator=(DescribeCreatePrePaidInstanceResultResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->instanceCreateResult_ != nullptr
        && this->requestId_ != nullptr; };
    // instanceCreateResult Field Functions 
    bool hasInstanceCreateResult() const { return this->instanceCreateResult_ != nullptr;};
    void deleteInstanceCreateResult() { this->instanceCreateResult_ = nullptr;};
    inline const DescribeCreatePrePaidInstanceResultResponseBodyInstanceCreateResult & instanceCreateResult() const { DARABONBA_PTR_GET_CONST(instanceCreateResult_, DescribeCreatePrePaidInstanceResultResponseBodyInstanceCreateResult) };
    inline DescribeCreatePrePaidInstanceResultResponseBodyInstanceCreateResult instanceCreateResult() { DARABONBA_PTR_GET(instanceCreateResult_, DescribeCreatePrePaidInstanceResultResponseBodyInstanceCreateResult) };
    inline DescribeCreatePrePaidInstanceResultResponseBody& setInstanceCreateResult(const DescribeCreatePrePaidInstanceResultResponseBodyInstanceCreateResult & instanceCreateResult) { DARABONBA_PTR_SET_VALUE(instanceCreateResult_, instanceCreateResult) };
    inline DescribeCreatePrePaidInstanceResultResponseBody& setInstanceCreateResult(DescribeCreatePrePaidInstanceResultResponseBodyInstanceCreateResult && instanceCreateResult) { DARABONBA_PTR_SET_RVALUE(instanceCreateResult_, instanceCreateResult) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCreatePrePaidInstanceResultResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // Returned results of creating an instance.
    std::shared_ptr<DescribeCreatePrePaidInstanceResultResponseBodyInstanceCreateResult> instanceCreateResult_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ens20171110
#endif
