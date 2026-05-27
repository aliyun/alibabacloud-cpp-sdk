// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UNASSIGNWUYINGSERVERPRIVATEADDRESSESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UNASSIGNWUYINGSERVERPRIVATEADDRESSESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AppstreamCenter20210901
{
namespace Models
{
  class UnassignWuyingServerPrivateAddressesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UnassignWuyingServerPrivateAddressesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(PrivateIpAddresses, privateIpAddresses_);
      DARABONBA_PTR_TO_JSON(WuyingServerId, wuyingServerId_);
    };
    friend void from_json(const Darabonba::Json& j, UnassignWuyingServerPrivateAddressesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(PrivateIpAddresses, privateIpAddresses_);
      DARABONBA_PTR_FROM_JSON(WuyingServerId, wuyingServerId_);
    };
    UnassignWuyingServerPrivateAddressesRequest() = default ;
    UnassignWuyingServerPrivateAddressesRequest(const UnassignWuyingServerPrivateAddressesRequest &) = default ;
    UnassignWuyingServerPrivateAddressesRequest(UnassignWuyingServerPrivateAddressesRequest &&) = default ;
    UnassignWuyingServerPrivateAddressesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UnassignWuyingServerPrivateAddressesRequest() = default ;
    UnassignWuyingServerPrivateAddressesRequest& operator=(const UnassignWuyingServerPrivateAddressesRequest &) = default ;
    UnassignWuyingServerPrivateAddressesRequest& operator=(UnassignWuyingServerPrivateAddressesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->privateIpAddresses_ == nullptr
        && this->wuyingServerId_ == nullptr; };
    // privateIpAddresses Field Functions 
    bool hasPrivateIpAddresses() const { return this->privateIpAddresses_ != nullptr;};
    void deletePrivateIpAddresses() { this->privateIpAddresses_ = nullptr;};
    inline const vector<string> & getPrivateIpAddresses() const { DARABONBA_PTR_GET_CONST(privateIpAddresses_, vector<string>) };
    inline vector<string> getPrivateIpAddresses() { DARABONBA_PTR_GET(privateIpAddresses_, vector<string>) };
    inline UnassignWuyingServerPrivateAddressesRequest& setPrivateIpAddresses(const vector<string> & privateIpAddresses) { DARABONBA_PTR_SET_VALUE(privateIpAddresses_, privateIpAddresses) };
    inline UnassignWuyingServerPrivateAddressesRequest& setPrivateIpAddresses(vector<string> && privateIpAddresses) { DARABONBA_PTR_SET_RVALUE(privateIpAddresses_, privateIpAddresses) };


    // wuyingServerId Field Functions 
    bool hasWuyingServerId() const { return this->wuyingServerId_ != nullptr;};
    void deleteWuyingServerId() { this->wuyingServerId_ = nullptr;};
    inline string getWuyingServerId() const { DARABONBA_PTR_GET_DEFAULT(wuyingServerId_, "") };
    inline UnassignWuyingServerPrivateAddressesRequest& setWuyingServerId(string wuyingServerId) { DARABONBA_PTR_SET_VALUE(wuyingServerId_, wuyingServerId) };


  protected:
    // This parameter is required.
    shared_ptr<vector<string>> privateIpAddresses_ {};
    // This parameter is required.
    shared_ptr<string> wuyingServerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AppstreamCenter20210901
#endif
