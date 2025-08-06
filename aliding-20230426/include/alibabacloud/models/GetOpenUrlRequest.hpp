// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETOPENURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETOPENURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class GetOpenUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetOpenUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_TO_JSON(Timeout, timeout_);
    };
    friend void from_json(const Darabonba::Json& j, GetOpenUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(FileUrl, fileUrl_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
      DARABONBA_PTR_FROM_JSON(Timeout, timeout_);
    };
    GetOpenUrlRequest() = default ;
    GetOpenUrlRequest(const GetOpenUrlRequest &) = default ;
    GetOpenUrlRequest(GetOpenUrlRequest &&) = default ;
    GetOpenUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetOpenUrlRequest() = default ;
    GetOpenUrlRequest& operator=(const GetOpenUrlRequest &) = default ;
    GetOpenUrlRequest& operator=(GetOpenUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->fileUrl_ != nullptr && this->language_ != nullptr && this->systemToken_ != nullptr && this->timeout_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline GetOpenUrlRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // fileUrl Field Functions 
    bool hasFileUrl() const { return this->fileUrl_ != nullptr;};
    void deleteFileUrl() { this->fileUrl_ = nullptr;};
    inline string fileUrl() const { DARABONBA_PTR_GET_DEFAULT(fileUrl_, "") };
    inline GetOpenUrlRequest& setFileUrl(string fileUrl) { DARABONBA_PTR_SET_VALUE(fileUrl_, fileUrl) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline GetOpenUrlRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline GetOpenUrlRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


    // timeout Field Functions 
    bool hasTimeout() const { return this->timeout_ != nullptr;};
    void deleteTimeout() { this->timeout_ = nullptr;};
    inline int64_t timeout() const { DARABONBA_PTR_GET_DEFAULT(timeout_, 0L) };
    inline GetOpenUrlRequest& setTimeout(int64_t timeout) { DARABONBA_PTR_SET_VALUE(timeout_, timeout) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> fileUrl_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
    std::shared_ptr<int64_t> timeout_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
