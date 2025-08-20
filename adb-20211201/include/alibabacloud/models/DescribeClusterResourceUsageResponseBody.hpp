// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCEUSAGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLUSTERRESOURCEUSAGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeClusterResourceUsageResponseBodyData.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20211201
{
namespace Models
{
  class DescribeClusterResourceUsageResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeClusterResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeClusterResourceUsageResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeClusterResourceUsageResponseBody() = default ;
    DescribeClusterResourceUsageResponseBody(const DescribeClusterResourceUsageResponseBody &) = default ;
    DescribeClusterResourceUsageResponseBody(DescribeClusterResourceUsageResponseBody &&) = default ;
    DescribeClusterResourceUsageResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeClusterResourceUsageResponseBody() = default ;
    DescribeClusterResourceUsageResponseBody& operator=(const DescribeClusterResourceUsageResponseBody &) = default ;
    DescribeClusterResourceUsageResponseBody& operator=(DescribeClusterResourceUsageResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->data_ != nullptr && this->requestId_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t code() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline DescribeClusterResourceUsageResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const DescribeClusterResourceUsageResponseBodyData & data() const { DARABONBA_PTR_GET_CONST(data_, DescribeClusterResourceUsageResponseBodyData) };
    inline DescribeClusterResourceUsageResponseBodyData data() { DARABONBA_PTR_GET(data_, DescribeClusterResourceUsageResponseBodyData) };
    inline DescribeClusterResourceUsageResponseBody& setData(const DescribeClusterResourceUsageResponseBodyData & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline DescribeClusterResourceUsageResponseBody& setData(DescribeClusterResourceUsageResponseBodyData && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeClusterResourceUsageResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The HTTP status code.
    std::shared_ptr<int32_t> code_ = nullptr;
    // The queried resource usage.
    std::shared_ptr<DescribeClusterResourceUsageResponseBodyData> data_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20211201
#endif
