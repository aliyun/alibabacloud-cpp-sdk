// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEUSERDEVICESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEUSERDEVICESREQUEST_HPP_
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
  class DeleteUserDevicesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteUserDevicesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceTags, deviceTags_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteUserDevicesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceTags, deviceTags_);
    };
    DeleteUserDevicesRequest() = default ;
    DeleteUserDevicesRequest(const DeleteUserDevicesRequest &) = default ;
    DeleteUserDevicesRequest(DeleteUserDevicesRequest &&) = default ;
    DeleteUserDevicesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteUserDevicesRequest() = default ;
    DeleteUserDevicesRequest& operator=(const DeleteUserDevicesRequest &) = default ;
    DeleteUserDevicesRequest& operator=(DeleteUserDevicesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceTags_ != nullptr; };
    // deviceTags Field Functions 
    bool hasDeviceTags() const { return this->deviceTags_ != nullptr;};
    void deleteDeviceTags() { this->deviceTags_ = nullptr;};
    inline const vector<string> & deviceTags() const { DARABONBA_PTR_GET_CONST(deviceTags_, vector<string>) };
    inline vector<string> deviceTags() { DARABONBA_PTR_GET(deviceTags_, vector<string>) };
    inline DeleteUserDevicesRequest& setDeviceTags(const vector<string> & deviceTags) { DARABONBA_PTR_SET_VALUE(deviceTags_, deviceTags) };
    inline DeleteUserDevicesRequest& setDeviceTags(vector<string> && deviceTags) { DARABONBA_PTR_SET_RVALUE(deviceTags_, deviceTags) };


  protected:
    std::shared_ptr<vector<string>> deviceTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
