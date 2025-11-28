// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTALLDEVICEGROUPRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTALLDEVICEGROUPRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Lto20210707
{
namespace Models
{
  class ListAllDeviceGroupResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListAllDeviceGroupResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_TO_JSON(Name, name_);
    };
    friend void from_json(const Darabonba::Json& j, ListAllDeviceGroupResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceGroupId, deviceGroupId_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
    };
    ListAllDeviceGroupResponseBodyData() = default ;
    ListAllDeviceGroupResponseBodyData(const ListAllDeviceGroupResponseBodyData &) = default ;
    ListAllDeviceGroupResponseBodyData(ListAllDeviceGroupResponseBodyData &&) = default ;
    ListAllDeviceGroupResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListAllDeviceGroupResponseBodyData() = default ;
    ListAllDeviceGroupResponseBodyData& operator=(const ListAllDeviceGroupResponseBodyData &) = default ;
    ListAllDeviceGroupResponseBodyData& operator=(ListAllDeviceGroupResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->deviceGroupId_ == nullptr
        && return this->name_ == nullptr; };
    // deviceGroupId Field Functions 
    bool hasDeviceGroupId() const { return this->deviceGroupId_ != nullptr;};
    void deleteDeviceGroupId() { this->deviceGroupId_ = nullptr;};
    inline string deviceGroupId() const { DARABONBA_PTR_GET_DEFAULT(deviceGroupId_, "") };
    inline ListAllDeviceGroupResponseBodyData& setDeviceGroupId(string deviceGroupId) { DARABONBA_PTR_SET_VALUE(deviceGroupId_, deviceGroupId) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline ListAllDeviceGroupResponseBodyData& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


  protected:
    std::shared_ptr<string> deviceGroupId_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Lto20210707
#endif
