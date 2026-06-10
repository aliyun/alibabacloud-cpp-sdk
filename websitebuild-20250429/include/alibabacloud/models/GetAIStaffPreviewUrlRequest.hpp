// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAISTAFFPREVIEWURLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAISTAFFPREVIEWURLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAIStaffPreviewUrlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAIStaffPreviewUrlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_TO_JSON(Restart, restart_);
    };
    friend void from_json(const Darabonba::Json& j, GetAIStaffPreviewUrlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
      DARABONBA_PTR_FROM_JSON(Restart, restart_);
    };
    GetAIStaffPreviewUrlRequest() = default ;
    GetAIStaffPreviewUrlRequest(const GetAIStaffPreviewUrlRequest &) = default ;
    GetAIStaffPreviewUrlRequest(GetAIStaffPreviewUrlRequest &&) = default ;
    GetAIStaffPreviewUrlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAIStaffPreviewUrlRequest() = default ;
    GetAIStaffPreviewUrlRequest& operator=(const GetAIStaffPreviewUrlRequest &) = default ;
    GetAIStaffPreviewUrlRequest& operator=(GetAIStaffPreviewUrlRequest &&) = default ;
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
    inline GetAIStaffPreviewUrlRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


    // restart Field Functions 
    bool hasRestart() const { return this->restart_ != nullptr;};
    void deleteRestart() { this->restart_ = nullptr;};
    inline bool getRestart() const { DARABONBA_PTR_GET_DEFAULT(restart_, false) };
    inline GetAIStaffPreviewUrlRequest& setRestart(bool restart) { DARABONBA_PTR_SET_VALUE(restart_, restart) };


  protected:
    // session ID
    shared_ptr<string> conversationId_ {};
    // is application restart required
    shared_ptr<bool> restart_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
