// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDINSTALLCODEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDINSTALLCODEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddInstallCodeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddInstallCodeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExpiredDate, expiredDate_);
      DARABONBA_PTR_TO_JSON(GroupId, groupId_);
      DARABONBA_PTR_TO_JSON(OnlyImage, onlyImage_);
      DARABONBA_PTR_TO_JSON(Os, os_);
      DARABONBA_PTR_TO_JSON(PrivateLinkId, privateLinkId_);
      DARABONBA_PTR_TO_JSON(ProxyCluster, proxyCluster_);
      DARABONBA_PTR_TO_JSON(VendorName, vendorName_);
    };
    friend void from_json(const Darabonba::Json& j, AddInstallCodeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExpiredDate, expiredDate_);
      DARABONBA_PTR_FROM_JSON(GroupId, groupId_);
      DARABONBA_PTR_FROM_JSON(OnlyImage, onlyImage_);
      DARABONBA_PTR_FROM_JSON(Os, os_);
      DARABONBA_PTR_FROM_JSON(PrivateLinkId, privateLinkId_);
      DARABONBA_PTR_FROM_JSON(ProxyCluster, proxyCluster_);
      DARABONBA_PTR_FROM_JSON(VendorName, vendorName_);
    };
    AddInstallCodeRequest() = default ;
    AddInstallCodeRequest(const AddInstallCodeRequest &) = default ;
    AddInstallCodeRequest(AddInstallCodeRequest &&) = default ;
    AddInstallCodeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddInstallCodeRequest() = default ;
    AddInstallCodeRequest& operator=(const AddInstallCodeRequest &) = default ;
    AddInstallCodeRequest& operator=(AddInstallCodeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->expiredDate_ == nullptr
        && this->groupId_ == nullptr && this->onlyImage_ == nullptr && this->os_ == nullptr && this->privateLinkId_ == nullptr && this->proxyCluster_ == nullptr
        && this->vendorName_ == nullptr; };
    // expiredDate Field Functions 
    bool hasExpiredDate() const { return this->expiredDate_ != nullptr;};
    void deleteExpiredDate() { this->expiredDate_ = nullptr;};
    inline int64_t getExpiredDate() const { DARABONBA_PTR_GET_DEFAULT(expiredDate_, 0L) };
    inline AddInstallCodeRequest& setExpiredDate(int64_t expiredDate) { DARABONBA_PTR_SET_VALUE(expiredDate_, expiredDate) };


    // groupId Field Functions 
    bool hasGroupId() const { return this->groupId_ != nullptr;};
    void deleteGroupId() { this->groupId_ = nullptr;};
    inline int64_t getGroupId() const { DARABONBA_PTR_GET_DEFAULT(groupId_, 0L) };
    inline AddInstallCodeRequest& setGroupId(int64_t groupId) { DARABONBA_PTR_SET_VALUE(groupId_, groupId) };


    // onlyImage Field Functions 
    bool hasOnlyImage() const { return this->onlyImage_ != nullptr;};
    void deleteOnlyImage() { this->onlyImage_ = nullptr;};
    inline bool getOnlyImage() const { DARABONBA_PTR_GET_DEFAULT(onlyImage_, false) };
    inline AddInstallCodeRequest& setOnlyImage(bool onlyImage) { DARABONBA_PTR_SET_VALUE(onlyImage_, onlyImage) };


    // os Field Functions 
    bool hasOs() const { return this->os_ != nullptr;};
    void deleteOs() { this->os_ = nullptr;};
    inline string getOs() const { DARABONBA_PTR_GET_DEFAULT(os_, "") };
    inline AddInstallCodeRequest& setOs(string os) { DARABONBA_PTR_SET_VALUE(os_, os) };


    // privateLinkId Field Functions 
    bool hasPrivateLinkId() const { return this->privateLinkId_ != nullptr;};
    void deletePrivateLinkId() { this->privateLinkId_ = nullptr;};
    inline int64_t getPrivateLinkId() const { DARABONBA_PTR_GET_DEFAULT(privateLinkId_, 0L) };
    inline AddInstallCodeRequest& setPrivateLinkId(int64_t privateLinkId) { DARABONBA_PTR_SET_VALUE(privateLinkId_, privateLinkId) };


    // proxyCluster Field Functions 
    bool hasProxyCluster() const { return this->proxyCluster_ != nullptr;};
    void deleteProxyCluster() { this->proxyCluster_ = nullptr;};
    inline string getProxyCluster() const { DARABONBA_PTR_GET_DEFAULT(proxyCluster_, "") };
    inline AddInstallCodeRequest& setProxyCluster(string proxyCluster) { DARABONBA_PTR_SET_VALUE(proxyCluster_, proxyCluster) };


    // vendorName Field Functions 
    bool hasVendorName() const { return this->vendorName_ != nullptr;};
    void deleteVendorName() { this->vendorName_ = nullptr;};
    inline string getVendorName() const { DARABONBA_PTR_GET_DEFAULT(vendorName_, "") };
    inline AddInstallCodeRequest& setVendorName(string vendorName) { DARABONBA_PTR_SET_VALUE(vendorName_, vendorName) };


  protected:
    // The validity period of the installation command. The value is a 13-digit timestamp.
    // 
    // >  The installation command is valid only within the validity period. An expired installation command cannot be used to install the Security Center agent.
    shared_ptr<int64_t> expiredDate_ {};
    // The ID of the asset group to which you want to add the asset.
    // 
    // > You can call the [DescribeAllGroups](~~DescribeAllGroups~~) operation to query the IDs of asset groups.
    shared_ptr<int64_t> groupId_ {};
    // Specifies whether to create an image. Default value: **false**. Valid values:
    // 
    // *   **false**: does not create an image.
    // *   **true**: creates an image.
    shared_ptr<bool> onlyImage_ {};
    // The operating system of the asset. Default value: **linux**. Valid values:
    // 
    // *   **linux**
    // *   **windows**
    shared_ptr<string> os_ {};
    // The ID of the PrivateLink endpoint.
    shared_ptr<int64_t> privateLinkId_ {};
    // The name of the proxy cluster.
    shared_ptr<string> proxyCluster_ {};
    // The name of the service provider for the asset. Default value: **ALIYUN**.
    // 
    // >  You can call the [DescribeVendorList](~~DescribeVendorList~~) operation to query the names of service providers.
    shared_ptr<string> vendorName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
