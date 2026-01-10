// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETCLASSIFICATIONTEMPLATERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_GETCLASSIFICATIONTEMPLATERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetClassificationTemplateResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetClassificationTemplateResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ClassificationResourceTemplateMap, classificationResourceTemplateMap_);
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, GetClassificationTemplateResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassificationResourceTemplateMap, classificationResourceTemplateMap_);
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    GetClassificationTemplateResponseBody() = default ;
    GetClassificationTemplateResponseBody(const GetClassificationTemplateResponseBody &) = default ;
    GetClassificationTemplateResponseBody(GetClassificationTemplateResponseBody &&) = default ;
    GetClassificationTemplateResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetClassificationTemplateResponseBody() = default ;
    GetClassificationTemplateResponseBody& operator=(const GetClassificationTemplateResponseBody &) = default ;
    GetClassificationTemplateResponseBody& operator=(GetClassificationTemplateResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ClassificationResourceTemplateMap : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ClassificationResourceTemplateMap& obj) { 
        DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
        DARABONBA_PTR_TO_JSON(TemplateType, templateType_);
      };
      friend void from_json(const Darabonba::Json& j, ClassificationResourceTemplateMap& obj) { 
        DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
        DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
        DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
        DARABONBA_PTR_FROM_JSON(TemplateType, templateType_);
      };
      ClassificationResourceTemplateMap() = default ;
      ClassificationResourceTemplateMap(const ClassificationResourceTemplateMap &) = default ;
      ClassificationResourceTemplateMap(ClassificationResourceTemplateMap &&) = default ;
      ClassificationResourceTemplateMap(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ClassificationResourceTemplateMap() = default ;
      ClassificationResourceTemplateMap& operator=(const ClassificationResourceTemplateMap &) = default ;
      ClassificationResourceTemplateMap& operator=(ClassificationResourceTemplateMap &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->resourceId_ == nullptr
        && this->resourceType_ == nullptr && this->templateId_ == nullptr && this->templateType_ == nullptr; };
      // resourceId Field Functions 
      bool hasResourceId() const { return this->resourceId_ != nullptr;};
      void deleteResourceId() { this->resourceId_ = nullptr;};
      inline int64_t getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, 0L) };
      inline ClassificationResourceTemplateMap& setResourceId(int64_t resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


      // resourceType Field Functions 
      bool hasResourceType() const { return this->resourceType_ != nullptr;};
      void deleteResourceType() { this->resourceType_ = nullptr;};
      inline string getResourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
      inline ClassificationResourceTemplateMap& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


      // templateId Field Functions 
      bool hasTemplateId() const { return this->templateId_ != nullptr;};
      void deleteTemplateId() { this->templateId_ = nullptr;};
      inline int64_t getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, 0L) };
      inline ClassificationResourceTemplateMap& setTemplateId(int64_t templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


      // templateType Field Functions 
      bool hasTemplateType() const { return this->templateType_ != nullptr;};
      void deleteTemplateType() { this->templateType_ = nullptr;};
      inline string getTemplateType() const { DARABONBA_PTR_GET_DEFAULT(templateType_, "") };
      inline ClassificationResourceTemplateMap& setTemplateType(string templateType) { DARABONBA_PTR_SET_VALUE(templateType_, templateType) };


    protected:
      // The ID of the resource. The supported resource type is INSTANCE. The resource ID corresponds to the value of InstanceId. You can call the [ListInstances](https://help.aliyun.com/document_detail/141936.html) operation to obtain the value of InstanceId.
      shared_ptr<int64_t> resourceId_ {};
      // The resource type. The value is fixed as **INSTANCE**.
      shared_ptr<string> resourceType_ {};
      // The ID of the classification and grading template.
      shared_ptr<int64_t> templateId_ {};
      // The type of the classification and grading template. Valid values:
      // 
      // *   **INNER**: a built-in template.
      // *   **USER_DEFINE**: a custom template.
      shared_ptr<string> templateType_ {};
    };

    virtual bool empty() const override { return this->classificationResourceTemplateMap_ == nullptr
        && this->errorCode_ == nullptr && this->errorMessage_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // classificationResourceTemplateMap Field Functions 
    bool hasClassificationResourceTemplateMap() const { return this->classificationResourceTemplateMap_ != nullptr;};
    void deleteClassificationResourceTemplateMap() { this->classificationResourceTemplateMap_ = nullptr;};
    inline const GetClassificationTemplateResponseBody::ClassificationResourceTemplateMap & getClassificationResourceTemplateMap() const { DARABONBA_PTR_GET_CONST(classificationResourceTemplateMap_, GetClassificationTemplateResponseBody::ClassificationResourceTemplateMap) };
    inline GetClassificationTemplateResponseBody::ClassificationResourceTemplateMap getClassificationResourceTemplateMap() { DARABONBA_PTR_GET(classificationResourceTemplateMap_, GetClassificationTemplateResponseBody::ClassificationResourceTemplateMap) };
    inline GetClassificationTemplateResponseBody& setClassificationResourceTemplateMap(const GetClassificationTemplateResponseBody::ClassificationResourceTemplateMap & classificationResourceTemplateMap) { DARABONBA_PTR_SET_VALUE(classificationResourceTemplateMap_, classificationResourceTemplateMap) };
    inline GetClassificationTemplateResponseBody& setClassificationResourceTemplateMap(GetClassificationTemplateResponseBody::ClassificationResourceTemplateMap && classificationResourceTemplateMap) { DARABONBA_PTR_SET_RVALUE(classificationResourceTemplateMap_, classificationResourceTemplateMap) };


    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline GetClassificationTemplateResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline GetClassificationTemplateResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline GetClassificationTemplateResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline GetClassificationTemplateResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The information about the classification template that is associated to the instance.
    shared_ptr<GetClassificationTemplateResponseBody::ClassificationResourceTemplateMap> classificationResourceTemplateMap_ {};
    // The error code returned if the request failed.
    shared_ptr<string> errorCode_ {};
    // The error message that is returned if the request failed.
    shared_ptr<string> errorMessage_ {};
    // The request ID. You can use the ID to query logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   **true**: The request was successful.
    // *   **false**: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
