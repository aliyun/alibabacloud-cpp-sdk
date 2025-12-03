// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ACTIVATELICENSEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ACTIVATELICENSEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mseap20210118
{
namespace Models
{
  class ActivateLicenseRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ActivateLicenseRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_TO_JSON(LicenseNo, licenseNo_);
      DARABONBA_PTR_TO_JSON(LicensePublisher, licensePublisher_);
    };
    friend void from_json(const Darabonba::Json& j, ActivateLicenseRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(LicenseCode, licenseCode_);
      DARABONBA_PTR_FROM_JSON(LicenseNo, licenseNo_);
      DARABONBA_PTR_FROM_JSON(LicensePublisher, licensePublisher_);
    };
    ActivateLicenseRequest() = default ;
    ActivateLicenseRequest(const ActivateLicenseRequest &) = default ;
    ActivateLicenseRequest(ActivateLicenseRequest &&) = default ;
    ActivateLicenseRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ActivateLicenseRequest() = default ;
    ActivateLicenseRequest& operator=(const ActivateLicenseRequest &) = default ;
    ActivateLicenseRequest& operator=(ActivateLicenseRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && return this->bizType_ == nullptr && return this->licenseCode_ == nullptr && return this->licenseNo_ == nullptr && return this->licensePublisher_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string bizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline ActivateLicenseRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ActivateLicenseRequest& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // licenseCode Field Functions 
    bool hasLicenseCode() const { return this->licenseCode_ != nullptr;};
    void deleteLicenseCode() { this->licenseCode_ = nullptr;};
    inline string licenseCode() const { DARABONBA_PTR_GET_DEFAULT(licenseCode_, "") };
    inline ActivateLicenseRequest& setLicenseCode(string licenseCode) { DARABONBA_PTR_SET_VALUE(licenseCode_, licenseCode) };


    // licenseNo Field Functions 
    bool hasLicenseNo() const { return this->licenseNo_ != nullptr;};
    void deleteLicenseNo() { this->licenseNo_ = nullptr;};
    inline string licenseNo() const { DARABONBA_PTR_GET_DEFAULT(licenseNo_, "") };
    inline ActivateLicenseRequest& setLicenseNo(string licenseNo) { DARABONBA_PTR_SET_VALUE(licenseNo_, licenseNo) };


    // licensePublisher Field Functions 
    bool hasLicensePublisher() const { return this->licensePublisher_ != nullptr;};
    void deleteLicensePublisher() { this->licensePublisher_ = nullptr;};
    inline string licensePublisher() const { DARABONBA_PTR_GET_DEFAULT(licensePublisher_, "") };
    inline ActivateLicenseRequest& setLicensePublisher(string licensePublisher) { DARABONBA_PTR_SET_VALUE(licensePublisher_, licensePublisher) };


  protected:
    std::shared_ptr<string> bizId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> bizType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> licenseCode_ = nullptr;
    std::shared_ptr<string> licenseNo_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> licensePublisher_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mseap20210118
#endif
