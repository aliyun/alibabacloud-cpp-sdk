// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYAPPRECORDTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYAPPRECORDTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/ModifyAppRecordTemplateRequestRecordTemplate.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class ModifyAppRecordTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyAppRecordTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AppId, appId_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(RecordTemplate, recordTemplate_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyAppRecordTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AppId, appId_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(RecordTemplate, recordTemplate_);
    };
    ModifyAppRecordTemplateRequest() = default ;
    ModifyAppRecordTemplateRequest(const ModifyAppRecordTemplateRequest &) = default ;
    ModifyAppRecordTemplateRequest(ModifyAppRecordTemplateRequest &&) = default ;
    ModifyAppRecordTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyAppRecordTemplateRequest() = default ;
    ModifyAppRecordTemplateRequest& operator=(const ModifyAppRecordTemplateRequest &) = default ;
    ModifyAppRecordTemplateRequest& operator=(ModifyAppRecordTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->appId_ == nullptr
        && return this->clientToken_ == nullptr && return this->recordTemplate_ == nullptr; };
    // appId Field Functions 
    bool hasAppId() const { return this->appId_ != nullptr;};
    void deleteAppId() { this->appId_ = nullptr;};
    inline string appId() const { DARABONBA_PTR_GET_DEFAULT(appId_, "") };
    inline ModifyAppRecordTemplateRequest& setAppId(string appId) { DARABONBA_PTR_SET_VALUE(appId_, appId) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyAppRecordTemplateRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // recordTemplate Field Functions 
    bool hasRecordTemplate() const { return this->recordTemplate_ != nullptr;};
    void deleteRecordTemplate() { this->recordTemplate_ = nullptr;};
    inline const ModifyAppRecordTemplateRequestRecordTemplate & recordTemplate() const { DARABONBA_PTR_GET_CONST(recordTemplate_, ModifyAppRecordTemplateRequestRecordTemplate) };
    inline ModifyAppRecordTemplateRequestRecordTemplate recordTemplate() { DARABONBA_PTR_GET(recordTemplate_, ModifyAppRecordTemplateRequestRecordTemplate) };
    inline ModifyAppRecordTemplateRequest& setRecordTemplate(const ModifyAppRecordTemplateRequestRecordTemplate & recordTemplate) { DARABONBA_PTR_SET_VALUE(recordTemplate_, recordTemplate) };
    inline ModifyAppRecordTemplateRequest& setRecordTemplate(ModifyAppRecordTemplateRequestRecordTemplate && recordTemplate) { DARABONBA_PTR_SET_RVALUE(recordTemplate_, recordTemplate) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> appId_ = nullptr;
    std::shared_ptr<string> clientToken_ = nullptr;
    // This parameter is required.
    std::shared_ptr<ModifyAppRecordTemplateRequestRecordTemplate> recordTemplate_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
