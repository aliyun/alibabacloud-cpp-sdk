// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIURANGERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIURANGERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeEIURangeResponseBodyEIUInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Adb20190315
{
namespace Models
{
  class DescribeEIURangeResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEIURangeResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(EIUInfo, EIUInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEIURangeResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(EIUInfo, EIUInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeEIURangeResponseBody() = default ;
    DescribeEIURangeResponseBody(const DescribeEIURangeResponseBody &) = default ;
    DescribeEIURangeResponseBody(DescribeEIURangeResponseBody &&) = default ;
    DescribeEIURangeResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEIURangeResponseBody() = default ;
    DescribeEIURangeResponseBody& operator=(const DescribeEIURangeResponseBody &) = default ;
    DescribeEIURangeResponseBody& operator=(DescribeEIURangeResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->EIUInfo_ != nullptr
        && this->requestId_ != nullptr; };
    // EIUInfo Field Functions 
    bool hasEIUInfo() const { return this->EIUInfo_ != nullptr;};
    void deleteEIUInfo() { this->EIUInfo_ = nullptr;};
    inline const DescribeEIURangeResponseBodyEIUInfo & EIUInfo() const { DARABONBA_PTR_GET_CONST(EIUInfo_, DescribeEIURangeResponseBodyEIUInfo) };
    inline DescribeEIURangeResponseBodyEIUInfo EIUInfo() { DARABONBA_PTR_GET(EIUInfo_, DescribeEIURangeResponseBodyEIUInfo) };
    inline DescribeEIURangeResponseBody& setEIUInfo(const DescribeEIURangeResponseBodyEIUInfo & EIUInfo) { DARABONBA_PTR_SET_VALUE(EIUInfo_, EIUInfo) };
    inline DescribeEIURangeResponseBody& setEIUInfo(DescribeEIURangeResponseBodyEIUInfo && EIUInfo) { DARABONBA_PTR_SET_RVALUE(EIUInfo_, EIUInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeEIURangeResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The queried information about the number of EIUs.
    std::shared_ptr<DescribeEIURangeResponseBodyEIUInfo> EIUInfo_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Adb20190315
#endif
