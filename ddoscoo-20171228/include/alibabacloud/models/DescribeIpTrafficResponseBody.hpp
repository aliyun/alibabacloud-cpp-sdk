// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIPTRAFFICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIPTRAFFICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeIpTrafficResponseBodyIpTrafficPoints.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ddoscoo20171228
{
namespace Models
{
  class DescribeIpTrafficResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeIpTrafficResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AvgInBps, avgInBps_);
      DARABONBA_PTR_TO_JSON(AvgOutBps, avgOutBps_);
      DARABONBA_PTR_TO_JSON(IpTrafficPoints, ipTrafficPoints_);
      DARABONBA_PTR_TO_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_TO_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeIpTrafficResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AvgInBps, avgInBps_);
      DARABONBA_PTR_FROM_JSON(AvgOutBps, avgOutBps_);
      DARABONBA_PTR_FROM_JSON(IpTrafficPoints, ipTrafficPoints_);
      DARABONBA_PTR_FROM_JSON(MaxInBps, maxInBps_);
      DARABONBA_PTR_FROM_JSON(MaxOutBps, maxOutBps_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeIpTrafficResponseBody() = default ;
    DescribeIpTrafficResponseBody(const DescribeIpTrafficResponseBody &) = default ;
    DescribeIpTrafficResponseBody(DescribeIpTrafficResponseBody &&) = default ;
    DescribeIpTrafficResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeIpTrafficResponseBody() = default ;
    DescribeIpTrafficResponseBody& operator=(const DescribeIpTrafficResponseBody &) = default ;
    DescribeIpTrafficResponseBody& operator=(DescribeIpTrafficResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->avgInBps_ != nullptr
        && this->avgOutBps_ != nullptr && this->ipTrafficPoints_ != nullptr && this->maxInBps_ != nullptr && this->maxOutBps_ != nullptr && this->requestId_ != nullptr; };
    // avgInBps Field Functions 
    bool hasAvgInBps() const { return this->avgInBps_ != nullptr;};
    void deleteAvgInBps() { this->avgInBps_ = nullptr;};
    inline int64_t avgInBps() const { DARABONBA_PTR_GET_DEFAULT(avgInBps_, 0L) };
    inline DescribeIpTrafficResponseBody& setAvgInBps(int64_t avgInBps) { DARABONBA_PTR_SET_VALUE(avgInBps_, avgInBps) };


    // avgOutBps Field Functions 
    bool hasAvgOutBps() const { return this->avgOutBps_ != nullptr;};
    void deleteAvgOutBps() { this->avgOutBps_ = nullptr;};
    inline int64_t avgOutBps() const { DARABONBA_PTR_GET_DEFAULT(avgOutBps_, 0L) };
    inline DescribeIpTrafficResponseBody& setAvgOutBps(int64_t avgOutBps) { DARABONBA_PTR_SET_VALUE(avgOutBps_, avgOutBps) };


    // ipTrafficPoints Field Functions 
    bool hasIpTrafficPoints() const { return this->ipTrafficPoints_ != nullptr;};
    void deleteIpTrafficPoints() { this->ipTrafficPoints_ = nullptr;};
    inline const vector<DescribeIpTrafficResponseBodyIpTrafficPoints> & ipTrafficPoints() const { DARABONBA_PTR_GET_CONST(ipTrafficPoints_, vector<DescribeIpTrafficResponseBodyIpTrafficPoints>) };
    inline vector<DescribeIpTrafficResponseBodyIpTrafficPoints> ipTrafficPoints() { DARABONBA_PTR_GET(ipTrafficPoints_, vector<DescribeIpTrafficResponseBodyIpTrafficPoints>) };
    inline DescribeIpTrafficResponseBody& setIpTrafficPoints(const vector<DescribeIpTrafficResponseBodyIpTrafficPoints> & ipTrafficPoints) { DARABONBA_PTR_SET_VALUE(ipTrafficPoints_, ipTrafficPoints) };
    inline DescribeIpTrafficResponseBody& setIpTrafficPoints(vector<DescribeIpTrafficResponseBodyIpTrafficPoints> && ipTrafficPoints) { DARABONBA_PTR_SET_RVALUE(ipTrafficPoints_, ipTrafficPoints) };


    // maxInBps Field Functions 
    bool hasMaxInBps() const { return this->maxInBps_ != nullptr;};
    void deleteMaxInBps() { this->maxInBps_ = nullptr;};
    inline int64_t maxInBps() const { DARABONBA_PTR_GET_DEFAULT(maxInBps_, 0L) };
    inline DescribeIpTrafficResponseBody& setMaxInBps(int64_t maxInBps) { DARABONBA_PTR_SET_VALUE(maxInBps_, maxInBps) };


    // maxOutBps Field Functions 
    bool hasMaxOutBps() const { return this->maxOutBps_ != nullptr;};
    void deleteMaxOutBps() { this->maxOutBps_ = nullptr;};
    inline int64_t maxOutBps() const { DARABONBA_PTR_GET_DEFAULT(maxOutBps_, 0L) };
    inline DescribeIpTrafficResponseBody& setMaxOutBps(int64_t maxOutBps) { DARABONBA_PTR_SET_VALUE(maxOutBps_, maxOutBps) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeIpTrafficResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<int64_t> avgInBps_ = nullptr;
    std::shared_ptr<int64_t> avgOutBps_ = nullptr;
    std::shared_ptr<vector<DescribeIpTrafficResponseBodyIpTrafficPoints>> ipTrafficPoints_ = nullptr;
    std::shared_ptr<int64_t> maxInBps_ = nullptr;
    std::shared_ptr<int64_t> maxOutBps_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ddoscoo20171228
#endif
