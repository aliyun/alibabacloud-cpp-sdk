// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEAPPRECORDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEAPPRECORDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/CreateAppRecordTemplateRequestRecordTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class CreateAppRecordTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateAppRecordTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RecordTemplate, recordTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, CreateAppRecordTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RecordTemplate, recordTemplate_);
    };
    CreateAppRecordTemplateRequest() = default ;
    CreateAppRecordTemplateRequest(const CreateAppRecordTemplateRequest &) = default ;
    CreateAppRecordTemplateRequest(CreateAppRecordTemplateRequest &&) = default ;
    CreateAppRecordTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateAppRecordTemplateRequest() = default ;
    CreateAppRecordTemplateRequest& operator=(const CreateAppRecordTemplateRequest &) = default ;
    CreateAppRecordTemplateRequest& operator=(CreateAppRecordTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->appId_ != nullptr
        && this->clientToken_ != nullptr && this->recordTemplate_ != nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline CreateAppRecordTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline CreateAppRecordTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // recordTemplate Field Functions 
    bool hasRecordTemplate() const { return this->recordTemplate_ != nullptr;};
    void deleteRecordTemplate() { this->recordTemplate_ = nullptr;};
    inline const CreateAppRecordTemplateRequestRecordTemplate & recordTemplate() const { DARABONBA_PTR_GET_CONST(recordTemplate_, CreateAppRecordTemplateRequestRecordTemplate) };
    inline CreateAppRecordTemplateRequestRecordTemplate recordTemplate() { DARABONBA_PTR_GET(recordTemplate_, CreateAppRecordTemplateRequestRecordTemplate) };
    inline CreateAppRecordTemplateRequest& setRecordTemplate(const CreateAppRecordTemplateRequestRecordTemplate & recordTemplate) { DARABONBA_PTR_SET_VALUE(recordTemplate_, recordTemplate) };
    inline CreateAppRecordTemplateRequest& setRecordTemplate(CreateAppRecordTemplateRequestRecordTemplate && recordTemplate) { DARABONBA_PTR_SET_RVALUE(recordTemplate_, recordTemplate) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<CreateAppRecordTemplateRequestRecordTemplate> recordTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
