// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODYTEMPLATESCRATCHSOURCERESOURCES_HPP_
#define ALIBABACLOUD_MODELS_GETTEMPLATESCRATCHRESPONSEBODYTEMPLATESCRATCHSOURCERESOURCES_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetTemplateScratchResponseBodyTemplateScratchSourceResources : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetTemplateScratchResponseBodyTemplateScratchSourceResources& obj) { 
      DARABONBA_PTR_TO_JSON(RelatedResourceTypeFilter, relatedResourceTypeFilter_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GetTemplateScratchResponseBodyTemplateScratchSourceResources& obj) { 
      DARABONBA_PTR_FROM_JSON(RelatedResourceTypeFilter, relatedResourceTypeFilter_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GetTemplateScratchResponseBodyTemplateScratchSourceResources() = default ;
    GetTemplateScratchResponseBodyTemplateScratchSourceResources(const GetTemplateScratchResponseBodyTemplateScratchSourceResources &) = default ;
    GetTemplateScratchResponseBodyTemplateScratchSourceResources(GetTemplateScratchResponseBodyTemplateScratchSourceResources &&) = default ;
    GetTemplateScratchResponseBodyTemplateScratchSourceResources(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetTemplateScratchResponseBodyTemplateScratchSourceResources() = default ;
    GetTemplateScratchResponseBodyTemplateScratchSourceResources& operator=(const GetTemplateScratchResponseBodyTemplateScratchSourceResources &) = default ;
    GetTemplateScratchResponseBodyTemplateScratchSourceResources& operator=(GetTemplateScratchResponseBodyTemplateScratchSourceResources &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->relatedResourceTypeFilter_ != nullptr
        && this->resourceId_ != nullptr && this->resourceType_ != nullptr; };
    // relatedResourceTypeFilter Field Functions 
    bool hasRelatedResourceTypeFilter() const { return this->relatedResourceTypeFilter_ != nullptr;};
    void deleteRelatedResourceTypeFilter() { this->relatedResourceTypeFilter_ = nullptr;};
    inline const vector<string> & relatedResourceTypeFilter() const { DARABONBA_PTR_GET_CONST(relatedResourceTypeFilter_, vector<string>) };
    inline vector<string> relatedResourceTypeFilter() { DARABONBA_PTR_GET(relatedResourceTypeFilter_, vector<string>) };
    inline GetTemplateScratchResponseBodyTemplateScratchSourceResources& setRelatedResourceTypeFilter(const vector<string> & relatedResourceTypeFilter) { DARABONBA_PTR_SET_VALUE(relatedResourceTypeFilter_, relatedResourceTypeFilter) };
    inline GetTemplateScratchResponseBodyTemplateScratchSourceResources& setRelatedResourceTypeFilter(vector<string> && relatedResourceTypeFilter) { DARABONBA_PTR_SET_RVALUE(relatedResourceTypeFilter_, relatedResourceTypeFilter) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratchSourceResources& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetTemplateScratchResponseBodyTemplateScratchSourceResources& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The related resource type filters.
    std::shared_ptr<vector<string>> relatedResourceTypeFilter_ = nullptr;
    // The resource ID.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The resource type.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
