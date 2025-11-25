// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTIMETOPRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLTIMETOPRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatFirewallTimeTopResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallTimeTopResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallTimeTopResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataCount, dataCount_);
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TrafficTime, trafficTime_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallTimeTopResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataCount, dataCount_);
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TrafficTime, trafficTime_);
    };
    DescribeNatFirewallTimeTopResponseBody() = default ;
    DescribeNatFirewallTimeTopResponseBody(const DescribeNatFirewallTimeTopResponseBody &) = default ;
    DescribeNatFirewallTimeTopResponseBody(DescribeNatFirewallTimeTopResponseBody &&) = default ;
    DescribeNatFirewallTimeTopResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallTimeTopResponseBody() = default ;
    DescribeNatFirewallTimeTopResponseBody& operator=(const DescribeNatFirewallTimeTopResponseBody &) = default ;
    DescribeNatFirewallTimeTopResponseBody& operator=(DescribeNatFirewallTimeTopResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataCount_ == nullptr
        && return this->dataList_ == nullptr && return this->requestId_ == nullptr && return this->trafficTime_ == nullptr; };
    // dataCount Field Functions 
    bool hasDataCount() const { return this->dataCount_ != nullptr;};
    void deleteDataCount() { this->dataCount_ = nullptr;};
    inline int64_t dataCount() const { DARABONBA_PTR_GET_DEFAULT(dataCount_, 0L) };
    inline DescribeNatFirewallTimeTopResponseBody& setDataCount(int64_t dataCount) { DARABONBA_PTR_SET_VALUE(dataCount_, dataCount) };


    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeNatFirewallTimeTopResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeNatFirewallTimeTopResponseBodyDataList>) };
    inline vector<DescribeNatFirewallTimeTopResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeNatFirewallTimeTopResponseBodyDataList>) };
    inline DescribeNatFirewallTimeTopResponseBody& setDataList(const vector<DescribeNatFirewallTimeTopResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeNatFirewallTimeTopResponseBody& setDataList(vector<DescribeNatFirewallTimeTopResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallTimeTopResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // trafficTime Field Functions 
    bool hasTrafficTime() const { return this->trafficTime_ != nullptr;};
    void deleteTrafficTime() { this->trafficTime_ = nullptr;};
    inline string trafficTime() const { DARABONBA_PTR_GET_DEFAULT(trafficTime_, "") };
    inline DescribeNatFirewallTimeTopResponseBody& setTrafficTime(string trafficTime) { DARABONBA_PTR_SET_VALUE(trafficTime_, trafficTime) };


  protected:
    std::shared_ptr<int64_t> dataCount_ = nullptr;
    std::shared_ptr<vector<DescribeNatFirewallTimeTopResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<string> trafficTime_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
