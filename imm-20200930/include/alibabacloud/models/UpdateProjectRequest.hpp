// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class UpdateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateProjectRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DatasetMaxBindCount, datasetMaxBindCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxEntityCount, datasetMaxEntityCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxFileCount, datasetMaxFileCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxRelationCount, datasetMaxRelationCount_);
      DARABONBA_PTR_TO_JSON(DatasetMaxTotalFileSize, datasetMaxTotalFileSize_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(ProjectMaxDatasetCount, projectMaxDatasetCount_);
      DARABONBA_PTR_TO_JSON(ProjectName, projectName_);
      DARABONBA_PTR_TO_JSON(ServiceRole, serviceRole_);
      DARABONBA_PTR_TO_JSON(Tag, tag_);
      DARABONBA_PTR_TO_JSON(TemplateId, templateId_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateProjectRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DatasetMaxBindCount, datasetMaxBindCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxEntityCount, datasetMaxEntityCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxFileCount, datasetMaxFileCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxRelationCount, datasetMaxRelationCount_);
      DARABONBA_PTR_FROM_JSON(DatasetMaxTotalFileSize, datasetMaxTotalFileSize_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(ProjectMaxDatasetCount, projectMaxDatasetCount_);
      DARABONBA_PTR_FROM_JSON(ProjectName, projectName_);
      DARABONBA_PTR_FROM_JSON(ServiceRole, serviceRole_);
      DARABONBA_PTR_FROM_JSON(Tag, tag_);
      DARABONBA_PTR_FROM_JSON(TemplateId, templateId_);
    };
    UpdateProjectRequest() = default ;
    UpdateProjectRequest(const UpdateProjectRequest &) = default ;
    UpdateProjectRequest(UpdateProjectRequest &&) = default ;
    UpdateProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateProjectRequest() = default ;
    UpdateProjectRequest& operator=(const UpdateProjectRequest &) = default ;
    UpdateProjectRequest& operator=(UpdateProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Tag : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Tag& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Tag& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Tag() = default ;
      Tag(const Tag &) = default ;
      Tag(Tag &&) = default ;
      Tag(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Tag() = default ;
      Tag& operator=(const Tag &) = default ;
      Tag& operator=(Tag &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->value_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Tag& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
      inline Tag& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The tag key.
      shared_ptr<string> key_ {};
      // The tag value.
      shared_ptr<string> value_ {};
    };

    virtual bool empty() const override { return this->datasetMaxBindCount_ == nullptr
        && this->datasetMaxEntityCount_ == nullptr && this->datasetMaxFileCount_ == nullptr && this->datasetMaxRelationCount_ == nullptr && this->datasetMaxTotalFileSize_ == nullptr && this->description_ == nullptr
        && this->projectMaxDatasetCount_ == nullptr && this->projectName_ == nullptr && this->serviceRole_ == nullptr && this->tag_ == nullptr && this->templateId_ == nullptr; };
    // datasetMaxBindCount Field Functions 
    bool hasDatasetMaxBindCount() const { return this->datasetMaxBindCount_ != nullptr;};
    void deleteDatasetMaxBindCount() { this->datasetMaxBindCount_ = nullptr;};
    inline int64_t getDatasetMaxBindCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxBindCount_, 0L) };
    inline UpdateProjectRequest& setDatasetMaxBindCount(int64_t datasetMaxBindCount) { DARABONBA_PTR_SET_VALUE(datasetMaxBindCount_, datasetMaxBindCount) };


    // datasetMaxEntityCount Field Functions 
    bool hasDatasetMaxEntityCount() const { return this->datasetMaxEntityCount_ != nullptr;};
    void deleteDatasetMaxEntityCount() { this->datasetMaxEntityCount_ = nullptr;};
    inline int64_t getDatasetMaxEntityCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxEntityCount_, 0L) };
    inline UpdateProjectRequest& setDatasetMaxEntityCount(int64_t datasetMaxEntityCount) { DARABONBA_PTR_SET_VALUE(datasetMaxEntityCount_, datasetMaxEntityCount) };


    // datasetMaxFileCount Field Functions 
    bool hasDatasetMaxFileCount() const { return this->datasetMaxFileCount_ != nullptr;};
    void deleteDatasetMaxFileCount() { this->datasetMaxFileCount_ = nullptr;};
    inline int64_t getDatasetMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxFileCount_, 0L) };
    inline UpdateProjectRequest& setDatasetMaxFileCount(int64_t datasetMaxFileCount) { DARABONBA_PTR_SET_VALUE(datasetMaxFileCount_, datasetMaxFileCount) };


    // datasetMaxRelationCount Field Functions 
    bool hasDatasetMaxRelationCount() const { return this->datasetMaxRelationCount_ != nullptr;};
    void deleteDatasetMaxRelationCount() { this->datasetMaxRelationCount_ = nullptr;};
    inline int64_t getDatasetMaxRelationCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxRelationCount_, 0L) };
    inline UpdateProjectRequest& setDatasetMaxRelationCount(int64_t datasetMaxRelationCount) { DARABONBA_PTR_SET_VALUE(datasetMaxRelationCount_, datasetMaxRelationCount) };


    // datasetMaxTotalFileSize Field Functions 
    bool hasDatasetMaxTotalFileSize() const { return this->datasetMaxTotalFileSize_ != nullptr;};
    void deleteDatasetMaxTotalFileSize() { this->datasetMaxTotalFileSize_ = nullptr;};
    inline int64_t getDatasetMaxTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxTotalFileSize_, 0L) };
    inline UpdateProjectRequest& setDatasetMaxTotalFileSize(int64_t datasetMaxTotalFileSize) { DARABONBA_PTR_SET_VALUE(datasetMaxTotalFileSize_, datasetMaxTotalFileSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectMaxDatasetCount Field Functions 
    bool hasProjectMaxDatasetCount() const { return this->projectMaxDatasetCount_ != nullptr;};
    void deleteProjectMaxDatasetCount() { this->projectMaxDatasetCount_ = nullptr;};
    inline int64_t getProjectMaxDatasetCount() const { DARABONBA_PTR_GET_DEFAULT(projectMaxDatasetCount_, 0L) };
    inline UpdateProjectRequest& setProjectMaxDatasetCount(int64_t projectMaxDatasetCount) { DARABONBA_PTR_SET_VALUE(projectMaxDatasetCount_, projectMaxDatasetCount) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string getProjectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline UpdateProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string getServiceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline UpdateProjectRequest& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<UpdateProjectRequest::Tag> & getTag() const { DARABONBA_PTR_GET_CONST(tag_, vector<UpdateProjectRequest::Tag>) };
    inline vector<UpdateProjectRequest::Tag> getTag() { DARABONBA_PTR_GET(tag_, vector<UpdateProjectRequest::Tag>) };
    inline UpdateProjectRequest& setTag(const vector<UpdateProjectRequest::Tag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline UpdateProjectRequest& setTag(vector<UpdateProjectRequest::Tag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string getTemplateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline UpdateProjectRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The maximum number of bindings for each dataset. Valid values: 1 to 10.
    shared_ptr<int64_t> datasetMaxBindCount_ {};
    // The maximum number of metadata entities in each dataset.
    // 
    // >  This is a precautionary setting that does not impose practical limitations.
    shared_ptr<int64_t> datasetMaxEntityCount_ {};
    // The maximum number of files in each dataset. Valid values: 1 to 100000000.
    shared_ptr<int64_t> datasetMaxFileCount_ {};
    // The maximum number of metadata relationships in a dataset.
    // 
    // >  This is a precautionary setting that does not impose practical limitations.
    shared_ptr<int64_t> datasetMaxRelationCount_ {};
    // The maximum size of files in each dataset. If the maximum size is exceeded, indexes can no longer be added. Unit: bytes.
    shared_ptr<int64_t> datasetMaxTotalFileSize_ {};
    // The description of the project. The description must be 1 to 256 characters in length.
    shared_ptr<string> description_ {};
    // The maximum number of datasets in the project. Valid values: 1 to 1000000000.
    shared_ptr<int64_t> projectMaxDatasetCount_ {};
    // The name of the project. You can obtain the name of the project from the response of the [CreateProject](https://help.aliyun.com/document_detail/478153.html) operation.
    // 
    // This parameter is required.
    shared_ptr<string> projectName_ {};
    // The name of the Resource Access Management (RAM) role. You must grant the RAM role to Intelligent Media Management (IMM) before IMM can access other cloud resources such as Object Storage Service (OSS).
    // 
    // You can also create a custom service role in the RAM console and grant the required permissions to the role based on your business requirements. For more information, see [Create a regular service role](https://help.aliyun.com/document_detail/116800.html) and [Grant permissions to a role](https://help.aliyun.com/document_detail/116147.html).
    shared_ptr<string> serviceRole_ {};
    // The tags.
    shared_ptr<vector<UpdateProjectRequest::Tag>> tag_ {};
    // The ID of the workflow template. For more information, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
    shared_ptr<string> templateId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
