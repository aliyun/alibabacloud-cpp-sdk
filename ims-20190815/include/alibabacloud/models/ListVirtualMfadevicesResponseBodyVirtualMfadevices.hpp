// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTVIRTUALMFADEVICESRESPONSEBODYVIRTUALMFADEVICES_HPP_
#define ALIBABACLOUD_MODELS_LISTVIRTUALMFADEVICESRESPONSEBODYVIRTUALMFADEVICES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Ims20190815
{
namespace Models
{
  class ListVirtualMFADevicesResponseBodyVirtualMFADevices : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListVirtualMFADevicesResponseBodyVirtualMFADevices& obj) { 
      DARABONBA_PTR_TO_JSON(VirtualMFADevice, virtualMFADevice_);
    };
    friend void from_json(const Darabonba::Json& j, ListVirtualMFADevicesResponseBodyVirtualMFADevices& obj) { 
      DARABONBA_PTR_FROM_JSON(VirtualMFADevice, virtualMFADevice_);
    };
    ListVirtualMFADevicesResponseBodyVirtualMFADevices() = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevices(const ListVirtualMFADevicesResponseBodyVirtualMFADevices &) = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevices(ListVirtualMFADevicesResponseBodyVirtualMFADevices &&) = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevices(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListVirtualMFADevicesResponseBodyVirtualMFADevices() = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevices& operator=(const ListVirtualMFADevicesResponseBodyVirtualMFADevices &) = default ;
    ListVirtualMFADevicesResponseBodyVirtualMFADevices& operator=(ListVirtualMFADevicesResponseBodyVirtualMFADevices &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->virtualMFADevice_ != nullptr; };
    // virtualMFADevice Field Functions 
    bool hasVirtualMFADevice() const { return this->virtualMFADevice_ != nullptr;};
    void deleteVirtualMFADevice() { this->virtualMFADevice_ = nullptr;};
    inline const vector<Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice> & virtualMFADevice() const { DARABONBA_PTR_GET_CONST(virtualMFADevice_, vector<Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice>) };
    inline vector<Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice> virtualMFADevice() { DARABONBA_PTR_GET(virtualMFADevice_, vector<Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice>) };
    inline ListVirtualMFADevicesResponseBodyVirtualMFADevices& setVirtualMFADevice(const vector<Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice> & virtualMFADevice) { DARABONBA_PTR_SET_VALUE(virtualMFADevice_, virtualMFADevice) };
    inline ListVirtualMFADevicesResponseBodyVirtualMFADevices& setVirtualMFADevice(vector<Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice> && virtualMFADevice) { DARABONBA_PTR_SET_RVALUE(virtualMFADevice_, virtualMFADevice) };


  protected:
    std::shared_ptr<vector<Models::ListVirtualMFADevicesResponseBodyVirtualMFADevicesVirtualMFADevice>> virtualMFADevice_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Ims20190815
#endif
