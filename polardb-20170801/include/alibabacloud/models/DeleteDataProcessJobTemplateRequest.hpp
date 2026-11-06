// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETEDATAPROCESSJOBTEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETEDATAPROCESSJOBTEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardb20170801
{
namespace Models
{
  class DeleteDataProcessJobTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteDataProcessJobTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteDataProcessJobTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    DeleteDataProcessJobTemplateRequest() = default ;
    DeleteDataProcessJobTemplateRequest(const DeleteDataProcessJobTemplateRequest &) = default ;
    DeleteDataProcessJobTemplateRequest(DeleteDataProcessJobTemplateRequest &&) = default ;
    DeleteDataProcessJobTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteDataProcessJobTemplateRequest() = default ;
    DeleteDataProcessJobTemplateRequest& operator=(const DeleteDataProcessJobTemplateRequest &) = default ;
    DeleteDataProcessJobTemplateRequest& operator=(DeleteDataProcessJobTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && this->templateId_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteDataProcessJobTemplateRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline DeleteDataProcessJobTemplateRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The ID of the region where the template is located.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The ID of the task template to delete.
    // 
    // This parameter is required.
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardb20170801
#endif
