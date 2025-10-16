// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSINGROUPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDESKTOPSINGROUPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeDesktopsInGroupResponseBodyPaidDesktops.hpp>
#include <alibabacloud/models/DescribeDesktopsInGroupResponseBodyPostPaidDesktops.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class DescribeDesktopsInGroupResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDesktopsInGroupResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(OnlinePrePaidDesktopsCount, onlinePrePaidDesktopsCount_);
      DARABONBA_PTR_TO_JSON(PaidDesktops, paidDesktops_);
      DARABONBA_PTR_TO_JSON(PaidDesktopsCount, paidDesktopsCount_);
      DARABONBA_PTR_TO_JSON(PostPaidDesktops, postPaidDesktops_);
      DARABONBA_PTR_TO_JSON(PostPaidDesktopsCount, postPaidDesktopsCount_);
      DARABONBA_PTR_TO_JSON(PostPaidDesktopsTotalAmount, postPaidDesktopsTotalAmount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RunningPrePaidDesktopsCount, runningPrePaidDesktopsCount_);
      DARABONBA_PTR_TO_JSON(StopedPrePaidDesktopsCount, stopedPrePaidDesktopsCount_);
      DARABONBA_PTR_TO_JSON(StoppedPrePaidDesktopsCount, stoppedPrePaidDesktopsCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDesktopsInGroupResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(OnlinePrePaidDesktopsCount, onlinePrePaidDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(PaidDesktops, paidDesktops_);
      DARABONBA_PTR_FROM_JSON(PaidDesktopsCount, paidDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(PostPaidDesktops, postPaidDesktops_);
      DARABONBA_PTR_FROM_JSON(PostPaidDesktopsCount, postPaidDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(PostPaidDesktopsTotalAmount, postPaidDesktopsTotalAmount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RunningPrePaidDesktopsCount, runningPrePaidDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(StopedPrePaidDesktopsCount, stopedPrePaidDesktopsCount_);
      DARABONBA_PTR_FROM_JSON(StoppedPrePaidDesktopsCount, stoppedPrePaidDesktopsCount_);
    };
    DescribeDesktopsInGroupResponseBody() = default ;
    DescribeDesktopsInGroupResponseBody(const DescribeDesktopsInGroupResponseBody &) = default ;
    DescribeDesktopsInGroupResponseBody(DescribeDesktopsInGroupResponseBody &&) = default ;
    DescribeDesktopsInGroupResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDesktopsInGroupResponseBody() = default ;
    DescribeDesktopsInGroupResponseBody& operator=(const DescribeDesktopsInGroupResponseBody &) = default ;
    DescribeDesktopsInGroupResponseBody& operator=(DescribeDesktopsInGroupResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->nextToken_ == nullptr
        && return this->onlinePrePaidDesktopsCount_ == nullptr && return this->paidDesktops_ == nullptr && return this->paidDesktopsCount_ == nullptr && return this->postPaidDesktops_ == nullptr && return this->postPaidDesktopsCount_ == nullptr
        && return this->postPaidDesktopsTotalAmount_ == nullptr && return this->requestId_ == nullptr && return this->runningPrePaidDesktopsCount_ == nullptr && return this->stopedPrePaidDesktopsCount_ == nullptr && return this->stoppedPrePaidDesktopsCount_ == nullptr; };
    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribeDesktopsInGroupResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // onlinePrePaidDesktopsCount Field Functions 
    bool hasOnlinePrePaidDesktopsCount() const { return this->onlinePrePaidDesktopsCount_ != nullptr;};
    void deleteOnlinePrePaidDesktopsCount() { this->onlinePrePaidDesktopsCount_ = nullptr;};
    inline int32_t onlinePrePaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(onlinePrePaidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setOnlinePrePaidDesktopsCount(int32_t onlinePrePaidDesktopsCount) { DARABONBA_PTR_SET_VALUE(onlinePrePaidDesktopsCount_, onlinePrePaidDesktopsCount) };


    // paidDesktops Field Functions 
    bool hasPaidDesktops() const { return this->paidDesktops_ != nullptr;};
    void deletePaidDesktops() { this->paidDesktops_ = nullptr;};
    inline const vector<DescribeDesktopsInGroupResponseBodyPaidDesktops> & paidDesktops() const { DARABONBA_PTR_GET_CONST(paidDesktops_, vector<DescribeDesktopsInGroupResponseBodyPaidDesktops>) };
    inline vector<DescribeDesktopsInGroupResponseBodyPaidDesktops> paidDesktops() { DARABONBA_PTR_GET(paidDesktops_, vector<DescribeDesktopsInGroupResponseBodyPaidDesktops>) };
    inline DescribeDesktopsInGroupResponseBody& setPaidDesktops(const vector<DescribeDesktopsInGroupResponseBodyPaidDesktops> & paidDesktops) { DARABONBA_PTR_SET_VALUE(paidDesktops_, paidDesktops) };
    inline DescribeDesktopsInGroupResponseBody& setPaidDesktops(vector<DescribeDesktopsInGroupResponseBodyPaidDesktops> && paidDesktops) { DARABONBA_PTR_SET_RVALUE(paidDesktops_, paidDesktops) };


    // paidDesktopsCount Field Functions 
    bool hasPaidDesktopsCount() const { return this->paidDesktopsCount_ != nullptr;};
    void deletePaidDesktopsCount() { this->paidDesktopsCount_ = nullptr;};
    inline int32_t paidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(paidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setPaidDesktopsCount(int32_t paidDesktopsCount) { DARABONBA_PTR_SET_VALUE(paidDesktopsCount_, paidDesktopsCount) };


    // postPaidDesktops Field Functions 
    bool hasPostPaidDesktops() const { return this->postPaidDesktops_ != nullptr;};
    void deletePostPaidDesktops() { this->postPaidDesktops_ = nullptr;};
    inline const vector<DescribeDesktopsInGroupResponseBodyPostPaidDesktops> & postPaidDesktops() const { DARABONBA_PTR_GET_CONST(postPaidDesktops_, vector<DescribeDesktopsInGroupResponseBodyPostPaidDesktops>) };
    inline vector<DescribeDesktopsInGroupResponseBodyPostPaidDesktops> postPaidDesktops() { DARABONBA_PTR_GET(postPaidDesktops_, vector<DescribeDesktopsInGroupResponseBodyPostPaidDesktops>) };
    inline DescribeDesktopsInGroupResponseBody& setPostPaidDesktops(const vector<DescribeDesktopsInGroupResponseBodyPostPaidDesktops> & postPaidDesktops) { DARABONBA_PTR_SET_VALUE(postPaidDesktops_, postPaidDesktops) };
    inline DescribeDesktopsInGroupResponseBody& setPostPaidDesktops(vector<DescribeDesktopsInGroupResponseBodyPostPaidDesktops> && postPaidDesktops) { DARABONBA_PTR_SET_RVALUE(postPaidDesktops_, postPaidDesktops) };


    // postPaidDesktopsCount Field Functions 
    bool hasPostPaidDesktopsCount() const { return this->postPaidDesktopsCount_ != nullptr;};
    void deletePostPaidDesktopsCount() { this->postPaidDesktopsCount_ = nullptr;};
    inline int32_t postPaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(postPaidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setPostPaidDesktopsCount(int32_t postPaidDesktopsCount) { DARABONBA_PTR_SET_VALUE(postPaidDesktopsCount_, postPaidDesktopsCount) };


    // postPaidDesktopsTotalAmount Field Functions 
    bool hasPostPaidDesktopsTotalAmount() const { return this->postPaidDesktopsTotalAmount_ != nullptr;};
    void deletePostPaidDesktopsTotalAmount() { this->postPaidDesktopsTotalAmount_ = nullptr;};
    inline int32_t postPaidDesktopsTotalAmount() const { DARABONBA_PTR_GET_DEFAULT(postPaidDesktopsTotalAmount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setPostPaidDesktopsTotalAmount(int32_t postPaidDesktopsTotalAmount) { DARABONBA_PTR_SET_VALUE(postPaidDesktopsTotalAmount_, postPaidDesktopsTotalAmount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDesktopsInGroupResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // runningPrePaidDesktopsCount Field Functions 
    bool hasRunningPrePaidDesktopsCount() const { return this->runningPrePaidDesktopsCount_ != nullptr;};
    void deleteRunningPrePaidDesktopsCount() { this->runningPrePaidDesktopsCount_ = nullptr;};
    inline int32_t runningPrePaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(runningPrePaidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setRunningPrePaidDesktopsCount(int32_t runningPrePaidDesktopsCount) { DARABONBA_PTR_SET_VALUE(runningPrePaidDesktopsCount_, runningPrePaidDesktopsCount) };


    // stopedPrePaidDesktopsCount Field Functions 
    bool hasStopedPrePaidDesktopsCount() const { return this->stopedPrePaidDesktopsCount_ != nullptr;};
    void deleteStopedPrePaidDesktopsCount() { this->stopedPrePaidDesktopsCount_ = nullptr;};
    inline int32_t stopedPrePaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(stopedPrePaidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setStopedPrePaidDesktopsCount(int32_t stopedPrePaidDesktopsCount) { DARABONBA_PTR_SET_VALUE(stopedPrePaidDesktopsCount_, stopedPrePaidDesktopsCount) };


    // stoppedPrePaidDesktopsCount Field Functions 
    bool hasStoppedPrePaidDesktopsCount() const { return this->stoppedPrePaidDesktopsCount_ != nullptr;};
    void deleteStoppedPrePaidDesktopsCount() { this->stoppedPrePaidDesktopsCount_ = nullptr;};
    inline int32_t stoppedPrePaidDesktopsCount() const { DARABONBA_PTR_GET_DEFAULT(stoppedPrePaidDesktopsCount_, 0) };
    inline DescribeDesktopsInGroupResponseBody& setStoppedPrePaidDesktopsCount(int32_t stoppedPrePaidDesktopsCount) { DARABONBA_PTR_SET_VALUE(stoppedPrePaidDesktopsCount_, stoppedPrePaidDesktopsCount) };


  protected:
    // A pagination token. It can be used in the next request to retrieve a new page of results.
    // If NextToken is empty, no next page exists.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The number of subscription cloud computers that are in the Connected state.
    std::shared_ptr<int32_t> onlinePrePaidDesktopsCount_ = nullptr;
    // The subscription cloud computers.
    std::shared_ptr<vector<DescribeDesktopsInGroupResponseBodyPaidDesktops>> paidDesktops_ = nullptr;
    // The total number of subscription cloud computers.
    std::shared_ptr<int32_t> paidDesktopsCount_ = nullptr;
    // The pay-as-you-go cloud computers.
    std::shared_ptr<vector<DescribeDesktopsInGroupResponseBodyPostPaidDesktops>> postPaidDesktops_ = nullptr;
    // The total number of pay-as-you-go cloud computers.
    std::shared_ptr<int32_t> postPaidDesktopsCount_ = nullptr;
    // The total amount of bills for pay-as-you-go cloud computers.
    std::shared_ptr<int32_t> postPaidDesktopsTotalAmount_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The number of subscription cloud computers that are in the Running state.
    std::shared_ptr<int32_t> runningPrePaidDesktopsCount_ = nullptr;
    // The number of subscription cloud computers that are in the Stopped state.
    std::shared_ptr<int32_t> stopedPrePaidDesktopsCount_ = nullptr;
    // The number of subscription cloud computers that are in the Stopped state.
    std::shared_ptr<int32_t> stoppedPrePaidDesktopsCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
