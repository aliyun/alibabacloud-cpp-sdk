// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_UPDATEMETATABLEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_UPDATEMETATABLEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class UpdateMetaTableRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const UpdateMetaTableRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AddedLabels, addedLabels_);
      DARABONBA_PTR_TO_JSON(Caption, caption_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(EnvType, envType_);
      DARABONBA_PTR_TO_JSON(NewOwnerId, newOwnerId_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(RemovedLabels, removedLabels_);
      DARABONBA_PTR_TO_JSON(Schema, schema_);
      DARABONBA_PTR_TO_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_TO_JSON(TableName, tableName_);
      DARABONBA_PTR_TO_JSON(Visibility, visibility_);
    };
    friend void from_json(const Darabonba::Json& j, UpdateMetaTableRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AddedLabels, addedLabels_);
      DARABONBA_PTR_FROM_JSON(Caption, caption_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(EnvType, envType_);
      DARABONBA_PTR_FROM_JSON(NewOwnerId, newOwnerId_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(RemovedLabels, removedLabels_);
      DARABONBA_PTR_FROM_JSON(Schema, schema_);
      DARABONBA_PTR_FROM_JSON(TableGuid, tableGuid_);
      DARABONBA_PTR_FROM_JSON(TableName, tableName_);
      DARABONBA_PTR_FROM_JSON(Visibility, visibility_);
    };
    UpdateMetaTableRequest() = default ;
    UpdateMetaTableRequest(const UpdateMetaTableRequest &) = default ;
    UpdateMetaTableRequest(UpdateMetaTableRequest &&) = default ;
    UpdateMetaTableRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~UpdateMetaTableRequest() = default ;
    UpdateMetaTableRequest& operator=(const UpdateMetaTableRequest &) = default ;
    UpdateMetaTableRequest& operator=(UpdateMetaTableRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->addedLabels_ == nullptr
        && this->caption_ == nullptr && this->categoryId_ == nullptr && this->envType_ == nullptr && this->newOwnerId_ == nullptr && this->projectId_ == nullptr
        && this->removedLabels_ == nullptr && this->schema_ == nullptr && this->tableGuid_ == nullptr && this->tableName_ == nullptr && this->visibility_ == nullptr; };
    // addedLabels Field Functions 
    bool hasAddedLabels() const { return this->addedLabels_ != nullptr;};
    void deleteAddedLabels() { this->addedLabels_ = nullptr;};
    inline string getAddedLabels() const { DARABONBA_PTR_GET_DEFAULT(addedLabels_, "") };
    inline UpdateMetaTableRequest& setAddedLabels(string addedLabels) { DARABONBA_PTR_SET_VALUE(addedLabels_, addedLabels) };


    // caption Field Functions 
    bool hasCaption() const { return this->caption_ != nullptr;};
    void deleteCaption() { this->caption_ = nullptr;};
    inline string getCaption() const { DARABONBA_PTR_GET_DEFAULT(caption_, "") };
    inline UpdateMetaTableRequest& setCaption(string caption) { DARABONBA_PTR_SET_VALUE(caption_, caption) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline int64_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0L) };
    inline UpdateMetaTableRequest& setCategoryId(int64_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // envType Field Functions 
    bool hasEnvType() const { return this->envType_ != nullptr;};
    void deleteEnvType() { this->envType_ = nullptr;};
    inline int32_t getEnvType() const { DARABONBA_PTR_GET_DEFAULT(envType_, 0) };
    inline UpdateMetaTableRequest& setEnvType(int32_t envType) { DARABONBA_PTR_SET_VALUE(envType_, envType) };


    // newOwnerId Field Functions 
    bool hasNewOwnerId() const { return this->newOwnerId_ != nullptr;};
    void deleteNewOwnerId() { this->newOwnerId_ = nullptr;};
    inline string getNewOwnerId() const { DARABONBA_PTR_GET_DEFAULT(newOwnerId_, "") };
    inline UpdateMetaTableRequest& setNewOwnerId(string newOwnerId) { DARABONBA_PTR_SET_VALUE(newOwnerId_, newOwnerId) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline UpdateMetaTableRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // removedLabels Field Functions 
    bool hasRemovedLabels() const { return this->removedLabels_ != nullptr;};
    void deleteRemovedLabels() { this->removedLabels_ = nullptr;};
    inline string getRemovedLabels() const { DARABONBA_PTR_GET_DEFAULT(removedLabels_, "") };
    inline UpdateMetaTableRequest& setRemovedLabels(string removedLabels) { DARABONBA_PTR_SET_VALUE(removedLabels_, removedLabels) };


    // schema Field Functions 
    bool hasSchema() const { return this->schema_ != nullptr;};
    void deleteSchema() { this->schema_ = nullptr;};
    inline string getSchema() const { DARABONBA_PTR_GET_DEFAULT(schema_, "") };
    inline UpdateMetaTableRequest& setSchema(string schema) { DARABONBA_PTR_SET_VALUE(schema_, schema) };


    // tableGuid Field Functions 
    bool hasTableGuid() const { return this->tableGuid_ != nullptr;};
    void deleteTableGuid() { this->tableGuid_ = nullptr;};
    inline string getTableGuid() const { DARABONBA_PTR_GET_DEFAULT(tableGuid_, "") };
    inline UpdateMetaTableRequest& setTableGuid(string tableGuid) { DARABONBA_PTR_SET_VALUE(tableGuid_, tableGuid) };


    // tableName Field Functions 
    bool hasTableName() const { return this->tableName_ != nullptr;};
    void deleteTableName() { this->tableName_ = nullptr;};
    inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
    inline UpdateMetaTableRequest& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


    // visibility Field Functions 
    bool hasVisibility() const { return this->visibility_ != nullptr;};
    void deleteVisibility() { this->visibility_ = nullptr;};
    inline int32_t getVisibility() const { DARABONBA_PTR_GET_DEFAULT(visibility_, 0) };
    inline UpdateMetaTableRequest& setVisibility(int32_t visibility) { DARABONBA_PTR_SET_VALUE(visibility_, visibility) };


  protected:
    // The names of the labels that you want to add. Separate the labels with commas (,).
    shared_ptr<string> addedLabels_ {};
    // The display name of the table.
    shared_ptr<string> caption_ {};
    // The ID of the category that you want to associate.
    shared_ptr<int64_t> categoryId_ {};
    // The environment of the DataWorks workspace. Valid values: 0 and 1. The value 0 indicates the development environment. The value 1 indicates the production environment.
    shared_ptr<int32_t> envType_ {};
    // The new owner ID. If you leave this parameter empty, the owner ID is not updated.
    shared_ptr<string> newOwnerId_ {};
    // The DataWorks workspace ID.
    shared_ptr<int64_t> projectId_ {};
    // The names of labels that you want to remove. Separate the labels with commas (,).
    shared_ptr<string> removedLabels_ {};
    // The schema information about the table. You must configure this parameter if you enable the three-layer model of MaxCompute.
    shared_ptr<string> schema_ {};
    // The GUID of the table. Specify the GUID in the format of odps.{projectName}.{tableName}.
    shared_ptr<string> tableGuid_ {};
    // The name of the table.
    shared_ptr<string> tableName_ {};
    // The scope in which the table is visible. Valid values: 0, 1, and 2. The value 0 indicates that the table is invisible to all members. The value 1 indicates that the table is visible to all members. The value 2 indicates that the table is visible to workspace members.
    shared_ptr<int32_t> visibility_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
