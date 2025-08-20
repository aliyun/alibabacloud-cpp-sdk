// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETEMPLATEBYSCRATCHRESPONSEBODYRESOURCESTOIMPORT_HPP_
#define ALIBABACLOUD_MODELS_GENERATETEMPLATEBYSCRATCHRESPONSEBODYRESOURCESTOIMPORT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class GenerateTemplateByScratchResponseBodyResourcesToImport : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTemplateByScratchResponseBodyResourcesToImport& obj) { 
      DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_ANY_TO_JSON(ResourceIdentifier, resourceIdentifier_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTemplateByScratchResponseBodyResourcesToImport& obj) { 
      DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
      DARABONBA_ANY_FROM_JSON(ResourceIdentifier, resourceIdentifier_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
    };
    GenerateTemplateByScratchResponseBodyResourcesToImport() = default ;
    GenerateTemplateByScratchResponseBodyResourcesToImport(const GenerateTemplateByScratchResponseBodyResourcesToImport &) = default ;
    GenerateTemplateByScratchResponseBodyResourcesToImport(GenerateTemplateByScratchResponseBodyResourcesToImport &&) = default ;
    GenerateTemplateByScratchResponseBodyResourcesToImport(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTemplateByScratchResponseBodyResourcesToImport() = default ;
    GenerateTemplateByScratchResponseBodyResourcesToImport& operator=(const GenerateTemplateByScratchResponseBodyResourcesToImport &) = default ;
    GenerateTemplateByScratchResponseBodyResourcesToImport& operator=(GenerateTemplateByScratchResponseBodyResourcesToImport &&) = default ;
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
    inline GenerateTemplateByScratchResponseBodyResourcesToImport& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


    // resourceIdentifier Field Functions 
    bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
    void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
    inline     const Darabonba::Json & resourceIdentifier() const { DARABONBA_GET(resourceIdentifier_) };
    Darabonba::Json & resourceIdentifier() { DARABONBA_GET(resourceIdentifier_) };
    inline GenerateTemplateByScratchResponseBodyResourcesToImport& setResourceIdentifier(const Darabonba::Json & resourceIdentifier) { DARABONBA_SET_VALUE(resourceIdentifier_, resourceIdentifier) };
    inline GenerateTemplateByScratchResponseBodyResourcesToImport& setResourceIdentifier(Darabonba::Json & resourceIdentifier) { DARABONBA_SET_RVALUE(resourceIdentifier_, resourceIdentifier) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline GenerateTemplateByScratchResponseBodyResourcesToImport& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


  protected:
    // The logical ID of the resource.
    std::shared_ptr<string> logicalResourceId_ = nullptr;
    // The key-value mapping between strings. The value is a JSON string that identifies the resource that you want to import into a stack.\\
    // A key is an identifier for a resource, and a value is an assignment of data to the key. For example, VpcId is a key that indicates the ID of a virtual private cloud (VPC), and `vpc-bp1m6fww66xbntjyc****"` is a value that is assigned to VpcId.
    Darabonba::Json resourceIdentifier_ = nullptr;
    // The type of the resource.
    std::shared_ptr<string> resourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
