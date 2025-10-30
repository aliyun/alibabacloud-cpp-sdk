// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATERESOURCEREQUESTUPDATECOMMAND_HPP_
#define ALIBABACLOUD_MODELS_UPDATERESOURCEREQUESTUPDATECOMMAND_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataphinPublic20230630
{
namespace Models
{
  class UpdateResourceRequestUpdateCommand : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateResourceRequestUpdateCommand& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(ComputeEngineType, computeEngineType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StorageAddress, storageAddress_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateResourceRequestUpdateCommand& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(ComputeEngineType, computeEngineType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StorageAddress, storageAddress_);
    };
    UpdateResourceRequestUpdateCommand() = default ;
    UpdateResourceRequestUpdateCommand(const UpdateResourceRequestUpdateCommand &) = default ;
    UpdateResourceRequestUpdateCommand(UpdateResourceRequestUpdateCommand &&) = default ;
    UpdateResourceRequestUpdateCommand(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateResourceRequestUpdateCommand() = default ;
    UpdateResourceRequestUpdateCommand& operator=(const UpdateResourceRequestUpdateCommand &) = default ;
    UpdateResourceRequestUpdateCommand& operator=(UpdateResourceRequestUpdateCommand &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && return this->computeEngineType_ == nullptr && return this->description_ == nullptr && return this->id_ == nullptr && return this->name_ == nullptr && return this->projectId_ == nullptr
        && return this->storageAddress_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string comment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline UpdateResourceRequestUpdateCommand& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // computeEngineType Field Functions 
    bool hasComputeEngineType() const { return this->computeEngineType_ != nullptr;};
    void deleteComputeEngineType() { this->computeEngineType_ = nullptr;};
    inline string computeEngineType() const { DARABONBA_PTR_GET_DEFAULT(computeEngineType_, "") };
    inline UpdateResourceRequestUpdateCommand& setComputeEngineType(string computeEngineType) { DARABONBA_PTR_SET_VALUE(computeEngineType_, computeEngineType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string description() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline UpdateResourceRequestUpdateCommand& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t id() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline UpdateResourceRequestUpdateCommand& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline UpdateResourceRequestUpdateCommand& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t projectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateResourceRequestUpdateCommand& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // storageAddress Field Functions 
    bool hasStorageAddress() const { return this->storageAddress_ != nullptr;};
    void deleteStorageAddress() { this->storageAddress_ = nullptr;};
    inline string storageAddress() const { DARABONBA_PTR_GET_DEFAULT(storageAddress_, "") };
    inline UpdateResourceRequestUpdateCommand& setStorageAddress(string storageAddress) { DARABONBA_PTR_SET_VALUE(storageAddress_, storageAddress) };


  protected:
    // This parameter is required.
    std::shared_ptr<string> comment_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> computeEngineType_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> description_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> id_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> name_ = nullptr;
    // This parameter is required.
    std::shared_ptr<int64_t> projectId_ = nullptr;
    // This parameter is required.
    std::shared_ptr<string> storageAddress_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataphinPublic20230630
#endif
