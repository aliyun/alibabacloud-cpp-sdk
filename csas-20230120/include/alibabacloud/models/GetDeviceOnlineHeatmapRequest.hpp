// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEONLINEHEATMAPREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEONLINEHEATMAPREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class GetDeviceOnlineHeatmapRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceOnlineHeatmapRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Date, date_);
      DARABONBA_PTR_TO_JSON(DevTag, devTag_);
      DARABONBA_PTR_TO_JSON(SaseUserId, saseUserId_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceOnlineHeatmapRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Date, date_);
      DARABONBA_PTR_FROM_JSON(DevTag, devTag_);
      DARABONBA_PTR_FROM_JSON(SaseUserId, saseUserId_);
    };
    GetDeviceOnlineHeatmapRequest() = default ;
    GetDeviceOnlineHeatmapRequest(const GetDeviceOnlineHeatmapRequest &) = default ;
    GetDeviceOnlineHeatmapRequest(GetDeviceOnlineHeatmapRequest &&) = default ;
    GetDeviceOnlineHeatmapRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceOnlineHeatmapRequest() = default ;
    GetDeviceOnlineHeatmapRequest& operator=(const GetDeviceOnlineHeatmapRequest &) = default ;
    GetDeviceOnlineHeatmapRequest& operator=(GetDeviceOnlineHeatmapRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->date_ == nullptr
        && this->devTag_ == nullptr && this->saseUserId_ == nullptr; };
    // date Field Functions 
    bool hasDate() const { return this->date_ != nullptr;};
    void deleteDate() { this->date_ = nullptr;};
    inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
    inline GetDeviceOnlineHeatmapRequest& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


    // devTag Field Functions 
    bool hasDevTag() const { return this->devTag_ != nullptr;};
    void deleteDevTag() { this->devTag_ = nullptr;};
    inline string getDevTag() const { DARABONBA_PTR_GET_DEFAULT(devTag_, "") };
    inline GetDeviceOnlineHeatmapRequest& setDevTag(string devTag) { DARABONBA_PTR_SET_VALUE(devTag_, devTag) };


    // saseUserId Field Functions 
    bool hasSaseUserId() const { return this->saseUserId_ != nullptr;};
    void deleteSaseUserId() { this->saseUserId_ = nullptr;};
    inline string getSaseUserId() const { DARABONBA_PTR_GET_DEFAULT(saseUserId_, "") };
    inline GetDeviceOnlineHeatmapRequest& setSaseUserId(string saseUserId) { DARABONBA_PTR_SET_VALUE(saseUserId_, saseUserId) };


  protected:
    // The date to query, in the format yyyyMMdd with a fixed length of 8 characters. Online data is retained for only 8 days. Dates beyond the retention period return an empty list.
    // 
    // This parameter is required.
    shared_ptr<string> date_ {};
    // The terminal device ID.
    // 
    // This parameter is required.
    shared_ptr<string> devTag_ {};
    // The user ID. You can obtain this value from the following operations:
    // - [ListUserDevices](~~ListUserDevices~~): Lists user terminal devices.
    // - [GetUserDevice](~~GetUserDevice~~): Queries the details of a user terminal device.
    // 
    // This parameter is required.
    shared_ptr<string> saseUserId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
