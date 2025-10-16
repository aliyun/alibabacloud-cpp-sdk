// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDESKTOPSSHRINKREQUESTBUNDLEMODELS_HPP_
#define ALIBABACLOUD_MODELS_CREATEDESKTOPSSHRINKREQUESTBUNDLEMODELS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class CreateDesktopsShrinkRequestBundleModels : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDesktopsShrinkRequestBundleModels& obj) { 
      DARABONBA_PTR_TO_JSON(Amount, amount_);
      DARABONBA_PTR_TO_JSON(BundleId, bundleId_);
      DARABONBA_PTR_TO_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_TO_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_TO_JSON(Hostname, hostname_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_TO_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDesktopsShrinkRequestBundleModels& obj) { 
      DARABONBA_PTR_FROM_JSON(Amount, amount_);
      DARABONBA_PTR_FROM_JSON(BundleId, bundleId_);
      DARABONBA_PTR_FROM_JSON(DesktopName, desktopName_);
      DARABONBA_PTR_FROM_JSON(EndUserIds, endUserIds_);
      DARABONBA_PTR_FROM_JSON(Hostname, hostname_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionEnabled, volumeEncryptionEnabled_);
      DARABONBA_PTR_FROM_JSON(VolumeEncryptionKey, volumeEncryptionKey_);
    };
    CreateDesktopsShrinkRequestBundleModels() = default ;
    CreateDesktopsShrinkRequestBundleModels(const CreateDesktopsShrinkRequestBundleModels &) = default ;
    CreateDesktopsShrinkRequestBundleModels(CreateDesktopsShrinkRequestBundleModels &&) = default ;
    CreateDesktopsShrinkRequestBundleModels(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDesktopsShrinkRequestBundleModels() = default ;
    CreateDesktopsShrinkRequestBundleModels& operator=(const CreateDesktopsShrinkRequestBundleModels &) = default ;
    CreateDesktopsShrinkRequestBundleModels& operator=(CreateDesktopsShrinkRequestBundleModels &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->amount_ == nullptr
        && return this->bundleId_ == nullptr && return this->desktopName_ == nullptr && return this->endUserIds_ == nullptr && return this->hostname_ == nullptr && return this->volumeEncryptionEnabled_ == nullptr
        && return this->volumeEncryptionKey_ == nullptr; };
    // amount Field Functions 
    bool hasAmount() const { return this->amount_ != nullptr;};
    void deleteAmount() { this->amount_ = nullptr;};
    inline int32_t amount() const { DARABONBA_PTR_GET_DEFAULT(amount_, 0) };
    inline CreateDesktopsShrinkRequestBundleModels& setAmount(int32_t amount) { DARABONBA_PTR_SET_VALUE(amount_, amount) };


    // bundleId Field Functions 
    bool hasBundleId() const { return this->bundleId_ != nullptr;};
    void deleteBundleId() { this->bundleId_ = nullptr;};
    inline string bundleId() const { DARABONBA_PTR_GET_DEFAULT(bundleId_, "") };
    inline CreateDesktopsShrinkRequestBundleModels& setBundleId(string bundleId) { DARABONBA_PTR_SET_VALUE(bundleId_, bundleId) };


    // desktopName Field Functions 
    bool hasDesktopName() const { return this->desktopName_ != nullptr;};
    void deleteDesktopName() { this->desktopName_ = nullptr;};
    inline string desktopName() const { DARABONBA_PTR_GET_DEFAULT(desktopName_, "") };
    inline CreateDesktopsShrinkRequestBundleModels& setDesktopName(string desktopName) { DARABONBA_PTR_SET_VALUE(desktopName_, desktopName) };


    // endUserIds Field Functions 
    bool hasEndUserIds() const { return this->endUserIds_ != nullptr;};
    void deleteEndUserIds() { this->endUserIds_ = nullptr;};
    inline const vector<string> & endUserIds() const { DARABONBA_PTR_GET_CONST(endUserIds_, vector<string>) };
    inline vector<string> endUserIds() { DARABONBA_PTR_GET(endUserIds_, vector<string>) };
    inline CreateDesktopsShrinkRequestBundleModels& setEndUserIds(const vector<string> & endUserIds) { DARABONBA_PTR_SET_VALUE(endUserIds_, endUserIds) };
    inline CreateDesktopsShrinkRequestBundleModels& setEndUserIds(vector<string> && endUserIds) { DARABONBA_PTR_SET_RVALUE(endUserIds_, endUserIds) };


    // hostname Field Functions 
    bool hasHostname() const { return this->hostname_ != nullptr;};
    void deleteHostname() { this->hostname_ = nullptr;};
    inline string hostname() const { DARABONBA_PTR_GET_DEFAULT(hostname_, "") };
    inline CreateDesktopsShrinkRequestBundleModels& setHostname(string hostname) { DARABONBA_PTR_SET_VALUE(hostname_, hostname) };


    // volumeEncryptionEnabled Field Functions 
    bool hasVolumeEncryptionEnabled() const { return this->volumeEncryptionEnabled_ != nullptr;};
    void deleteVolumeEncryptionEnabled() { this->volumeEncryptionEnabled_ = nullptr;};
    inline bool volumeEncryptionEnabled() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionEnabled_, false) };
    inline CreateDesktopsShrinkRequestBundleModels& setVolumeEncryptionEnabled(bool volumeEncryptionEnabled) { DARABONBA_PTR_SET_VALUE(volumeEncryptionEnabled_, volumeEncryptionEnabled) };


    // volumeEncryptionKey Field Functions 
    bool hasVolumeEncryptionKey() const { return this->volumeEncryptionKey_ != nullptr;};
    void deleteVolumeEncryptionKey() { this->volumeEncryptionKey_ = nullptr;};
    inline string volumeEncryptionKey() const { DARABONBA_PTR_GET_DEFAULT(volumeEncryptionKey_, "") };
    inline CreateDesktopsShrinkRequestBundleModels& setVolumeEncryptionKey(string volumeEncryptionKey) { DARABONBA_PTR_SET_VALUE(volumeEncryptionKey_, volumeEncryptionKey) };


  protected:
    // The number of cloud computers that you want to create. Valid values: 1 to 300. Default value: null.
    std::shared_ptr<int32_t> amount_ = nullptr;
    // The ID of a cloud computer template.
    std::shared_ptr<string> bundleId_ = nullptr;
    // The name of the cloud computer. The name must meet the following requirements:
    // 
    // *   The name must be 1 to 64 characters in length.
    // *   The name must start with a letter but cannot start with `http://` or `https://`.
    // *   The name can only contain letters, digits, colons (:), underscores (_), periods (.), and hyphens (-).
    std::shared_ptr<string> desktopName_ = nullptr;
    // The IDs of the end users to whom the cloud computer are assigned.
    std::shared_ptr<vector<string>> endUserIds_ = nullptr;
    // The custom hostnames of the cloud computers. This parameter is valid only if the office network is an AD office network and the operating system type of the cloud computers is Windows.
    // 
    // The hostnames must meet the following requirements:
    // 
    // *   The hostnames must be 2 to 15 characters in length.
    // *   The hostnames can contain only letters, digits, and hyphens (-). The hostnames cannot start or end with a hyphen (-), contain consecutive hyphens (-), or contain only digits.
    // 
    // When you create multiple cloud computers, you can use the `name_prefix[begin_number,bits]name_suffix` naming format to name the cloud computers. For example, if you set the value of the Hostname parameter to ecd-[1,4]-test, the hostname of the first cloud computer is ecd-0001-test, the hostname of the second cloud computer is ecd-0002-test, and so on.
    // 
    // *   `name_prefix`: the prefix of the hostname.
    // *   `[begin_number,bits]`: the sequential number in the hostname. The `begin_number` value is the starting digit. Valid values of begin_number: 0 to 999999. Default value: 0. The `bits` value is the number of digits. Valid values: 1 to 6. Default value: 6.
    // *   `name_suffix`: the suffix of the hostname.
    std::shared_ptr<string> hostname_ = nullptr;
    // Specifies whether to enable disk encryption.
    std::shared_ptr<bool> volumeEncryptionEnabled_ = nullptr;
    // The ID of the Key Management Service (KMS) key that is used when disk encryption is enabled. You can call the [ListKeys](https://help.aliyun.com/document_detail/28951.html) operation to query the list of KMS keys.
    std::shared_ptr<string> volumeEncryptionKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
