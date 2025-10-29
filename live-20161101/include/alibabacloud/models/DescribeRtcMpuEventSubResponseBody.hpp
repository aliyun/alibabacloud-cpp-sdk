// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCMPUEVENTSUBRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCMPUEVENTSUBRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcMPUEventSubResponseBodySubInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Live20161101
{
namespace Models
{
  class DescribeRtcMPUEventSubResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcMPUEventSubResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(SubInfo, subInfo_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcMPUEventSubResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(SubInfo, subInfo_);
    };
    DescribeRtcMPUEventSubResponseBody() = default ;
    DescribeRtcMPUEventSubResponseBody(const DescribeRtcMPUEventSubResponseBody &) = default ;
    DescribeRtcMPUEventSubResponseBody(DescribeRtcMPUEventSubResponseBody &&) = default ;
    DescribeRtcMPUEventSubResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcMPUEventSubResponseBody() = default ;
    DescribeRtcMPUEventSubResponseBody& operator=(const DescribeRtcMPUEventSubResponseBody &) = default ;
    DescribeRtcMPUEventSubResponseBody& operator=(DescribeRtcMPUEventSubResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->subInfo_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcMPUEventSubResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // subInfo Field Functions 
    bool hasSubInfo() const { return this->subInfo_ != nullptr;};
    void deleteSubInfo() { this->subInfo_ = nullptr;};
    inline const DescribeRtcMPUEventSubResponseBodySubInfo & subInfo() const { DARABONBA_PTR_GET_CONST(subInfo_, DescribeRtcMPUEventSubResponseBodySubInfo) };
    inline DescribeRtcMPUEventSubResponseBodySubInfo subInfo() { DARABONBA_PTR_GET(subInfo_, DescribeRtcMPUEventSubResponseBodySubInfo) };
    inline DescribeRtcMPUEventSubResponseBody& setSubInfo(const DescribeRtcMPUEventSubResponseBodySubInfo & subInfo) { DARABONBA_PTR_SET_VALUE(subInfo_, subInfo) };
    inline DescribeRtcMPUEventSubResponseBody& setSubInfo(DescribeRtcMPUEventSubResponseBodySubInfo && subInfo) { DARABONBA_PTR_SET_RVALUE(subInfo_, subInfo) };


  protected:
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The information about the subscription.
    std::shared_ptr<DescribeRtcMPUEventSubResponseBodySubInfo> subInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Live20161101
#endif
