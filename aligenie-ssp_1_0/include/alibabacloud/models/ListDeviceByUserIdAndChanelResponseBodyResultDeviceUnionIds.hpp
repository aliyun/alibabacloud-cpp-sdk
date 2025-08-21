// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELRESPONSEBODYRESULTDEVICEUNIONIDS_HPP_
#define ALIBABACLOUD_MODELS_LISTDEVICEBYUSERIDANDCHANELRESPONSEBODYRESULTDEVICEUNIONIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceUnionId, deviceUnionId_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceUnionId, deviceUnionId_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
    };
    ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds() = default ;
    ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds(const ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds &) = default ;
    ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds(ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds &&) = default ;
    ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds() = default ;
    ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds& operator=(const ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds &) = default ;
    ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds& operator=(ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceUnionId_ != nullptr
        && this->organizationId_ != nullptr; };
    // deviceUnionId Field Functions 
    bool hasDeviceUnionId() const { return this->deviceUnionId_ != nullptr;};
    void deleteDeviceUnionId() { this->deviceUnionId_ = nullptr;};
    inline string deviceUnionId() const { DARABONBA_PTR_GET_DEFAULT(deviceUnionId_, "") };
    inline ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds& setDeviceUnionId(string deviceUnionId) { DARABONBA_PTR_SET_VALUE(deviceUnionId_, deviceUnionId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline ListDeviceByUserIdAndChanelResponseBodyResultDeviceUnionIds& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> deviceUnionId_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
