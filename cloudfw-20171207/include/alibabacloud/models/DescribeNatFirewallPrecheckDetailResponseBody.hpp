// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPRECHECKDETAILRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENATFIREWALLPRECHECKDETAILRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeNatFirewallPrecheckDetailResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNatFirewallPrecheckDetailResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IsFound, isFound_);
      DARABONBA_PTR_TO_JSON(PrecheckDetail, precheckDetail_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNatFirewallPrecheckDetailResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IsFound, isFound_);
      DARABONBA_PTR_FROM_JSON(PrecheckDetail, precheckDetail_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeNatFirewallPrecheckDetailResponseBody() = default ;
    DescribeNatFirewallPrecheckDetailResponseBody(const DescribeNatFirewallPrecheckDetailResponseBody &) = default ;
    DescribeNatFirewallPrecheckDetailResponseBody(DescribeNatFirewallPrecheckDetailResponseBody &&) = default ;
    DescribeNatFirewallPrecheckDetailResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNatFirewallPrecheckDetailResponseBody() = default ;
    DescribeNatFirewallPrecheckDetailResponseBody& operator=(const DescribeNatFirewallPrecheckDetailResponseBody &) = default ;
    DescribeNatFirewallPrecheckDetailResponseBody& operator=(DescribeNatFirewallPrecheckDetailResponseBody &&) = default ;
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
    inline DescribeNatFirewallPrecheckDetailResponseBody& setIsFound(bool isFound) { DARABONBA_PTR_SET_VALUE(isFound_, isFound) };


    // precheckDetail Field Functions 
    bool hasPrecheckDetail() const { return this->precheckDetail_ != nullptr;};
    void deletePrecheckDetail() { this->precheckDetail_ = nullptr;};
    inline const DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail & precheckDetail() const { DARABONBA_PTR_GET_CONST(precheckDetail_, DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail) };
    inline DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail precheckDetail() { DARABONBA_PTR_GET(precheckDetail_, DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail) };
    inline DescribeNatFirewallPrecheckDetailResponseBody& setPrecheckDetail(const DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail & precheckDetail) { DARABONBA_PTR_SET_VALUE(precheckDetail_, precheckDetail) };
    inline DescribeNatFirewallPrecheckDetailResponseBody& setPrecheckDetail(DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail && precheckDetail) { DARABONBA_PTR_SET_RVALUE(precheckDetail_, precheckDetail) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeNatFirewallPrecheckDetailResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    std::shared_ptr<bool> isFound_ = nullptr;
    std::shared_ptr<DescribeNatFirewallPrecheckDetailResponseBodyPrecheckDetail> precheckDetail_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
