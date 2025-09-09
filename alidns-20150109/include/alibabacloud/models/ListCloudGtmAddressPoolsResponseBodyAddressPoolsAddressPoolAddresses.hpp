// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSPOOLSRESPONSEBODYADDRESSPOOLSADDRESSPOOLADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSPOOLSRESPONSEBODYADDRESSPOOLSADDRESSPOOLADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
    };
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses() = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses(const ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses &) = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses(ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses &&) = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses() = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses& operator=(const ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses &) = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses& operator=(ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline const vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress> & address() const { DARABONBA_PTR_GET_CONST(address_, vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress>) };
    inline vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress> address() { DARABONBA_PTR_GET(address_, vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress>) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses& setAddress(const vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress> & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddresses& setAddress(vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress> && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPoolAddressesAddress>> address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
