// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPSANDBOXPREVIEWURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPSANDBOXPREVIEWURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppSandboxPreviewUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppSandboxPreviewUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppSandboxPreviewUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    GetAppSandboxPreviewUrlRequest() = default ;
    GetAppSandboxPreviewUrlRequest(const GetAppSandboxPreviewUrlRequest &) = default ;
    GetAppSandboxPreviewUrlRequest(GetAppSandboxPreviewUrlRequest &&) = default ;
    GetAppSandboxPreviewUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppSandboxPreviewUrlRequest() = default ;
    GetAppSandboxPreviewUrlRequest& operator=(const GetAppSandboxPreviewUrlRequest &) = default ;
    GetAppSandboxPreviewUrlRequest& operator=(GetAppSandboxPreviewUrlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr
        && this->restart_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline GetAppSandboxPreviewUrlRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline GetAppSandboxPreviewUrlRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    shared_ptr<string> conversationId_ {};
    shared_ptr<bool> restart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
