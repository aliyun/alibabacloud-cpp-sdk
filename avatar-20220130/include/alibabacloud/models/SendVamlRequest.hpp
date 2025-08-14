// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SENDVAMLREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SENDVAMLREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Avatar20220130
{
namespace Models
{
  class SendVamlRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SendVamlRequest& obj) { 
      DARABONBA_PTR_TO_JSON(SessionId, sessionId_);
      DARABONBA_PTR_TO_JSON(TenantId, tenantId_);
      DARABONBA_PTR_TO_JSON(Vaml, vaml_);
    };
    friend void from_json(const Darabonba::Json& j, SendVamlRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(SessionId, sessionId_);
      DARABONBA_PTR_FROM_JSON(TenantId, tenantId_);
      DARABONBA_PTR_FROM_JSON(Vaml, vaml_);
    };
    SendVamlRequest() = default ;
    SendVamlRequest(const SendVamlRequest &) = default ;
    SendVamlRequest(SendVamlRequest &&) = default ;
    SendVamlRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SendVamlRequest() = default ;
    SendVamlRequest& operator=(const SendVamlRequest &) = default ;
    SendVamlRequest& operator=(SendVamlRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->sessionId_ != nullptr
        && this->tenantId_ != nullptr && this->vaml_ != nullptr; };
    // sessionId Field Functions 
    bool hasSessionId() const { return this->sessionId_ != nullptr;};
    void deleteSessionId() { this->sessionId_ = nullptr;};
    inline string sessionId() const { DARABONBA_PTR_GET_DEFAULT(sessionId_, "") };
    inline SendVamlRequest& setSessionId(string sessionId) { DARABONBA_PTR_SET_VALUE(sessionId_, sessionId) };


    // tenantId Field Functions 
    bool hasTenantId() const { return this->tenantId_ != nullptr;};
    void deleteTenantId() { this->tenantId_ = nullptr;};
    inline int64_t tenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, 0L) };
    inline SendVamlRequest& setTenantId(int64_t tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    // vaml Field Functions 
    bool hasVaml() const { return this->vaml_ != nullptr;};
    void deleteVaml() { this->vaml_ = nullptr;};
    inline string vaml() const { DARABONBA_PTR_GET_DEFAULT(vaml_, "") };
    inline SendVamlRequest& setVaml(string vaml) { DARABONBA_PTR_SET_VALUE(vaml_, vaml) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> sessionId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> tenantId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> vaml_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Avatar20220130
#endif
