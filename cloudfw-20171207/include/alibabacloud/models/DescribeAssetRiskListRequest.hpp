// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETRISKLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETRISKLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAssetRiskListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetRiskListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(IpAddrList, ipAddrList_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(SourceIp, sourceIp_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetRiskListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(IpAddrList, ipAddrList_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(SourceIp, sourceIp_);
    };
    DescribeAssetRiskListRequest() = default ;
    DescribeAssetRiskListRequest(const DescribeAssetRiskListRequest &) = default ;
    DescribeAssetRiskListRequest(DescribeAssetRiskListRequest &&) = default ;
    DescribeAssetRiskListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetRiskListRequest() = default ;
    DescribeAssetRiskListRequest& operator=(const DescribeAssetRiskListRequest &) = default ;
    DescribeAssetRiskListRequest& operator=(DescribeAssetRiskListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ipAddrList_ == nullptr
        && this->ipVersion_ == nullptr && this->lang_ == nullptr && this->sourceIp_ == nullptr; };
    // ipAddrList Field Functions 
    bool hasIpAddrList() const { return this->ipAddrList_ != nullptr;};
    void deleteIpAddrList() { this->ipAddrList_ = nullptr;};
    inline const vector<string> & getIpAddrList() const { DARABONBA_PTR_GET_CONST(ipAddrList_, vector<string>) };
    inline vector<string> getIpAddrList() { DARABONBA_PTR_GET(ipAddrList_, vector<string>) };
    inline DescribeAssetRiskListRequest& setIpAddrList(const vector<string> & ipAddrList) { DARABONBA_PTR_SET_VALUE(ipAddrList_, ipAddrList) };
    inline DescribeAssetRiskListRequest& setIpAddrList(vector<string> && ipAddrList) { DARABONBA_PTR_SET_RVALUE(ipAddrList_, ipAddrList) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline int32_t getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, 0) };
    inline DescribeAssetRiskListRequest& setIpVersion(int32_t ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAssetRiskListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // sourceIp Field Functions 
    bool hasSourceIp() const { return this->sourceIp_ != nullptr;};
    void deleteSourceIp() { this->sourceIp_ = nullptr;};
    inline string getSourceIp() const { DARABONBA_PTR_GET_DEFAULT(sourceIp_, "") };
    inline DescribeAssetRiskListRequest& setSourceIp(string sourceIp) { DARABONBA_PTR_SET_VALUE(sourceIp_, sourceIp) };


  protected:
    // The IP addresses to query. Separate the IP addresses with commas (,). You can specify up to 20 IP addresses at a time.
    // 
    // > 
    // 
    // *   Example IPv4 address: 47.97.XX.XX.
    // 
    // *   Example IPv6 address: 2001:db8:ffff:ffff:ffff:XXXX:ffff.
    shared_ptr<vector<string>> ipAddrList_ {};
    // The IP version of the asset that is protected by Cloud Firewall.
    // 
    // Valid values:
    // 
    // *   **4** (default): IPv4
    // *   **6**: IPv6
    // 
    // This parameter is required.
    shared_ptr<int32_t> ipVersion_ {};
    // The language of the content within the response. Valid values:
    // 
    // *   **zh** (default): Chinese
    // *   **en**: English
    shared_ptr<string> lang_ {};
    // The source IP address of the request.
    shared_ptr<string> sourceIp_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
