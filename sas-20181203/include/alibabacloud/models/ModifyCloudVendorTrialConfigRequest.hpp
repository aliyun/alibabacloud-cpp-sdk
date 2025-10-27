// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYCLOUDVENDORTRIALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYCLOUDVENDORTRIALCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class ModifyCloudVendorTrialConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyCloudVendorTrialConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_TO_JSON(DeleteTrail, deleteTrail_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyCloudVendorTrialConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_FROM_JSON(DeleteTrail, deleteTrail_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    ModifyCloudVendorTrialConfigRequest() = default ;
    ModifyCloudVendorTrialConfigRequest(const ModifyCloudVendorTrialConfigRequest &) = default ;
    ModifyCloudVendorTrialConfigRequest(ModifyCloudVendorTrialConfigRequest &&) = default ;
    ModifyCloudVendorTrialConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyCloudVendorTrialConfigRequest() = default ;
    ModifyCloudVendorTrialConfigRequest& operator=(const ModifyCloudVendorTrialConfigRequest &) = default ;
    ModifyCloudVendorTrialConfigRequest& operator=(ModifyCloudVendorTrialConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authId_ == nullptr
        && return this->authInfo_ == nullptr && return this->deleteTrail_ == nullptr && return this->vendor_ == nullptr; };
    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline int64_t authId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
    inline ModifyCloudVendorTrialConfigRequest& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline string authInfo() const { DARABONBA_PTR_GET_DEFAULT(authInfo_, "") };
    inline ModifyCloudVendorTrialConfigRequest& setAuthInfo(string authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };


    // deleteTrail Field Functions 
    bool hasDeleteTrail() const { return this->deleteTrail_ != nullptr;};
    void deleteDeleteTrail() { this->deleteTrail_ = nullptr;};
    inline bool deleteTrail() const { DARABONBA_PTR_GET_DEFAULT(deleteTrail_, false) };
    inline ModifyCloudVendorTrialConfigRequest& setDeleteTrail(bool deleteTrail) { DARABONBA_PTR_SET_VALUE(deleteTrail_, deleteTrail) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string vendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline ModifyCloudVendorTrialConfigRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The ID of the audit log configuration to be modified.
    // > The ID can be queried via [DescribeCloudVendorAccountAKList](~~DescribeCloudVendorAccountAKList~~).
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> authId_ = nullptr;
    // Enter the multi-cloud configuration information:
    // - AWS: parameters sqsQueueName, sqsRegion
    // - Tencent: parameters kafkaUserName, kafkaBootstrapServers, kafkaTopic
    std::shared_ptr<string> authInfo_ = nullptr;
    // Whether to delete this audit log configuration:
    // - true: Delete
    // - false: Do not delete
    std::shared_ptr<bool> deleteTrail_ = nullptr;
    // Cloud asset vendor. Values:
    // 
    // - **Tencent**: Tencent Cloud
    // - **AWS**: AWS
    // 
    // This parameter is required.
    std::shared_ptr<string> vendor_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
