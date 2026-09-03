// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ATTACHCENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ATTACHCENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ecd20200930
{
namespace Models
{
  class AttachCenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AttachCenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(CenId, cenId_);
      DARABONBA_PTR_TO_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_TO_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(VerifyCode, verifyCode_);
    };
    friend void from_json(const Darabonba::Json& j, AttachCenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(CenId, cenId_);
      DARABONBA_PTR_FROM_JSON(CenOwnerId, cenOwnerId_);
      DARABONBA_PTR_FROM_JSON(OfficeSiteId, officeSiteId_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(VerifyCode, verifyCode_);
    };
    AttachCenRequest() = default ;
    AttachCenRequest(const AttachCenRequest &) = default ;
    AttachCenRequest(AttachCenRequest &&) = default ;
    AttachCenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AttachCenRequest() = default ;
    AttachCenRequest& operator=(const AttachCenRequest &) = default ;
    AttachCenRequest& operator=(AttachCenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->cenId_ == nullptr
        && this->cenOwnerId_ == nullptr && this->officeSiteId_ == nullptr && this->regionId_ == nullptr && this->verifyCode_ == nullptr; };
    // cenId Field Functions 
    bool hasCenId() const { return this->cenId_ != nullptr;};
    void deleteCenId() { this->cenId_ = nullptr;};
    inline string getCenId() const { DARABONBA_PTR_GET_DEFAULT(cenId_, "") };
    inline AttachCenRequest& setCenId(string cenId) { DARABONBA_PTR_SET_VALUE(cenId_, cenId) };


    // cenOwnerId Field Functions 
    bool hasCenOwnerId() const { return this->cenOwnerId_ != nullptr;};
    void deleteCenOwnerId() { this->cenOwnerId_ = nullptr;};
    inline int64_t getCenOwnerId() const { DARABONBA_PTR_GET_DEFAULT(cenOwnerId_, 0L) };
    inline AttachCenRequest& setCenOwnerId(int64_t cenOwnerId) { DARABONBA_PTR_SET_VALUE(cenOwnerId_, cenOwnerId) };


    // officeSiteId Field Functions 
    bool hasOfficeSiteId() const { return this->officeSiteId_ != nullptr;};
    void deleteOfficeSiteId() { this->officeSiteId_ = nullptr;};
    inline string getOfficeSiteId() const { DARABONBA_PTR_GET_DEFAULT(officeSiteId_, "") };
    inline AttachCenRequest& setOfficeSiteId(string officeSiteId) { DARABONBA_PTR_SET_VALUE(officeSiteId_, officeSiteId) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline AttachCenRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // verifyCode Field Functions 
    bool hasVerifyCode() const { return this->verifyCode_ != nullptr;};
    void deleteVerifyCode() { this->verifyCode_ = nullptr;};
    inline string getVerifyCode() const { DARABONBA_PTR_GET_DEFAULT(verifyCode_, "") };
    inline AttachCenRequest& setVerifyCode(string verifyCode) { DARABONBA_PTR_SET_VALUE(verifyCode_, verifyCode) };


  protected:
    // The CEN instance ID.
    // 
    // This parameter is required.
    shared_ptr<string> cenId_ {};
    // The Alibaba Cloud account ID of the account to which the CEN instance belongs.
    // 
    // - If the specified CenId belongs to the current Alibaba Cloud account, you do not need to configure this parameter.
    // 
    // - If the specified CenId belongs to a different Alibaba Cloud account, specify the Alibaba Cloud account ID of that account.
    shared_ptr<int64_t> cenOwnerId_ {};
    // The ID of the office network.
    // 
    // This parameter is required.
    shared_ptr<string> officeSiteId_ {};
    // The region ID. You can call [DescribeRegions](https://help.aliyun.com/document_detail/196646.html) to query the regions supported by Elastic Desktop Service.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The verification code. If the specified CenId belongs to a different Alibaba Cloud account, call [SendVerifyCode](https://help.aliyun.com/document_detail/436847.html) to obtain the verification code first.
    shared_ptr<string> verifyCode_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ecd20200930
#endif
