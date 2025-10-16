// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETRISKLISTRESPONSEBODYASSETLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETRISKLISTRESPONSEBODYASSETLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAssetRiskListResponseBodyAssetList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetRiskListResponseBodyAssetList& obj) { 
      DARABONBA_PTR_TO_JSON(Ip, ip_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Reason, reason_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetRiskListResponseBodyAssetList& obj) { 
      DARABONBA_PTR_FROM_JSON(Ip, ip_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Reason, reason_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    DescribeAssetRiskListResponseBodyAssetList() = default ;
    DescribeAssetRiskListResponseBodyAssetList(const DescribeAssetRiskListResponseBodyAssetList &) = default ;
    DescribeAssetRiskListResponseBodyAssetList(DescribeAssetRiskListResponseBodyAssetList &&) = default ;
    DescribeAssetRiskListResponseBodyAssetList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetRiskListResponseBodyAssetList() = default ;
    DescribeAssetRiskListResponseBodyAssetList& operator=(const DescribeAssetRiskListResponseBodyAssetList &) = default ;
    DescribeAssetRiskListResponseBodyAssetList& operator=(DescribeAssetRiskListResponseBodyAssetList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ip_ == nullptr
        && return this->ipVersion_ == nullptr && return this->reason_ == nullptr && return this->riskLevel_ == nullptr; };
    // ip Field Functions 
    bool hasIp() const { return this->ip_ != nullptr;};
    void deleteIp() { this->ip_ = nullptr;};
    inline string ip() const { DARABONBA_PTR_GET_DEFAULT(ip_, "") };
    inline DescribeAssetRiskListResponseBodyAssetList& setIp(string ip) { DARABONBA_PTR_SET_VALUE(ip_, ip) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline int64_t ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0L) };
    inline DescribeAssetRiskListResponseBodyAssetList& setIpVersion(int64_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // reason Field Functions 
    bool hasReason() const { return this->reason_ != nullptr;};
    void deleteReason() { this->reason_ = nullptr;};
    inline string reason() const { DARABONBA_PTR_GET_DEFAULT(reason_, "") };
    inline DescribeAssetRiskListResponseBodyAssetList& setReason(string reason) { DARABONBA_PTR_SET_VALUE(reason_, reason) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeAssetRiskListResponseBodyAssetList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    // The IP address of the server.
    std::shared_ptr<string> ip_ = nullptr;
    // The IP version of the asset that is protected by Cloud Firewall.
    // 
    // Valid values:
    // 
    // *   **4**: IPv4
    // *   **6**: IPv6
    std::shared_ptr<int64_t> ipVersion_ = nullptr;
    // The reason for the risk.
    std::shared_ptr<string> reason_ = nullptr;
    // The risk level. Valid values:
    // 
    // *   **low**
    // *   **middle**
    // *   **high**
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
