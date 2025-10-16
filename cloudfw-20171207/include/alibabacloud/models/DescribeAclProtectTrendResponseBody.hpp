// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEACLPROTECTTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEACLPROTECTTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeACLProtectTrendResponseBodyTrendList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeACLProtectTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeACLProtectTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InProtectCnt, inProtectCnt_);
      DARABONBA_PTR_TO_JSON(InterVPCProtectCnt, interVPCProtectCnt_);
      DARABONBA_PTR_TO_JSON(Interval, interval_);
      DARABONBA_PTR_TO_JSON(OutProtectCnt, outProtectCnt_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalProtectCnt, totalProtectCnt_);
      DARABONBA_PTR_TO_JSON(TrendList, trendList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeACLProtectTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InProtectCnt, inProtectCnt_);
      DARABONBA_PTR_FROM_JSON(InterVPCProtectCnt, interVPCProtectCnt_);
      DARABONBA_PTR_FROM_JSON(Interval, interval_);
      DARABONBA_PTR_FROM_JSON(OutProtectCnt, outProtectCnt_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalProtectCnt, totalProtectCnt_);
      DARABONBA_PTR_FROM_JSON(TrendList, trendList_);
    };
    DescribeACLProtectTrendResponseBody() = default ;
    DescribeACLProtectTrendResponseBody(const DescribeACLProtectTrendResponseBody &) = default ;
    DescribeACLProtectTrendResponseBody(DescribeACLProtectTrendResponseBody &&) = default ;
    DescribeACLProtectTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeACLProtectTrendResponseBody() = default ;
    DescribeACLProtectTrendResponseBody& operator=(const DescribeACLProtectTrendResponseBody &) = default ;
    DescribeACLProtectTrendResponseBody& operator=(DescribeACLProtectTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->inProtectCnt_ == nullptr
        && return this->interVPCProtectCnt_ == nullptr && return this->interval_ == nullptr && return this->outProtectCnt_ == nullptr && return this->requestId_ == nullptr && return this->totalProtectCnt_ == nullptr
        && return this->trendList_ == nullptr; };
    // inProtectCnt Field Functions 
    bool hasInProtectCnt() const { return this->inProtectCnt_ != nullptr;};
    void deleteInProtectCnt() { this->inProtectCnt_ = nullptr;};
    inline int64_t inProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(inProtectCnt_, 0L) };
    inline DescribeACLProtectTrendResponseBody& setInProtectCnt(int64_t inProtectCnt) { DARABONBA_PTR_SET_VALUE(inProtectCnt_, inProtectCnt) };


    // interVPCProtectCnt Field Functions 
    bool hasInterVPCProtectCnt() const { return this->interVPCProtectCnt_ != nullptr;};
    void deleteInterVPCProtectCnt() { this->interVPCProtectCnt_ = nullptr;};
    inline int64_t interVPCProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(interVPCProtectCnt_, 0L) };
    inline DescribeACLProtectTrendResponseBody& setInterVPCProtectCnt(int64_t interVPCProtectCnt) { DARABONBA_PTR_SET_VALUE(interVPCProtectCnt_, interVPCProtectCnt) };


    // interval Field Functions 
    bool hasInterval() const { return this->interval_ != nullptr;};
    void deleteInterval() { this->interval_ = nullptr;};
    inline int32_t interval() const { DARABONBA_PTR_GET_DEFAULT(interval_, 0) };
    inline DescribeACLProtectTrendResponseBody& setInterval(int32_t interval) { DARABONBA_PTR_SET_VALUE(interval_, interval) };


    // outProtectCnt Field Functions 
    bool hasOutProtectCnt() const { return this->outProtectCnt_ != nullptr;};
    void deleteOutProtectCnt() { this->outProtectCnt_ = nullptr;};
    inline int64_t outProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(outProtectCnt_, 0L) };
    inline DescribeACLProtectTrendResponseBody& setOutProtectCnt(int64_t outProtectCnt) { DARABONBA_PTR_SET_VALUE(outProtectCnt_, outProtectCnt) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeACLProtectTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalProtectCnt Field Functions 
    bool hasTotalProtectCnt() const { return this->totalProtectCnt_ != nullptr;};
    void deleteTotalProtectCnt() { this->totalProtectCnt_ = nullptr;};
    inline int64_t totalProtectCnt() const { DARABONBA_PTR_GET_DEFAULT(totalProtectCnt_, 0L) };
    inline DescribeACLProtectTrendResponseBody& setTotalProtectCnt(int64_t totalProtectCnt) { DARABONBA_PTR_SET_VALUE(totalProtectCnt_, totalProtectCnt) };


    // trendList Field Functions 
    bool hasTrendList() const { return this->trendList_ != nullptr;};
    void deleteTrendList() { this->trendList_ = nullptr;};
    inline const vector<DescribeACLProtectTrendResponseBodyTrendList> & trendList() const { DARABONBA_PTR_GET_CONST(trendList_, vector<DescribeACLProtectTrendResponseBodyTrendList>) };
    inline vector<DescribeACLProtectTrendResponseBodyTrendList> trendList() { DARABONBA_PTR_GET(trendList_, vector<DescribeACLProtectTrendResponseBodyTrendList>) };
    inline DescribeACLProtectTrendResponseBody& setTrendList(const vector<DescribeACLProtectTrendResponseBodyTrendList> & trendList) { DARABONBA_PTR_SET_VALUE(trendList_, trendList) };
    inline DescribeACLProtectTrendResponseBody& setTrendList(vector<DescribeACLProtectTrendResponseBodyTrendList> && trendList) { DARABONBA_PTR_SET_RVALUE(trendList_, trendList) };


  protected:
    // The number of internal requests that are blocked by the ACL feature.
    std::shared_ptr<int64_t> inProtectCnt_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<int64_t> interVPCProtectCnt_ = nullptr;
    // The interval for returning data. Unit: seconds.
    std::shared_ptr<int32_t> interval_ = nullptr;
    // The number of external requests that are blocked by the ACL feature.
    std::shared_ptr<int64_t> outProtectCnt_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of requests that are blocked by the ACL feature.
    std::shared_ptr<int64_t> totalProtectCnt_ = nullptr;
    // The statistics on the requests that are blocked by the ACL feature.
    std::shared_ptr<vector<DescribeACLProtectTrendResponseBodyTrendList>> trendList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
