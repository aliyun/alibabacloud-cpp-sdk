// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSESRESPONSEBODYADDRESSES_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSESRESPONSEBODYADDRESSES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchCloudGtmAddressesResponseBodyAddressesAddress.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmAddressesResponseBodyAddresses : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmAddressesResponseBodyAddresses& obj) { 
      DARABONBA_PTR_TO_JSON(Address, address_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmAddressesResponseBodyAddresses& obj) { 
      DARABONBA_PTR_FROM_JSON(Address, address_);
    };
    SearchCloudGtmAddressesResponseBodyAddresses() = default ;
    SearchCloudGtmAddressesResponseBodyAddresses(const SearchCloudGtmAddressesResponseBodyAddresses &) = default ;
    SearchCloudGtmAddressesResponseBodyAddresses(SearchCloudGtmAddressesResponseBodyAddresses &&) = default ;
    SearchCloudGtmAddressesResponseBodyAddresses(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmAddressesResponseBodyAddresses() = default ;
    SearchCloudGtmAddressesResponseBodyAddresses& operator=(const SearchCloudGtmAddressesResponseBodyAddresses &) = default ;
    SearchCloudGtmAddressesResponseBodyAddresses& operator=(SearchCloudGtmAddressesResponseBodyAddresses &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->address_ != nullptr; };
    // address Field Functions 
    bool hasAddress() const { return this->address_ != nullptr;};
    void deleteAddress() { this->address_ = nullptr;};
    inline const vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddress> & address() const { DARABONBA_PTR_GET_CONST(address_, vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddress>) };
    inline vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddress> address() { DARABONBA_PTR_GET(address_, vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddress>) };
    inline SearchCloudGtmAddressesResponseBodyAddresses& setAddress(const vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddress> & address) { DARABONBA_PTR_SET_VALUE(address_, address) };
    inline SearchCloudGtmAddressesResponseBodyAddresses& setAddress(vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddress> && address) { DARABONBA_PTR_SET_RVALUE(address_, address) };


  protected:
    std::shared_ptr<vector<Models::SearchCloudGtmAddressesResponseBodyAddressesAddress>> address_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
