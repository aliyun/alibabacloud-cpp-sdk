// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROMETHEUSUSERSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROMETHEUSUSERSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class UpdatePrometheusUserSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdatePrometheusUserSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(settingValue, settingValue_);
    };
    friend void from_json(const Darabonba::Json& j, UpdatePrometheusUserSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(settingValue, settingValue_);
    };
    UpdatePrometheusUserSettingRequest() = default ;
    UpdatePrometheusUserSettingRequest(const UpdatePrometheusUserSettingRequest &) = default ;
    UpdatePrometheusUserSettingRequest(UpdatePrometheusUserSettingRequest &&) = default ;
    UpdatePrometheusUserSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdatePrometheusUserSettingRequest() = default ;
    UpdatePrometheusUserSettingRequest& operator=(const UpdatePrometheusUserSettingRequest &) = default ;
    UpdatePrometheusUserSettingRequest& operator=(UpdatePrometheusUserSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->settingValue_ == nullptr; };
    // settingValue Field Functions 
    bool hasSettingValue() const { return this->settingValue_ != nullptr;};
    void deleteSettingValue() { this->settingValue_ = nullptr;};
    inline string settingValue() const { DARABONBA_PTR_GET_DEFAULT(settingValue_, "") };
    inline UpdatePrometheusUserSettingRequest& setSettingValue(string settingValue) { DARABONBA_PTR_SET_VALUE(settingValue_, settingValue) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> settingValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
