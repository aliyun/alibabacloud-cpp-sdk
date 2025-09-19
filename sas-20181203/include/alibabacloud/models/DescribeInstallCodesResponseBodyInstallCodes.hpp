// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTALLCODESRESPONSEBODYINSTALLCODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTALLCODESRESPONSEBODYINSTALLCODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstallCodesResponseBodyInstallCodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstallCodesResponseBodyInstallCodes& obj) { 
      DARABONBA_PTR_TO_JSON(CaptchaCode, captchaCode_);
      DARABONBA_PTR_TO_JSON(ExpiredDate, expiredDate_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(GroupName, groupName_);
      DARABONBA_PTR_TO_JSON(OnlyImage, onlyImage_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PrivateLinkEndpointId, privateLinkEndpointId_);
      DARABONBA_PTR_TO_JSON(ProxyCluster, proxyCluster_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstallCodesResponseBodyInstallCodes& obj) { 
      DARABONBA_PTR_FROM_JSON(CaptchaCode, captchaCode_);
      DARABONBA_PTR_FROM_JSON(ExpiredDate, expiredDate_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(GroupName, groupName_);
      DARABONBA_PTR_FROM_JSON(OnlyImage, onlyImage_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PrivateLinkEndpointId, privateLinkEndpointId_);
      DARABONBA_PTR_FROM_JSON(ProxyCluster, proxyCluster_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
    };
    DescribeInstallCodesResponseBodyInstallCodes() = default ;
    DescribeInstallCodesResponseBodyInstallCodes(const DescribeInstallCodesResponseBodyInstallCodes &) = default ;
    DescribeInstallCodesResponseBodyInstallCodes(DescribeInstallCodesResponseBodyInstallCodes &&) = default ;
    DescribeInstallCodesResponseBodyInstallCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstallCodesResponseBodyInstallCodes() = default ;
    DescribeInstallCodesResponseBodyInstallCodes& operator=(const DescribeInstallCodesResponseBodyInstallCodes &) = default ;
    DescribeInstallCodesResponseBodyInstallCodes& operator=(DescribeInstallCodesResponseBodyInstallCodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->captchaCode_ != nullptr
        && this->expiredDate_ != nullptr && this->groupId_ != nullptr && this->groupName_ != nullptr && this->onlyImage_ != nullptr && this->os_ != nullptr
        && this->privateLinkEndpointId_ != nullptr && this->proxyCluster_ != nullptr && this->vendorName_ != nullptr; };
    // captchaCode Field Functions 
    bool hasCaptchaCode() const { return this->captchaCode_ != nullptr;};
    void deleteCaptchaCode() { this->captchaCode_ = nullptr;};
    inline string captchaCode() const { DARABONBA_PTR_GET_DEFAULT(captchaCode_, "") };
    inline DescribeInstallCodesResponseBodyInstallCodes& setCaptchaCode(string captchaCode) { DARABONBA_PTR_SET_VALUE(captchaCode_, captchaCode) };


    // expiredDate Field Functions 
    bool hasExpiredDate() const { return this->expiredDate_ != nullptr;};
    void deleteExpiredDate() { this->expiredDate_ = nullptr;};
    inline int64_t expiredDate() const { DARABONBA_PTR_GET_DEFAULT(expiredDate_, 0L) };
    inline DescribeInstallCodesResponseBodyInstallCodes& setExpiredDate(int64_t expiredDate) { DARABONBA_PTR_SET_VALUE(expiredDate_, expiredDate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t groupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline DescribeInstallCodesResponseBodyInstallCodes& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // groupName Field Functions 
    bool hasGroupName() const { return this->groupName_ != nullptr;};
    void deleteGroupName() { this->groupName_ = nullptr;};
    inline string groupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
    inline DescribeInstallCodesResponseBodyInstallCodes& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


    // onlyImage Field Functions 
    bool hasOnlyImage() const { return this->onlyImage_ != nullptr;};
    void deleteOnlyImage() { this->onlyImage_ = nullptr;};
    inline bool onlyImage() const { DARABONBA_PTR_GET_DEFAULT(onlyImage_, false) };
    inline DescribeInstallCodesResponseBodyInstallCodes& setOnlyImage(bool onlyImage) { DARABONBA_PTR_SET_VALUE(onlyImage_, onlyImage) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string os() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline DescribeInstallCodesResponseBodyInstallCodes& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // privateLinkEndpointId Field Functions 
    bool hasPrivateLinkEndpointId() const { return this->privateLinkEndpointId_ != nullptr;};
    void deletePrivateLinkEndpointId() { this->privateLinkEndpointId_ = nullptr;};
    inline int64_t privateLinkEndpointId() const { DARABONBA_PTR_GET_DEFAULT(privateLinkEndpointId_, 0L) };
    inline DescribeInstallCodesResponseBodyInstallCodes& setPrivateLinkEndpointId(int64_t privateLinkEndpointId) { DARABONBA_PTR_SET_VALUE(privateLinkEndpointId_, privateLinkEndpointId) };


    // proxyCluster Field Functions 
    bool hasProxyCluster() const { return this->proxyCluster_ != nullptr;};
    void deleteProxyCluster() { this->proxyCluster_ = nullptr;};
    inline string proxyCluster() const { DARABONBA_PTR_GET_DEFAULT(proxyCluster_, "") };
    inline DescribeInstallCodesResponseBodyInstallCodes& setProxyCluster(string proxyCluster) { DARABONBA_PTR_SET_VALUE(proxyCluster_, proxyCluster) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string vendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline DescribeInstallCodesResponseBodyInstallCodes& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


  protected:
    // The verification code for you to manually install the Security Center agent.
    std::shared_ptr<string> captchaCode_ = nullptr;
    // The timestamp generated when the commands used to install the Security Center agent expire. Unit: milliseconds.
    std::shared_ptr<int64_t> expiredDate_ = nullptr;
    // The ID of the server group to which the server belongs.
    std::shared_ptr<int64_t> groupId_ = nullptr;
    // The name of the server group to which the server belongs.
    std::shared_ptr<string> groupName_ = nullptr;
    // Indicates whether an image is used to install the Security Center agent. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> onlyImage_ = nullptr;
    // The operating system of the server. Valid values:
    // 
    // *   **linux**
    // *   **windows**
    std::shared_ptr<string> os_ = nullptr;
    // The ID of the PrivateLink endpoint.
    std::shared_ptr<int64_t> privateLinkEndpointId_ = nullptr;
    // The name of the proxy cluster.
    std::shared_ptr<string> proxyCluster_ = nullptr;
    // The name of the server provider.
    std::shared_ptr<string> vendorName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
