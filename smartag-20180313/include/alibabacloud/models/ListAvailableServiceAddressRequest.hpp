// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTAVAILABLESERVICEADDRESSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTAVAILABLESERVICEADDRESSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Smartag20180313
{
namespace Models
{
  class ListAvailableServiceAddressRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAvailableServiceAddressRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddressType, addressType_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SagId, sagId_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, ListAvailableServiceAddressRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressType, addressType_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SagId, sagId_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    ListAvailableServiceAddressRequest() = default ;
    ListAvailableServiceAddressRequest(const ListAvailableServiceAddressRequest &) = default ;
    ListAvailableServiceAddressRequest(ListAvailableServiceAddressRequest &&) = default ;
    ListAvailableServiceAddressRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAvailableServiceAddressRequest() = default ;
    ListAvailableServiceAddressRequest& operator=(const ListAvailableServiceAddressRequest &) = default ;
    ListAvailableServiceAddressRequest& operator=(ListAvailableServiceAddressRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressType_ == nullptr
        && this->regionId_ == nullptr && this->sagId_ == nullptr && this->sn_ == nullptr; };
    // addressType Field Functions 
    bool hasAddressType() const { return this->addressType_ != nullptr;};
    void deleteAddressType() { this->addressType_ = nullptr;};
    inline string getAddressType() const { DARABONBA_PTR_GET_DEFAULT(addressType_, "") };
    inline ListAvailableServiceAddressRequest& setAddressType(string addressType) { DARABONBA_PTR_SET_VALUE(addressType_, addressType) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListAvailableServiceAddressRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sagId Field Functions 
    bool hasSagId() const { return this->sagId_ != nullptr;};
    void deleteSagId() { this->sagId_ = nullptr;};
    inline string getSagId() const { DARABONBA_PTR_GET_DEFAULT(sagId_, "") };
    inline ListAvailableServiceAddressRequest& setSagId(string sagId) { DARABONBA_PTR_SET_VALUE(sagId_, sagId) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string getSn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline ListAvailableServiceAddressRequest& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    // The type of the service address for the Smart Access Gateway instance. Valid values:
    // 
    // - **ProbeTask**: the source IP address for network probes.
    // 
    // - **RemoteWeb**: the IP address for remote logon.
    // 
    // > If you do not specify this parameter, all types of service addresses are queried.
    shared_ptr<string> addressType_ {};
    // The ID of the region where the Smart Access Gateway instance is deployed.
    // 
    // Call the [DescribeRegions](https://help.aliyun.com/document_detail/69813.html) operation to obtain the region ID.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the Smart Access Gateway instance.
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
