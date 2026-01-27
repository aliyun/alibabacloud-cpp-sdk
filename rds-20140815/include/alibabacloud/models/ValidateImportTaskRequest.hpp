// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_VALIDATEIMPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_VALIDATEIMPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rds20140815
{
namespace Models
{
  class ValidateImportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ValidateImportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_TO_JSON(EstimatedSize, estimatedSize_);
      DARABONBA_PTR_TO_JSON(Host, host_);
      DARABONBA_PTR_TO_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_TO_JSON(Password, password_);
      DARABONBA_PTR_TO_JSON(Port, port_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_TO_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_TO_JSON(StreamPort, streamPort_);
      DARABONBA_PTR_TO_JSON(User, user_);
      DARABONBA_PTR_TO_JSON(XtrabackupPath, xtrabackupPath_);
    };
    friend void from_json(const Darabonba::Json& j, ValidateImportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DbInstanceId, dbInstanceId_);
      DARABONBA_PTR_FROM_JSON(EstimatedSize, estimatedSize_);
      DARABONBA_PTR_FROM_JSON(Host, host_);
      DARABONBA_PTR_FROM_JSON(OwnerId, ownerId_);
      DARABONBA_PTR_FROM_JSON(Password, password_);
      DARABONBA_PTR_FROM_JSON(Port, port_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SourceInstanceId, sourceInstanceId_);
      DARABONBA_PTR_FROM_JSON(SourcePlatform, sourcePlatform_);
      DARABONBA_PTR_FROM_JSON(StreamPort, streamPort_);
      DARABONBA_PTR_FROM_JSON(User, user_);
      DARABONBA_PTR_FROM_JSON(XtrabackupPath, xtrabackupPath_);
    };
    ValidateImportTaskRequest() = default ;
    ValidateImportTaskRequest(const ValidateImportTaskRequest &) = default ;
    ValidateImportTaskRequest(ValidateImportTaskRequest &&) = default ;
    ValidateImportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ValidateImportTaskRequest() = default ;
    ValidateImportTaskRequest& operator=(const ValidateImportTaskRequest &) = default ;
    ValidateImportTaskRequest& operator=(ValidateImportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dbInstanceId_ == nullptr
        && this->estimatedSize_ == nullptr && this->host_ == nullptr && this->ownerId_ == nullptr && this->password_ == nullptr && this->port_ == nullptr
        && this->regionId_ == nullptr && this->sourceInstanceId_ == nullptr && this->sourcePlatform_ == nullptr && this->streamPort_ == nullptr && this->user_ == nullptr
        && this->xtrabackupPath_ == nullptr; };
    // dbInstanceId Field Functions 
    bool hasDbInstanceId() const { return this->dbInstanceId_ != nullptr;};
    void deleteDbInstanceId() { this->dbInstanceId_ = nullptr;};
    inline string getDbInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dbInstanceId_, "") };
    inline ValidateImportTaskRequest& setDbInstanceId(string dbInstanceId) { DARABONBA_PTR_SET_VALUE(dbInstanceId_, dbInstanceId) };


    // estimatedSize Field Functions 
    bool hasEstimatedSize() const { return this->estimatedSize_ != nullptr;};
    void deleteEstimatedSize() { this->estimatedSize_ = nullptr;};
    inline int32_t getEstimatedSize() const { DARABONBA_PTR_GET_DEFAULT(estimatedSize_, 0) };
    inline ValidateImportTaskRequest& setEstimatedSize(int32_t estimatedSize) { DARABONBA_PTR_SET_VALUE(estimatedSize_, estimatedSize) };


    // host Field Functions 
    bool hasHost() const { return this->host_ != nullptr;};
    void deleteHost() { this->host_ = nullptr;};
    inline string getHost() const { DARABONBA_PTR_GET_DEFAULT(host_, "") };
    inline ValidateImportTaskRequest& setHost(string host) { DARABONBA_PTR_SET_VALUE(host_, host) };


    // ownerId Field Functions 
    bool hasOwnerId() const { return this->ownerId_ != nullptr;};
    void deleteOwnerId() { this->ownerId_ = nullptr;};
    inline int64_t getOwnerId() const { DARABONBA_PTR_GET_DEFAULT(ownerId_, 0L) };
    inline ValidateImportTaskRequest& setOwnerId(int64_t ownerId) { DARABONBA_PTR_SET_VALUE(ownerId_, ownerId) };


    // password Field Functions 
    bool hasPassword() const { return this->password_ != nullptr;};
    void deletePassword() { this->password_ = nullptr;};
    inline string getPassword() const { DARABONBA_PTR_GET_DEFAULT(password_, "") };
    inline ValidateImportTaskRequest& setPassword(string password) { DARABONBA_PTR_SET_VALUE(password_, password) };


    // port Field Functions 
    bool hasPort() const { return this->port_ != nullptr;};
    void deletePort() { this->port_ = nullptr;};
    inline int32_t getPort() const { DARABONBA_PTR_GET_DEFAULT(port_, 0) };
    inline ValidateImportTaskRequest& setPort(int32_t port) { DARABONBA_PTR_SET_VALUE(port_, port) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ValidateImportTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // sourceInstanceId Field Functions 
    bool hasSourceInstanceId() const { return this->sourceInstanceId_ != nullptr;};
    void deleteSourceInstanceId() { this->sourceInstanceId_ = nullptr;};
    inline string getSourceInstanceId() const { DARABONBA_PTR_GET_DEFAULT(sourceInstanceId_, "") };
    inline ValidateImportTaskRequest& setSourceInstanceId(string sourceInstanceId) { DARABONBA_PTR_SET_VALUE(sourceInstanceId_, sourceInstanceId) };


    // sourcePlatform Field Functions 
    bool hasSourcePlatform() const { return this->sourcePlatform_ != nullptr;};
    void deleteSourcePlatform() { this->sourcePlatform_ = nullptr;};
    inline string getSourcePlatform() const { DARABONBA_PTR_GET_DEFAULT(sourcePlatform_, "") };
    inline ValidateImportTaskRequest& setSourcePlatform(string sourcePlatform) { DARABONBA_PTR_SET_VALUE(sourcePlatform_, sourcePlatform) };


    // streamPort Field Functions 
    bool hasStreamPort() const { return this->streamPort_ != nullptr;};
    void deleteStreamPort() { this->streamPort_ = nullptr;};
    inline int32_t getStreamPort() const { DARABONBA_PTR_GET_DEFAULT(streamPort_, 0) };
    inline ValidateImportTaskRequest& setStreamPort(int32_t streamPort) { DARABONBA_PTR_SET_VALUE(streamPort_, streamPort) };


    // user Field Functions 
    bool hasUser() const { return this->user_ != nullptr;};
    void deleteUser() { this->user_ = nullptr;};
    inline string getUser() const { DARABONBA_PTR_GET_DEFAULT(user_, "") };
    inline ValidateImportTaskRequest& setUser(string user) { DARABONBA_PTR_SET_VALUE(user_, user) };


    // xtrabackupPath Field Functions 
    bool hasXtrabackupPath() const { return this->xtrabackupPath_ != nullptr;};
    void deleteXtrabackupPath() { this->xtrabackupPath_ = nullptr;};
    inline string getXtrabackupPath() const { DARABONBA_PTR_GET_DEFAULT(xtrabackupPath_, "") };
    inline ValidateImportTaskRequest& setXtrabackupPath(string xtrabackupPath) { DARABONBA_PTR_SET_VALUE(xtrabackupPath_, xtrabackupPath) };


  protected:
    // This parameter is required.
    shared_ptr<string> dbInstanceId_ {};
    shared_ptr<int32_t> estimatedSize_ {};
    // This parameter is required.
    shared_ptr<string> host_ {};
    shared_ptr<int64_t> ownerId_ {};
    // This parameter is required.
    shared_ptr<string> password_ {};
    // This parameter is required.
    shared_ptr<int32_t> port_ {};
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    shared_ptr<string> sourceInstanceId_ {};
    shared_ptr<string> sourcePlatform_ {};
    // This parameter is required.
    shared_ptr<int32_t> streamPort_ {};
    // This parameter is required.
    shared_ptr<string> user_ {};
    shared_ptr<string> xtrabackupPath_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rds20140815
#endif
