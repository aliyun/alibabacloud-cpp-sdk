// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateResourceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceFile, resourceFile_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceFile, resourceFile_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    CreateResourceRequest() = default ;
    CreateResourceRequest(const CreateResourceRequest &) = default ;
    CreateResourceRequest(CreateResourceRequest &&) = default ;
    CreateResourceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceRequest() = default ;
    CreateResourceRequest& operator=(const CreateResourceRequest &) = default ;
    CreateResourceRequest& operator=(CreateResourceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->projectId_ == nullptr
        && this->resourceFile_ == nullptr && this->spec_ == nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateResourceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceFile Field Functions 
    bool hasResourceFile() const { return this->resourceFile_ != nullptr;};
    void deleteResourceFile() { this->resourceFile_ = nullptr;};
    inline string getResourceFile() const { DARABONBA_PTR_GET_DEFAULT(resourceFile_, "") };
    inline CreateResourceRequest& setResourceFile(string resourceFile) { DARABONBA_PTR_SET_VALUE(resourceFile_, resourceFile) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string getSpec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateResourceRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The ID of the DataWorks workspace. To obtain the workspace ID, log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and navigate to the workspace configuration page.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The specific file stream or OSS download link contained in the resource.
    // 
    // >  This field allows users to provide a file stream or an OSS download link. When providing an OSS download link, ensure that the OSS link is publicly accessible. A presigned URL is recommended.
    shared_ptr<string> resourceFile_ {};
    // The FlowSpec field information about the file resource. For more information, see [FlowSpec](https://github.com/aliyun/dataworks-spec/blob/master/README_zh_CN.md).
    // 
    // This parameter is required.
    shared_ptr<string> spec_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
