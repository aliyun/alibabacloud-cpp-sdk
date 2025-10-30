// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESOURCEREQUESTCREATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_CREATERESOURCEREQUESTCREATECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class CreateResourceRequestCreateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateResourceRequestCreateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ComputeEngineType, computeEngineType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Directory, directory_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_TO_JSON(StorageAddress, storageAddress_);
    };
    friend void from_json(const Darabonba::Json& j, CreateResourceRequestCreateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ComputeEngineType, computeEngineType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Directory, directory_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(ResourceType, resourceType_);
      DARABONBA_PTR_FROM_JSON(StorageAddress, storageAddress_);
    };
    CreateResourceRequestCreateCommand() = default ;
    CreateResourceRequestCreateCommand(const CreateResourceRequestCreateCommand &) = default ;
    CreateResourceRequestCreateCommand(CreateResourceRequestCreateCommand &&) = default ;
    CreateResourceRequestCreateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateResourceRequestCreateCommand() = default ;
    CreateResourceRequestCreateCommand& operator=(const CreateResourceRequestCreateCommand &) = default ;
    CreateResourceRequestCreateCommand& operator=(CreateResourceRequestCreateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->computeEngineType_ == nullptr && return this->description_ == nullptr && return this->directory_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr
        && return this->resourceType_ == nullptr && return this->storageAddress_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateResourceRequestCreateCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // computeEngineType Field Functions 
    bool hasComputeEngineType() const { return this->computeEngineType_ != nullptr;};
    void deleteComputeEngineType() { this->computeEngineType_ = nullptr;};
    inline string computeEngineType() const { DARABONBA_PTR_GET_DEFAULT(computeEngineType_, "") };
    inline CreateResourceRequestCreateCommand& setComputeEngineType(string computeEngineType) { DARABONBA_PTR_SET_VALUE(computeEngineType_, computeEngineType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline CreateResourceRequestCreateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // directory Field Functions 
    bool hasDirectory() const { return this->directory_ != nullptr;};
    void deleteDirectory() { this->directory_ = nullptr;};
    inline string directory() const { DARABONBA_PTR_GET_DEFAULT(directory_, "") };
    inline CreateResourceRequestCreateCommand& setDirectory(string directory) { DARABONBA_PTR_SET_VALUE(directory_, directory) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateResourceRequestCreateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateResourceRequestCreateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // resourceType Field Functions 
    bool hasResourceType() const { return this->resourceType_ != nullptr;};
    void deleteResourceType() { this->resourceType_ = nullptr;};
    inline string resourceType() const { DARABONBA_PTR_GET_DEFAULT(resourceType_, "") };
    inline CreateResourceRequestCreateCommand& setResourceType(string resourceType) { DARABONBA_PTR_SET_VALUE(resourceType_, resourceType) };


    // storageAddress Field Functions 
    bool hasStorageAddress() const { return this->storageAddress_ != nullptr;};
    void deleteStorageAddress() { this->storageAddress_ = nullptr;};
    inline string storageAddress() const { DARABONBA_PTR_GET_DEFAULT(storageAddress_, "") };
    inline CreateResourceRequestCreateCommand& setStorageAddress(string storageAddress) { DARABONBA_PTR_SET_VALUE(storageAddress_, storageAddress) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> computeEngineType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> directory_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> resourceType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> storageAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
