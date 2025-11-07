// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTEXECUTIONRISKYTASKSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTEXECUTIONRISKYTASKSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Oos20190601
{
namespace Models
{
  class ListExecutionRiskyTasksRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListExecutionRiskyTasksRequest& obj) { 
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(TemplateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ListExecutionRiskyTasksRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(TemplateName, templateName_);
    };
    ListExecutionRiskyTasksRequest() = default ;
    ListExecutionRiskyTasksRequest(const ListExecutionRiskyTasksRequest &) = default ;
    ListExecutionRiskyTasksRequest(ListExecutionRiskyTasksRequest &&) = default ;
    ListExecutionRiskyTasksRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListExecutionRiskyTasksRequest() = default ;
    ListExecutionRiskyTasksRequest& operator=(const ListExecutionRiskyTasksRequest &) = default ;
    ListExecutionRiskyTasksRequest& operator=(ListExecutionRiskyTasksRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->regionId_ == nullptr
        && return this->templateName_ == nullptr; };
    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ListExecutionRiskyTasksRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListExecutionRiskyTasksRequest& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    // The ID of the region.
    std::shared_ptr<string> regionId_ = nullptr;
    // The name of the template.
    // 
    // This parameter is required.
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Oos20190601
#endif
