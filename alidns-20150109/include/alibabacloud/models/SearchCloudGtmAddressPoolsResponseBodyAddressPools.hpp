// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSPOOLSRESPONSEBODYADDRESSPOOLS_HPP_
#define ALIBABACLOUD_MODELS_SEARCHCLOUDGTMADDRESSPOOLSRESPONSEBODYADDRESSPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/SearchCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class SearchCloudGtmAddressPoolsResponseBodyAddressPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchCloudGtmAddressPoolsResponseBodyAddressPools& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPool, addressPool_);
    };
    friend void from_json(const Darabonba::Json& j, SearchCloudGtmAddressPoolsResponseBodyAddressPools& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPool, addressPool_);
    };
    SearchCloudGtmAddressPoolsResponseBodyAddressPools() = default ;
    SearchCloudGtmAddressPoolsResponseBodyAddressPools(const SearchCloudGtmAddressPoolsResponseBodyAddressPools &) = default ;
    SearchCloudGtmAddressPoolsResponseBodyAddressPools(SearchCloudGtmAddressPoolsResponseBodyAddressPools &&) = default ;
    SearchCloudGtmAddressPoolsResponseBodyAddressPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchCloudGtmAddressPoolsResponseBodyAddressPools() = default ;
    SearchCloudGtmAddressPoolsResponseBodyAddressPools& operator=(const SearchCloudGtmAddressPoolsResponseBodyAddressPools &) = default ;
    SearchCloudGtmAddressPoolsResponseBodyAddressPools& operator=(SearchCloudGtmAddressPoolsResponseBodyAddressPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressPool_ != nullptr; };
    // addressPool Field Functions 
    bool hasAddressPool() const { return this->addressPool_ != nullptr;};
    void deleteAddressPool() { this->addressPool_ = nullptr;};
    inline const vector<Models::SearchCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool> & addressPool() const { DARABONBA_PTR_GET_CONST(addressPool_, vector<Models::SearchCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool>) };
    inline vector<Models::SearchCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool> addressPool() { DARABONBA_PTR_GET(addressPool_, vector<Models::SearchCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool>) };
    inline SearchCloudGtmAddressPoolsResponseBodyAddressPools& setAddressPool(const vector<Models::SearchCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool> & addressPool) { DARABONBA_PTR_SET_VALUE(addressPool_, addressPool) };
    inline SearchCloudGtmAddressPoolsResponseBodyAddressPools& setAddressPool(vector<Models::SearchCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool> && addressPool) { DARABONBA_PTR_SET_RVALUE(addressPool_, addressPool) };


  protected:
    std::shared_ptr<vector<Models::SearchCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool>> addressPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
