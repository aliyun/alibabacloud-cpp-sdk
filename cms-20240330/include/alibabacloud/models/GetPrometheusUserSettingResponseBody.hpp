// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETPROMETHEUSUSERSETTINGRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETPROMETHEUSUSERSETTINGRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <map>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20240330
{
namespace Models
{
  class GetPrometheusUserSettingResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetPrometheusUserSettingResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(prometheusUserSetting, prometheusUserSetting_);
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, GetPrometheusUserSettingResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(prometheusUserSetting, prometheusUserSetting_);
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
    };
    GetPrometheusUserSettingResponseBody() = default ;
    GetPrometheusUserSettingResponseBody(const GetPrometheusUserSettingResponseBody &) = default ;
    GetPrometheusUserSettingResponseBody(GetPrometheusUserSettingResponseBody &&) = default ;
    GetPrometheusUserSettingResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetPrometheusUserSettingResponseBody() = default ;
    GetPrometheusUserSettingResponseBody& operator=(const GetPrometheusUserSettingResponseBody &) = default ;
    GetPrometheusUserSettingResponseBody& operator=(GetPrometheusUserSettingResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->prometheusUserSetting_ == nullptr
        && this->requestId_ == nullptr; };
    // prometheusUserSetting Field Functions 
    bool hasPrometheusUserSetting() const { return this->prometheusUserSetting_ != nullptr;};
    void deletePrometheusUserSetting() { this->prometheusUserSetting_ = nullptr;};
    inline const map<string, string> & getPrometheusUserSetting() const { DARABONBA_PTR_GET_CONST(prometheusUserSetting_, map<string, string>) };
    inline map<string, string> getPrometheusUserSetting() { DARABONBA_PTR_GET(prometheusUserSetting_, map<string, string>) };
    inline GetPrometheusUserSettingResponseBody& setPrometheusUserSetting(const map<string, string> & prometheusUserSetting) { DARABONBA_PTR_SET_VALUE(prometheusUserSetting_, prometheusUserSetting) };
    inline GetPrometheusUserSettingResponseBody& setPrometheusUserSetting(map<string, string> && prometheusUserSetting) { DARABONBA_PTR_SET_RVALUE(prometheusUserSetting_, prometheusUserSetting) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetPrometheusUserSettingResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<map<string, string>> prometheusUserSetting_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20240330
#endif
