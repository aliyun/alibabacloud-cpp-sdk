// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETRESOURCETYPETEMPLATEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_GETRESOURCETYPETEMPLATEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GetResourceTypeTemplateRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetResourceTypeTemplateRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(VersionId, versionId_);
    };
    friend void from_json(const Darabonba::Json& j, GetResourceTypeTemplateRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(VersionId, versionId_);
    };
    GetResourceTypeTemplateRequest() = default ;
    GetResourceTypeTemplateRequest(const GetResourceTypeTemplateRequest &) = default ;
    GetResourceTypeTemplateRequest(GetResourceTypeTemplateRequest &&) = default ;
    GetResourceTypeTemplateRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetResourceTypeTemplateRequest() = default ;
    GetResourceTypeTemplateRequest& operator=(const GetResourceTypeTemplateRequest &) = default ;
    GetResourceTypeTemplateRequest& operator=(GetResourceTypeTemplateRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->resourceType_ != nullptr
        && this->versionId_ != nullptr; };
    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GetResourceTypeTemplateRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // versionId Field Functions 
    bool hasVersionId() const { return this->versionId_ != nullptr;};
    void deleteVersionId() { this->versionId_ = nullptr;};
    inline string versionId() const { DARABONBA_PTR_GET_DEFAULT(versionId_, "") };
    inline GetResourceTypeTemplateRequest& setVersionId(string versionId) { DARABONBA_PTR_SET_VALUE(versionId_, versionId) };


  protected:
    // The resource type.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The version ID. If you want to query a specific version of the resource type, you must specify this parameter. If you do not specify this parameter, only the resource type is queried.
    // 
    // > This parameter is supported only for modules.
    std::shared_ptr<string> versionId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
