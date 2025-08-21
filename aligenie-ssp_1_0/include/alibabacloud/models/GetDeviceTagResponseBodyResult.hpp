// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICETAGRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICETAGRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceTagResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceTagResponseBodyResult& obj) { 
      DARABONBA_ANY_TO_JSON(DeviceTags, deviceTags_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceTagResponseBodyResult& obj) { 
      DARABONBA_ANY_FROM_JSON(DeviceTags, deviceTags_);
    };
    GetDeviceTagResponseBodyResult() = default ;
    GetDeviceTagResponseBodyResult(const GetDeviceTagResponseBodyResult &) = default ;
    GetDeviceTagResponseBodyResult(GetDeviceTagResponseBodyResult &&) = default ;
    GetDeviceTagResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceTagResponseBodyResult() = default ;
    GetDeviceTagResponseBodyResult& operator=(const GetDeviceTagResponseBodyResult &) = default ;
    GetDeviceTagResponseBodyResult& operator=(GetDeviceTagResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceTags_ != nullptr; };
    // deviceTags Field Functions 
    bool hasDeviceTags() const { return this->deviceTags_ != nullptr;};
    void deleteDeviceTags() { this->deviceTags_ = nullptr;};
    inline     const Darabonba::Json & deviceTags() const { DARABONBA_GET(deviceTags_) };
    Darabonba::Json & deviceTags() { DARABONBA_GET(deviceTags_) };
    inline GetDeviceTagResponseBodyResult& setDeviceTags(const Darabonba::Json & deviceTags) { DARABONBA_SET_VALUE(deviceTags_, deviceTags) };
    inline GetDeviceTagResponseBodyResult& setDeviceTags(Darabonba::Json & deviceTags) { DARABONBA_SET_RVALUE(deviceTags_, deviceTags) };


  protected:
    Darabonba::Json deviceTags_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
