// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLPRECHECKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVPCFIREWALLPRECHECKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeVpcFirewallPrecheckDetailResponseBodyPrecheckDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeVpcFirewallPrecheckDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVpcFirewallPrecheckDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsFound, isFound_);
      DARABONBA_PTR_TO_JSON(PrecheckDetail, precheckDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVpcFirewallPrecheckDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsFound, isFound_);
      DARABONBA_PTR_FROM_JSON(PrecheckDetail, precheckDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeVpcFirewallPrecheckDetailResponseBody() = default ;
    DescribeVpcFirewallPrecheckDetailResponseBody(const DescribeVpcFirewallPrecheckDetailResponseBody &) = default ;
    DescribeVpcFirewallPrecheckDetailResponseBody(DescribeVpcFirewallPrecheckDetailResponseBody &&) = default ;
    DescribeVpcFirewallPrecheckDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVpcFirewallPrecheckDetailResponseBody() = default ;
    DescribeVpcFirewallPrecheckDetailResponseBody& operator=(const DescribeVpcFirewallPrecheckDetailResponseBody &) = default ;
    DescribeVpcFirewallPrecheckDetailResponseBody& operator=(DescribeVpcFirewallPrecheckDetailResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->isFound_ == nullptr
        && return this->precheckDetail_ == nullptr && return this->requestId_ == nullptr; };
    // isFound Field Functions 
    bool hasIsFound() const { return this->isFound_ != nullptr;};
    void deleteIsFound() { this->isFound_ = nullptr;};
    inline bool isFound() const { DARABONBA_PTR_GET_DEFAULT(isFound_, false) };
    inline DescribeVpcFirewallPrecheckDetailResponseBody& setIsFound(bool isFound) { DARABONBA_PTR_SET_VALUE(isFound_, isFound) };


    // precheckDetail Field Functions 
    bool hasPrecheckDetail() const { return this->precheckDetail_ != nullptr;};
    void deletePrecheckDetail() { this->precheckDetail_ = nullptr;};
    inline const DescribeVpcFirewallPrecheckDetailResponseBodyPrecheckDetail & precheckDetail() const { DARABONBA_PTR_GET_CONST(precheckDetail_, DescribeVpcFirewallPrecheckDetailResponseBodyPrecheckDetail) };
    inline DescribeVpcFirewallPrecheckDetailResponseBodyPrecheckDetail precheckDetail() { DARABONBA_PTR_GET(precheckDetail_, DescribeVpcFirewallPrecheckDetailResponseBodyPrecheckDetail) };
    inline DescribeVpcFirewallPrecheckDetailResponseBody& setPrecheckDetail(const DescribeVpcFirewallPrecheckDetailResponseBodyPrecheckDetail & precheckDetail) { DARABONBA_PTR_SET_VALUE(precheckDetail_, precheckDetail) };
    inline DescribeVpcFirewallPrecheckDetailResponseBody& setPrecheckDetail(DescribeVpcFirewallPrecheckDetailResponseBodyPrecheckDetail && precheckDetail) { DARABONBA_PTR_SET_RVALUE(precheckDetail_, precheckDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVpcFirewallPrecheckDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> isFound_ = nullptr;
    std::shared_ptr<DescribeVpcFirewallPrecheckDetailResponseBodyPrecheckDetail> precheckDetail_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
