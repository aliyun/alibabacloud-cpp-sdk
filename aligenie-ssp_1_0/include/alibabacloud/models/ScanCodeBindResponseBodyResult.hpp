// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SCANCODEBINDRESPONSEBODYRESULT_HPP_
#define ALIBABACLOUD_MODELS_SCANCODEBINDRESPONSEBODYRESULT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AliGeniessp_1_0
{
namespace Models
{
  class ScanCodeBindResponseBodyResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ScanCodeBindResponseBodyResult& obj) { 
      DARABONBA_PTR_TO_JSON(BizGroup, bizGroup_);
      DARABONBA_PTR_TO_JSON(BizType, bizType_);
      DARABONBA_PTR_TO_JSON(DeviceOpenId, deviceOpenId_);
      DARABONBA_PTR_TO_JSON(UserOpenId, userOpenId_);
    };
    friend void from_json(const Darabonba::Json& j, ScanCodeBindResponseBodyResult& obj) { 
      DARABONBA_PTR_FROM_JSON(BizGroup, bizGroup_);
      DARABONBA_PTR_FROM_JSON(BizType, bizType_);
      DARABONBA_PTR_FROM_JSON(DeviceOpenId, deviceOpenId_);
      DARABONBA_PTR_FROM_JSON(UserOpenId, userOpenId_);
    };
    ScanCodeBindResponseBodyResult() = default ;
    ScanCodeBindResponseBodyResult(const ScanCodeBindResponseBodyResult &) = default ;
    ScanCodeBindResponseBodyResult(ScanCodeBindResponseBodyResult &&) = default ;
    ScanCodeBindResponseBodyResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ScanCodeBindResponseBodyResult() = default ;
    ScanCodeBindResponseBodyResult& operator=(const ScanCodeBindResponseBodyResult &) = default ;
    ScanCodeBindResponseBodyResult& operator=(ScanCodeBindResponseBodyResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->bizGroup_ != nullptr
        && this->bizType_ != nullptr && this->deviceOpenId_ != nullptr && this->userOpenId_ != nullptr; };
    // bizGroup Field Functions 
    bool hasBizGroup() const { return this->bizGroup_ != nullptr;};
    void deleteBizGroup() { this->bizGroup_ = nullptr;};
    inline string bizGroup() const { DARABONBA_PTR_GET_DEFAULT(bizGroup_, "") };
    inline ScanCodeBindResponseBodyResult& setBizGroup(string bizGroup) { DARABONBA_PTR_SET_VALUE(bizGroup_, bizGroup) };


    // bizType Field Functions 
    bool hasBizType() const { return this->bizType_ != nullptr;};
    void deleteBizType() { this->bizType_ = nullptr;};
    inline string bizType() const { DARABONBA_PTR_GET_DEFAULT(bizType_, "") };
    inline ScanCodeBindResponseBodyResult& setBizType(string bizType) { DARABONBA_PTR_SET_VALUE(bizType_, bizType) };


    // deviceOpenId Field Functions 
    bool hasDeviceOpenId() const { return this->deviceOpenId_ != nullptr;};
    void deleteDeviceOpenId() { this->deviceOpenId_ = nullptr;};
    inline string deviceOpenId() const { DARABONBA_PTR_GET_DEFAULT(deviceOpenId_, "") };
    inline ScanCodeBindResponseBodyResult& setDeviceOpenId(string deviceOpenId) { DARABONBA_PTR_SET_VALUE(deviceOpenId_, deviceOpenId) };


    // userOpenId Field Functions 
    bool hasUserOpenId() const { return this->userOpenId_ != nullptr;};
    void deleteUserOpenId() { this->userOpenId_ = nullptr;};
    inline string userOpenId() const { DARABONBA_PTR_GET_DEFAULT(userOpenId_, "") };
    inline ScanCodeBindResponseBodyResult& setUserOpenId(string userOpenId) { DARABONBA_PTR_SET_VALUE(userOpenId_, userOpenId) };


  protected:
    std::shared_ptr<string> bizGroup_ = nullptr;
    std::shared_ptr<string> bizType_ = nullptr;
    // A963*0158
    std::shared_ptr<string> deviceOpenId_ = nullptr;
    // DAFE****ce3ej=
    std::shared_ptr<string> userOpenId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AliGeniessp_1_0
#endif
