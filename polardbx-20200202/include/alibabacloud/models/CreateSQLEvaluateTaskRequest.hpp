// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATESQLEVALUATETASKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATESQLEVALUATETASKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Polardbx20200202
{
namespace Models
{
  class CreateSQLEvaluateTaskRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateSQLEvaluateTaskRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_TO_JSON(DstDb, dstDb_);
      DARABONBA_PTR_TO_JSON(DstPassword, dstPassword_);
      DARABONBA_PTR_TO_JSON(DstResId, dstResId_);
      DARABONBA_PTR_TO_JSON(DstUserName, dstUserName_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(SlinkTaskDesc, slinkTaskDesc_);
      DARABONBA_PTR_TO_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_TO_JSON(SrcDb, srcDb_);
      DARABONBA_PTR_TO_JSON(SrcPassword, srcPassword_);
      DARABONBA_PTR_TO_JSON(SrcResId, srcResId_);
      DARABONBA_PTR_TO_JSON(SrcResType, srcResType_);
      DARABONBA_PTR_TO_JSON(SrcUserName, srcUserName_);
    };
    friend void from_json(const Darabonba::Json& j, CreateSQLEvaluateTaskRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DBInstanceName, DBInstanceName_);
      DARABONBA_PTR_FROM_JSON(DstDb, dstDb_);
      DARABONBA_PTR_FROM_JSON(DstPassword, dstPassword_);
      DARABONBA_PTR_FROM_JSON(DstResId, dstResId_);
      DARABONBA_PTR_FROM_JSON(DstUserName, dstUserName_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskDesc, slinkTaskDesc_);
      DARABONBA_PTR_FROM_JSON(SlinkTaskId, slinkTaskId_);
      DARABONBA_PTR_FROM_JSON(SrcDb, srcDb_);
      DARABONBA_PTR_FROM_JSON(SrcPassword, srcPassword_);
      DARABONBA_PTR_FROM_JSON(SrcResId, srcResId_);
      DARABONBA_PTR_FROM_JSON(SrcResType, srcResType_);
      DARABONBA_PTR_FROM_JSON(SrcUserName, srcUserName_);
    };
    CreateSQLEvaluateTaskRequest() = default ;
    CreateSQLEvaluateTaskRequest(const CreateSQLEvaluateTaskRequest &) = default ;
    CreateSQLEvaluateTaskRequest(CreateSQLEvaluateTaskRequest &&) = default ;
    CreateSQLEvaluateTaskRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateSQLEvaluateTaskRequest() = default ;
    CreateSQLEvaluateTaskRequest& operator=(const CreateSQLEvaluateTaskRequest &) = default ;
    CreateSQLEvaluateTaskRequest& operator=(CreateSQLEvaluateTaskRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->DBInstanceName_ == nullptr
        && this->dstDb_ == nullptr && this->dstPassword_ == nullptr && this->dstResId_ == nullptr && this->dstUserName_ == nullptr && this->regionId_ == nullptr
        && this->slinkTaskDesc_ == nullptr && this->slinkTaskId_ == nullptr && this->srcDb_ == nullptr && this->srcPassword_ == nullptr && this->srcResId_ == nullptr
        && this->srcResType_ == nullptr && this->srcUserName_ == nullptr; };
    // DBInstanceName Field Functions 
    bool hasDBInstanceName() const { return this->DBInstanceName_ != nullptr;};
    void deleteDBInstanceName() { this->DBInstanceName_ = nullptr;};
    inline string getDBInstanceName() const { DARABONBA_PTR_GET_DEFAULT(DBInstanceName_, "") };
    inline CreateSQLEvaluateTaskRequest& setDBInstanceName(string DBInstanceName) { DARABONBA_PTR_SET_VALUE(DBInstanceName_, DBInstanceName) };


    // dstDb Field Functions 
    bool hasDstDb() const { return this->dstDb_ != nullptr;};
    void deleteDstDb() { this->dstDb_ = nullptr;};
    inline string getDstDb() const { DARABONBA_PTR_GET_DEFAULT(dstDb_, "") };
    inline CreateSQLEvaluateTaskRequest& setDstDb(string dstDb) { DARABONBA_PTR_SET_VALUE(dstDb_, dstDb) };


    // dstPassword Field Functions 
    bool hasDstPassword() const { return this->dstPassword_ != nullptr;};
    void deleteDstPassword() { this->dstPassword_ = nullptr;};
    inline string getDstPassword() const { DARABONBA_PTR_GET_DEFAULT(dstPassword_, "") };
    inline CreateSQLEvaluateTaskRequest& setDstPassword(string dstPassword) { DARABONBA_PTR_SET_VALUE(dstPassword_, dstPassword) };


    // dstResId Field Functions 
    bool hasDstResId() const { return this->dstResId_ != nullptr;};
    void deleteDstResId() { this->dstResId_ = nullptr;};
    inline string getDstResId() const { DARABONBA_PTR_GET_DEFAULT(dstResId_, "") };
    inline CreateSQLEvaluateTaskRequest& setDstResId(string dstResId) { DARABONBA_PTR_SET_VALUE(dstResId_, dstResId) };


    // dstUserName Field Functions 
    bool hasDstUserName() const { return this->dstUserName_ != nullptr;};
    void deleteDstUserName() { this->dstUserName_ = nullptr;};
    inline string getDstUserName() const { DARABONBA_PTR_GET_DEFAULT(dstUserName_, "") };
    inline CreateSQLEvaluateTaskRequest& setDstUserName(string dstUserName) { DARABONBA_PTR_SET_VALUE(dstUserName_, dstUserName) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline CreateSQLEvaluateTaskRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // slinkTaskDesc Field Functions 
    bool hasSlinkTaskDesc() const { return this->slinkTaskDesc_ != nullptr;};
    void deleteSlinkTaskDesc() { this->slinkTaskDesc_ = nullptr;};
    inline string getSlinkTaskDesc() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskDesc_, "") };
    inline CreateSQLEvaluateTaskRequest& setSlinkTaskDesc(string slinkTaskDesc) { DARABONBA_PTR_SET_VALUE(slinkTaskDesc_, slinkTaskDesc) };


    // slinkTaskId Field Functions 
    bool hasSlinkTaskId() const { return this->slinkTaskId_ != nullptr;};
    void deleteSlinkTaskId() { this->slinkTaskId_ = nullptr;};
    inline string getSlinkTaskId() const { DARABONBA_PTR_GET_DEFAULT(slinkTaskId_, "") };
    inline CreateSQLEvaluateTaskRequest& setSlinkTaskId(string slinkTaskId) { DARABONBA_PTR_SET_VALUE(slinkTaskId_, slinkTaskId) };


    // srcDb Field Functions 
    bool hasSrcDb() const { return this->srcDb_ != nullptr;};
    void deleteSrcDb() { this->srcDb_ = nullptr;};
    inline string getSrcDb() const { DARABONBA_PTR_GET_DEFAULT(srcDb_, "") };
    inline CreateSQLEvaluateTaskRequest& setSrcDb(string srcDb) { DARABONBA_PTR_SET_VALUE(srcDb_, srcDb) };


    // srcPassword Field Functions 
    bool hasSrcPassword() const { return this->srcPassword_ != nullptr;};
    void deleteSrcPassword() { this->srcPassword_ = nullptr;};
    inline string getSrcPassword() const { DARABONBA_PTR_GET_DEFAULT(srcPassword_, "") };
    inline CreateSQLEvaluateTaskRequest& setSrcPassword(string srcPassword) { DARABONBA_PTR_SET_VALUE(srcPassword_, srcPassword) };


    // srcResId Field Functions 
    bool hasSrcResId() const { return this->srcResId_ != nullptr;};
    void deleteSrcResId() { this->srcResId_ = nullptr;};
    inline string getSrcResId() const { DARABONBA_PTR_GET_DEFAULT(srcResId_, "") };
    inline CreateSQLEvaluateTaskRequest& setSrcResId(string srcResId) { DARABONBA_PTR_SET_VALUE(srcResId_, srcResId) };


    // srcResType Field Functions 
    bool hasSrcResType() const { return this->srcResType_ != nullptr;};
    void deleteSrcResType() { this->srcResType_ = nullptr;};
    inline string getSrcResType() const { DARABONBA_PTR_GET_DEFAULT(srcResType_, "") };
    inline CreateSQLEvaluateTaskRequest& setSrcResType(string srcResType) { DARABONBA_PTR_SET_VALUE(srcResType_, srcResType) };


    // srcUserName Field Functions 
    bool hasSrcUserName() const { return this->srcUserName_ != nullptr;};
    void deleteSrcUserName() { this->srcUserName_ = nullptr;};
    inline string getSrcUserName() const { DARABONBA_PTR_GET_DEFAULT(srcUserName_, "") };
    inline CreateSQLEvaluateTaskRequest& setSrcUserName(string srcUserName) { DARABONBA_PTR_SET_VALUE(srcUserName_, srcUserName) };


  protected:
    // The instance ID. > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the details of all instances in the target region, including instance IDs.
    // 
    // This parameter is required.
    shared_ptr<string> DBInstanceName_ {};
    // The ID of the instance on which the target SQL statement is executed. > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the details of the target SQL statement, including the instance ID.
    shared_ptr<string> dstDb_ {};
    // The password of the target SQL statement. > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the details of the target SQL statement, including the password.
    shared_ptr<string> dstPassword_ {};
    // The ID of the target SQL statement. > You can call the [DescribeDBInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the details of the target SQL statement, including the ID.
    shared_ptr<string> dstResId_ {};
    // The username of the destination instance.
    shared_ptr<string> dstUserName_ {};
    // The region ID of the instance. > You can call the [DescribeRegions](https://help.aliyun.com/document_detail/196841.html) operation to query the regions supported by PolarDB-X, including region IDs.
    // 
    // This parameter is required.
    shared_ptr<string> regionId_ {};
    // The description of the target SQL statement.
    shared_ptr<string> slinkTaskDesc_ {};
    // The task ID for executing the target SQL statement. > You can call the [DescribeCloudCenterInstances](https://help.aliyun.com/document_detail/196830.html) operation to query the IDs of target SQL statements supported by PolarDB-X.
    shared_ptr<string> slinkTaskId_ {};
    // Specifies whether to enable the source ApsaraDB RDS instance. Valid values: ***enable**: enabled. ***disabled**: disabled.
    shared_ptr<string> srcDb_ {};
    // The port number of the source instance. Valid values: 3200 to 3999. > This parameter is available and required only when **DBEndpointInstanceType** is set to **polardb-o**.
    shared_ptr<string> srcPassword_ {};
    // The ID of the source ApsaraDB RDS instance. > You can call the [DescribeDropSystemEventMetaList](https://help.aliyun.com/document_detail/196836.html) operation to query the details of all source ApsaraDB RDS instances in the target region, including instance IDs.
    shared_ptr<string> srcResId_ {};
    // The type of the source instance. Valid values: RDS_MYSQL, POLARX1, POLARX2_STANDARD, POLARX2_ENTERPRISE, and POLARDB_M.
    shared_ptr<string> srcResType_ {};
    // The username of the source instance.
    shared_ptr<string> srcUserName_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Polardbx20200202
#endif
