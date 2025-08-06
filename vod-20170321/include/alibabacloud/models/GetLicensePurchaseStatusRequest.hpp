// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETLICENSEPURCHASESTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETLICENSEPURCHASESTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class GetLicensePurchaseStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetLicensePurchaseStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(LicenseItemIds, licenseItemIds_);
    };
    friend void from_json(const Darabonba::Json& j, GetLicensePurchaseStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(LicenseItemIds, licenseItemIds_);
    };
    GetLicensePurchaseStatusRequest() = default ;
    GetLicensePurchaseStatusRequest(const GetLicensePurchaseStatusRequest &) = default ;
    GetLicensePurchaseStatusRequest(GetLicensePurchaseStatusRequest &&) = default ;
    GetLicensePurchaseStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetLicensePurchaseStatusRequest() = default ;
    GetLicensePurchaseStatusRequest& operator=(const GetLicensePurchaseStatusRequest &) = default ;
    GetLicensePurchaseStatusRequest& operator=(GetLicensePurchaseStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->licenseItemIds_ != nullptr; };
    // licenseItemIds Field Functions 
    bool hasLicenseItemIds() const { return this->licenseItemIds_ != nullptr;};
    void deleteLicenseItemIds() { this->licenseItemIds_ = nullptr;};
    inline string licenseItemIds() const { DARABONBA_PTR_GET_DEFAULT(licenseItemIds_, "") };
    inline GetLicensePurchaseStatusRequest& setLicenseItemIds(string licenseItemIds) { DARABONBA_PTR_SET_VALUE(licenseItemIds_, licenseItemIds) };


  protected:
    std::shared_ptr<string> licenseItemIds_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
