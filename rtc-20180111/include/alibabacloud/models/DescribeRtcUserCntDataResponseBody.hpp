// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERTCUSERCNTDATARESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERTCUSERCNTDATARESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeRtcUserCntDataResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRtcUserCntDataResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserCntDataPerInterval, userCntDataPerInterval_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRtcUserCntDataResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserCntDataPerInterval, userCntDataPerInterval_);
    };
    DescribeRtcUserCntDataResponseBody() = default ;
    DescribeRtcUserCntDataResponseBody(const DescribeRtcUserCntDataResponseBody &) = default ;
    DescribeRtcUserCntDataResponseBody(DescribeRtcUserCntDataResponseBody &&) = default ;
    DescribeRtcUserCntDataResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRtcUserCntDataResponseBody() = default ;
    DescribeRtcUserCntDataResponseBody& operator=(const DescribeRtcUserCntDataResponseBody &) = default ;
    DescribeRtcUserCntDataResponseBody& operator=(DescribeRtcUserCntDataResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && return this->userCntDataPerInterval_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeRtcUserCntDataResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userCntDataPerInterval Field Functions 
    bool hasUserCntDataPerInterval() const { return this->userCntDataPerInterval_ != nullptr;};
    void deleteUserCntDataPerInterval() { this->userCntDataPerInterval_ = nullptr;};
    inline const DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval & userCntDataPerInterval() const { DARABONBA_PTR_GET_CONST(userCntDataPerInterval_, DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval) };
    inline DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval userCntDataPerInterval() { DARABONBA_PTR_GET(userCntDataPerInterval_, DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval) };
    inline DescribeRtcUserCntDataResponseBody& setUserCntDataPerInterval(const DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval & userCntDataPerInterval) { DARABONBA_PTR_SET_VALUE(userCntDataPerInterval_, userCntDataPerInterval) };
    inline DescribeRtcUserCntDataResponseBody& setUserCntDataPerInterval(DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval && userCntDataPerInterval) { DARABONBA_PTR_SET_RVALUE(userCntDataPerInterval_, userCntDataPerInterval) };


  protected:
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<DescribeRtcUserCntDataResponseBodyUserCntDataPerInterval> userCntDataPerInterval_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
