// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPASSISTANTAGENTSSOLOGINREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPASSISTANTAGENTSSOLOGINREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WebsiteBuild20250429
{
namespace Models
{
  class CreateAppAssistantAgentSsoLoginRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppAssistantAgentSsoLoginRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BizId, bizId_);
      DARABONBA_PTR_TO_JSON(PlatformType, platformType_);
      DARABONBA_PTR_TO_JSON(TargetUrl, targetUrl_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppAssistantAgentSsoLoginRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BizId, bizId_);
      DARABONBA_PTR_FROM_JSON(PlatformType, platformType_);
      DARABONBA_PTR_FROM_JSON(TargetUrl, targetUrl_);
    };
    CreateAppAssistantAgentSsoLoginRequest() = default ;
    CreateAppAssistantAgentSsoLoginRequest(const CreateAppAssistantAgentSsoLoginRequest &) = default ;
    CreateAppAssistantAgentSsoLoginRequest(CreateAppAssistantAgentSsoLoginRequest &&) = default ;
    CreateAppAssistantAgentSsoLoginRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppAssistantAgentSsoLoginRequest() = default ;
    CreateAppAssistantAgentSsoLoginRequest& operator=(const CreateAppAssistantAgentSsoLoginRequest &) = default ;
    CreateAppAssistantAgentSsoLoginRequest& operator=(CreateAppAssistantAgentSsoLoginRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->bizId_ == nullptr
        && this->platformType_ == nullptr && this->targetUrl_ == nullptr; };
    // bizId Field Functions 
    bool hasBizId() const { return this->bizId_ != nullptr;};
    void deleteBizId() { this->bizId_ = nullptr;};
    inline string getBizId() const { DARABONBA_PTR_GET_DEFAULT(bizId_, "") };
    inline CreateAppAssistantAgentSsoLoginRequest& setBizId(string bizId) { DARABONBA_PTR_SET_VALUE(bizId_, bizId) };


    // platformType Field Functions 
    bool hasPlatformType() const { return this->platformType_ != nullptr;};
    void deletePlatformType() { this->platformType_ = nullptr;};
    inline string getPlatformType() const { DARABONBA_PTR_GET_DEFAULT(platformType_, "") };
    inline CreateAppAssistantAgentSsoLoginRequest& setPlatformType(string platformType) { DARABONBA_PTR_SET_VALUE(platformType_, platformType) };


    // targetUrl Field Functions 
    bool hasTargetUrl() const { return this->targetUrl_ != nullptr;};
    void deleteTargetUrl() { this->targetUrl_ = nullptr;};
    inline string getTargetUrl() const { DARABONBA_PTR_GET_DEFAULT(targetUrl_, "") };
    inline CreateAppAssistantAgentSsoLoginRequest& setTargetUrl(string targetUrl) { DARABONBA_PTR_SET_VALUE(targetUrl_, targetUrl) };


  protected:
    shared_ptr<string> bizId_ {};
    shared_ptr<string> platformType_ {};
    shared_ptr<string> targetUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WebsiteBuild20250429
#endif
