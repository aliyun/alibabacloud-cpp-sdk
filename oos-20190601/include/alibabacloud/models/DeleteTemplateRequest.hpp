// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DeleteTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDeleteExecutions, autoDeleteExecutions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDeleteExecutions, autoDeleteExecutions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    DeleteTemplateRequest() = default ;
    DeleteTemplateRequest(const DeleteTemplateRequest &) = default ;
    DeleteTemplateRequest(DeleteTemplateRequest &&) = default ;
    DeleteTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTemplateRequest() = default ;
    DeleteTemplateRequest& operator=(const DeleteTemplateRequest &) = default ;
    DeleteTemplateRequest& operator=(DeleteTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoDeleteExecutions_ == nullptr
        && return this->regionId_ == nullptr && return this->templateName_ == nullptr; };
    // autoDeleteExecutions Field Functions 
    bool hasAutoDeleteExecutions() const { return this->autoDeleteExecutions_ != nullptr;};
    void deleteAutoDeleteExecutions() { this->autoDeleteExecutions_ = nullptr;};
    inline bool autoDeleteExecutions() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteExecutions_, false) };
    inline DeleteTemplateRequest& setAutoDeleteExecutions(bool autoDeleteExecutions) { DARABONBA_PTR_SET_VALUE(autoDeleteExecutions_, autoDeleteExecutions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline DeleteTemplateRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // Specifies whether to delete the related executions when a template is deleted.
    std::shared_ptr<bool> autoDeleteExecutions_ = nullptr;
    // The region ID.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the template. The name can be 1 to 200 characters in length and can contain letters, digits, hyphens (-), and underscores (_). It cannot start with ALIYUN, ACS, ALIBABA, or ALICLOUD.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
