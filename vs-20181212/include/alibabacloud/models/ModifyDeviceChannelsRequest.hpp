// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDEVICECHANNELSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDEVICECHANNELSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vs20181212
{
namespace Models
{
  class ModifyDeviceChannelsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDeviceChannelsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Channels, channels_);
      DARABONBA_PTR_TO_JSON(DeviceStatus, deviceStatus_);
      DARABONBA_PTR_TO_JSON(Dsn, dsn_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDeviceChannelsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Channels, channels_);
      DARABONBA_PTR_FROM_JSON(DeviceStatus, deviceStatus_);
      DARABONBA_PTR_FROM_JSON(Dsn, dsn_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
    };
    ModifyDeviceChannelsRequest() = default ;
    ModifyDeviceChannelsRequest(const ModifyDeviceChannelsRequest &) = default ;
    ModifyDeviceChannelsRequest(ModifyDeviceChannelsRequest &&) = default ;
    ModifyDeviceChannelsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDeviceChannelsRequest() = default ;
    ModifyDeviceChannelsRequest& operator=(const ModifyDeviceChannelsRequest &) = default ;
    ModifyDeviceChannelsRequest& operator=(ModifyDeviceChannelsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->channels_ == nullptr
        && this->deviceStatus_ == nullptr && this->dsn_ == nullptr && this->id_ == nullptr && this->ownerId_ == nullptr; };
    // channels Field Functions 
    bool hasChannels() const { return this->channels_ != nullptr;};
    void deleteChannels() { this->channels_ = nullptr;};
    inline string getChannels() const { DARABONBA_PTR_GET_DEFAULT(channels_, "") };
    inline ModifyDeviceChannelsRequest& setChannels(string channels) { DARABONBA_PTR_SET_VALUE(channels_, channels) };


    // deviceStatus Field Functions 
    bool hasDeviceStatus() const { return this->deviceStatus_ != nullptr;};
    void deleteDeviceStatus() { this->deviceStatus_ = nullptr;};
    inline string getDeviceStatus() const { DARABONBA_PTR_GET_DEFAULT(deviceStatus_, "") };
    inline ModifyDeviceChannelsRequest& setDeviceStatus(string deviceStatus) { DARABONBA_PTR_SET_VALUE(deviceStatus_, deviceStatus) };


    // dsn Field Functions 
    bool hasDsn() const { return this->dsn_ != nullptr;};
    void deleteDsn() { this->dsn_ = nullptr;};
    inline string getDsn() const { DARABONBA_PTR_GET_DEFAULT(dsn_, "") };
    inline ModifyDeviceChannelsRequest& setDsn(string dsn) { DARABONBA_PTR_SET_VALUE(dsn_, dsn) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string getId() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ModifyDeviceChannelsRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ModifyDeviceChannelsRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


  protected:
    // This parameter is required.
    shared_ptr<string> channels_ {};
    shared_ptr<string> deviceStatus_ {};
    shared_ptr<string> dsn_ {};
    // This parameter is required.
    shared_ptr<string> id_ {};
    shared_ptr<int64_t> ownerId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vs20181212
#endif
