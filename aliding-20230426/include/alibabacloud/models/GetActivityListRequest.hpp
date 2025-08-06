// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACTIVITYLISTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACTIVITYLISTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetActivityListRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetActivityListRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ProcessCode, processCode_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, GetActivityListRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ProcessCode, processCode_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    GetActivityListRequest() = default ;
    GetActivityListRequest(const GetActivityListRequest &) = default ;
    GetActivityListRequest(GetActivityListRequest &&) = default ;
    GetActivityListRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetActivityListRequest() = default ;
    GetActivityListRequest& operator=(const GetActivityListRequest &) = default ;
    GetActivityListRequest& operator=(GetActivityListRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->language_ != nullptr && this->processCode_ != nullptr && this->systemToken_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetActivityListRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetActivityListRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // processCode Field Functions 
    bool hasProcessCode() const { return this->processCode_ != nullptr;};
    void deleteProcessCode() { this->processCode_ = nullptr;};
    inline string processCode() const { DARABONBA_PTR_GET_DEFAULT(processCode_, "") };
    inline GetActivityListRequest& setProcessCode(string processCode) { DARABONBA_PTR_SET_VALUE(processCode_, processCode) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline GetActivityListRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<string> processCode_ = nullptr;
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
