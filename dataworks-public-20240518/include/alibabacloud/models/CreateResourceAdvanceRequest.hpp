// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateResourceAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_TO_JSON(ResourceFile, resourceFileObject_);
      DARABONBA_PTR_TO_JSON(Spec, spec_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_FROM_JSON(ResourceFile, resourceFileObject_);
      DARABONBA_PTR_FROM_JSON(Spec, spec_);
    };
    CreateResourceAdvanceRequest() = default ;
    CreateResourceAdvanceRequest(const CreateResourceAdvanceRequest &) = default ;
    CreateResourceAdvanceRequest(CreateResourceAdvanceRequest &&) = default ;
    CreateResourceAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceAdvanceRequest() = default ;
    CreateResourceAdvanceRequest& operator=(const CreateResourceAdvanceRequest &) = default ;
    CreateResourceAdvanceRequest& operator=(CreateResourceAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->projectId_ != nullptr
        && this->resourceFileObject_ != nullptr && this->spec_ != nullptr; };
    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateResourceAdvanceRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceFileObject Field Functions 
    bool hasResourceFileObject() const { return this->resourceFileObject_ != nullptr;};
    void deleteResourceFileObject() { this->resourceFileObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> resourceFileObject() const { DARABONBA_GET(resourceFileObject_) };
    inline CreateResourceAdvanceRequest& setResourceFileObject(shared_ptr<Darabonba::IStream> resourceFileObject) { DARABONBA_SET_VALUE(resourceFileObject_, resourceFileObject) };


    // spec Field Functions 
    bool hasSpec() const { return this->spec_ != nullptr;};
    void deleteSpec() { this->spec_ = nullptr;};
    inline string spec() const { DARABONBA_PTR_GET_DEFAULT(spec_, "") };
    inline CreateResourceAdvanceRequest& setSpec(string spec) { DARABONBA_PTR_SET_VALUE(spec_, spec) };


  protected:
    // The DataWorks workspace ID. You can log on to the [DataWorks console](https://workbench.data.aliyun.com/console) and go to the Workspace page to query the ID.
    // 
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    shared_ptr<Darabonba::IStream> resourceFileObject_ = nullptr;
    // The FlowSpec field information about the file resource. For more information, see [FlowSpec](https://github.com/aliyun/dataworks-spec/blob/master/README_zh_CN.md).
    // 
    // This parameter is required.
    std::shared_ptr<string> spec_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
