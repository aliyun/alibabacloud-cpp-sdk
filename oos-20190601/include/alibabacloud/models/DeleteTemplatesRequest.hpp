// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DELETETEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DELETETEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class DeleteTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DeleteTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AutoDeleteExecutions, autoDeleteExecutions_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateNames, templateNames_);
    };
    friend void from_json(const Darabonba::Json& j, DeleteTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoDeleteExecutions, autoDeleteExecutions_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateNames, templateNames_);
    };
    DeleteTemplatesRequest() = default ;
    DeleteTemplatesRequest(const DeleteTemplatesRequest &) = default ;
    DeleteTemplatesRequest(DeleteTemplatesRequest &&) = default ;
    DeleteTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DeleteTemplatesRequest() = default ;
    DeleteTemplatesRequest& operator=(const DeleteTemplatesRequest &) = default ;
    DeleteTemplatesRequest& operator=(DeleteTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->autoDeleteExecutions_ == nullptr
        && this->regionId_ == nullptr && this->templateNames_ == nullptr; };
    // autoDeleteExecutions Field Functions 
    bool hasAutoDeleteExecutions() const { return this->autoDeleteExecutions_ != nullptr;};
    void deleteAutoDeleteExecutions() { this->autoDeleteExecutions_ = nullptr;};
    inline bool getAutoDeleteExecutions() const { DARABONBA_PTR_GET_DEFAULT(autoDeleteExecutions_, false) };
    inline DeleteTemplatesRequest& setAutoDeleteExecutions(bool autoDeleteExecutions) { DARABONBA_PTR_SET_VALUE(autoDeleteExecutions_, autoDeleteExecutions) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline DeleteTemplatesRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateNames Field Functions 
    bool hasTemplateNames() const { return this->templateNames_ != nullptr;};
    void deleteTemplateNames() { this->templateNames_ = nullptr;};
    inline string getTemplateNames() const { DARABONBA_PTR_GET_DEFAULT(templateNames_, "") };
    inline DeleteTemplatesRequest& setTemplateNames(string templateNames) { DARABONBA_PTR_SET_VALUE(templateNames_, templateNames) };


  protected:
    // Specifies whether to delete the related executions when a template is deleted.
    shared_ptr<bool> autoDeleteExecutions_ {};
    // The region ID.
    shared_ptr<string> regionId_ {};
    // The names of the templates to be deleted.
    // 
    // This parameter is required.
    shared_ptr<string> templateNames_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
