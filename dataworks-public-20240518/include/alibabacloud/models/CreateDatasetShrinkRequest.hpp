// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATASETSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATASETSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class CreateDatasetShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Comment, comment_);
      DARABONBA_PTR_TO_JSON(DataType, dataType_);
      DARABONBA_PTR_TO_JSON(InitVersion, initVersionShrink_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(Origin, origin_);
      DARABONBA_PTR_TO_JSON(ProjectId, projectId_);
      DARABONBA_PTR_TO_JSON(StorageType, storageType_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDatasetShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Comment, comment_);
      DARABONBA_PTR_FROM_JSON(DataType, dataType_);
      DARABONBA_PTR_FROM_JSON(InitVersion, initVersionShrink_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(Origin, origin_);
      DARABONBA_PTR_FROM_JSON(ProjectId, projectId_);
      DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
    };
    CreateDatasetShrinkRequest() = default ;
    CreateDatasetShrinkRequest(const CreateDatasetShrinkRequest &) = default ;
    CreateDatasetShrinkRequest(CreateDatasetShrinkRequest &&) = default ;
    CreateDatasetShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDatasetShrinkRequest() = default ;
    CreateDatasetShrinkRequest& operator=(const CreateDatasetShrinkRequest &) = default ;
    CreateDatasetShrinkRequest& operator=(CreateDatasetShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->comment_ == nullptr
        && this->dataType_ == nullptr && this->initVersionShrink_ == nullptr && this->name_ == nullptr && this->origin_ == nullptr && this->projectId_ == nullptr
        && this->storageType_ == nullptr; };
    // comment Field Functions 
    bool hasComment() const { return this->comment_ != nullptr;};
    void deleteComment() { this->comment_ = nullptr;};
    inline string getComment() const { DARABONBA_PTR_GET_DEFAULT(comment_, "") };
    inline CreateDatasetShrinkRequest& setComment(string comment) { DARABONBA_PTR_SET_VALUE(comment_, comment) };


    // dataType Field Functions 
    bool hasDataType() const { return this->dataType_ != nullptr;};
    void deleteDataType() { this->dataType_ = nullptr;};
    inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
    inline CreateDatasetShrinkRequest& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


    // initVersionShrink Field Functions 
    bool hasInitVersionShrink() const { return this->initVersionShrink_ != nullptr;};
    void deleteInitVersionShrink() { this->initVersionShrink_ = nullptr;};
    inline string getInitVersionShrink() const { DARABONBA_PTR_GET_DEFAULT(initVersionShrink_, "") };
    inline CreateDatasetShrinkRequest& setInitVersionShrink(string initVersionShrink) { DARABONBA_PTR_SET_VALUE(initVersionShrink_, initVersionShrink) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline CreateDatasetShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // origin Field Functions 
    bool hasOrigin() const { return this->origin_ != nullptr;};
    void deleteOrigin() { this->origin_ = nullptr;};
    inline string getOrigin() const { DARABONBA_PTR_GET_DEFAULT(origin_, "") };
    inline CreateDatasetShrinkRequest& setOrigin(string origin) { DARABONBA_PTR_SET_VALUE(origin_, origin) };


    // projectId Field Functions 
    bool hasProjectId() const { return this->projectId_ != nullptr;};
    void deleteProjectId() { this->projectId_ = nullptr;};
    inline int64_t getProjectId() const { DARABONBA_PTR_GET_DEFAULT(projectId_, 0L) };
    inline CreateDatasetShrinkRequest& setProjectId(int64_t projectId) { DARABONBA_PTR_SET_VALUE(projectId_, projectId) };


    // storageType Field Functions 
    bool hasStorageType() const { return this->storageType_ != nullptr;};
    void deleteStorageType() { this->storageType_ = nullptr;};
    inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
    inline CreateDatasetShrinkRequest& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


  protected:
    // The description of the dataset. It must not exceed 1,024 characters in length.
    shared_ptr<string> comment_ {};
    // The data type. Valid values:
    // 
    // *   COMMON: Common (Default)
    // *   PIC
    // *   TEXT
    // *   TABLE
    // *   VIDEO
    // *   AUDIO
    // *   INDEX
    shared_ptr<string> dataType_ {};
    // The initial version of the dataset.
    // 
    // This parameter is required.
    shared_ptr<string> initVersionShrink_ {};
    // The name of the dataset. It cannot be an empty string and must not exceed 128 characters in length.
    // 
    // This parameter is required.
    shared_ptr<string> name_ {};
    // The source of the dataset. Currently, only DataWorks is supported.
    shared_ptr<string> origin_ {};
    // The DataWorks workspace ID.
    // 
    // This parameter is required.
    shared_ptr<int64_t> projectId_ {};
    // The storage type. Currently supported values:
    // 
    // *   OSS
    // *   NAS: General-purpose NAS file systems
    // *   EXTREMENAS: Extreme NAS file systems
    // *   DLF_LANCE: Data Lake Formation
    // 
    // Valid values:
    // 
    // *   NAS: General-purpose NAS file systems
    // *   MAXCOMPUTE: MaxCompute table
    // *   CPFS: Cloud Parallel File Storage
    // *   BMCPFS: CPFS for Lingjun
    // *   EXTREMENAS: Extreme NAS file systems
    // *   OSS: Object Storage Service
    // *   DLF_LANCE: Data Lake Formation.
    // 
    // This parameter is required.
    shared_ptr<string> storageType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
