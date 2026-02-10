// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSERVERLESSAUTHSUMMARYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETSERVERLESSAUTHSUMMARYREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class GetServerlessAuthSummaryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetServerlessAuthSummaryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppRegionId, appRegionId_);
      DARABONBA_PTR_TO_JSON(MachineType, machineType_);
      DARABONBA_PTR_TO_JSON(VendorType, vendorType_);
    };
    friend void from_json(const Darabonba::Json& j, GetServerlessAuthSummaryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppRegionId, appRegionId_);
      DARABONBA_PTR_FROM_JSON(MachineType, machineType_);
      DARABONBA_PTR_FROM_JSON(VendorType, vendorType_);
    };
    GetServerlessAuthSummaryRequest() = default ;
    GetServerlessAuthSummaryRequest(const GetServerlessAuthSummaryRequest &) = default ;
    GetServerlessAuthSummaryRequest(GetServerlessAuthSummaryRequest &&) = default ;
    GetServerlessAuthSummaryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetServerlessAuthSummaryRequest() = default ;
    GetServerlessAuthSummaryRequest& operator=(const GetServerlessAuthSummaryRequest &) = default ;
    GetServerlessAuthSummaryRequest& operator=(GetServerlessAuthSummaryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appRegionId_ == nullptr
        && this->machineType_ == nullptr && this->vendorType_ == nullptr; };
    // appRegionId Field Functions 
    bool hasAppRegionId() const { return this->appRegionId_ != nullptr;};
    void deleteAppRegionId() { this->appRegionId_ = nullptr;};
    inline string getAppRegionId() const { DARABONBA_PTR_GET_DEFAULT(appRegionId_, "") };
    inline GetServerlessAuthSummaryRequest& setAppRegionId(string appRegionId) { DARABONBA_PTR_SET_VALUE(appRegionId_, appRegionId) };


    // machineType Field Functions 
    bool hasMachineType() const { return this->machineType_ != nullptr;};
    void deleteMachineType() { this->machineType_ = nullptr;};
    inline string getMachineType() const { DARABONBA_PTR_GET_DEFAULT(machineType_, "") };
    inline GetServerlessAuthSummaryRequest& setMachineType(string machineType) { DARABONBA_PTR_SET_VALUE(machineType_, machineType) };


    // vendorType Field Functions 
    bool hasVendorType() const { return this->vendorType_ != nullptr;};
    void deleteVendorType() { this->vendorType_ = nullptr;};
    inline string getVendorType() const { DARABONBA_PTR_GET_DEFAULT(vendorType_, "") };
    inline GetServerlessAuthSummaryRequest& setVendorType(string vendorType) { DARABONBA_PTR_SET_VALUE(vendorType_, vendorType) };


  protected:
    // Application region ID.
    shared_ptr<string> appRegionId_ {};
    // Server type: 
    // - **RunD**
    // - **ECI**
    shared_ptr<string> machineType_ {};
    // Cloud product: 
    // - **ASK**
    // - **SAE**
    // - **ACS**
    shared_ptr<string> vendorType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
