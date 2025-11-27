// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEPROJECTREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/CreateProjectRequestTag.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class CreateProjectRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateProjectRequest& obj) { 
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
    friend void from_json(const Darabonba::Json& j, CreateProjectRequest& obj) { 
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
    CreateProjectRequest() = default ;
    CreateProjectRequest(const CreateProjectRequest &) = default ;
    CreateProjectRequest(CreateProjectRequest &&) = default ;
    CreateProjectRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateProjectRequest() = default ;
    CreateProjectRequest& operator=(const CreateProjectRequest &) = default ;
    CreateProjectRequest& operator=(CreateProjectRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->datasetMaxBindCount_ == nullptr
        && return this->datasetMaxEntityCount_ == nullptr && return this->datasetMaxFileCount_ == nullptr && return this->datasetMaxRelationCount_ == nullptr && return this->datasetMaxTotalFileSize_ == nullptr && return this->description_ == nullptr
        && return this->projectMaxDatasetCount_ == nullptr && return this->projectName_ == nullptr && return this->serviceRole_ == nullptr && return this->tag_ == nullptr && return this->templateId_ == nullptr; };
    // datasetMaxBindCount Field Functions 
    bool hasDatasetMaxBindCount() const { return this->datasetMaxBindCount_ != nullptr;};
    void deleteDatasetMaxBindCount() { this->datasetMaxBindCount_ = nullptr;};
    inline int64_t datasetMaxBindCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxBindCount_, 0L) };
    inline CreateProjectRequest& setDatasetMaxBindCount(int64_t datasetMaxBindCount) { DARABONBA_PTR_SET_VALUE(datasetMaxBindCount_, datasetMaxBindCount) };


    // datasetMaxEntityCount Field Functions 
    bool hasDatasetMaxEntityCount() const { return this->datasetMaxEntityCount_ != nullptr;};
    void deleteDatasetMaxEntityCount() { this->datasetMaxEntityCount_ = nullptr;};
    inline int64_t datasetMaxEntityCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxEntityCount_, 0L) };
    inline CreateProjectRequest& setDatasetMaxEntityCount(int64_t datasetMaxEntityCount) { DARABONBA_PTR_SET_VALUE(datasetMaxEntityCount_, datasetMaxEntityCount) };


    // datasetMaxFileCount Field Functions 
    bool hasDatasetMaxFileCount() const { return this->datasetMaxFileCount_ != nullptr;};
    void deleteDatasetMaxFileCount() { this->datasetMaxFileCount_ = nullptr;};
    inline int64_t datasetMaxFileCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxFileCount_, 0L) };
    inline CreateProjectRequest& setDatasetMaxFileCount(int64_t datasetMaxFileCount) { DARABONBA_PTR_SET_VALUE(datasetMaxFileCount_, datasetMaxFileCount) };


    // datasetMaxRelationCount Field Functions 
    bool hasDatasetMaxRelationCount() const { return this->datasetMaxRelationCount_ != nullptr;};
    void deleteDatasetMaxRelationCount() { this->datasetMaxRelationCount_ = nullptr;};
    inline int64_t datasetMaxRelationCount() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxRelationCount_, 0L) };
    inline CreateProjectRequest& setDatasetMaxRelationCount(int64_t datasetMaxRelationCount) { DARABONBA_PTR_SET_VALUE(datasetMaxRelationCount_, datasetMaxRelationCount) };


    // datasetMaxTotalFileSize Field Functions 
    bool hasDatasetMaxTotalFileSize() const { return this->datasetMaxTotalFileSize_ != nullptr;};
    void deleteDatasetMaxTotalFileSize() { this->datasetMaxTotalFileSize_ = nullptr;};
    inline int64_t datasetMaxTotalFileSize() const { DARABONBA_PTR_GET_DEFAULT(datasetMaxTotalFileSize_, 0L) };
    inline CreateProjectRequest& setDatasetMaxTotalFileSize(int64_t datasetMaxTotalFileSize) { DARABONBA_PTR_SET_VALUE(datasetMaxTotalFileSize_, datasetMaxTotalFileSize) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateProjectRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // projectMaxDatasetCount Field Functions 
    bool hasProjectMaxDatasetCount() const { return this->projectMaxDatasetCount_ != nullptr;};
    void deleteProjectMaxDatasetCount() { this->projectMaxDatasetCount_ = nullptr;};
    inline int64_t projectMaxDatasetCount() const { DARABONBA_PTR_GET_DEFAULT(projectMaxDatasetCount_, 0L) };
    inline CreateProjectRequest& setProjectMaxDatasetCount(int64_t projectMaxDatasetCount) { DARABONBA_PTR_SET_VALUE(projectMaxDatasetCount_, projectMaxDatasetCount) };


    // projectName Field Functions 
    bool hasProjectName() const { return this->projectName_ != nullptr;};
    void deleteProjectName() { this->projectName_ = nullptr;};
    inline string projectName() const { DARABONBA_PTR_GET_DEFAULT(projectName_, "") };
    inline CreateProjectRequest& setProjectName(string projectName) { DARABONBA_PTR_SET_VALUE(projectName_, projectName) };


    // serviceRole Field Functions 
    bool hasServiceRole() const { return this->serviceRole_ != nullptr;};
    void deleteServiceRole() { this->serviceRole_ = nullptr;};
    inline string serviceRole() const { DARABONBA_PTR_GET_DEFAULT(serviceRole_, "") };
    inline CreateProjectRequest& setServiceRole(string serviceRole) { DARABONBA_PTR_SET_VALUE(serviceRole_, serviceRole) };


    // tag Field Functions 
    bool hasTag() const { return this->tag_ != nullptr;};
    void deleteTag() { this->tag_ = nullptr;};
    inline const vector<CreateProjectRequestTag> & tag() const { DARABONBA_PTR_GET_CONST(tag_, vector<CreateProjectRequestTag>) };
    inline vector<CreateProjectRequestTag> tag() { DARABONBA_PTR_GET(tag_, vector<CreateProjectRequestTag>) };
    inline CreateProjectRequest& setTag(const vector<CreateProjectRequestTag> & tag) { DARABONBA_PTR_SET_VALUE(tag_, tag) };
    inline CreateProjectRequest& setTag(vector<CreateProjectRequestTag> && tag) { DARABONBA_PTR_SET_RVALUE(tag_, tag) };


    // templateId Field Functions 
    bool hasTemplateId() const { return this->templateId_ != nullptr;};
    void deleteTemplateId() { this->templateId_ = nullptr;};
    inline string templateId() const { DARABONBA_PTR_GET_DEFAULT(templateId_, "") };
    inline CreateProjectRequest& setTemplateId(string templateId) { DARABONBA_PTR_SET_VALUE(templateId_, templateId) };


  protected:
    // The maximum number of bindings for each dataset. Valid values: 1 to 10. Default value: 10.
    std::shared_ptr<int64_t> datasetMaxBindCount_ = nullptr;
    // The maximum number of metadata entities in each dataset. Default value: 10000000000.
    // 
    // >  This is a precautionary setting that does not impose practical limitations.
    std::shared_ptr<int64_t> datasetMaxEntityCount_ = nullptr;
    // The maximum number of files in each dataset. Valid values: 1 to 100000000. Default value: 10000000000.
    std::shared_ptr<int64_t> datasetMaxFileCount_ = nullptr;
    // The maximum number of metadata relationships in each dataset. Default value: 100000000000.
    // 
    // >  This is a precautionary setting that does not impose practical limitations.
    std::shared_ptr<int64_t> datasetMaxRelationCount_ = nullptr;
    // The maximum size of files in each dataset. If the maximum size is exceeded, no indexes can be added. Unit: bytes. Default value: 90000000000000000.
    std::shared_ptr<int64_t> datasetMaxTotalFileSize_ = nullptr;
    // The description of the project. The description must be 1 to 256 characters in length. You can leave this parameter empty.
    std::shared_ptr<string> description_ = nullptr;
    // The maximum number of datasets in the project. Valid values: 1 to 1000000000. Default value: 1000000000.
    std::shared_ptr<int64_t> projectMaxDatasetCount_ = nullptr;
    // The name of the project. The name must meet the following requirements:
    // 
    // *   The name must be 1 to 128 characters in length
    // *   and can contain only letters, digits, hyphens (-), and underscores (_).
    // *   The name must start with a letter or an underscores (_).
    // 
    // This parameter is required.
    std::shared_ptr<string> projectName_ = nullptr;
    // The name of the Resource Access Management (RAM) role. You must attach the RAM role to IMM to allow IMM to access other cloud resources, such as Object Storage Service (OSS). Default value: `AliyunIMMDefaultRole`.
    // 
    // You can also create a custom role in the RAM console and grant the required permissions to the role based on your business requirements. For more information, see [Grant permissions to a RAM user](https://help.aliyun.com/document_detail/477257.html).
    std::shared_ptr<string> serviceRole_ = nullptr;
    // The tags.
    std::shared_ptr<vector<CreateProjectRequestTag>> tag_ = nullptr;
    // The ID of the workflow template. You can leave this parameter empty. For more information, see [Workflow templates and operators](https://help.aliyun.com/document_detail/466304.html).
    std::shared_ptr<string> templateId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
