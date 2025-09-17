// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudcontrol20220830
{
namespace Models
{
  class CreateResourceResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(resourceId, resourceId_);
      DARABONBA_PTR_TO_JSON(resourcePath, resourcePath_);
      DARABONBA_PTR_TO_JSON(taskId, taskId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(resourceId, resourceId_);
      DARABONBA_PTR_FROM_JSON(resourcePath, resourcePath_);
      DARABONBA_PTR_FROM_JSON(taskId, taskId_);
    };
    CreateResourceResponseBody() = default ;
    CreateResourceResponseBody(const CreateResourceResponseBody &) = default ;
    CreateResourceResponseBody(CreateResourceResponseBody &&) = default ;
    CreateResourceResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceResponseBody() = default ;
    CreateResourceResponseBody& operator=(const CreateResourceResponseBody &) = default ;
    CreateResourceResponseBody& operator=(CreateResourceResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->requestId_ != nullptr
        && this->resourceId_ != nullptr && this->resourcePath_ != nullptr && this->taskId_ != nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CreateResourceResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string resourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline CreateResourceResponseBody& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


    // resourcePath Field Functions 
    bool hasResourcePath() const { return this->resourcePath_ != nullptr;};
    void deleteResourcePath() { this->resourcePath_ = nullptr;};
    inline string resourcePath() const { DARABONBA_PTR_GET_DEFAULT(resourcePath_, "") };
    inline CreateResourceResponseBody& setResourcePath(string resourcePath) { DARABONBA_PTR_SET_VALUE(resourcePath_, resourcePath) };


    // taskId Field Functions 
    bool hasTaskId() const { return this->taskId_ != nullptr;};
    void deleteTaskId() { this->taskId_ = nullptr;};
    inline string taskId() const { DARABONBA_PTR_GET_DEFAULT(taskId_, "") };
    inline CreateResourceResponseBody& setTaskId(string taskId) { DARABONBA_PTR_SET_VALUE(taskId_, taskId) };


  protected:
    // The ID of a request.
    std::shared_ptr<string> requestId_ = nullptr;
    // The ID of the resource.
    std::shared_ptr<string> resourceId_ = nullptr;
    // The path of the resources. The relative resource ID. The resource path contains the complete resource location (parent resource/child resource).
    std::shared_ptr<string> resourcePath_ = nullptr;
    // The ID of the asynchronous task. If the operation is asynchronous, this field is returned. In this case, the HTTP status code 202 is returned.
    std::shared_ptr<string> taskId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudcontrol20220830
#endif
