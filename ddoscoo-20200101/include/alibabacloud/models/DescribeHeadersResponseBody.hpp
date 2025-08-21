// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEHEADERSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEHEADERSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeHeadersResponseBodyCustomHeader.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20200101
{
namespace Models
{
  class DescribeHeadersResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeHeadersResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CustomHeader, customHeader_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeHeadersResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomHeader, customHeader_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeHeadersResponseBody() = default ;
    DescribeHeadersResponseBody(const DescribeHeadersResponseBody &) = default ;
    DescribeHeadersResponseBody(DescribeHeadersResponseBody &&) = default ;
    DescribeHeadersResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeHeadersResponseBody() = default ;
    DescribeHeadersResponseBody& operator=(const DescribeHeadersResponseBody &) = default ;
    DescribeHeadersResponseBody& operator=(DescribeHeadersResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->customHeader_ != nullptr
        && this->requestId_ != nullptr; };
    // customHeader Field Functions 
    bool hasCustomHeader() const { return this->customHeader_ != nullptr;};
    void deleteCustomHeader() { this->customHeader_ = nullptr;};
    inline const DescribeHeadersResponseBodyCustomHeader & customHeader() const { DARABONBA_PTR_GET_CONST(customHeader_, DescribeHeadersResponseBodyCustomHeader) };
    inline DescribeHeadersResponseBodyCustomHeader customHeader() { DARABONBA_PTR_GET(customHeader_, DescribeHeadersResponseBodyCustomHeader) };
    inline DescribeHeadersResponseBody& setCustomHeader(const DescribeHeadersResponseBodyCustomHeader & customHeader) { DARABONBA_PTR_SET_VALUE(customHeader_, customHeader) };
    inline DescribeHeadersResponseBody& setCustomHeader(DescribeHeadersResponseBodyCustomHeader && customHeader) { DARABONBA_PTR_SET_RVALUE(customHeader_, customHeader) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeHeadersResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the custom header.
    std::shared_ptr<DescribeHeadersResponseBodyCustomHeader> customHeader_ = nullptr;
    // The ID of the request, which is used to locate and troubleshoot issues.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20200101
#endif
