// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEASSETLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEASSETLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeAssetListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAssetListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_TO_JSON(Lang, lang_);
      DARABONBA_PTR_TO_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_TO_JSON(NewResourceTag, newResourceTag_);
      DARABONBA_PTR_TO_JSON(OutStatistic, outStatistic_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(SearchItem, searchItem_);
      DARABONBA_PTR_TO_JSON(SensitiveStatus, sensitiveStatus_);
      DARABONBA_PTR_TO_JSON(SgStatus, sgStatus_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Type, type_);
      DARABONBA_PTR_TO_JSON(UserType, userType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAssetListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(IpVersion, ipVersion_);
      DARABONBA_PTR_FROM_JSON(Lang, lang_);
      DARABONBA_PTR_FROM_JSON(MemberUid, memberUid_);
      DARABONBA_PTR_FROM_JSON(NewResourceTag, newResourceTag_);
      DARABONBA_PTR_FROM_JSON(OutStatistic, outStatistic_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RegionNo, regionNo_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(SearchItem, searchItem_);
      DARABONBA_PTR_FROM_JSON(SensitiveStatus, sensitiveStatus_);
      DARABONBA_PTR_FROM_JSON(SgStatus, sgStatus_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
      DARABONBA_PTR_FROM_JSON(UserType, userType_);
    };
    DescribeAssetListRequest() = default ;
    DescribeAssetListRequest(const DescribeAssetListRequest &) = default ;
    DescribeAssetListRequest(DescribeAssetListRequest &&) = default ;
    DescribeAssetListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAssetListRequest() = default ;
    DescribeAssetListRequest& operator=(const DescribeAssetListRequest &) = default ;
    DescribeAssetListRequest& operator=(DescribeAssetListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->currentPage_ == nullptr
        && return this->ipVersion_ == nullptr && return this->lang_ == nullptr && return this->memberUid_ == nullptr && return this->newResourceTag_ == nullptr && return this->outStatistic_ == nullptr
        && return this->pageSize_ == nullptr && return this->regionNo_ == nullptr && return this->resourceType_ == nullptr && return this->searchItem_ == nullptr && return this->sensitiveStatus_ == nullptr
        && return this->sgStatus_ == nullptr && return this->status_ == nullptr && return this->type_ == nullptr && return this->userType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeAssetListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string ipVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeAssetListRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string lang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAssetListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t memberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeAssetListRequest& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // newResourceTag Field Functions 
    bool hasNewResourceTag() const { return this->newResourceTag_ != nullptr;};
    void deleteNewResourceTag() { this->newResourceTag_ = nullptr;};
    inline string newResourceTag() const { DARABONBA_PTR_GET_DEFAULT(newResourceTag_, "") };
    inline DescribeAssetListRequest& setNewResourceTag(string newResourceTag) { DARABONBA_PTR_SET_VALUE(newResourceTag_, newResourceTag) };


    // outStatistic Field Functions 
    bool hasOutStatistic() const { return this->outStatistic_ != nullptr;};
    void deleteOutStatistic() { this->outStatistic_ = nullptr;};
    inline string outStatistic() const { DARABONBA_PTR_GET_DEFAULT(outStatistic_, "") };
    inline DescribeAssetListRequest& setOutStatistic(string outStatistic) { DARABONBA_PTR_SET_VALUE(outStatistic_, outStatistic) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAssetListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string regionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeAssetListRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeAssetListRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // searchItem Field Functions 
    bool hasSearchItem() const { return this->searchItem_ != nullptr;};
    void deleteSearchItem() { this->searchItem_ = nullptr;};
    inline string searchItem() const { DARABONBA_PTR_GET_DEFAULT(searchItem_, "") };
    inline DescribeAssetListRequest& setSearchItem(string searchItem) { DARABONBA_PTR_SET_VALUE(searchItem_, searchItem) };


    // sensitiveStatus Field Functions 
    bool hasSensitiveStatus() const { return this->sensitiveStatus_ != nullptr;};
    void deleteSensitiveStatus() { this->sensitiveStatus_ = nullptr;};
    inline string sensitiveStatus() const { DARABONBA_PTR_GET_DEFAULT(sensitiveStatus_, "") };
    inline DescribeAssetListRequest& setSensitiveStatus(string sensitiveStatus) { DARABONBA_PTR_SET_VALUE(sensitiveStatus_, sensitiveStatus) };


    // sgStatus Field Functions 
    bool hasSgStatus() const { return this->sgStatus_ != nullptr;};
    void deleteSgStatus() { this->sgStatus_ = nullptr;};
    inline string sgStatus() const { DARABONBA_PTR_GET_DEFAULT(sgStatus_, "") };
    inline DescribeAssetListRequest& setSgStatus(string sgStatus) { DARABONBA_PTR_SET_VALUE(sgStatus_, sgStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string status() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAssetListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAssetListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string userType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline DescribeAssetListRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The page number. Valid values: 1 to 50.
    // 
    // This parameter is required.
    std::shared_ptr<string> currentPage_ = nullptr;
    // The IP version of the asset that is protected by Cloud Firewall. Valid values:
    // 
    // *   **4**: IPv4 (default)
    // *   **6**: IPv6
    std::shared_ptr<string> ipVersion_ = nullptr;
    // The language of the content within the response. Valid values:
    // 
    // *   **zh**: Chinese (default)
    // *   **en**: English
    std::shared_ptr<string> lang_ = nullptr;
    // The UID of the member that is added to Cloud Firewall.
    std::shared_ptr<int64_t> memberUid_ = nullptr;
    // The time when the asset was added. Valid values:
    // 
    // *   **discovered in 1 hour**: within one hour.
    // *   **discovered in 1 day**: within one day.
    // *   **discovered in 7 days**: within seven days.
    std::shared_ptr<string> newResourceTag_ = nullptr;
    // Whether to query external traffic information.
    std::shared_ptr<string> outStatistic_ = nullptr;
    // The number of entries per page. Valid values: 1 to 50.
    // 
    // This parameter is required.
    std::shared_ptr<string> pageSize_ = nullptr;
    // The region ID of your Cloud Firewall.
    // 
    // > For more information about the regions, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
    std::shared_ptr<string> regionNo_ = nullptr;
    // The type of the asset. Valid values:
    // 
    // *   **BastionHostEgressIP**: the egress IP address of a bastion host
    // *   **BastionHostIngressIP**: the ingress IP address of a bastion host
    // *   **EcsEIP**: the elastic IP address (EIP) of an Elastic Compute Service (ECS) instance
    // *   **EcsPublicIP**: the public IP address of an ECS instance
    // *   **EIP**: the EIP
    // *   **EniEIP**: the EIP of an elastic network interface (ENI)
    // *   **NatEIP**: the EIP of a NAT gateway
    // *   **SlbEIP**: the EIP of a Server Load Balancer (SLB) instance or a Classic Load Balancer (CLB) instance
    // *   **SlbPublicIP**: the public IP address of an SLB instance or a CLB instance
    // *   **NatPublicIP**: the public IP address of a NAT gateway
    // *   **HAVIP**: the high-availability virtual IP address (HAVIP)
    std::shared_ptr<string> resourceType_ = nullptr;
    // The instance ID or IP address of the asset.
    std::shared_ptr<string> searchItem_ = nullptr;
    // Data leakage detection activation status.
    std::shared_ptr<string> sensitiveStatus_ = nullptr;
    // The status of the security group policy. Valid values:
    // 
    // *   **pass**: delivered
    // *   **block**: undelivered
    // *   **unsupport**: unsupported
    // 
    // > If you do not specify this parameter, the assets on which security group policies in all states take effect are queried.
    std::shared_ptr<string> sgStatus_ = nullptr;
    // The status of the firewall. Valid values:
    // 
    // *   **open**: The firewall is enabled.
    // *   **opening**: The firewall is being enabled.
    // *   **closed**: The firewall is disabled.
    // *   **closing**: The firewall is being disabled.
    // 
    // > If you do not specify this parameter, the assets that are configured for firewalls in all states are queried.
    std::shared_ptr<string> status_ = nullptr;
    // This parameter is deprecated.
    std::shared_ptr<string> type_ = nullptr;
    // The edition of Cloud Firewall. Valid values:
    // 
    // *   **buy**: a paid edition (default)
    // *   **free**: Free Edition
    std::shared_ptr<string> userType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
