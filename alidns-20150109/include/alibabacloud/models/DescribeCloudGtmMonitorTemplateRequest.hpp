// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMMONITORTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECLOUDGTMMONITORTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Alidns20150109
{
namespace Models
{
  class DescribeCloudGtmMonitorTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCloudGtmMonitorTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCloudGtmMonitorTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AcceptLanguage, acceptLanguage_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DescribeCloudGtmMonitorTemplateRequest() = default ;
    DescribeCloudGtmMonitorTemplateRequest(const DescribeCloudGtmMonitorTemplateRequest &) = default ;
    DescribeCloudGtmMonitorTemplateRequest(DescribeCloudGtmMonitorTemplateRequest &&) = default ;
    DescribeCloudGtmMonitorTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCloudGtmMonitorTemplateRequest() = default ;
    DescribeCloudGtmMonitorTemplateRequest& operator=(const DescribeCloudGtmMonitorTemplateRequest &) = default ;
    DescribeCloudGtmMonitorTemplateRequest& operator=(DescribeCloudGtmMonitorTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->acceptLanguage_ == nullptr
        && this->templateId_ == nullptr; };
    // acceptLanguage Field Functions 
    bool hasAcceptLanguage() const { return this->acceptLanguage_ != nullptr;};
    void deleteAcceptLanguage() { this->acceptLanguage_ = nullptr;};
    inline string getAcceptLanguage() const { DARABONBA_PTR_GET_DEFAULT(acceptLanguage_, "") };
    inline DescribeCloudGtmMonitorTemplateRequest& setAcceptLanguage(string acceptLanguage) { DARABONBA_PTR_SET_VALUE(acceptLanguage_, acceptLanguage) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DescribeCloudGtmMonitorTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The language of the response. Valid values:
    // 
    // *   **zh-CN**: Chinese
    // *   **en-US** (default): English
    shared_ptr<string> acceptLanguage_ {};
    // The ID of the health check template that you want to query. This ID uniquely identifies the health check template.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Alidns20150109
#endif
