// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATECHANGESETREQUESTRESOURCESTOIMPORT_HPP_
#define ALIBABACLOUD_MODELS_CREATECHANGESETREQUESTRESOURCESTOIMPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class CreateChangeSetRequestResourcesToImport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateChangeSetRequestResourcesToImport& obj) { 
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_TO_JSON(ResourceIdentifier, resourceIdentifier_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateChangeSetRequestResourcesToImport& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_PTR_FROM_JSON(ResourceIdentifier, resourceIdentifier_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    CreateChangeSetRequestResourcesToImport() = default ;
    CreateChangeSetRequestResourcesToImport(const CreateChangeSetRequestResourcesToImport &) = default ;
    CreateChangeSetRequestResourcesToImport(CreateChangeSetRequestResourcesToImport &&) = default ;
    CreateChangeSetRequestResourcesToImport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateChangeSetRequestResourcesToImport() = default ;
    CreateChangeSetRequestResourcesToImport& operator=(const CreateChangeSetRequestResourcesToImport &) = default ;
    CreateChangeSetRequestResourcesToImport& operator=(CreateChangeSetRequestResourcesToImport &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->logicalResourceId_ != nullptr
        && this->resourceIdentifier_ != nullptr && this->resourceType_ != nullptr; };
    // logicalResourceId Field Functions 
    bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
    void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
    inline string logicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
    inline CreateChangeSetRequestResourcesToImport& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // resourceIdentifier Field Functions 
    bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
    void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
    inline string resourceIdentifier() const { DARABONBA_PTR_GET_DEFAULT(resourceIdentifier_, "") };
    inline CreateChangeSetRequestResourcesToImport& setResourceIdentifier(string resourceIdentifier) { DARABONBA_PTR_SET_VALUE(resourceIdentifier_, resourceIdentifier) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateChangeSetRequestResourcesToImport& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The logical ID of resource N. The logical ID is the name of the resource defined in the template.
    // 
    // >  This parameter takes effect only when ChangeSetType is set to IMPORT. ResourcesToImport is optional. If you specify ResourcesToImport, you must specify ResourcesToImport.N.LogicalResourceId.
    std::shared_ptr<string> logicalResourceId_ = nullptr;
    // The key-value mapping between strings. The key-value mapping is used to identify resource N that you want to import. The key-value mapping must be a JSON string.\\
    // A key is an identifier property of a resource and a value is the property value. For example, the key of the ALIYUN::ECS::VPC resource is VpcId and the value is `vpc-2zevx9ios****`.
    // 
    // You can call the [GetTemplateSummary](https://help.aliyun.com/document_detail/172485.html) operation to query the identifier property of the resource.
    // 
    // >  This parameter takes effect only when ChangeSetType is set to IMPORT. ResourcesToImport is optional. If you specify ResourcesToImport, you must specify ResourcesToImport.N.ResourceIdentifier.
    std::shared_ptr<string> resourceIdentifier_ = nullptr;
    // The type of resource N. The resource type must be the same as the resource type that is defined in the template.
    // 
    // >  This parameter takes effect only when ChangeSetType is set to IMPORT. ResourcesToImport is optional. If you specify ResourcesToImport, you must specify ResourcesToImport.N.ResourceType.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
