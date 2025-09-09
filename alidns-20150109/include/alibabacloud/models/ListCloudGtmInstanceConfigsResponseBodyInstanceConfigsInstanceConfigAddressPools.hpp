// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCECONFIGSRESPONSEBODYINSTANCECONFIGSINSTANCECONFIGADDRESSPOOLS_HPP_
#define ALIBABACLOUD_MODELS_LISTCLOUDGTMINSTANCECONFIGSRESPONSEBODYINSTANCECONFIGSINSTANCECONFIGADDRESSPOOLS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPoolsAddressPool.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools& obj) { 
      DARABONBA_PTR_TO_JSON(AddressPool, addressPool_);
    };
    friend void from_json(const Darabonba::Json& j, ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools& obj) { 
      DARABONBA_PTR_FROM_JSON(AddressPool, addressPool_);
    };
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools() = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools(const ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools &) = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools(ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools &&) = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools() = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools& operator=(const ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools &) = default ;
    ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools& operator=(ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->addressPool_ != nullptr; };
    // addressPool Field Functions 
    bool hasAddressPool() const { return this->addressPool_ != nullptr;};
    void deleteAddressPool() { this->addressPool_ = nullptr;};
    inline const vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPoolsAddressPool> & addressPool() const { DARABONBA_PTR_GET_CONST(addressPool_, vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPoolsAddressPool>) };
    inline vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPoolsAddressPool> addressPool() { DARABONBA_PTR_GET(addressPool_, vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPoolsAddressPool>) };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools& setAddressPool(const vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPoolsAddressPool> & addressPool) { DARABONBA_PTR_SET_VALUE(addressPool_, addressPool) };
    inline ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPools& setAddressPool(vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPoolsAddressPool> && addressPool) { DARABONBA_PTR_SET_RVALUE(addressPool_, addressPool) };


  protected:
    std::shared_ptr<vector<Models::ListCloudGtmInstanceConfigsResponseBodyInstanceConfigsInstanceConfigAddressPoolsAddressPool>> addressPool_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
