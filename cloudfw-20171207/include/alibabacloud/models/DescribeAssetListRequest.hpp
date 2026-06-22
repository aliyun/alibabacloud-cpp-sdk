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
        && this->ipVersion_ == nullptr && this->lang_ == nullptr && this->memberUid_ == nullptr && this->newResourceTag_ == nullptr && this->outStatistic_ == nullptr
        && this->pageSize_ == nullptr && this->regionNo_ == nullptr && this->resourceType_ == nullptr && this->searchItem_ == nullptr && this->sensitiveStatus_ == nullptr
        && this->sgStatus_ == nullptr && this->status_ == nullptr && this->type_ == nullptr && this->userType_ == nullptr; };
    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline string getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, "") };
    inline DescribeAssetListRequest& setCurrentPage(string currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // ipVersion Field Functions 
    bool hasIpVersion() const { return this->ipVersion_ != nullptr;};
    void deleteIpVersion() { this->ipVersion_ = nullptr;};
    inline string getIpVersion() const { DARABONBA_PTR_GET_DEFAULT(ipVersion_, "") };
    inline DescribeAssetListRequest& setIpVersion(string ipVersion) { DARABONBA_PTR_SET_VALUE(ipVersion_, ipVersion) };


    // lang Field Functions 
    bool hasLang() const { return this->lang_ != nullptr;};
    void deleteLang() { this->lang_ = nullptr;};
    inline string getLang() const { DARABONBA_PTR_GET_DEFAULT(lang_, "") };
    inline DescribeAssetListRequest& setLang(string lang) { DARABONBA_PTR_SET_VALUE(lang_, lang) };


    // memberUid Field Functions 
    bool hasMemberUid() const { return this->memberUid_ != nullptr;};
    void deleteMemberUid() { this->memberUid_ = nullptr;};
    inline int64_t getMemberUid() const { DARABONBA_PTR_GET_DEFAULT(memberUid_, 0L) };
    inline DescribeAssetListRequest& setMemberUid(int64_t memberUid) { DARABONBA_PTR_SET_VALUE(memberUid_, memberUid) };


    // newResourceTag Field Functions 
    bool hasNewResourceTag() const { return this->newResourceTag_ != nullptr;};
    void deleteNewResourceTag() { this->newResourceTag_ = nullptr;};
    inline string getNewResourceTag() const { DARABONBA_PTR_GET_DEFAULT(newResourceTag_, "") };
    inline DescribeAssetListRequest& setNewResourceTag(string newResourceTag) { DARABONBA_PTR_SET_VALUE(newResourceTag_, newResourceTag) };


    // outStatistic Field Functions 
    bool hasOutStatistic() const { return this->outStatistic_ != nullptr;};
    void deleteOutStatistic() { this->outStatistic_ = nullptr;};
    inline string getOutStatistic() const { DARABONBA_PTR_GET_DEFAULT(outStatistic_, "") };
    inline DescribeAssetListRequest& setOutStatistic(string outStatistic) { DARABONBA_PTR_SET_VALUE(outStatistic_, outStatistic) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline string getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, "") };
    inline DescribeAssetListRequest& setPageSize(string pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // regionNo Field Functions 
    bool hasRegionNo() const { return this->regionNo_ != nullptr;};
    void deleteRegionNo() { this->regionNo_ = nullptr;};
    inline string getRegionNo() const { DARABONBA_PTR_GET_DEFAULT(regionNo_, "") };
    inline DescribeAssetListRequest& setRegionNo(string regionNo) { DARABONBA_PTR_SET_VALUE(regionNo_, regionNo) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline DescribeAssetListRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // searchItem Field Functions 
    bool hasSearchItem() const { return this->searchItem_ != nullptr;};
    void deleteSearchItem() { this->searchItem_ = nullptr;};
    inline string getSearchItem() const { DARABONBA_PTR_GET_DEFAULT(searchItem_, "") };
    inline DescribeAssetListRequest& setSearchItem(string searchItem) { DARABONBA_PTR_SET_VALUE(searchItem_, searchItem) };


    // sensitiveStatus Field Functions 
    bool hasSensitiveStatus() const { return this->sensitiveStatus_ != nullptr;};
    void deleteSensitiveStatus() { this->sensitiveStatus_ = nullptr;};
    inline string getSensitiveStatus() const { DARABONBA_PTR_GET_DEFAULT(sensitiveStatus_, "") };
    inline DescribeAssetListRequest& setSensitiveStatus(string sensitiveStatus) { DARABONBA_PTR_SET_VALUE(sensitiveStatus_, sensitiveStatus) };


    // sgStatus Field Functions 
    bool hasSgStatus() const { return this->sgStatus_ != nullptr;};
    void deleteSgStatus() { this->sgStatus_ = nullptr;};
    inline string getSgStatus() const { DARABONBA_PTR_GET_DEFAULT(sgStatus_, "") };
    inline DescribeAssetListRequest& setSgStatus(string sgStatus) { DARABONBA_PTR_SET_VALUE(sgStatus_, sgStatus) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAssetListRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeAssetListRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userType Field Functions 
    bool hasUserType() const { return this->userType_ != nullptr;};
    void deleteUserType() { this->userType_ = nullptr;};
    inline string getUserType() const { DARABONBA_PTR_GET_DEFAULT(userType_, "") };
    inline DescribeAssetListRequest& setUserType(string userType) { DARABONBA_PTR_SET_VALUE(userType_, userType) };


  protected:
    // The page number of the current page in a paginated query.
    // 
    // This parameter is required.
    shared_ptr<string> currentPage_ {};
    // The IP version of the assets protected by Cloud Firewall. Valid values:
    // 
    // - **4** (default): IPv4.
    // - **6**: IPv6.
    shared_ptr<string> ipVersion_ {};
    // The language type of the response. Valid values:
    // 
    // - **zh** (default): Chinese.
    // - **en**: English.
    shared_ptr<string> lang_ {};
    // The UID of the Cloud Firewall member account.
    shared_ptr<int64_t> memberUid_ {};
    // The time when the asset was discovered. Valid values:
    // - **discovered in 1 hour**: The asset was discovered within 1 hour.
    // - **discovered in 1 day**: The asset was discovered within 1 day.
    // - **discovered in 7 days**: The asset was discovered within 7 days.
    shared_ptr<string> newResourceTag_ {};
    // Specifies whether to query outbound traffic information.
    shared_ptr<string> outStatistic_ {};
    // The number of Cloud Firewall-protected assets to display on each page in a paginated query.
    // 
    // This parameter is required.
    shared_ptr<string> pageSize_ {};
    // The region ID of the Cloud Firewall.
    // 
    // > For more information about regions supported by Cloud Firewall, see [Supported regions](https://help.aliyun.com/document_detail/195657.html).
    shared_ptr<string> regionNo_ {};
    // The asset type. Valid values:
    // 
    // - **BastionHostEgressIP**: Bastion host egress IP.
    // - **BastionHostIngressIP**: Bastion host ingress IP.
    // - **EcsEIP**: ECS EIP.
    // - **EcsPublicIP**: ECS public IP.
    // - **EIP**: Elastic IP address.
    // - **EniEIP**: Elastic network interface EIP.
    // - **NatEIP**: NAT EIP.
    // - **SlbEIP**: SLB EIP (CLB EIP).
    // - **SlbPublicIP**: SLB public IP (CLB public IP).
    // - **NatPublicIP**: NAT public IP.
    // - **HAVIP**: High-availability virtual IP.
    // - **NlbEIP**: NLB EIP.
    // - **ApiGatewayEIP**: API Gateway public IP.
    // - **AlbEIP**: ALB EIP.
    // - **AiGatewayEIP**: AI Gateway public IP.
    // - **GaEIP**: GA EIP.
    // - **SwasEIP**: Simple Application Server public IP.
    // - **EcdEIP**: Elastic Desktop Service public IP.
    // - **BastionHostIP**: Bastion host IP.
    shared_ptr<string> resourceType_ {};
    // The IP address or instance ID of the asset.
    shared_ptr<string> searchItem_ {};
    // The status of data leakage detection.
    shared_ptr<string> sensitiveStatus_ {};
    // The security group policy status. Valid values:
    // 
    // - **pass**: Delivered.
    // - **block**: Not delivered.
    // - **unsupport**: Not supported.
    // > If this parameter is not set, all security group policy statuses are queried.
    shared_ptr<string> sgStatus_ {};
    // The Cloud Firewall status. Valid values:
    // 
    // - **open**: Protected.
    // - **opening**: Protection enabling.
    // - **closed**: Not protected.
    // - **closing**: Protection disabling.
    // 
    // > If this parameter is not set, all firewall statuses are queried.
    shared_ptr<string> status_ {};
    // This parameter is deprecated.
    shared_ptr<string> type_ {};
    // The user type. Valid values:
    // 
    // - **buy** (default): Paid user.
    // - **free**: Free user.
    shared_ptr<string> userType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
