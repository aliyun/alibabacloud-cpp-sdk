// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDROPTRAFFICTRENDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLDROPTRAFFICTRENDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeVpcFirewallDropTrafficTrendResponseBodyDataList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallDropTrafficTrendResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallDropTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(DataList, dataList_);
      DARABONBA_PTR_TO_JSON(DropSessionMax, dropSessionMax_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallDropTrafficTrendResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(DataList, dataList_);
      DARABONBA_PTR_FROM_JSON(DropSessionMax, dropSessionMax_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVpcFirewallDropTrafficTrendResponseBody() = default ;
    DescribeVpcFirewallDropTrafficTrendResponseBody(const DescribeVpcFirewallDropTrafficTrendResponseBody &) = default ;
    DescribeVpcFirewallDropTrafficTrendResponseBody(DescribeVpcFirewallDropTrafficTrendResponseBody &&) = default ;
    DescribeVpcFirewallDropTrafficTrendResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallDropTrafficTrendResponseBody() = default ;
    DescribeVpcFirewallDropTrafficTrendResponseBody& operator=(const DescribeVpcFirewallDropTrafficTrendResponseBody &) = default ;
    DescribeVpcFirewallDropTrafficTrendResponseBody& operator=(DescribeVpcFirewallDropTrafficTrendResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataList_ == nullptr
        && return this->dropSessionMax_ == nullptr && return this->requestId_ == nullptr; };
    // dataList Field Functions 
    bool hasDataList() const { return this->dataList_ != nullptr;};
    void deleteDataList() { this->dataList_ = nullptr;};
    inline const vector<DescribeVpcFirewallDropTrafficTrendResponseBodyDataList> & dataList() const { DARABONBA_PTR_GET_CONST(dataList_, vector<DescribeVpcFirewallDropTrafficTrendResponseBodyDataList>) };
    inline vector<DescribeVpcFirewallDropTrafficTrendResponseBodyDataList> dataList() { DARABONBA_PTR_GET(dataList_, vector<DescribeVpcFirewallDropTrafficTrendResponseBodyDataList>) };
    inline DescribeVpcFirewallDropTrafficTrendResponseBody& setDataList(const vector<DescribeVpcFirewallDropTrafficTrendResponseBodyDataList> & dataList) { DARABONBA_PTR_SET_VALUE(dataList_, dataList) };
    inline DescribeVpcFirewallDropTrafficTrendResponseBody& setDataList(vector<DescribeVpcFirewallDropTrafficTrendResponseBodyDataList> && dataList) { DARABONBA_PTR_SET_RVALUE(dataList_, dataList) };


    // dropSessionMax Field Functions 
    bool hasDropSessionMax() const { return this->dropSessionMax_ != nullptr;};
    void deleteDropSessionMax() { this->dropSessionMax_ = nullptr;};
    inline int64_t dropSessionMax() const { DARABONBA_PTR_GET_DEFAULT(dropSessionMax_, 0L) };
    inline DescribeVpcFirewallDropTrafficTrendResponseBody& setDropSessionMax(int64_t dropSessionMax) { DARABONBA_PTR_SET_VALUE(dropSessionMax_, dropSessionMax) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallDropTrafficTrendResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<vector<DescribeVpcFirewallDropTrafficTrendResponseBodyDataList>> dataList_ = nullptr;
    std::shared_ptr<int64_t> dropSessionMax_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
