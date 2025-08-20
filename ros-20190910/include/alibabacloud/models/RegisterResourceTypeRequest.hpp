// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_REGISTERRESOURCETYPEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_REGISTERRESOURCETYPEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ROS20190910
{
namespace Models
{
  class RegisterResourceTypeRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const RegisterResourceTypeRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(EntityType, entityType_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_TO_JSON(TemplateURL, templateURL_);
    };
    friend void from_json(const Darabonba::Json& j, RegisterResourceTypeRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(EntityType, entityType_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(TemplateBody, templateBody_);
      DARABONBA_PTR_FROM_JSON(TemplateURL, templateURL_);
    };
    RegisterResourceTypeRequest() = default ;
    RegisterResourceTypeRequest(const RegisterResourceTypeRequest &) = default ;
    RegisterResourceTypeRequest(RegisterResourceTypeRequest &&) = default ;
    RegisterResourceTypeRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~RegisterResourceTypeRequest() = default ;
    RegisterResourceTypeRequest& operator=(const RegisterResourceTypeRequest &) = default ;
    RegisterResourceTypeRequest& operator=(RegisterResourceTypeRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->description_ != nullptr && this->entityType_ != nullptr && this->resourceType_ != nullptr && this->templateBody_ != nullptr && this->templateURL_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline RegisterResourceTypeRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline RegisterResourceTypeRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // entityType Field Functions 
    bool hasEntityType() const { return this->entityType_ != nullptr;};
    void deleteEntityType() { this->entityType_ = nullptr;};
    inline string entityType() const { DARABONBA_PTR_GET_DEFAULT(entityType_, "") };
    inline RegisterResourceTypeRequest& setEntityType(string entityType) { DARABONBA_PTR_SET_VALUE(entityType_, entityType) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline RegisterResourceTypeRequest& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // templateBody Field Functions 
    bool hasTemplateBody() const { return this->templateBody_ != nullptr;};
    void deleteTemplateBody() { this->templateBody_ = nullptr;};
    inline string templateBody() const { DARABONBA_PTR_GET_DEFAULT(templateBody_, "") };
    inline RegisterResourceTypeRequest& setTemplateBody(string templateBody) { DARABONBA_PTR_SET_VALUE(templateBody_, templateBody) };


    // templateURL Field Functions 
    bool hasTemplateURL() const { return this->templateURL_ != nullptr;};
    void deleteTemplateURL() { this->templateURL_ = nullptr;};
    inline string templateURL() const { DARABONBA_PTR_GET_DEFAULT(templateURL_, "") };
    inline RegisterResourceTypeRequest& setTemplateURL(string templateURL) { DARABONBA_PTR_SET_VALUE(templateURL_, templateURL) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the token, but you must make sure that the token is unique among different requests.\\
    // The token can be up to 64 characters in length, and can contain letters, digits, hyphens (-), and underscores (_).\\
    // For more information, see [Ensure idempotence](https://help.aliyun.com/document_detail/134212.html).
    std::shared_ptr<string> clientToken_ = nullptr;
    // The description of the resource type. The description can be up to 512 characters in length.
    std::shared_ptr<string> description_ = nullptr;
    // The entity type. Set the value to Module.
    // 
    // This parameter is required.
    std::shared_ptr<string> entityType_ = nullptr;
    // The resource type.
    // 
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // The structure that contains the template body. The template body must be 1 to 524,288 bytes in length. The template body is used as the module content. If the length of the template body exceeds the upper limit, we recommend that you add parameters to the HTTP POST request body to prevent request failures caused by excessively long URLs.
    // 
    // 
    // > - This parameter takes effect only when EntityType is set to Module.
    // > - You can specify only one of the TemplateBody and TemplateURL parameters.
    std::shared_ptr<string> templateBody_ = nullptr;
    // The URL of the file that contains the template body. The URL must point to a template that is located on an HTTP or HTTPS web server or in an Object Storage Service (OSS) bucket, such as oss://ros/template/demo or oss://ros/template/demo?RegionId=cn-hangzhou. The template body can be up to 524,288 bytes in length. The template body is used as the module content.
    // 
    // > - If you do not specify the region ID of the OSS bucket, the value of RegionId is used.
    // > -  This parameter takes effect only when EntityType is set to Module.
    // > -  You can specify only one of the TemplateBody and TemplateURL parameters.
    // 
    // The URL can be up to 1,024 bytes in length.
    std::shared_ptr<string> templateURL_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ROS20190910
#endif
