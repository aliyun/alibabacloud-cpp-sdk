// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYDATAASSOCIATEDCLUSTERTEMPLATES_HPP_
#define ALIBABACLOUD_MODELS_LISTRESOURCEGROUPSRESPONSEBODYDATAASSOCIATEDCLUSTERTEMPLATES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace EmrStudio20240430
{
namespace Models
{
  class ListResourceGroupsResponseBodyDataAssociatedClusterTemplates : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListResourceGroupsResponseBodyDataAssociatedClusterTemplates& obj) { 
      DARABONBA_PTR_TO_JSON(clusterType, clusterType_);
      DARABONBA_PTR_TO_JSON(templateId, templateId_);
      DARABONBA_PTR_TO_JSON(templateName, templateName_);
    };
    friend void from_json(const Darabonba::Json& j, ListResourceGroupsResponseBodyDataAssociatedClusterTemplates& obj) { 
      DARABONBA_PTR_FROM_JSON(clusterType, clusterType_);
      DARABONBA_PTR_FROM_JSON(templateId, templateId_);
      DARABONBA_PTR_FROM_JSON(templateName, templateName_);
    };
    ListResourceGroupsResponseBodyDataAssociatedClusterTemplates() = default ;
    ListResourceGroupsResponseBodyDataAssociatedClusterTemplates(const ListResourceGroupsResponseBodyDataAssociatedClusterTemplates &) = default ;
    ListResourceGroupsResponseBodyDataAssociatedClusterTemplates(ListResourceGroupsResponseBodyDataAssociatedClusterTemplates &&) = default ;
    ListResourceGroupsResponseBodyDataAssociatedClusterTemplates(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListResourceGroupsResponseBodyDataAssociatedClusterTemplates() = default ;
    ListResourceGroupsResponseBodyDataAssociatedClusterTemplates& operator=(const ListResourceGroupsResponseBodyDataAssociatedClusterTemplates &) = default ;
    ListResourceGroupsResponseBodyDataAssociatedClusterTemplates& operator=(ListResourceGroupsResponseBodyDataAssociatedClusterTemplates &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterType_ == nullptr
        && return this->templateId_ == nullptr && return this->templateName_ == nullptr; };
    // clusterType Field Functions 
    bool hasClusterType() const { return this->clusterType_ != nullptr;};
    void deleteClusterType() { this->clusterType_ = nullptr;};
    inline string clusterType() const { DARABONBA_PTR_GET_DEFAULT(clusterType_, "") };
    inline ListResourceGroupsResponseBodyDataAssociatedClusterTemplates& setClusterType(string clusterType) { DARABONBA_PTR_SET_VALUE(clusterType_, clusterType) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline ListResourceGroupsResponseBodyDataAssociatedClusterTemplates& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


    // templateName Field Functions 
    bool hasTemplateName() const { return this->templateName_ != nullptr;};
    void deleteTemplateName() { this->templateName_ = nullptr;};
    inline string templateName() const { DARABONBA_PTR_GET_DEFAULT(templateName_, "") };
    inline ListResourceGroupsResponseBodyDataAssociatedClusterTemplates& setTemplateName(string templateName) { DARABONBA_PTR_SET_VALUE(templateName_, templateName) };


  protected:
    std::shared_ptr<string> clusterType_ = nullptr;
    std::shared_ptr<string> templateId_ = nullptr;
    std::shared_ptr<string> templateName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace EmrStudio20240430
#endif
