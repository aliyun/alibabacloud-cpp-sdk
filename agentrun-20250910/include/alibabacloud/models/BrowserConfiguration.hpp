// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_BROWSERCONFIGURATION_HPP_
#define ALIBABACLOUD_MODELS_BROWSERCONFIGURATION_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ViewPortConfiguration.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentRun20250910
{
namespace Models
{
  class BrowserConfiguration : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const BrowserConfiguration& obj) { 
      DARABONBA_PTR_TO_JSON(browserType, browserType_);
      DARABONBA_PTR_TO_JSON(enableExtension, enableExtension_);
      DARABONBA_PTR_TO_JSON(headless, headless_);
      DARABONBA_PTR_TO_JSON(userAgent, userAgent_);
      DARABONBA_PTR_TO_JSON(viewPort, viewPort_);
    };
    friend void from_json(const Darabonba::Json& j, BrowserConfiguration& obj) { 
      DARABONBA_PTR_FROM_JSON(browserType, browserType_);
      DARABONBA_PTR_FROM_JSON(enableExtension, enableExtension_);
      DARABONBA_PTR_FROM_JSON(headless, headless_);
      DARABONBA_PTR_FROM_JSON(userAgent, userAgent_);
      DARABONBA_PTR_FROM_JSON(viewPort, viewPort_);
    };
    BrowserConfiguration() = default ;
    BrowserConfiguration(const BrowserConfiguration &) = default ;
    BrowserConfiguration(BrowserConfiguration &&) = default ;
    BrowserConfiguration(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~BrowserConfiguration() = default ;
    BrowserConfiguration& operator=(const BrowserConfiguration &) = default ;
    BrowserConfiguration& operator=(BrowserConfiguration &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->browserType_ == nullptr
        && this->enableExtension_ == nullptr && this->headless_ == nullptr && this->userAgent_ == nullptr && this->viewPort_ == nullptr; };
    // browserType Field Functions 
    bool hasBrowserType() const { return this->browserType_ != nullptr;};
    void deleteBrowserType() { this->browserType_ = nullptr;};
    inline string getBrowserType() const { DARABONBA_PTR_GET_DEFAULT(browserType_, "") };
    inline BrowserConfiguration& setBrowserType(string browserType) { DARABONBA_PTR_SET_VALUE(browserType_, browserType) };


    // enableExtension Field Functions 
    bool hasEnableExtension() const { return this->enableExtension_ != nullptr;};
    void deleteEnableExtension() { this->enableExtension_ = nullptr;};
    inline const vector<string> & getEnableExtension() const { DARABONBA_PTR_GET_CONST(enableExtension_, vector<string>) };
    inline vector<string> getEnableExtension() { DARABONBA_PTR_GET(enableExtension_, vector<string>) };
    inline BrowserConfiguration& setEnableExtension(const vector<string> & enableExtension) { DARABONBA_PTR_SET_VALUE(enableExtension_, enableExtension) };
    inline BrowserConfiguration& setEnableExtension(vector<string> && enableExtension) { DARABONBA_PTR_SET_RVALUE(enableExtension_, enableExtension) };


    // headless Field Functions 
    bool hasHeadless() const { return this->headless_ != nullptr;};
    void deleteHeadless() { this->headless_ = nullptr;};
    inline bool getHeadless() const { DARABONBA_PTR_GET_DEFAULT(headless_, false) };
    inline BrowserConfiguration& setHeadless(bool headless) { DARABONBA_PTR_SET_VALUE(headless_, headless) };


    // userAgent Field Functions 
    bool hasUserAgent() const { return this->userAgent_ != nullptr;};
    void deleteUserAgent() { this->userAgent_ = nullptr;};
    inline string getUserAgent() const { DARABONBA_PTR_GET_DEFAULT(userAgent_, "") };
    inline BrowserConfiguration& setUserAgent(string userAgent) { DARABONBA_PTR_SET_VALUE(userAgent_, userAgent) };


    // viewPort Field Functions 
    bool hasViewPort() const { return this->viewPort_ != nullptr;};
    void deleteViewPort() { this->viewPort_ = nullptr;};
    inline const ViewPortConfiguration & getViewPort() const { DARABONBA_PTR_GET_CONST(viewPort_, ViewPortConfiguration) };
    inline ViewPortConfiguration getViewPort() { DARABONBA_PTR_GET(viewPort_, ViewPortConfiguration) };
    inline BrowserConfiguration& setViewPort(const ViewPortConfiguration & viewPort) { DARABONBA_PTR_SET_VALUE(viewPort_, viewPort) };
    inline BrowserConfiguration& setViewPort(ViewPortConfiguration && viewPort) { DARABONBA_PTR_SET_RVALUE(viewPort_, viewPort) };


  protected:
    shared_ptr<string> browserType_ {};
    // 要启用的浏览器扩展列表
    shared_ptr<vector<string>> enableExtension_ {};
    // 是否以无头模式运行浏览器
    shared_ptr<bool> headless_ {};
    // 浏览器用户代理字符串
    shared_ptr<string> userAgent_ {};
    shared_ptr<ViewPortConfiguration> viewPort_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentRun20250910
#endif
