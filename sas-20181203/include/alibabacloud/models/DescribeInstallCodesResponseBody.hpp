// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEINSTALLCODESRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEINSTALLCODESRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeInstallCodesResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeInstallCodesResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(InstallCodes, installCodes_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeInstallCodesResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(InstallCodes, installCodes_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeInstallCodesResponseBody() = default ;
    DescribeInstallCodesResponseBody(const DescribeInstallCodesResponseBody &) = default ;
    DescribeInstallCodesResponseBody(DescribeInstallCodesResponseBody &&) = default ;
    DescribeInstallCodesResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeInstallCodesResponseBody() = default ;
    DescribeInstallCodesResponseBody& operator=(const DescribeInstallCodesResponseBody &) = default ;
    DescribeInstallCodesResponseBody& operator=(DescribeInstallCodesResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class InstallCodes : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const InstallCodes& obj) { 
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
      friend void from_json(const Darabonba::Json& j, InstallCodes& obj) { 
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
      InstallCodes() = default ;
      InstallCodes(const InstallCodes &) = default ;
      InstallCodes(InstallCodes &&) = default ;
      InstallCodes(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~InstallCodes() = default ;
      InstallCodes& operator=(const InstallCodes &) = default ;
      InstallCodes& operator=(InstallCodes &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->captchaCode_ == nullptr
        && this->expiredDate_ == nullptr && this->groupId_ == nullptr && this->groupName_ == nullptr && this->onlyImage_ == nullptr && this->os_ == nullptr
        && this->privateLinkEndpointId_ == nullptr && this->proxyCluster_ == nullptr && this->vendorName_ == nullptr; };
      // captchaCode Field Functions 
      bool hasCaptchaCode() const { return this->captchaCode_ != nullptr;};
      void deleteCaptchaCode() { this->captchaCode_ = nullptr;};
      inline string getCaptchaCode() const { DARABONBA_PTR_GET_DEFAULT(captchaCode_, "") };
      inline InstallCodes& setCaptchaCode(string captchaCode) { DARABONBA_PTR_SET_VALUE(captchaCode_, captchaCode) };


      // expiredDate Field Functions 
      bool hasExpiredDate() const { return this->expiredDate_ != nullptr;};
      void deleteExpiredDate() { this->expiredDate_ = nullptr;};
      inline int64_t getExpiredDate() const { DARABONBA_PTR_GET_DEFAULT(expiredDate_, 0L) };
      inline InstallCodes& setExpiredDate(int64_t expiredDate) { DARABONBA_PTR_SET_VALUE(expiredDate_, expiredDate) };


      // groupId Field Functions 
      bool hasGroupId() const { return this->groupId_ != nullptr;};
      void deleteGroupId() { this->groupId_ = nullptr;};
      inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
      inline InstallCodes& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


      // groupName Field Functions 
      bool hasGroupName() const { return this->groupName_ != nullptr;};
      void deleteGroupName() { this->groupName_ = nullptr;};
      inline string getGroupName() const { DARABONBA_PTR_GET_DEFAULT(groupName_, "") };
      inline InstallCodes& setGroupName(string groupName) { DARABONBA_PTR_SET_VALUE(groupName_, groupName) };


      // onlyImage Field Functions 
      bool hasOnlyImage() const { return this->onlyImage_ != nullptr;};
      void deleteOnlyImage() { this->onlyImage_ = nullptr;};
      inline bool getOnlyImage() const { DARABONBA_PTR_GET_DEFAULT(onlyImage_, false) };
      inline InstallCodes& setOnlyImage(bool onlyImage) { DARABONBA_PTR_SET_VALUE(onlyImage_, onlyImage) };


      // os Field Functions 
      bool hasOs() const { return this->os_ != nullptr;};
      void deleteOs() { this->os_ = nullptr;};
      inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
      inline InstallCodes& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


      // privateLinkEndpointId Field Functions 
      bool hasPrivateLinkEndpointId() const { return this->privateLinkEndpointId_ != nullptr;};
      void deletePrivateLinkEndpointId() { this->privateLinkEndpointId_ = nullptr;};
      inline int64_t getPrivateLinkEndpointId() const { DARABONBA_PTR_GET_DEFAULT(privateLinkEndpointId_, 0L) };
      inline InstallCodes& setPrivateLinkEndpointId(int64_t privateLinkEndpointId) { DARABONBA_PTR_SET_VALUE(privateLinkEndpointId_, privateLinkEndpointId) };


      // proxyCluster Field Functions 
      bool hasProxyCluster() const { return this->proxyCluster_ != nullptr;};
      void deleteProxyCluster() { this->proxyCluster_ = nullptr;};
      inline string getProxyCluster() const { DARABONBA_PTR_GET_DEFAULT(proxyCluster_, "") };
      inline InstallCodes& setProxyCluster(string proxyCluster) { DARABONBA_PTR_SET_VALUE(proxyCluster_, proxyCluster) };


      // vendorName Field Functions 
      bool hasVendorName() const { return this->vendorName_ != nullptr;};
      void deleteVendorName() { this->vendorName_ = nullptr;};
      inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
      inline InstallCodes& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


    protected:
      // The verification code for you to manually install the Security Center agent.
      shared_ptr<string> captchaCode_ {};
      // The timestamp generated when the commands used to install the Security Center agent expire. Unit: milliseconds.
      shared_ptr<int64_t> expiredDate_ {};
      // The ID of the server group to which the server belongs.
      shared_ptr<int64_t> groupId_ {};
      // The name of the server group to which the server belongs.
      shared_ptr<string> groupName_ {};
      // Indicates whether an image is used to install the Security Center agent. Valid values:
      // 
      // *   **true**
      // *   **false**
      shared_ptr<bool> onlyImage_ {};
      // The operating system of the server. Valid values:
      // 
      // *   **linux**
      // *   **windows**
      shared_ptr<string> os_ {};
      // The ID of the PrivateLink endpoint.
      shared_ptr<int64_t> privateLinkEndpointId_ {};
      // The name of the proxy cluster.
      shared_ptr<string> proxyCluster_ {};
      // The name of the server provider.
      shared_ptr<string> vendorName_ {};
    };

    virtual bool empty() const override { return this->installCodes_ == nullptr
        && this->requestId_ == nullptr; };
    // installCodes Field Functions 
    bool hasInstallCodes() const { return this->installCodes_ != nullptr;};
    void deleteInstallCodes() { this->installCodes_ = nullptr;};
    inline const vector<DescribeInstallCodesResponseBody::InstallCodes> & getInstallCodes() const { DARABONBA_PTR_GET_CONST(installCodes_, vector<DescribeInstallCodesResponseBody::InstallCodes>) };
    inline vector<DescribeInstallCodesResponseBody::InstallCodes> getInstallCodes() { DARABONBA_PTR_GET(installCodes_, vector<DescribeInstallCodesResponseBody::InstallCodes>) };
    inline DescribeInstallCodesResponseBody& setInstallCodes(const vector<DescribeInstallCodesResponseBody::InstallCodes> & installCodes) { DARABONBA_PTR_SET_VALUE(installCodes_, installCodes) };
    inline DescribeInstallCodesResponseBody& setInstallCodes(vector<DescribeInstallCodesResponseBody::InstallCodes> && installCodes) { DARABONBA_PTR_SET_RVALUE(installCodes_, installCodes) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeInstallCodesResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The information about the installation commands.
    shared_ptr<vector<DescribeInstallCodesResponseBody::InstallCodes>> installCodes_ {};
    // The ID of the request, which is used to locate and troubleshoot issues.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
