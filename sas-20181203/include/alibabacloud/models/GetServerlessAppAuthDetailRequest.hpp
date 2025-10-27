// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVERLESSAPPAUTHDETAILREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVERLESSAPPAUTHDETAILREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetServerlessAppAuthDetailRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServerlessAppAuthDetailRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(AppRegionId, appRegionId_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(VendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServerlessAppAuthDetailRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(AppRegionId, appRegionId_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(VendorType, vendorType_);
    };
    GetServerlessAppAuthDetailRequest() = default ;
    GetServerlessAppAuthDetailRequest(const GetServerlessAppAuthDetailRequest &) = default ;
    GetServerlessAppAuthDetailRequest(GetServerlessAppAuthDetailRequest &&) = default ;
    GetServerlessAppAuthDetailRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServerlessAppAuthDetailRequest() = default ;
    GetServerlessAppAuthDetailRequest& operator=(const GetServerlessAppAuthDetailRequest &) = default ;
    GetServerlessAppAuthDetailRequest& operator=(GetServerlessAppAuthDetailRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->appRegionId_ == nullptr && return this->machineType_ == nullptr && return this->vendorType_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline GetServerlessAppAuthDetailRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // appRegionId Field Functions 
    bool hasAppRegionId() const { return this->appRegionId_ != nullptr;};
    void deleteAppRegionId() { this->appRegionId_ = nullptr;};
    inline string appRegionId() const { DARABONBA_PTR_GET_DEFAULT(appRegionId_, "") };
    inline GetServerlessAppAuthDetailRequest& setAppRegionId(string appRegionId) { DARABONBA_PTR_SET_VALUE(appRegionId_, appRegionId) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string machineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline GetServerlessAppAuthDetailRequest& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string vendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetServerlessAppAuthDetailRequest& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    // SAE application ID.
    // 
    // > Obtain through the [ListMachineApps](~~ListMachineApps~~) interface.
    std::shared_ptr<string> appId_ = nullptr;
    // Application region ID.
    std::shared_ptr<string> appRegionId_ = nullptr;
    // Server type: 
    // - **RunD**
    // - **ECI**
    std::shared_ptr<string> machineType_ = nullptr;
    // Cloud product: 
    // - **ASK**
    // - **SAE**
    // - **ACS**
    std::shared_ptr<string> vendorType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
