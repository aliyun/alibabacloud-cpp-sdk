// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESERVICEADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESERVICEADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class CreateServiceAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateServiceAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SagId, sagId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, CreateServiceAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SagId, sagId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    CreateServiceAddressRequest() = default ;
    CreateServiceAddressRequest(const CreateServiceAddressRequest &) = default ;
    CreateServiceAddressRequest(CreateServiceAddressRequest &&) = default ;
    CreateServiceAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateServiceAddressRequest() = default ;
    CreateServiceAddressRequest& operator=(const CreateServiceAddressRequest &) = default ;
    CreateServiceAddressRequest& operator=(CreateServiceAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr
        && this->addressType_ == nullptr && this->regionId_ == nullptr && this->sagId_ == nullptr && this->sn_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline string getAddress() const { DARABONBA_PTR_GET_DEFAULT(address_, "") };
    inline CreateServiceAddressRequest& setAddress(string address) { DARABONBA_PTR_SET_VALUE(address_, address) };


    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline CreateServiceAddressRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateServiceAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sagId Field Functions 
    bool hasSagId() const { return this->sagId_ != nullptr;};
    void deleteSagId() { this->sagId_ = nullptr;};
    inline string getSagId() const { DARABONBA_PTR_GET_DEFAULT(sagId_, "") };
    inline CreateServiceAddressRequest& setSagId(string sagId) { DARABONBA_PTR_SET_VALUE(sagId_, sagId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline CreateServiceAddressRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // The service address of the Smart Access Gateway instance. Example: **192.168.1.1**.
    // 
    // This parameter is required.
    shared_ptr<string> address_ {};
    // The service address type of the Smart Access Gateway instance. Set the value to **ProbeTask**.
    // 
    // This parameter is required.
    shared_ptr<string> addressType_ {};
    // The region ID of the Smart Access Gateway instance.
    // 
    // You can call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to query region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The instance ID of the Smart Access Gateway instance.
    // 
    // This parameter is required.
    shared_ptr<string> sagId_ {};
    // The serial number of the Smart Access Gateway device.
    // 
    // This parameter is required.
    shared_ptr<string> sn_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Smartag20180313
#endif
