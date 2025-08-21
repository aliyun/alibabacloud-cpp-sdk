// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DEVICECONTROLREQUESTCONTROLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DEVICECONTROLREQUESTCONTROLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class DeviceControlRequestControlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeviceControlRequestControlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Muted, muted_);
      DARABONBA_PTR_TO_JSON(Volume, volume_);
    };
    friend void from_json(const Darabonba::Json& j, DeviceControlRequestControlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Muted, muted_);
      DARABONBA_PTR_FROM_JSON(Volume, volume_);
    };
    DeviceControlRequestControlRequest() = default ;
    DeviceControlRequestControlRequest(const DeviceControlRequestControlRequest &) = default ;
    DeviceControlRequestControlRequest(DeviceControlRequestControlRequest &&) = default ;
    DeviceControlRequestControlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeviceControlRequestControlRequest() = default ;
    DeviceControlRequestControlRequest& operator=(const DeviceControlRequestControlRequest &) = default ;
    DeviceControlRequestControlRequest& operator=(DeviceControlRequestControlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->muted_ != nullptr
        && this->volume_ != nullptr; };
    // muted Field Functions 
    bool hasMuted() const { return this->muted_ != nullptr;};
    void deleteMuted() { this->muted_ = nullptr;};
    inline bool muted() const { DARABONBA_PTR_GET_DEFAULT(muted_, false) };
    inline DeviceControlRequestControlRequest& setMuted(bool muted) { DARABONBA_PTR_SET_VALUE(muted_, muted) };


    // volume Field Functions 
    bool hasVolume() const { return this->volume_ != nullptr;};
    void deleteVolume() { this->volume_ = nullptr;};
    inline int32_t volume() const { DARABONBA_PTR_GET_DEFAULT(volume_, 0) };
    inline DeviceControlRequestControlRequest& setVolume(int32_t volume) { DARABONBA_PTR_SET_VALUE(volume_, volume) };


  protected:
    std::shared_ptr<bool> muted_ = nullptr;
    std::shared_ptr<int32_t> volume_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
