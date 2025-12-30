// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATECLOUDGTMMONITORTEMPLATEREMARKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATECLOUDGTMMONITORTEMPLATEREMARKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class UpdateCloudGtmMonitorTemplateRemarkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateCloudGtmMonitorTemplateRemarkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Remark, remark_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateCloudGtmMonitorTemplateRemarkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Remark, remark_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateCloudGtmMonitorTemplateRemarkRequest() = default ;
    UpdateCloudGtmMonitorTemplateRemarkRequest(const UpdateCloudGtmMonitorTemplateRemarkRequest &) = default ;
    UpdateCloudGtmMonitorTemplateRemarkRequest(UpdateCloudGtmMonitorTemplateRemarkRequest &&) = default ;
    UpdateCloudGtmMonitorTemplateRemarkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateCloudGtmMonitorTemplateRemarkRequest() = default ;
    UpdateCloudGtmMonitorTemplateRemarkRequest& operator=(const UpdateCloudGtmMonitorTemplateRemarkRequest &) = default ;
    UpdateCloudGtmMonitorTemplateRemarkRequest& operator=(UpdateCloudGtmMonitorTemplateRemarkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->clientToken_ == nullptr && this->remark_ == nullptr && this->templateId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline UpdateCloudGtmMonitorTemplateRemarkRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline UpdateCloudGtmMonitorTemplateRemarkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // remark Field Functions 
    bool hasRemark() const { return this->remark_ != nullptr;};
    void deleteRemark() { this->remark_ = nullptr;};
    inline string getRemark() const { DARABONBA_PTR_GET_DEFAULT(remark_, "") };
    inline UpdateCloudGtmMonitorTemplateRemarkRequest& setRemark(string remark) { DARABONBA_PTR_SET_VALUE(remark_, remark) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateCloudGtmMonitorTemplateRemarkRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   zh-CN: Chinese
    // *   en-US: English
    shared_ptr<string> acceptLanguage_ {};
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests. The token can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // The new description of the template. If you do not specify this parameter, the original description is deleted.
    shared_ptr<string> remark_ {};
    // The ID of the health check template. This ID uniquely identifies a health check template.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
