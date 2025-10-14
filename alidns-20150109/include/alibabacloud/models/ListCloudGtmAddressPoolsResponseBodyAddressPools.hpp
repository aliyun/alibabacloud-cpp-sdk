// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSPOOLSRESPONSEBODYADDRESSPOOLS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMADDRESSPOOLSRESPONSEBODYADDRESSPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmAddressPoolsResponseBodyAddressPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmAddressPoolsResponseBodyAddressPools& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPool, addressPool_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmAddressPoolsResponseBodyAddressPools& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPool, addressPool_);
    };
    ListCloudGtmAddressPoolsResponseBodyAddressPools() = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPools(const ListCloudGtmAddressPoolsResponseBodyAddressPools &) = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPools(ListCloudGtmAddressPoolsResponseBodyAddressPools &&) = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmAddressPoolsResponseBodyAddressPools() = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPools& operator=(const ListCloudGtmAddressPoolsResponseBodyAddressPools &) = default ;
    ListCloudGtmAddressPoolsResponseBodyAddressPools& operator=(ListCloudGtmAddressPoolsResponseBodyAddressPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addressPool_ == nullptr; };
    // addressPool Field Functions 
    bool hasAddressPool() const { return this->addressPool_ != nullptr;};
    void deleteAddressPool() { this->addressPool_ = nullptr;};
    inline const vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool> & addressPool() const { DARABONBA_PTR_GET_CONST(addressPool_, vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool>) };
    inline vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool> addressPool() { DARABONBA_PTR_GET(addressPool_, vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool>) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPools& setAddressPool(const vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool> & addressPool) { DARABONBA_PTR_SET_VALUE(addressPool_, addressPool) };
    inline ListCloudGtmAddressPoolsResponseBodyAddressPools& setAddressPool(vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool> && addressPool) { DARABONBA_PTR_SET_RVALUE(addressPool_, addressPool) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmAddressPoolsResponseBodyAddressPoolsAddressPool>> addressPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
