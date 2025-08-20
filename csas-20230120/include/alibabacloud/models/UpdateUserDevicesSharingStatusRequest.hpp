// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEUSERDEVICESSHARINGSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEUSERDEVICESSHARINGSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class UpdateUserDevicesSharingStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateUserDevicesSharingStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceTags, deviceTags_);
      DARABONBA_PTR_TO_JSON(SharingStatus, sharingStatus_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateUserDevicesSharingStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceTags, deviceTags_);
      DARABONBA_PTR_FROM_JSON(SharingStatus, sharingStatus_);
    };
    UpdateUserDevicesSharingStatusRequest() = default ;
    UpdateUserDevicesSharingStatusRequest(const UpdateUserDevicesSharingStatusRequest &) = default ;
    UpdateUserDevicesSharingStatusRequest(UpdateUserDevicesSharingStatusRequest &&) = default ;
    UpdateUserDevicesSharingStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateUserDevicesSharingStatusRequest() = default ;
    UpdateUserDevicesSharingStatusRequest& operator=(const UpdateUserDevicesSharingStatusRequest &) = default ;
    UpdateUserDevicesSharingStatusRequest& operator=(UpdateUserDevicesSharingStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceTags_ != nullptr
        && this->sharingStatus_ != nullptr; };
    // deviceTags Field Functions 
    bool hasDeviceTags() const { return this->deviceTags_ != nullptr;};
    void deleteDeviceTags() { this->deviceTags_ = nullptr;};
    inline const vector<string> & deviceTags() const { DARABONBA_PTR_GET_CONST(deviceTags_, vector<string>) };
    inline vector<string> deviceTags() { DARABONBA_PTR_GET(deviceTags_, vector<string>) };
    inline UpdateUserDevicesSharingStatusRequest& setDeviceTags(const vector<string> & deviceTags) { DARABONBA_PTR_SET_VALUE(deviceTags_, deviceTags) };
    inline UpdateUserDevicesSharingStatusRequest& setDeviceTags(vector<string> && deviceTags) { DARABONBA_PTR_SET_RVALUE(deviceTags_, deviceTags) };


    // sharingStatus Field Functions 
    bool hasSharingStatus() const { return this->sharingStatus_ != nullptr;};
    void deleteSharingStatus() { this->sharingStatus_ = nullptr;};
    inline bool sharingStatus() const { DARABONBA_PTR_GET_DEFAULT(sharingStatus_, false) };
    inline UpdateUserDevicesSharingStatusRequest& setSharingStatus(bool sharingStatus) { DARABONBA_PTR_SET_VALUE(sharingStatus_, sharingStatus) };


  protected:
    // This parameter is required.
    std::shared_ptr<vector<string>> deviceTags_ = nullptr;
    // This parameter is required.
    std::shared_ptr<bool> sharingStatus_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
