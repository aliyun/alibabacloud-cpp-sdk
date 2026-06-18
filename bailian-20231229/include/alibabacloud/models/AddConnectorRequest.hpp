// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_ADDCONNECTORREQUEST_HPP_
#define ALIBABACLOUD_MODELS_ADDCONNECTORREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Bailian20231229
{
namespace Models
{
  class AddConnectorRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const AddConnectorRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_TO_JSON(ConnectorType, connectorType_);
      DARABONBA_PTR_TO_JSON(Description, description_);
      DARABONBA_PTR_TO_JSON(FileConnectorConfig, fileConnectorConfig_);
    };
    friend void from_json(const Darabonba::Json& j, AddConnectorRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ConnectorName, connectorName_);
      DARABONBA_PTR_FROM_JSON(ConnectorType, connectorType_);
      DARABONBA_PTR_FROM_JSON(Description, description_);
      DARABONBA_PTR_FROM_JSON(FileConnectorConfig, fileConnectorConfig_);
    };
    AddConnectorRequest() = default ;
    AddConnectorRequest(const AddConnectorRequest &) = default ;
    AddConnectorRequest(AddConnectorRequest &&) = default ;
    AddConnectorRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~AddConnectorRequest() = default ;
    AddConnectorRequest& operator=(const AddConnectorRequest &) = default ;
    AddConnectorRequest& operator=(AddConnectorRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FileConnectorConfig : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FileConnectorConfig& obj) { 
        DARABONBA_PTR_TO_JSON(BucketName, bucketName_);
        DARABONBA_PTR_TO_JSON(RegionId, regionId_);
        DARABONBA_PTR_TO_JSON(StorageType, storageType_);
      };
      friend void from_json(const Darabonba::Json& j, FileConnectorConfig& obj) { 
        DARABONBA_PTR_FROM_JSON(BucketName, bucketName_);
        DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
        DARABONBA_PTR_FROM_JSON(StorageType, storageType_);
      };
      FileConnectorConfig() = default ;
      FileConnectorConfig(const FileConnectorConfig &) = default ;
      FileConnectorConfig(FileConnectorConfig &&) = default ;
      FileConnectorConfig(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FileConnectorConfig() = default ;
      FileConnectorConfig& operator=(const FileConnectorConfig &) = default ;
      FileConnectorConfig& operator=(FileConnectorConfig &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->bucketName_ == nullptr
        && this->regionId_ == nullptr && this->storageType_ == nullptr; };
      // bucketName Field Functions 
      bool hasBucketName() const { return this->bucketName_ != nullptr;};
      void deleteBucketName() { this->bucketName_ = nullptr;};
      inline string getBucketName() const { DARABONBA_PTR_GET_DEFAULT(bucketName_, "") };
      inline FileConnectorConfig& setBucketName(string bucketName) { DARABONBA_PTR_SET_VALUE(bucketName_, bucketName) };


      // regionId Field Functions 
      bool hasRegionId() const { return this->regionId_ != nullptr;};
      void deleteRegionId() { this->regionId_ = nullptr;};
      inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
      inline FileConnectorConfig& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


      // storageType Field Functions 
      bool hasStorageType() const { return this->storageType_ != nullptr;};
      void deleteStorageType() { this->storageType_ = nullptr;};
      inline string getStorageType() const { DARABONBA_PTR_GET_DEFAULT(storageType_, "") };
      inline FileConnectorConfig& setStorageType(string storageType) { DARABONBA_PTR_SET_VALUE(storageType_, storageType) };


    protected:
      // The name of the bucket.
      shared_ptr<string> bucketName_ {};
      // The region of the bucket.
      shared_ptr<string> regionId_ {};
      // The file storage location. Valid values:<br>`OSS_CUSTOM`: Use your own Object Storage Service (OSS) bucket.<br>`OSS_PLATFORM`: Use the platform-provided OSS bucket.<br><br>
      shared_ptr<string> storageType_ {};
    };

    virtual bool empty() const override { return this->connectorName_ == nullptr
        && this->connectorType_ == nullptr && this->description_ == nullptr && this->fileConnectorConfig_ == nullptr; };
    // connectorName Field Functions 
    bool hasConnectorName() const { return this->connectorName_ != nullptr;};
    void deleteConnectorName() { this->connectorName_ = nullptr;};
    inline string getConnectorName() const { DARABONBA_PTR_GET_DEFAULT(connectorName_, "") };
    inline AddConnectorRequest& setConnectorName(string connectorName) { DARABONBA_PTR_SET_VALUE(connectorName_, connectorName) };


    // connectorType Field Functions 
    bool hasConnectorType() const { return this->connectorType_ != nullptr;};
    void deleteConnectorType() { this->connectorType_ = nullptr;};
    inline string getConnectorType() const { DARABONBA_PTR_GET_DEFAULT(connectorType_, "") };
    inline AddConnectorRequest& setConnectorType(string connectorType) { DARABONBA_PTR_SET_VALUE(connectorType_, connectorType) };


    // description Field Functions 
    bool hasDescription() const { return this->description_ != nullptr;};
    void deleteDescription() { this->description_ = nullptr;};
    inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
    inline AddConnectorRequest& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


    // fileConnectorConfig Field Functions 
    bool hasFileConnectorConfig() const { return this->fileConnectorConfig_ != nullptr;};
    void deleteFileConnectorConfig() { this->fileConnectorConfig_ = nullptr;};
    inline const AddConnectorRequest::FileConnectorConfig & getFileConnectorConfig() const { DARABONBA_PTR_GET_CONST(fileConnectorConfig_, AddConnectorRequest::FileConnectorConfig) };
    inline AddConnectorRequest::FileConnectorConfig getFileConnectorConfig() { DARABONBA_PTR_GET(fileConnectorConfig_, AddConnectorRequest::FileConnectorConfig) };
    inline AddConnectorRequest& setFileConnectorConfig(const AddConnectorRequest::FileConnectorConfig & fileConnectorConfig) { DARABONBA_PTR_SET_VALUE(fileConnectorConfig_, fileConnectorConfig) };
    inline AddConnectorRequest& setFileConnectorConfig(AddConnectorRequest::FileConnectorConfig && fileConnectorConfig) { DARABONBA_PTR_SET_RVALUE(fileConnectorConfig_, fileConnectorConfig) };


  protected:
    // The name of the connector.
    // 
    // This parameter is required.
    shared_ptr<string> connectorName_ {};
    // The type of the connector.
    // 
    // This parameter is required.
    shared_ptr<string> connectorType_ {};
    // The description for the connector.
    // 
    // This parameter is required.
    shared_ptr<string> description_ {};
    // The parameters for the file connector.
    shared_ptr<AddConnectorRequest::FileConnectorConfig> fileConnectorConfig_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Bailian20231229
#endif
