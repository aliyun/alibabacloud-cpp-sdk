// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYTRAFFICDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOSTPAYTRAFFICDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePostpayTrafficDetailResponseBodyTrafficList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribePostpayTrafficDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePostpayTrafficDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TrafficList, trafficList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePostpayTrafficDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TrafficList, trafficList_);
    };
    DescribePostpayTrafficDetailResponseBody() = default ;
    DescribePostpayTrafficDetailResponseBody(const DescribePostpayTrafficDetailResponseBody &) = default ;
    DescribePostpayTrafficDetailResponseBody(DescribePostpayTrafficDetailResponseBody &&) = default ;
    DescribePostpayTrafficDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePostpayTrafficDetailResponseBody() = default ;
    DescribePostpayTrafficDetailResponseBody& operator=(const DescribePostpayTrafficDetailResponseBody &) = default ;
    DescribePostpayTrafficDetailResponseBody& operator=(DescribePostpayTrafficDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->totalCount_ != nullptr && this->trafficList_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribePostpayTrafficDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribePostpayTrafficDetailResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // trafficList Field Functions 
    bool hasTrafficList() const { return this->trafficList_ != nullptr;};
    void deleteTrafficList() { this->trafficList_ = nullptr;};
    inline const vector<DescribePostpayTrafficDetailResponseBodyTrafficList> & trafficList() const { DARABONBA_PTR_GET_CONST(trafficList_, vector<DescribePostpayTrafficDetailResponseBodyTrafficList>) };
    inline vector<DescribePostpayTrafficDetailResponseBodyTrafficList> trafficList() { DARABONBA_PTR_GET(trafficList_, vector<DescribePostpayTrafficDetailResponseBodyTrafficList>) };
    inline DescribePostpayTrafficDetailResponseBody& setTrafficList(const vector<DescribePostpayTrafficDetailResponseBodyTrafficList> & trafficList) { DARABONBA_PTR_SET_VALUE(trafficList_, trafficList) };
    inline DescribePostpayTrafficDetailResponseBody& setTrafficList(vector<DescribePostpayTrafficDetailResponseBodyTrafficList> && trafficList) { DARABONBA_PTR_SET_RVALUE(trafficList_, trafficList) };


  protected:
    // The ID of the request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of entries returned.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
    // The statistics on traffic.
    std::shared_ptr<vector<DescribePostpayTrafficDetailResponseBodyTrafficList>> trafficList_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
