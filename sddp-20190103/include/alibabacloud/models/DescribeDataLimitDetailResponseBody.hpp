// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDATALIMITDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDATALIMITDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeDataLimitDetailResponseBodyDataLimit.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeDataLimitDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDataLimitDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataLimit, dataLimit_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDataLimitDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataLimit, dataLimit_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeDataLimitDetailResponseBody() = default ;
    DescribeDataLimitDetailResponseBody(const DescribeDataLimitDetailResponseBody &) = default ;
    DescribeDataLimitDetailResponseBody(DescribeDataLimitDetailResponseBody &&) = default ;
    DescribeDataLimitDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDataLimitDetailResponseBody() = default ;
    DescribeDataLimitDetailResponseBody& operator=(const DescribeDataLimitDetailResponseBody &) = default ;
    DescribeDataLimitDetailResponseBody& operator=(DescribeDataLimitDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dataLimit_ != nullptr
        && this->requestId_ != nullptr; };
    // dataLimit Field Functions 
    bool hasDataLimit() const { return this->dataLimit_ != nullptr;};
    void deleteDataLimit() { this->dataLimit_ = nullptr;};
    inline const DescribeDataLimitDetailResponseBodyDataLimit & dataLimit() const { DARABONBA_PTR_GET_CONST(dataLimit_, DescribeDataLimitDetailResponseBodyDataLimit) };
    inline DescribeDataLimitDetailResponseBodyDataLimit dataLimit() { DARABONBA_PTR_GET(dataLimit_, DescribeDataLimitDetailResponseBodyDataLimit) };
    inline DescribeDataLimitDetailResponseBody& setDataLimit(const DescribeDataLimitDetailResponseBodyDataLimit & dataLimit) { DARABONBA_PTR_SET_VALUE(dataLimit_, dataLimit) };
    inline DescribeDataLimitDetailResponseBody& setDataLimit(DescribeDataLimitDetailResponseBodyDataLimit && dataLimit) { DARABONBA_PTR_SET_RVALUE(dataLimit_, dataLimit) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDataLimitDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The details of the data asset.
    std::shared_ptr<DescribeDataLimitDetailResponseBodyDataLimit> dataLimit_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
