// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEIDBYIDENTITYRESPONSEBODYRESULTDEVICEUNIONIDS_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEIDBYIDENTITYRESPONSEBODYRESULTDEVICEUNIONIDS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceUnionId, deviceUnionId_);
      DARABONBA_PTR_TO_JSON(OrganizationId, organizationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceUnionId, deviceUnionId_);
      DARABONBA_PTR_FROM_JSON(OrganizationId, organizationId_);
    };
    GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds() = default ;
    GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds(const GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds &) = default ;
    GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds(GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds &&) = default ;
    GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds() = default ;
    GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds& operator=(const GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds &) = default ;
    GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds& operator=(GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds &&) = default ;
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
    inline GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds& setDeviceUnionId(string deviceUnionId) { DARABONBA_PTR_SET_VALUE(deviceUnionId_, deviceUnionId) };


    // organizationId Field Functions 
    bool hasOrganizationId() const { return this->organizationId_ != nullptr;};
    void deleteOrganizationId() { this->organizationId_ = nullptr;};
    inline string organizationId() const { DARABONBA_PTR_GET_DEFAULT(organizationId_, "") };
    inline GetDeviceIdByIdentityResponseBodyResultDeviceUnionIds& setOrganizationId(string organizationId) { DARABONBA_PTR_SET_VALUE(organizationId_, organizationId) };


  protected:
    std::shared_ptr<string> deviceUnionId_ = nullptr;
    std::shared_ptr<string> organizationId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
