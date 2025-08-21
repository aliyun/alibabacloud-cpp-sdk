// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETDEVICEBASICINFORESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_GETDEVICEBASICINFORESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class GetDeviceBasicInfoResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetDeviceBasicInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(FirmwareVersion, firmwareVersion_);
      DARABONBA_PTR_TO_JSON(Mac, mac_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Sn, sn_);
    };
    friend void from_json(const Darabonba::Json& j, GetDeviceBasicInfoResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(FirmwareVersion, firmwareVersion_);
      DARABONBA_PTR_FROM_JSON(Mac, mac_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Sn, sn_);
    };
    GetDeviceBasicInfoResponseBodyResult() = default ;
    GetDeviceBasicInfoResponseBodyResult(const GetDeviceBasicInfoResponseBodyResult &) = default ;
    GetDeviceBasicInfoResponseBodyResult(GetDeviceBasicInfoResponseBodyResult &&) = default ;
    GetDeviceBasicInfoResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetDeviceBasicInfoResponseBodyResult() = default ;
    GetDeviceBasicInfoResponseBodyResult& operator=(const GetDeviceBasicInfoResponseBodyResult &) = default ;
    GetDeviceBasicInfoResponseBodyResult& operator=(GetDeviceBasicInfoResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->firmwareVersion_ != nullptr
        && this->mac_ != nullptr && this->name_ != nullptr && this->sn_ != nullptr; };
    // firmwareVersion Field Functions 
    bool hasFirmwareVersion() const { return this->firmwareVersion_ != nullptr;};
    void deleteFirmwareVersion() { this->firmwareVersion_ = nullptr;};
    inline string firmwareVersion() const { DARABONBA_PTR_GET_DEFAULT(firmwareVersion_, "") };
    inline GetDeviceBasicInfoResponseBodyResult& setFirmwareVersion(string firmwareVersion) { DARABONBA_PTR_SET_VALUE(firmwareVersion_, firmwareVersion) };


    // mac Field Functions 
    bool hasMac() const { return this->mac_ != nullptr;};
    void deleteMac() { this->mac_ = nullptr;};
    inline string mac() const { DARABONBA_PTR_GET_DEFAULT(mac_, "") };
    inline GetDeviceBasicInfoResponseBodyResult& setMac(string mac) { DARABONBA_PTR_SET_VALUE(mac_, mac) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline GetDeviceBasicInfoResponseBodyResult& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // sn Field Functions 
    bool hasSn() const { return this->sn_ != nullptr;};
    void deleteSn() { this->sn_ = nullptr;};
    inline string sn() const { DARABONBA_PTR_GET_DEFAULT(sn_, "") };
    inline GetDeviceBasicInfoResponseBodyResult& setSn(string sn) { DARABONBA_PTR_SET_VALUE(sn_, sn) };


  protected:
    std::shared_ptr<string> firmwareVersion_ = nullptr;
    std::shared_ptr<string> mac_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> sn_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
