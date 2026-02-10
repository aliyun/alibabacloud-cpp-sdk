// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCLOUDVENDORTRIALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCLOUDVENDORTRIALCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class AddCloudVendorTrialConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddCloudVendorTrialConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, AddCloudVendorTrialConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(AuthInfo, authInfo_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    AddCloudVendorTrialConfigRequest() = default ;
    AddCloudVendorTrialConfigRequest(const AddCloudVendorTrialConfigRequest &) = default ;
    AddCloudVendorTrialConfigRequest(AddCloudVendorTrialConfigRequest &&) = default ;
    AddCloudVendorTrialConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddCloudVendorTrialConfigRequest() = default ;
    AddCloudVendorTrialConfigRequest& operator=(const AddCloudVendorTrialConfigRequest &) = default ;
    AddCloudVendorTrialConfigRequest& operator=(AddCloudVendorTrialConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authId_ == nullptr
        && this->authInfo_ == nullptr && this->vendor_ == nullptr; };
    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline int64_t getAuthId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
    inline AddCloudVendorTrialConfigRequest& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // authInfo Field Functions 
    bool hasAuthInfo() const { return this->authInfo_ != nullptr;};
    void deleteAuthInfo() { this->authInfo_ = nullptr;};
    inline string getAuthInfo() const { DARABONBA_PTR_GET_DEFAULT(authInfo_, "") };
    inline AddCloudVendorTrialConfigRequest& setAuthInfo(string authInfo) { DARABONBA_PTR_SET_VALUE(authInfo_, authInfo) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline AddCloudVendorTrialConfigRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // The AccessKey ID.
    // 
    // >  [](#-describecloudvendoraccountaklist--authid)You can call the [DescribeCloudVendorAccountAKList](~~DescribeCloudVendorAccountAKList~~) operation to query the AccessKey ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> authId_ {};
    // The configurations of the third-party cloud asset. Valid values:
    // 
    // *   *AWS*: Configure the sqsQueueName and sqsRegion parameters.
    // *   *Tencent*: Configure the kafkaUserName, kafkaBootstrapServers, and kafkaTopic parameters.
    // 
    // This parameter is required.
    shared_ptr<string> authInfo_ {};
    // The service provider of the cloud asset. Valid values:
    // 
    // *   **Tencent**: Tencent Cloud.
    // *   **AWS**: Amazon Web Services (AWS).
    // 
    // This parameter is required.
    shared_ptr<string> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
