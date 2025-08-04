// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEAPPRECORDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEAPPRECORDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/DeleteAppRecordTemplateRequestTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DeleteAppRecordTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteAppRecordTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Template, template_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteAppRecordTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Template, template_);
    };
    DeleteAppRecordTemplateRequest() = default ;
    DeleteAppRecordTemplateRequest(const DeleteAppRecordTemplateRequest &) = default ;
    DeleteAppRecordTemplateRequest(DeleteAppRecordTemplateRequest &&) = default ;
    DeleteAppRecordTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteAppRecordTemplateRequest() = default ;
    DeleteAppRecordTemplateRequest& operator=(const DeleteAppRecordTemplateRequest &) = default ;
    DeleteAppRecordTemplateRequest& operator=(DeleteAppRecordTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->clientToken_ != nullptr && this->template_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline DeleteAppRecordTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline DeleteAppRecordTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // template Field Functions 
    bool hasTemplate() const { return this->template_ != nullptr;};
    void deleteTemplate() { this->template_ = nullptr;};
    inline const DeleteAppRecordTemplateRequestTemplate & _template() const { DARABONBA_PTR_GET_CONST(template_, DeleteAppRecordTemplateRequestTemplate) };
    inline DeleteAppRecordTemplateRequestTemplate _template() { DARABONBA_PTR_GET(template_, DeleteAppRecordTemplateRequestTemplate) };
    inline DeleteAppRecordTemplateRequest& setTemplate(const DeleteAppRecordTemplateRequestTemplate & _template) { DARABONBA_PTR_SET_VALUE(template_, _template) };
    inline DeleteAppRecordTemplateRequest& setTemplate(DeleteAppRecordTemplateRequestTemplate && _template) { DARABONBA_PTR_SET_RVALUE(template_, _template) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<DeleteAppRecordTemplateRequestTemplate> template_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
