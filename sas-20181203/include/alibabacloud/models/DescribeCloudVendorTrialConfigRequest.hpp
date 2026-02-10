// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORTRIALCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDVENDORTRIALCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeCloudVendorTrialConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudVendorTrialConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AuthId, authId_);
      DARABONBA_PTR_TO_JSON(Vendor, vendor_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudVendorTrialConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AuthId, authId_);
      DARABONBA_PTR_FROM_JSON(Vendor, vendor_);
    };
    DescribeCloudVendorTrialConfigRequest() = default ;
    DescribeCloudVendorTrialConfigRequest(const DescribeCloudVendorTrialConfigRequest &) = default ;
    DescribeCloudVendorTrialConfigRequest(DescribeCloudVendorTrialConfigRequest &&) = default ;
    DescribeCloudVendorTrialConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudVendorTrialConfigRequest() = default ;
    DescribeCloudVendorTrialConfigRequest& operator=(const DescribeCloudVendorTrialConfigRequest &) = default ;
    DescribeCloudVendorTrialConfigRequest& operator=(DescribeCloudVendorTrialConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->authId_ == nullptr
        && this->vendor_ == nullptr; };
    // authId Field Functions 
    bool hasAuthId() const { return this->authId_ != nullptr;};
    void deleteAuthId() { this->authId_ = nullptr;};
    inline int64_t getAuthId() const { DARABONBA_PTR_GET_DEFAULT(authId_, 0L) };
    inline DescribeCloudVendorTrialConfigRequest& setAuthId(int64_t authId) { DARABONBA_PTR_SET_VALUE(authId_, authId) };


    // vendor Field Functions 
    bool hasVendor() const { return this->vendor_ != nullptr;};
    void deleteVendor() { this->vendor_ = nullptr;};
    inline string getVendor() const { DARABONBA_PTR_GET_DEFAULT(vendor_, "") };
    inline DescribeCloudVendorTrialConfigRequest& setVendor(string vendor) { DARABONBA_PTR_SET_VALUE(vendor_, vendor) };


  protected:
    // Unique ID of the AK.
    // 
    // > You can call [DescribeCloudVendorAccountAKList](~~DescribeCloudVendorAccountAKList~~) to get the AuthId.
    // > -
    // 
    // This parameter is required.
    shared_ptr<int64_t> authId_ {};
    // Cloud asset vendor. Values:
    // - **Tencent**: Tencent Cloud
    // - **AWS**: Amazon Web Services
    // 
    // This parameter is required.
    shared_ptr<string> vendor_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
