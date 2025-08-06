// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SAVEFORMREMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SAVEFORMREMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class SaveFormRemarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SaveFormRemarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppType, appType_);
      DARABONBA_PTR_TO_JSON(AtUserId, atUserId_);
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(ReplyId, replyId_);
      DARABONBA_PTR_TO_JSON(SystemToken, systemToken_);
    };
    friend void from_json(const Darabonba::Json& j, SaveFormRemarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppType, appType_);
      DARABONBA_PTR_FROM_JSON(AtUserId, atUserId_);
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(FormInstanceId, formInstanceId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(ReplyId, replyId_);
      DARABONBA_PTR_FROM_JSON(SystemToken, systemToken_);
    };
    SaveFormRemarkRequest() = default ;
    SaveFormRemarkRequest(const SaveFormRemarkRequest &) = default ;
    SaveFormRemarkRequest(SaveFormRemarkRequest &&) = default ;
    SaveFormRemarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SaveFormRemarkRequest() = default ;
    SaveFormRemarkRequest& operator=(const SaveFormRemarkRequest &) = default ;
    SaveFormRemarkRequest& operator=(SaveFormRemarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appType_ != nullptr
        && this->atUserId_ != nullptr && this->content_ != nullptr && this->formInstanceId_ != nullptr && this->language_ != nullptr && this->replyId_ != nullptr
        && this->systemToken_ != nullptr; };
    // appType Field Functions 
    bool hasAppType() const { return this->appType_ != nullptr;};
    void deleteAppType() { this->appType_ = nullptr;};
    inline string appType() const { DARABONBA_PTR_GET_DEFAULT(appType_, "") };
    inline SaveFormRemarkRequest& setAppType(string appType) { DARABONBA_PTR_SET_VALUE(appType_, appType) };


    // atUserId Field Functions 
    bool hasAtUserId() const { return this->atUserId_ != nullptr;};
    void deleteAtUserId() { this->atUserId_ = nullptr;};
    inline string atUserId() const { DARABONBA_PTR_GET_DEFAULT(atUserId_, "") };
    inline SaveFormRemarkRequest& setAtUserId(string atUserId) { DARABONBA_PTR_SET_VALUE(atUserId_, atUserId) };


    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline SaveFormRemarkRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // formInstanceId Field Functions 
    bool hasFormInstanceId() const { return this->formInstanceId_ != nullptr;};
    void deleteFormInstanceId() { this->formInstanceId_ = nullptr;};
    inline string formInstanceId() const { DARABONBA_PTR_GET_DEFAULT(formInstanceId_, "") };
    inline SaveFormRemarkRequest& setFormInstanceId(string formInstanceId) { DARABONBA_PTR_SET_VALUE(formInstanceId_, formInstanceId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string language() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline SaveFormRemarkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // replyId Field Functions 
    bool hasReplyId() const { return this->replyId_ != nullptr;};
    void deleteReplyId() { this->replyId_ = nullptr;};
    inline int64_t replyId() const { DARABONBA_PTR_GET_DEFAULT(replyId_, 0L) };
    inline SaveFormRemarkRequest& setReplyId(int64_t replyId) { DARABONBA_PTR_SET_VALUE(replyId_, replyId) };


    // systemToken Field Functions 
    bool hasSystemToken() const { return this->systemToken_ != nullptr;};
    void deleteSystemToken() { this->systemToken_ = nullptr;};
    inline string systemToken() const { DARABONBA_PTR_GET_DEFAULT(systemToken_, "") };
    inline SaveFormRemarkRequest& setSystemToken(string systemToken) { DARABONBA_PTR_SET_VALUE(systemToken_, systemToken) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appType_ = nullptr;
    std::shared_ptr<string> atUserId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> content_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> formInstanceId_ = nullptr;
    std::shared_ptr<string> language_ = nullptr;
    std::shared_ptr<int64_t> replyId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> systemToken_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
