// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSESRESPONSEBODYADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSESRESPONSEBODYADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmAddressesResponseBodyAddressesAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAddressesResponseBodyAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAddressesResponseBodyAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAddressesResponseBodyAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
    };
    ListCloudGtmAddressesResponseBodyAddresses() = default ;
    ListCloudGtmAddressesResponseBodyAddresses(const ListCloudGtmAddressesResponseBodyAddresses &) = default ;
    ListCloudGtmAddressesResponseBodyAddresses(ListCloudGtmAddressesResponseBodyAddresses &&) = default ;
    ListCloudGtmAddressesResponseBodyAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAddressesResponseBodyAddresses() = default ;
    ListCloudGtmAddressesResponseBodyAddresses& operator=(const ListCloudGtmAddressesResponseBodyAddresses &) = default ;
    ListCloudGtmAddressesResponseBodyAddresses& operator=(ListCloudGtmAddressesResponseBodyAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->address_ == nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline const vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddress> & address() const { DARABONBA_PTR_GET_CONST(address_, vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddress>) };
    inline vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddress> address() { DARABONBA_PTR_GET(address_, vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddress>) };
    inline ListCloudGtmAddressesResponseBodyAddresses& setAddress(const vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddress> & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
    inline ListCloudGtmAddressesResponseBodyAddresses& setAddress(vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddress> && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmAddressesResponseBodyAddressesAddress>> address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
