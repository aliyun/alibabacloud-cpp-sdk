// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETACCESSTOKENREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETACCESSTOKENREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WuyingAI20260311
{
namespace Models
{
  class GetAccessTokenRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetAccessTokenRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, GetAccessTokenRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ExternalUserId, externalUserId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    GetAccessTokenRequest() = default ;
    GetAccessTokenRequest(const GetAccessTokenRequest &) = default ;
    GetAccessTokenRequest(GetAccessTokenRequest &&) = default ;
    GetAccessTokenRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetAccessTokenRequest() = default ;
    GetAccessTokenRequest& operator=(const GetAccessTokenRequest &) = default ;
    GetAccessTokenRequest& operator=(GetAccessTokenRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->externalUserId_ == nullptr
        && this->templateId_ == nullptr; };
    // externalUserId Field Functions 
    bool hasExternalUserId() const { return this->externalUserId_ != nullptr;};
    void deleteExternalUserId() { this->externalUserId_ = nullptr;};
    inline string getExternalUserId() const { DARABONBA_PTR_GET_DEFAULT(externalUserId_, "") };
    inline GetAccessTokenRequest& setExternalUserId(string externalUserId) { DARABONBA_PTR_SET_VALUE(externalUserId_, externalUserId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline GetAccessTokenRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    shared_ptr<string> externalUserId_ {};
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WuyingAI20260311
#endif
