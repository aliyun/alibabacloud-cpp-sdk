// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECALLRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECALLRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeCallResponseBodyCallInfo.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCallResponseBodyUserDetailList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeCallResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCallResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(UserDetailList, userDetailList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCallResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CallInfo, callInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(UserDetailList, userDetailList_);
    };
    DescribeCallResponseBody() = default ;
    DescribeCallResponseBody(const DescribeCallResponseBody &) = default ;
    DescribeCallResponseBody(DescribeCallResponseBody &&) = default ;
    DescribeCallResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCallResponseBody() = default ;
    DescribeCallResponseBody& operator=(const DescribeCallResponseBody &) = default ;
    DescribeCallResponseBody& operator=(DescribeCallResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->callInfo_ == nullptr
        && return this->requestId_ == nullptr && return this->userDetailList_ == nullptr; };
    // callInfo Field Functions 
    bool hasCallInfo() const { return this->callInfo_ != nullptr;};
    void deleteCallInfo() { this->callInfo_ = nullptr;};
    inline const DescribeCallResponseBodyCallInfo & callInfo() const { DARABONBA_PTR_GET_CONST(callInfo_, DescribeCallResponseBodyCallInfo) };
    inline DescribeCallResponseBodyCallInfo callInfo() { DARABONBA_PTR_GET(callInfo_, DescribeCallResponseBodyCallInfo) };
    inline DescribeCallResponseBody& setCallInfo(const DescribeCallResponseBodyCallInfo & callInfo) { DARABONBA_PTR_SET_VALUE(callInfo_, callInfo) };
    inline DescribeCallResponseBody& setCallInfo(DescribeCallResponseBodyCallInfo && callInfo) { DARABONBA_PTR_SET_RVALUE(callInfo_, callInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeCallResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // userDetailList Field Functions 
    bool hasUserDetailList() const { return this->userDetailList_ != nullptr;};
    void deleteUserDetailList() { this->userDetailList_ = nullptr;};
    inline const vector<DescribeCallResponseBodyUserDetailList> & userDetailList() const { DARABONBA_PTR_GET_CONST(userDetailList_, vector<DescribeCallResponseBodyUserDetailList>) };
    inline vector<DescribeCallResponseBodyUserDetailList> userDetailList() { DARABONBA_PTR_GET(userDetailList_, vector<DescribeCallResponseBodyUserDetailList>) };
    inline DescribeCallResponseBody& setUserDetailList(const vector<DescribeCallResponseBodyUserDetailList> & userDetailList) { DARABONBA_PTR_SET_VALUE(userDetailList_, userDetailList) };
    inline DescribeCallResponseBody& setUserDetailList(vector<DescribeCallResponseBodyUserDetailList> && userDetailList) { DARABONBA_PTR_SET_RVALUE(userDetailList_, userDetailList) };


  protected:
    std::shared_ptr<DescribeCallResponseBodyCallInfo> callInfo_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<vector<DescribeCallResponseBodyUserDetailList>> userDetailList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
