// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_PAL7CONFIGBYPASSCONFIG_HPP_
#define ALIBABACLOUD_MODELS_PAL7CONFIGBYPASSCONFIG_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/PAL7ConfigBypassConfigUrlBypassRules.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Csas20230120
{
namespace Models
{
  class PAL7ConfigBypassConfig : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const PAL7ConfigBypassConfig& obj) { 
      DARABONBA_PTR_TO_JSON(AppBypassFroms, appBypassFroms_);
      DARABONBA_PTR_TO_JSON(Mode, mode_);
      DARABONBA_PTR_TO_JSON(UrlBypassRules, urlBypassRules_);
    };
    friend void from_json(const Darabonba::Json& j, PAL7ConfigBypassConfig& obj) { 
      DARABONBA_PTR_FROM_JSON(AppBypassFroms, appBypassFroms_);
      DARABONBA_PTR_FROM_JSON(Mode, mode_);
      DARABONBA_PTR_FROM_JSON(UrlBypassRules, urlBypassRules_);
    };
    PAL7ConfigBypassConfig() = default ;
    PAL7ConfigBypassConfig(const PAL7ConfigBypassConfig &) = default ;
    PAL7ConfigBypassConfig(PAL7ConfigBypassConfig &&) = default ;
    PAL7ConfigBypassConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~PAL7ConfigBypassConfig() = default ;
    PAL7ConfigBypassConfig& operator=(const PAL7ConfigBypassConfig &) = default ;
    PAL7ConfigBypassConfig& operator=(PAL7ConfigBypassConfig &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appBypassFroms_ != nullptr
        && this->mode_ != nullptr && this->urlBypassRules_ != nullptr; };
    // appBypassFroms Field Functions 
    bool hasAppBypassFroms() const { return this->appBypassFroms_ != nullptr;};
    void deleteAppBypassFroms() { this->appBypassFroms_ = nullptr;};
    inline const vector<string> & appBypassFroms() const { DARABONBA_PTR_GET_CONST(appBypassFroms_, vector<string>) };
    inline vector<string> appBypassFroms() { DARABONBA_PTR_GET(appBypassFroms_, vector<string>) };
    inline PAL7ConfigBypassConfig& setAppBypassFroms(const vector<string> & appBypassFroms) { DARABONBA_PTR_SET_VALUE(appBypassFroms_, appBypassFroms) };
    inline PAL7ConfigBypassConfig& setAppBypassFroms(vector<string> && appBypassFroms) { DARABONBA_PTR_SET_RVALUE(appBypassFroms_, appBypassFroms) };


    // mode Field Functions 
    bool hasMode() const { return this->mode_ != nullptr;};
    void deleteMode() { this->mode_ = nullptr;};
    inline string mode() const { DARABONBA_PTR_GET_DEFAULT(mode_, "") };
    inline PAL7ConfigBypassConfig& setMode(string mode) { DARABONBA_PTR_SET_VALUE(mode_, mode) };


    // urlBypassRules Field Functions 
    bool hasUrlBypassRules() const { return this->urlBypassRules_ != nullptr;};
    void deleteUrlBypassRules() { this->urlBypassRules_ = nullptr;};
    inline const vector<Models::PAL7ConfigBypassConfigUrlBypassRules> & urlBypassRules() const { DARABONBA_PTR_GET_CONST(urlBypassRules_, vector<Models::PAL7ConfigBypassConfigUrlBypassRules>) };
    inline vector<Models::PAL7ConfigBypassConfigUrlBypassRules> urlBypassRules() { DARABONBA_PTR_GET(urlBypassRules_, vector<Models::PAL7ConfigBypassConfigUrlBypassRules>) };
    inline PAL7ConfigBypassConfig& setUrlBypassRules(const vector<Models::PAL7ConfigBypassConfigUrlBypassRules> & urlBypassRules) { DARABONBA_PTR_SET_VALUE(urlBypassRules_, urlBypassRules) };
    inline PAL7ConfigBypassConfig& setUrlBypassRules(vector<Models::PAL7ConfigBypassConfigUrlBypassRules> && urlBypassRules) { DARABONBA_PTR_SET_RVALUE(urlBypassRules_, urlBypassRules) };


  protected:
    std::shared_ptr<vector<string>> appBypassFroms_ = nullptr;
    std::shared_ptr<string> mode_ = nullptr;
    std::shared_ptr<vector<Models::PAL7ConfigBypassConfigUrlBypassRules>> urlBypassRules_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Csas20230120
#endif
