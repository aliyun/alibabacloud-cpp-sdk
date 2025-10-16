// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGSTATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGSTATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingStatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingStatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreAssetCount, ignoreAssetCount_);
      DARABONBA_PTR_TO_JSON(IgnoreDomainCount, ignoreDomainCount_);
      DARABONBA_PTR_TO_JSON(IgnoreDstIPCount, ignoreDstIPCount_);
      DARABONBA_PTR_TO_JSON(PrivateRiskAssetCount, privateRiskAssetCount_);
      DARABONBA_PTR_TO_JSON(PrivateTotalAssetCount, privateTotalAssetCount_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RiskAssetCount, riskAssetCount_);
      DARABONBA_PTR_TO_JSON(RiskDomainCount, riskDomainCount_);
      DARABONBA_PTR_TO_JSON(RiskDstIPCount, riskDstIPCount_);
      DARABONBA_PTR_TO_JSON(SubscribeAssetCount, subscribeAssetCount_);
      DARABONBA_PTR_TO_JSON(SubscribeDomainCount, subscribeDomainCount_);
      DARABONBA_PTR_TO_JSON(SubscribeDstIPCount, subscribeDstIPCount_);
      DARABONBA_PTR_TO_JSON(TotalAssetCount, totalAssetCount_);
      DARABONBA_PTR_TO_JSON(TotalDomainCount, totalDomainCount_);
      DARABONBA_PTR_TO_JSON(TotalDstIPCount, totalDstIPCount_);
      DARABONBA_PTR_TO_JSON(TotalProtocolCount, totalProtocolCount_);
      DARABONBA_PTR_TO_JSON(UncoveredAclDomain, uncoveredAclDomain_);
      DARABONBA_PTR_TO_JSON(UncoveredAclDstIP, uncoveredAclDstIP_);
      DARABONBA_PTR_TO_JSON(UnknownProtocolRadio, unknownProtocolRadio_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingStatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreAssetCount, ignoreAssetCount_);
      DARABONBA_PTR_FROM_JSON(IgnoreDomainCount, ignoreDomainCount_);
      DARABONBA_PTR_FROM_JSON(IgnoreDstIPCount, ignoreDstIPCount_);
      DARABONBA_PTR_FROM_JSON(PrivateRiskAssetCount, privateRiskAssetCount_);
      DARABONBA_PTR_FROM_JSON(PrivateTotalAssetCount, privateTotalAssetCount_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RiskAssetCount, riskAssetCount_);
      DARABONBA_PTR_FROM_JSON(RiskDomainCount, riskDomainCount_);
      DARABONBA_PTR_FROM_JSON(RiskDstIPCount, riskDstIPCount_);
      DARABONBA_PTR_FROM_JSON(SubscribeAssetCount, subscribeAssetCount_);
      DARABONBA_PTR_FROM_JSON(SubscribeDomainCount, subscribeDomainCount_);
      DARABONBA_PTR_FROM_JSON(SubscribeDstIPCount, subscribeDstIPCount_);
      DARABONBA_PTR_FROM_JSON(TotalAssetCount, totalAssetCount_);
      DARABONBA_PTR_FROM_JSON(TotalDomainCount, totalDomainCount_);
      DARABONBA_PTR_FROM_JSON(TotalDstIPCount, totalDstIPCount_);
      DARABONBA_PTR_FROM_JSON(TotalProtocolCount, totalProtocolCount_);
      DARABONBA_PTR_FROM_JSON(UncoveredAclDomain, uncoveredAclDomain_);
      DARABONBA_PTR_FROM_JSON(UncoveredAclDstIP, uncoveredAclDstIP_);
      DARABONBA_PTR_FROM_JSON(UnknownProtocolRadio, unknownProtocolRadio_);
    };
    DescribeOutgoingStatisticResponseBody() = default ;
    DescribeOutgoingStatisticResponseBody(const DescribeOutgoingStatisticResponseBody &) = default ;
    DescribeOutgoingStatisticResponseBody(DescribeOutgoingStatisticResponseBody &&) = default ;
    DescribeOutgoingStatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingStatisticResponseBody() = default ;
    DescribeOutgoingStatisticResponseBody& operator=(const DescribeOutgoingStatisticResponseBody &) = default ;
    DescribeOutgoingStatisticResponseBody& operator=(DescribeOutgoingStatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ignoreAssetCount_ == nullptr
        && return this->ignoreDomainCount_ == nullptr && return this->ignoreDstIPCount_ == nullptr && return this->privateRiskAssetCount_ == nullptr && return this->privateTotalAssetCount_ == nullptr && return this->requestId_ == nullptr
        && return this->riskAssetCount_ == nullptr && return this->riskDomainCount_ == nullptr && return this->riskDstIPCount_ == nullptr && return this->subscribeAssetCount_ == nullptr && return this->subscribeDomainCount_ == nullptr
        && return this->subscribeDstIPCount_ == nullptr && return this->totalAssetCount_ == nullptr && return this->totalDomainCount_ == nullptr && return this->totalDstIPCount_ == nullptr && return this->totalProtocolCount_ == nullptr
        && return this->uncoveredAclDomain_ == nullptr && return this->uncoveredAclDstIP_ == nullptr && return this->unknownProtocolRadio_ == nullptr; };
    // ignoreAssetCount Field Functions 
    bool hasIgnoreAssetCount() const { return this->ignoreAssetCount_ != nullptr;};
    void deleteIgnoreAssetCount() { this->ignoreAssetCount_ = nullptr;};
    inline int32_t ignoreAssetCount() const { DARABONBA_PTR_GET_DEFAULT(ignoreAssetCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setIgnoreAssetCount(int32_t ignoreAssetCount) { DARABONBA_PTR_SET_VALUE(ignoreAssetCount_, ignoreAssetCount) };


    // ignoreDomainCount Field Functions 
    bool hasIgnoreDomainCount() const { return this->ignoreDomainCount_ != nullptr;};
    void deleteIgnoreDomainCount() { this->ignoreDomainCount_ = nullptr;};
    inline int32_t ignoreDomainCount() const { DARABONBA_PTR_GET_DEFAULT(ignoreDomainCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setIgnoreDomainCount(int32_t ignoreDomainCount) { DARABONBA_PTR_SET_VALUE(ignoreDomainCount_, ignoreDomainCount) };


    // ignoreDstIPCount Field Functions 
    bool hasIgnoreDstIPCount() const { return this->ignoreDstIPCount_ != nullptr;};
    void deleteIgnoreDstIPCount() { this->ignoreDstIPCount_ = nullptr;};
    inline int32_t ignoreDstIPCount() const { DARABONBA_PTR_GET_DEFAULT(ignoreDstIPCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setIgnoreDstIPCount(int32_t ignoreDstIPCount) { DARABONBA_PTR_SET_VALUE(ignoreDstIPCount_, ignoreDstIPCount) };


    // privateRiskAssetCount Field Functions 
    bool hasPrivateRiskAssetCount() const { return this->privateRiskAssetCount_ != nullptr;};
    void deletePrivateRiskAssetCount() { this->privateRiskAssetCount_ = nullptr;};
    inline int64_t privateRiskAssetCount() const { DARABONBA_PTR_GET_DEFAULT(privateRiskAssetCount_, 0L) };
    inline DescribeOutgoingStatisticResponseBody& setPrivateRiskAssetCount(int64_t privateRiskAssetCount) { DARABONBA_PTR_SET_VALUE(privateRiskAssetCount_, privateRiskAssetCount) };


    // privateTotalAssetCount Field Functions 
    bool hasPrivateTotalAssetCount() const { return this->privateTotalAssetCount_ != nullptr;};
    void deletePrivateTotalAssetCount() { this->privateTotalAssetCount_ = nullptr;};
    inline int64_t privateTotalAssetCount() const { DARABONBA_PTR_GET_DEFAULT(privateTotalAssetCount_, 0L) };
    inline DescribeOutgoingStatisticResponseBody& setPrivateTotalAssetCount(int64_t privateTotalAssetCount) { DARABONBA_PTR_SET_VALUE(privateTotalAssetCount_, privateTotalAssetCount) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingStatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // riskAssetCount Field Functions 
    bool hasRiskAssetCount() const { return this->riskAssetCount_ != nullptr;};
    void deleteRiskAssetCount() { this->riskAssetCount_ = nullptr;};
    inline int32_t riskAssetCount() const { DARABONBA_PTR_GET_DEFAULT(riskAssetCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setRiskAssetCount(int32_t riskAssetCount) { DARABONBA_PTR_SET_VALUE(riskAssetCount_, riskAssetCount) };


    // riskDomainCount Field Functions 
    bool hasRiskDomainCount() const { return this->riskDomainCount_ != nullptr;};
    void deleteRiskDomainCount() { this->riskDomainCount_ = nullptr;};
    inline int32_t riskDomainCount() const { DARABONBA_PTR_GET_DEFAULT(riskDomainCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setRiskDomainCount(int32_t riskDomainCount) { DARABONBA_PTR_SET_VALUE(riskDomainCount_, riskDomainCount) };


    // riskDstIPCount Field Functions 
    bool hasRiskDstIPCount() const { return this->riskDstIPCount_ != nullptr;};
    void deleteRiskDstIPCount() { this->riskDstIPCount_ = nullptr;};
    inline int32_t riskDstIPCount() const { DARABONBA_PTR_GET_DEFAULT(riskDstIPCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setRiskDstIPCount(int32_t riskDstIPCount) { DARABONBA_PTR_SET_VALUE(riskDstIPCount_, riskDstIPCount) };


    // subscribeAssetCount Field Functions 
    bool hasSubscribeAssetCount() const { return this->subscribeAssetCount_ != nullptr;};
    void deleteSubscribeAssetCount() { this->subscribeAssetCount_ = nullptr;};
    inline int32_t subscribeAssetCount() const { DARABONBA_PTR_GET_DEFAULT(subscribeAssetCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setSubscribeAssetCount(int32_t subscribeAssetCount) { DARABONBA_PTR_SET_VALUE(subscribeAssetCount_, subscribeAssetCount) };


    // subscribeDomainCount Field Functions 
    bool hasSubscribeDomainCount() const { return this->subscribeDomainCount_ != nullptr;};
    void deleteSubscribeDomainCount() { this->subscribeDomainCount_ = nullptr;};
    inline int32_t subscribeDomainCount() const { DARABONBA_PTR_GET_DEFAULT(subscribeDomainCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setSubscribeDomainCount(int32_t subscribeDomainCount) { DARABONBA_PTR_SET_VALUE(subscribeDomainCount_, subscribeDomainCount) };


    // subscribeDstIPCount Field Functions 
    bool hasSubscribeDstIPCount() const { return this->subscribeDstIPCount_ != nullptr;};
    void deleteSubscribeDstIPCount() { this->subscribeDstIPCount_ = nullptr;};
    inline int32_t subscribeDstIPCount() const { DARABONBA_PTR_GET_DEFAULT(subscribeDstIPCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setSubscribeDstIPCount(int32_t subscribeDstIPCount) { DARABONBA_PTR_SET_VALUE(subscribeDstIPCount_, subscribeDstIPCount) };


    // totalAssetCount Field Functions 
    bool hasTotalAssetCount() const { return this->totalAssetCount_ != nullptr;};
    void deleteTotalAssetCount() { this->totalAssetCount_ = nullptr;};
    inline int32_t totalAssetCount() const { DARABONBA_PTR_GET_DEFAULT(totalAssetCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setTotalAssetCount(int32_t totalAssetCount) { DARABONBA_PTR_SET_VALUE(totalAssetCount_, totalAssetCount) };


    // totalDomainCount Field Functions 
    bool hasTotalDomainCount() const { return this->totalDomainCount_ != nullptr;};
    void deleteTotalDomainCount() { this->totalDomainCount_ = nullptr;};
    inline int32_t totalDomainCount() const { DARABONBA_PTR_GET_DEFAULT(totalDomainCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setTotalDomainCount(int32_t totalDomainCount) { DARABONBA_PTR_SET_VALUE(totalDomainCount_, totalDomainCount) };


    // totalDstIPCount Field Functions 
    bool hasTotalDstIPCount() const { return this->totalDstIPCount_ != nullptr;};
    void deleteTotalDstIPCount() { this->totalDstIPCount_ = nullptr;};
    inline int32_t totalDstIPCount() const { DARABONBA_PTR_GET_DEFAULT(totalDstIPCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setTotalDstIPCount(int32_t totalDstIPCount) { DARABONBA_PTR_SET_VALUE(totalDstIPCount_, totalDstIPCount) };


    // totalProtocolCount Field Functions 
    bool hasTotalProtocolCount() const { return this->totalProtocolCount_ != nullptr;};
    void deleteTotalProtocolCount() { this->totalProtocolCount_ = nullptr;};
    inline int32_t totalProtocolCount() const { DARABONBA_PTR_GET_DEFAULT(totalProtocolCount_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setTotalProtocolCount(int32_t totalProtocolCount) { DARABONBA_PTR_SET_VALUE(totalProtocolCount_, totalProtocolCount) };


    // uncoveredAclDomain Field Functions 
    bool hasUncoveredAclDomain() const { return this->uncoveredAclDomain_ != nullptr;};
    void deleteUncoveredAclDomain() { this->uncoveredAclDomain_ = nullptr;};
    inline int32_t uncoveredAclDomain() const { DARABONBA_PTR_GET_DEFAULT(uncoveredAclDomain_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setUncoveredAclDomain(int32_t uncoveredAclDomain) { DARABONBA_PTR_SET_VALUE(uncoveredAclDomain_, uncoveredAclDomain) };


    // uncoveredAclDstIP Field Functions 
    bool hasUncoveredAclDstIP() const { return this->uncoveredAclDstIP_ != nullptr;};
    void deleteUncoveredAclDstIP() { this->uncoveredAclDstIP_ = nullptr;};
    inline int32_t uncoveredAclDstIP() const { DARABONBA_PTR_GET_DEFAULT(uncoveredAclDstIP_, 0) };
    inline DescribeOutgoingStatisticResponseBody& setUncoveredAclDstIP(int32_t uncoveredAclDstIP) { DARABONBA_PTR_SET_VALUE(uncoveredAclDstIP_, uncoveredAclDstIP) };


    // unknownProtocolRadio Field Functions 
    bool hasUnknownProtocolRadio() const { return this->unknownProtocolRadio_ != nullptr;};
    void deleteUnknownProtocolRadio() { this->unknownProtocolRadio_ = nullptr;};
    inline string unknownProtocolRadio() const { DARABONBA_PTR_GET_DEFAULT(unknownProtocolRadio_, "") };
    inline DescribeOutgoingStatisticResponseBody& setUnknownProtocolRadio(string unknownProtocolRadio) { DARABONBA_PTR_SET_VALUE(unknownProtocolRadio_, unknownProtocolRadio) };


  protected:
    std::shared_ptr<int32_t> ignoreAssetCount_ = nullptr;
    std::shared_ptr<int32_t> ignoreDomainCount_ = nullptr;
    std::shared_ptr<int32_t> ignoreDstIPCount_ = nullptr;
    std::shared_ptr<int64_t> privateRiskAssetCount_ = nullptr;
    std::shared_ptr<int64_t> privateTotalAssetCount_ = nullptr;
    std::shared_ptr<string> requestId_ = nullptr;
    std::shared_ptr<int32_t> riskAssetCount_ = nullptr;
    std::shared_ptr<int32_t> riskDomainCount_ = nullptr;
    std::shared_ptr<int32_t> riskDstIPCount_ = nullptr;
    std::shared_ptr<int32_t> subscribeAssetCount_ = nullptr;
    std::shared_ptr<int32_t> subscribeDomainCount_ = nullptr;
    std::shared_ptr<int32_t> subscribeDstIPCount_ = nullptr;
    std::shared_ptr<int32_t> totalAssetCount_ = nullptr;
    std::shared_ptr<int32_t> totalDomainCount_ = nullptr;
    std::shared_ptr<int32_t> totalDstIPCount_ = nullptr;
    std::shared_ptr<int32_t> totalProtocolCount_ = nullptr;
    std::shared_ptr<int32_t> uncoveredAclDomain_ = nullptr;
    std::shared_ptr<int32_t> uncoveredAclDstIP_ = nullptr;
    std::shared_ptr<string> unknownProtocolRadio_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
