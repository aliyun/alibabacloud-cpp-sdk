// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CONVERTDIRECTCONVERSATIONTOWORKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CONVERTDIRECTCONVERSATIONTOWORKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WinNexo20260512
{
namespace Models
{
  class ConvertDirectConversationToWorkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ConvertDirectConversationToWorkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(sessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
    };
    friend void from_json(const Darabonba::Json& j, ConvertDirectConversationToWorkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(sessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
    };
    ConvertDirectConversationToWorkRequest() = default ;
    ConvertDirectConversationToWorkRequest(const ConvertDirectConversationToWorkRequest &) = default ;
    ConvertDirectConversationToWorkRequest(ConvertDirectConversationToWorkRequest &&) = default ;
    ConvertDirectConversationToWorkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ConvertDirectConversationToWorkRequest() = default ;
    ConvertDirectConversationToWorkRequest& operator=(const ConvertDirectConversationToWorkRequest &) = default ;
    ConvertDirectConversationToWorkRequest& operator=(ConvertDirectConversationToWorkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->sessionId_ == nullptr
        && this->tenantId_ == nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string getSessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline ConvertDirectConversationToWorkRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
    inline ConvertDirectConversationToWorkRequest& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


  protected:
    // The source direct session ID.
    // 
    // This parameter is required.
    shared_ptr<string> sessionId_ {};
    // The tenant ID.
    shared_ptr<string> tenantId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WinNexo20260512
#endif
