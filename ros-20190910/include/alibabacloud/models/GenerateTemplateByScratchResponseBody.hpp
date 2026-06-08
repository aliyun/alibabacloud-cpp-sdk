// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GENERATETEMPLATEBYSCRATCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GENERATETEMPLATEBYSCRATCHRESPONSEBODY_HPP_
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
  class GenerateTemplateByScratchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GenerateTemplateByScratchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResourcesToImport, resourcesToImport_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
    };
    friend void from_json(const Darabonba::Json& j, GenerateTemplateByScratchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResourcesToImport, resourcesToImport_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
    };
    GenerateTemplateByScratchResponseBody() = default ;
    GenerateTemplateByScratchResponseBody(const GenerateTemplateByScratchResponseBody &) = default ;
    GenerateTemplateByScratchResponseBody(GenerateTemplateByScratchResponseBody &&) = default ;
    GenerateTemplateByScratchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GenerateTemplateByScratchResponseBody() = default ;
    GenerateTemplateByScratchResponseBody& operator=(const GenerateTemplateByScratchResponseBody &) = default ;
    GenerateTemplateByScratchResponseBody& operator=(GenerateTemplateByScratchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResourcesToImport : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResourcesToImport& obj) { 
        DARABONBA_PTR_TO_JSON(LogicalResourceId, logicalResourceId_);
        DARABONBA_ANY_TO_JSON(ResourceIdentifier, resourceIdentifier_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      };
      friend void from_json(const Darabonba::Json& j, ResourcesToImport& obj) { 
        DARABONBA_PTR_FROM_JSON(LogicalResourceId, logicalResourceId_);
        DARABONBA_ANY_FROM_JSON(ResourceIdentifier, resourceIdentifier_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      };
      ResourcesToImport() = default ;
      ResourcesToImport(const ResourcesToImport &) = default ;
      ResourcesToImport(ResourcesToImport &&) = default ;
      ResourcesToImport(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResourcesToImport() = default ;
      ResourcesToImport& operator=(const ResourcesToImport &) = default ;
      ResourcesToImport& operator=(ResourcesToImport &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->logicalResourceId_ == nullptr
        && this->resourceIdentifier_ == nullptr && this->resourceType_ == nullptr; };
      // logicalResourceId Field Functions 
      bool hasLogicalResourceId() const { return this->logicalResourceId_ != nullptr;};
      void deleteLogicalResourceId() { this->logicalResourceId_ = nullptr;};
      inline string getLogicalResourceId() const { DARABONBA_PTR_GET_DEFAULT(logicalResourceId_, "") };
      inline ResourcesToImport& setLogicalResourceId(string logicalResourceId) { DARABONBA_PTR_SET_VALUE(logicalResourceId_, logicalResourceId) };


      // resourceIdentifier Field Functions 
      bool hasResourceIdentifier() const { return this->resourceIdentifier_ != nullptr;};
      void deleteResourceIdentifier() { this->resourceIdentifier_ = nullptr;};
      inline       const Darabonba::Json & getResourceIdentifier() const { DARABONBA_GET(resourceIdentifier_) };
      Darabonba::Json & getResourceIdentifier() { DARABONBA_GET(resourceIdentifier_) };
      inline ResourcesToImport& setResourceIdentifier(const Darabonba::Json & resourceIdentifier) { DARABONBA_SET_VALUE(resourceIdentifier_, resourceIdentifier) };
      inline ResourcesToImport& setResourceIdentifier(Darabonba::Json && resourceIdentifier) { DARABONBA_SET_RVALUE(resourceIdentifier_, resourceIdentifier) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ResourcesToImport& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    protected:
      // The logical ID of the resource.
      shared_ptr<string> logicalResourceId_ {};
      // The key-value mapping between strings. The value is a JSON string that identifies the resource that you want to import into a stack.\\
      // A key is an identifier for a resource, and a value is an assignment of data to the key. For example, VpcId is a key that indicates the ID of a virtual private cloud (VPC), and `vpc-bp1m6fww66xbntjyc****"` is a value that is assigned to VpcId.
      Darabonba::Json resourceIdentifier_ {};
      // The type of the resource.
      shared_ptr<string> resourceType_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resourcesToImport_ == nullptr && this->templateBody_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GenerateTemplateByScratchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourcesToImport Field Functions 
    bool hasResourcesToImport() const { return this->resourcesToImport_ != nullptr;};
    void deleteResourcesToImport() { this->resourcesToImport_ = nullptr;};
    inline const vector<GenerateTemplateByScratchResponseBody::ResourcesToImport> & getResourcesToImport() const { DARABONBA_PTR_GET_CONST(resourcesToImport_, vector<GenerateTemplateByScratchResponseBody::ResourcesToImport>) };
    inline vector<GenerateTemplateByScratchResponseBody::ResourcesToImport> getResourcesToImport() { DARABONBA_PTR_GET(resourcesToImport_, vector<GenerateTemplateByScratchResponseBody::ResourcesToImport>) };
    inline GenerateTemplateByScratchResponseBody& setResourcesToImport(const vector<GenerateTemplateByScratchResponseBody::ResourcesToImport> & resourcesToImport) { DARABONBA_PTR_SET_VALUE(resourcesToImport_, resourcesToImport) };
    inline GenerateTemplateByScratchResponseBody& setResourcesToImport(vector<GenerateTemplateByScratchResponseBody::ResourcesToImport> && resourcesToImport) { DARABONBA_PTR_SET_RVALUE(resourcesToImport_, resourcesToImport) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string getTemplateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline GenerateTemplateByScratchResponseBody& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The resources that you want to import into a stack in the resource management scenario.
    // 
    // > This parameter is returned only for a resource management scenario.
    shared_ptr<vector<GenerateTemplateByScratchResponseBody::ResourcesToImport>> resourcesToImport_ {};
    // The template content of the resource scenario.
    shared_ptr<string> templateBody_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
