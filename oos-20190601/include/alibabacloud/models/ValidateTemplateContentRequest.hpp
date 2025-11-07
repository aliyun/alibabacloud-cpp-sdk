// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATETEMPLATECONTENTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATETEMPLATECONTENTREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ValidateTemplateContentRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateTemplateContentRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Content, content_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateTemplateContentRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Content, content_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
    };
    ValidateTemplateContentRequest() = default ;
    ValidateTemplateContentRequest(const ValidateTemplateContentRequest &) = default ;
    ValidateTemplateContentRequest(ValidateTemplateContentRequest &&) = default ;
    ValidateTemplateContentRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateTemplateContentRequest() = default ;
    ValidateTemplateContentRequest& operator=(const ValidateTemplateContentRequest &) = default ;
    ValidateTemplateContentRequest& operator=(ValidateTemplateContentRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->content_ == nullptr
        && return this->regionId_ == nullptr && return this->templateURL_ == nullptr; };
    // content Field Functions 
    bool hasContent() const { return this->content_ != nullptr;};
    void deleteContent() { this->content_ = nullptr;};
    inline string content() const { DARABONBA_PTR_GET_DEFAULT(content_, "") };
    inline ValidateTemplateContentRequest& setContent(string content) { DARABONBA_PTR_SET_VALUE(content_, content) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ValidateTemplateContentRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline ValidateTemplateContentRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


  protected:
    // The content of the template.
    std::shared_ptr<string> content_ = nullptr;
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The URL that is used to store the content of the Operation Orchestration Service (OOS) template in the Alibaba Cloud Object Storage Service (OSS). Only the public-read URL is supported. You can use this parameter to specify the tasks that you want to run. This way, you do not need to create a template before you start an execution. If you select an existing template, you do not need to specify this parameter.
    std::shared_ptr<string> templateURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
