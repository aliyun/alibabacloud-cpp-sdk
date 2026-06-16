// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETAPPCONVERSATIONLOCKSTATUSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETAPPCONVERSATIONLOCKSTATUSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class GetAppConversationLockStatusRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAppConversationLockStatusRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConversationId, conversationId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAppConversationLockStatusRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConversationId, conversationId_);
    };
    GetAppConversationLockStatusRequest() = default ;
    GetAppConversationLockStatusRequest(const GetAppConversationLockStatusRequest &) = default ;
    GetAppConversationLockStatusRequest(GetAppConversationLockStatusRequest &&) = default ;
    GetAppConversationLockStatusRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAppConversationLockStatusRequest() = default ;
    GetAppConversationLockStatusRequest& operator=(const GetAppConversationLockStatusRequest &) = default ;
    GetAppConversationLockStatusRequest& operator=(GetAppConversationLockStatusRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->conversationId_ == nullptr; };
    // conversationId Field Functions 
    bool hasConversationId() const { return this->conversationId_ != nullptr;};
    void deleteConversationId() { this->conversationId_ = nullptr;};
    inline string getConversationId() const { DARABONBA_PTR_GET_DEFAULT(conversationId_, "") };
    inline GetAppConversationLockStatusRequest& setConversationId(string conversationId) { DARABONBA_PTR_SET_VALUE(conversationId_, conversationId) };


  protected:
    // The session ID.
    shared_ptr<string> conversationId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
