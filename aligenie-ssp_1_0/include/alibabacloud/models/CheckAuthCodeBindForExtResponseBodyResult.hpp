// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKAUTHCODEBINDFOREXTRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_CHECKAUTHCODEBINDFOREXTRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo.hpp>
#include <alibabacloud/models/CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class CheckAuthCodeBindForExtResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckAuthCodeBindForExtResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(DeviceOpenInfo, deviceOpenInfo_);
      DARABONBA_PTR_TO_JSON(UserOpenInfo, userOpenInfo_);
    };
    friend void from_json(const Darabonba::Json& j, CheckAuthCodeBindForExtResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(DeviceOpenInfo, deviceOpenInfo_);
      DARABONBA_PTR_FROM_JSON(UserOpenInfo, userOpenInfo_);
    };
    CheckAuthCodeBindForExtResponseBodyResult() = default ;
    CheckAuthCodeBindForExtResponseBodyResult(const CheckAuthCodeBindForExtResponseBodyResult &) = default ;
    CheckAuthCodeBindForExtResponseBodyResult(CheckAuthCodeBindForExtResponseBodyResult &&) = default ;
    CheckAuthCodeBindForExtResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckAuthCodeBindForExtResponseBodyResult() = default ;
    CheckAuthCodeBindForExtResponseBodyResult& operator=(const CheckAuthCodeBindForExtResponseBodyResult &) = default ;
    CheckAuthCodeBindForExtResponseBodyResult& operator=(CheckAuthCodeBindForExtResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->deviceOpenInfo_ != nullptr
        && this->userOpenInfo_ != nullptr; };
    // deviceOpenInfo Field Functions 
    bool hasDeviceOpenInfo() const { return this->deviceOpenInfo_ != nullptr;};
    void deleteDeviceOpenInfo() { this->deviceOpenInfo_ = nullptr;};
    inline const Models::CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo & deviceOpenInfo() const { DARABONBA_PTR_GET_CONST(deviceOpenInfo_, Models::CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo) };
    inline Models::CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo deviceOpenInfo() { DARABONBA_PTR_GET(deviceOpenInfo_, Models::CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo) };
    inline CheckAuthCodeBindForExtResponseBodyResult& setDeviceOpenInfo(const Models::CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo & deviceOpenInfo) { DARABONBA_PTR_SET_VALUE(deviceOpenInfo_, deviceOpenInfo) };
    inline CheckAuthCodeBindForExtResponseBodyResult& setDeviceOpenInfo(Models::CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo && deviceOpenInfo) { DARABONBA_PTR_SET_RVALUE(deviceOpenInfo_, deviceOpenInfo) };


    // userOpenInfo Field Functions 
    bool hasUserOpenInfo() const { return this->userOpenInfo_ != nullptr;};
    void deleteUserOpenInfo() { this->userOpenInfo_ = nullptr;};
    inline const Models::CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo & userOpenInfo() const { DARABONBA_PTR_GET_CONST(userOpenInfo_, Models::CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo) };
    inline Models::CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo userOpenInfo() { DARABONBA_PTR_GET(userOpenInfo_, Models::CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo) };
    inline CheckAuthCodeBindForExtResponseBodyResult& setUserOpenInfo(const Models::CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo & userOpenInfo) { DARABONBA_PTR_SET_VALUE(userOpenInfo_, userOpenInfo) };
    inline CheckAuthCodeBindForExtResponseBodyResult& setUserOpenInfo(Models::CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo && userOpenInfo) { DARABONBA_PTR_SET_RVALUE(userOpenInfo_, userOpenInfo) };


  protected:
    std::shared_ptr<Models::CheckAuthCodeBindForExtResponseBodyResultDeviceOpenInfo> deviceOpenInfo_ = nullptr;
    std::shared_ptr<Models::CheckAuthCodeBindForExtResponseBodyResultUserOpenInfo> userOpenInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
