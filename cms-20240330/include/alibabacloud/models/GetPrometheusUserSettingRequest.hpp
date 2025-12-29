// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSUSERSETTINGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSUSERSETTINGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetPrometheusUserSettingRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusUserSettingRequest& obj) { 
      DARABONBA_PTR_TO_JSON(aliyunLang, aliyunLang_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusUserSettingRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(aliyunLang, aliyunLang_);
    };
    GetPrometheusUserSettingRequest() = default ;
    GetPrometheusUserSettingRequest(const GetPrometheusUserSettingRequest &) = default ;
    GetPrometheusUserSettingRequest(GetPrometheusUserSettingRequest &&) = default ;
    GetPrometheusUserSettingRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusUserSettingRequest() = default ;
    GetPrometheusUserSettingRequest& operator=(const GetPrometheusUserSettingRequest &) = default ;
    GetPrometheusUserSettingRequest& operator=(GetPrometheusUserSettingRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aliyunLang_ == nullptr; };
    // aliyunLang Field Functions 
    bool hasAliyunLang() const { return this->aliyunLang_ != nullptr;};
    void deleteAliyunLang() { this->aliyunLang_ = nullptr;};
    inline string getAliyunLang() const { DARABONBA_PTR_GET_DEFAULT(aliyunLang_, "") };
    inline GetPrometheusUserSettingRequest& setAliyunLang(string aliyunLang) { DARABONBA_PTR_SET_VALUE(aliyunLang_, aliyunLang) };


  protected:
    shared_ptr<string> aliyunLang_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
