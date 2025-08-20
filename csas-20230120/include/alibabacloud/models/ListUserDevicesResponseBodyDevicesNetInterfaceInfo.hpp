// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTUSERDEVICESRESPONSEBODYDEVICESNETINTERFACEINFO_HPP_
#define ALIBABACLOUD_MODELS_LISTUSERDEVICESRESPONSEBODYDEVICESNETINTERFACEINFO_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class ListUserDevicesResponseBodyDevicesNetInterfaceInfo : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListUserDevicesResponseBodyDevicesNetInterfaceInfo& obj) { 
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListUserDevicesResponseBodyDevicesNetInterfaceInfo& obj) { 
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListUserDevicesResponseBodyDevicesNetInterfaceInfo() = default ;
    ListUserDevicesResponseBodyDevicesNetInterfaceInfo(const ListUserDevicesResponseBodyDevicesNetInterfaceInfo &) = default ;
    ListUserDevicesResponseBodyDevicesNetInterfaceInfo(ListUserDevicesResponseBodyDevicesNetInterfaceInfo &&) = default ;
    ListUserDevicesResponseBodyDevicesNetInterfaceInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListUserDevicesResponseBodyDevicesNetInterfaceInfo() = default ;
    ListUserDevicesResponseBodyDevicesNetInterfaceInfo& operator=(const ListUserDevicesResponseBodyDevicesNetInterfaceInfo &) = default ;
    ListUserDevicesResponseBodyDevicesNetInterfaceInfo& operator=(ListUserDevicesResponseBodyDevicesNetInterfaceInfo &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->mac_ != nullptr
        && this->name_ != nullptr; };
    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline ListUserDevicesResponseBodyDevicesNetInterfaceInfo& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListUserDevicesResponseBodyDevicesNetInterfaceInfo& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> mac_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
