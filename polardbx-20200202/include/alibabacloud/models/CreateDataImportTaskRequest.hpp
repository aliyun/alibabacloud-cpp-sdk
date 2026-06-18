// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATEDATAIMPORTTASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATEDATAIMPORTTASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateDataImportTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateDataImportTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DstDb, dstDb_);
      DARABONBA_PTR_TO_JSON(DstPassword, dstPassword_);
      DARABONBA_PTR_TO_JSON(DstResId, dstResId_);
      DARABONBA_PTR_TO_JSON(DstUserName, dstUserName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_TO_JSON(SrcDb, srcDb_);
      DARABONBA_PTR_TO_JSON(SrcPassword, srcPassword_);
      DARABONBA_PTR_TO_JSON(SrcResId, srcResId_);
      DARABONBA_PTR_TO_JSON(SrcUserName, srcUserName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateDataImportTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DstDb, dstDb_);
      DARABONBA_PTR_FROM_JSON(DstPassword, dstPassword_);
      DARABONBA_PTR_FROM_JSON(DstResId, dstResId_);
      DARABONBA_PTR_FROM_JSON(DstUserName, dstUserName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_FROM_JSON(SrcDb, srcDb_);
      DARABONBA_PTR_FROM_JSON(SrcPassword, srcPassword_);
      DARABONBA_PTR_FROM_JSON(SrcResId, srcResId_);
      DARABONBA_PTR_FROM_JSON(SrcUserName, srcUserName_);
    };
    CreateDataImportTaskRequest() = default ;
    CreateDataImportTaskRequest(const CreateDataImportTaskRequest &) = default ;
    CreateDataImportTaskRequest(CreateDataImportTaskRequest &&) = default ;
    CreateDataImportTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateDataImportTaskRequest() = default ;
    CreateDataImportTaskRequest& operator=(const CreateDataImportTaskRequest &) = default ;
    CreateDataImportTaskRequest& operator=(CreateDataImportTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->dstDb_ == nullptr && this->dstPassword_ == nullptr && this->dstResId_ == nullptr && this->dstUserName_ == nullptr && this->regionId_ == nullptr
        && this->slinkTaskId_ == nullptr && this->srcDb_ == nullptr && this->srcPassword_ == nullptr && this->srcResId_ == nullptr && this->srcUserName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateDataImportTaskRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dstDb Field Functions 
    bool hasDstDb() const { return this->dstDb_ != nullptr;};
    void deleteDstDb() { this->dstDb_ = nullptr;};
    inline string getDstDb() const { DARABONBA_PTR_GET_DEFAULT(dstDb_, "") };
    inline CreateDataImportTaskRequest& setDstDb(string dstDb) { DARABONBA_PTR_SET_VALUE(dstDb_, dstDb) };


    // dstPassword Field Functions 
    bool hasDstPassword() const { return this->dstPassword_ != nullptr;};
    void deleteDstPassword() { this->dstPassword_ = nullptr;};
    inline string getDstPassword() const { DARABONBA_PTR_GET_DEFAULT(dstPassword_, "") };
    inline CreateDataImportTaskRequest& setDstPassword(string dstPassword) { DARABONBA_PTR_SET_VALUE(dstPassword_, dstPassword) };


    // dstResId Field Functions 
    bool hasDstResId() const { return this->dstResId_ != nullptr;};
    void deleteDstResId() { this->dstResId_ = nullptr;};
    inline string getDstResId() const { DARABONBA_PTR_GET_DEFAULT(dstResId_, "") };
    inline CreateDataImportTaskRequest& setDstResId(string dstResId) { DARABONBA_PTR_SET_VALUE(dstResId_, dstResId) };


    // dstUserName Field Functions 
    bool hasDstUserName() const { return this->dstUserName_ != nullptr;};
    void deleteDstUserName() { this->dstUserName_ = nullptr;};
    inline string getDstUserName() const { DARABONBA_PTR_GET_DEFAULT(dstUserName_, "") };
    inline CreateDataImportTaskRequest& setDstUserName(string dstUserName) { DARABONBA_PTR_SET_VALUE(dstUserName_, dstUserName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateDataImportTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string getSlinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline CreateDataImportTaskRequest& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


    // srcDb Field Functions 
    bool hasSrcDb() const { return this->srcDb_ != nullptr;};
    void deleteSrcDb() { this->srcDb_ = nullptr;};
    inline string getSrcDb() const { DARABONBA_PTR_GET_DEFAULT(srcDb_, "") };
    inline CreateDataImportTaskRequest& setSrcDb(string srcDb) { DARABONBA_PTR_SET_VALUE(srcDb_, srcDb) };


    // srcPassword Field Functions 
    bool hasSrcPassword() const { return this->srcPassword_ != nullptr;};
    void deleteSrcPassword() { this->srcPassword_ = nullptr;};
    inline string getSrcPassword() const { DARABONBA_PTR_GET_DEFAULT(srcPassword_, "") };
    inline CreateDataImportTaskRequest& setSrcPassword(string srcPassword) { DARABONBA_PTR_SET_VALUE(srcPassword_, srcPassword) };


    // srcResId Field Functions 
    bool hasSrcResId() const { return this->srcResId_ != nullptr;};
    void deleteSrcResId() { this->srcResId_ = nullptr;};
    inline string getSrcResId() const { DARABONBA_PTR_GET_DEFAULT(srcResId_, "") };
    inline CreateDataImportTaskRequest& setSrcResId(string srcResId) { DARABONBA_PTR_SET_VALUE(srcResId_, srcResId) };


    // srcUserName Field Functions 
    bool hasSrcUserName() const { return this->srcUserName_ != nullptr;};
    void deleteSrcUserName() { this->srcUserName_ = nullptr;};
    inline string getSrcUserName() const { DARABONBA_PTR_GET_DEFAULT(srcUserName_, "") };
    inline CreateDataImportTaskRequest& setSrcUserName(string srcUserName) { DARABONBA_PTR_SET_VALUE(srcUserName_, srcUserName) };


  protected:
    // The instance ID. > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the details of all instances in the specified region, including instance IDs.
    shared_ptr<string> DBInstanceName_ {};
    // The execution status of the target SQL import. Valid values: * **importing**: importing. * **success**: import succeeded. * **fail**: import failed.
    shared_ptr<string> dstDb_ {};
    // The password of the privileged account for the target ApsaraDB RDS instance. > * You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the privileged account information of the target instance, including the password. * This parameter takes effect only when DstPassword is set to true.
    shared_ptr<string> dstPassword_ {};
    // The migration task ID.
    shared_ptr<string> dstResId_ {};
    // The username of the target.
    shared_ptr<string> dstUserName_ {};
    // The region in which the instance resides. > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196841.html) operation to query the regions supported by PolarDB-X, including region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The import task ID.
    // 
    // This parameter is required.
    shared_ptr<string> slinkTaskId_ {};
    // The database information of the source when the source database is ApsaraDB RDS for MySQL. > The source database must be consistent with the target database.
    shared_ptr<string> srcDb_ {};
    // The read/write mode for executing the import task on the source. Valid values: * **rw**: read and write. * **ro**: read-only.
    shared_ptr<string> srcPassword_ {};
    // The ID of the source ApsaraDB RDS instance. > You can call the [DescribeDrivingAccess](https://help.aliyun.com/document_detail/196830.html) operation to query the details of all source ApsaraDB RDS instances in the specified region, including instance IDs.
    shared_ptr<string> srcResId_ {};
    // The username of the source.
    shared_ptr<string> srcUserName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
