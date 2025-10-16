// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLDROPTRAFFICTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLDROPTRAFFICTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeNatFirewallDropTrafficTrendResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallDropTrafficTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallDropTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(DropSessionMax, dropSessionMax_);
      DARABONBA_PTR_TO_JSON(DropSessionMaxTime, dropSessionMaxTime_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallDropTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(DropSessionMax, dropSessionMax_);
      DARABONBA_PTR_FROM_JSON(DropSessionMaxTime, dropSessionMaxTime_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNatFirewallDropTrafficTrendResponseBody() = default ;
    DescribeNatFirewallDropTrafficTrendResponseBody(const DescribeNatFirewallDropTrafficTrendResponseBody &) = default ;
    DescribeNatFirewallDropTrafficTrendResponseBody(DescribeNatFirewallDropTrafficTrendResponseBody &&) = default ;
    DescribeNatFirewallDropTrafficTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallDropTrafficTrendResponseBody() = default ;
    DescribeNatFirewallDropTrafficTrendResponseBody& operator=(const DescribeNatFirewallDropTrafficTrendResponseBody &) = default ;
    DescribeNatFirewallDropTrafficTrendResponseBody& operator=(DescribeNatFirewallDropTrafficTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataList_ == nullptr
        && return this->dropSessionMax_ == nullptr && return this->dropSessionMaxTime_ == nullptr && return this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeNatFirewallDropTrafficTrendResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeNatFirewallDropTrafficTrendResponseBodyDataList>) };
    inline vector<DescribeNatFirewallDropTrafficTrendResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeNatFirewallDropTrafficTrendResponseBodyDataList>) };
    inline DescribeNatFirewallDropTrafficTrendResponseBody& setDataList(const vector<DescribeNatFirewallDropTrafficTrendResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeNatFirewallDropTrafficTrendResponseBody& setDataList(vector<DescribeNatFirewallDropTrafficTrendResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // dropSessionMax Field Functions 
    bool hasDropSessionMax() const { return this->dropSessionMax_ != nullptr;};
    void deleteDropSessionMax() { this->dropSessionMax_ = nullptr;};
    inline int64_t dropSessionMax() const { DARABONBA_PTR_GET_DEFAULT(dropSessionMax_, 0L) };
    inline DescribeNatFirewallDropTrafficTrendResponseBody& setDropSessionMax(int64_t dropSessionMax) { DARABONBA_PTR_SET_VALUE(dropSessionMax_, dropSessionMax) };


    // dropSessionMaxTime Field Functions 
    bool hasDropSessionMaxTime() const { return this->dropSessionMaxTime_ != nullptr;};
    void deleteDropSessionMaxTime() { this->dropSessionMaxTime_ = nullptr;};
    inline string dropSessionMaxTime() const { DARABONBA_PTR_GET_DEFAULT(dropSessionMaxTime_, "") };
    inline DescribeNatFirewallDropTrafficTrendResponseBody& setDropSessionMaxTime(string dropSessionMaxTime) { DARABONBA_PTR_SET_VALUE(dropSessionMaxTime_, dropSessionMaxTime) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallDropTrafficTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeNatFirewallDropTrafficTrendResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<int64_t> dropSessionMax_ = nullptr;
    std::shared_ptr<string> dropSessionMaxTime_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
