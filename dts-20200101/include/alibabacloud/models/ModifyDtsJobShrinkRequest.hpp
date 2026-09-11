// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDTSJOBSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDTSJOBSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyDtsJobShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDtsJobShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_TO_JSON(DbList, dbListShrink_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(EtlOperatorColumnReference, etlOperatorColumnReference_);
      DARABONBA_PTR_TO_JSON(FileOssUrl, fileOssUrl_);
      DARABONBA_PTR_TO_JSON(FilterTableName, filterTableName_);
      DARABONBA_PTR_TO_JSON(ModifyTypeEnum, modifyTypeEnum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDtsJobShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_PTR_FROM_JSON(DbList, dbListShrink_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(EtlOperatorColumnReference, etlOperatorColumnReference_);
      DARABONBA_PTR_FROM_JSON(FileOssUrl, fileOssUrl_);
      DARABONBA_PTR_FROM_JSON(FilterTableName, filterTableName_);
      DARABONBA_PTR_FROM_JSON(ModifyTypeEnum, modifyTypeEnum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    ModifyDtsJobShrinkRequest() = default ;
    ModifyDtsJobShrinkRequest(const ModifyDtsJobShrinkRequest &) = default ;
    ModifyDtsJobShrinkRequest(ModifyDtsJobShrinkRequest &&) = default ;
    ModifyDtsJobShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDtsJobShrinkRequest() = default ;
    ModifyDtsJobShrinkRequest& operator=(const ModifyDtsJobShrinkRequest &) = default ;
    ModifyDtsJobShrinkRequest& operator=(ModifyDtsJobShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clientToken_ == nullptr
        && this->dataInitialization_ == nullptr && this->dataSynchronization_ == nullptr && this->dbListShrink_ == nullptr && this->dtsInstanceId_ == nullptr && this->dtsJobId_ == nullptr
        && this->etlOperatorColumnReference_ == nullptr && this->fileOssUrl_ == nullptr && this->filterTableName_ == nullptr && this->modifyTypeEnum_ == nullptr && this->regionId_ == nullptr
        && this->reserved_ == nullptr && this->resourceGroupId_ == nullptr && this->structureInitialization_ == nullptr && this->synchronizationDirection_ == nullptr && this->zeroEtlJob_ == nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string getClientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDtsJobShrinkRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline bool getDataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
    inline ModifyDtsJobShrinkRequest& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


    // dataSynchronization Field Functions 
    bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
    void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
    inline bool getDataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
    inline ModifyDtsJobShrinkRequest& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


    // dbListShrink Field Functions 
    bool hasDbListShrink() const { return this->dbListShrink_ != nullptr;};
    void deleteDbListShrink() { this->dbListShrink_ = nullptr;};
    inline string getDbListShrink() const { DARABONBA_PTR_GET_DEFAULT(dbListShrink_, "") };
    inline ModifyDtsJobShrinkRequest& setDbListShrink(string dbListShrink) { DARABONBA_PTR_SET_VALUE(dbListShrink_, dbListShrink) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string getDtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ModifyDtsJobShrinkRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string getDtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ModifyDtsJobShrinkRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // etlOperatorColumnReference Field Functions 
    bool hasEtlOperatorColumnReference() const { return this->etlOperatorColumnReference_ != nullptr;};
    void deleteEtlOperatorColumnReference() { this->etlOperatorColumnReference_ = nullptr;};
    inline string getEtlOperatorColumnReference() const { DARABONBA_PTR_GET_DEFAULT(etlOperatorColumnReference_, "") };
    inline ModifyDtsJobShrinkRequest& setEtlOperatorColumnReference(string etlOperatorColumnReference) { DARABONBA_PTR_SET_VALUE(etlOperatorColumnReference_, etlOperatorColumnReference) };


    // fileOssUrl Field Functions 
    bool hasFileOssUrl() const { return this->fileOssUrl_ != nullptr;};
    void deleteFileOssUrl() { this->fileOssUrl_ = nullptr;};
    inline string getFileOssUrl() const { DARABONBA_PTR_GET_DEFAULT(fileOssUrl_, "") };
    inline ModifyDtsJobShrinkRequest& setFileOssUrl(string fileOssUrl) { DARABONBA_PTR_SET_VALUE(fileOssUrl_, fileOssUrl) };


    // filterTableName Field Functions 
    bool hasFilterTableName() const { return this->filterTableName_ != nullptr;};
    void deleteFilterTableName() { this->filterTableName_ = nullptr;};
    inline string getFilterTableName() const { DARABONBA_PTR_GET_DEFAULT(filterTableName_, "") };
    inline ModifyDtsJobShrinkRequest& setFilterTableName(string filterTableName) { DARABONBA_PTR_SET_VALUE(filterTableName_, filterTableName) };


    // modifyTypeEnum Field Functions 
    bool hasModifyTypeEnum() const { return this->modifyTypeEnum_ != nullptr;};
    void deleteModifyTypeEnum() { this->modifyTypeEnum_ = nullptr;};
    inline string getModifyTypeEnum() const { DARABONBA_PTR_GET_DEFAULT(modifyTypeEnum_, "") };
    inline ModifyDtsJobShrinkRequest& setModifyTypeEnum(string modifyTypeEnum) { DARABONBA_PTR_SET_VALUE(modifyTypeEnum_, modifyTypeEnum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string getRegionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDtsJobShrinkRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string getReserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline ModifyDtsJobShrinkRequest& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string getResourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDtsJobShrinkRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline bool getStructureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
    inline ModifyDtsJobShrinkRequest& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string getSynchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline ModifyDtsJobShrinkRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool getZeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline ModifyDtsJobShrinkRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must make sure that it is unique among different requests. **ClientToken** can contain only ASCII characters and cannot exceed 64 characters in length.
    shared_ptr<string> clientToken_ {};
    // Specifies whether to perform full data migration or initial full data synchronization. Valid values:
    // 
    // - **true**: yes.
    // - **false**: no.
    shared_ptr<bool> dataInitialization_ {};
    // Specifies whether to perform incremental data migration or synchronization. Valid values:
    // 
    // - **false**: no.
    // - **true**: yes.
    shared_ptr<bool> dataSynchronization_ {};
    // The modified synchronization objects, in JSON format. For more information about the definition, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    // - The original DbList is overwritten by the new DbList. Make sure that the new DbList contains all the objects that need to be synchronized. Otherwise, synchronization objects may be lost. Modify this parameter with caution.
    // - Call [DescribeDtsJobDetail](https://help.aliyun.com/document_detail/208925.html) to query the current synchronization objects before you modify them based on your business requirements. For example, if the current objects are tables A and B, and you want to add table C, specify tables A, B, and C in this parameter.
    // - The maximum size of DbList is 1 MB.
    // - If DbList contains filter conditions, the total length of DbList (including filter conditions) cannot exceed 1 MB.
    // - For distributed tasks (such as migration or synchronization tasks whose source is PolarDB-X 1.0), DbList is split based on physical shards and multiple subtasks are generated. The maximum size of DbList for each subtask is 1 MB.
    shared_ptr<string> dbListShrink_ {};
    // The instance ID of the data synchronization instance.
    // 
    // This parameter is required.
    shared_ptr<string> dtsInstanceId_ {};
    // The ID of the synchronization task. You can call [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) to query the task ID.
    shared_ptr<string> dtsJobId_ {};
    // A field dedicated to T+1 business scenarios. This is an ETL operator and a business-specific field.
    shared_ptr<string> etlOperatorColumnReference_ {};
    // The OSS URL of the synchronization file.
    shared_ptr<string> fileOssUrl_ {};
    // The name of the table to be filtered.
    shared_ptr<string> filterTableName_ {};
    // The method used to modify the synchronization task. If this parameter is not specified, the synchronization objects are modified by default. Set this parameter to UPDATE_RESERVED to modify reserved parameters.
    shared_ptr<string> modifyTypeEnum_ {};
    // The region in which the instance resides. For more information, see [Supported regions](https://help.aliyun.com/document_detail/141033.html).
    shared_ptr<string> regionId_ {};
    // The reserved parameters of DTS. The update method is append rather than overwrite. The value is in the MAP JSON format. You can specify this parameter to meet special requirements, such as whether to automatically start a precheck. The usage is similar to that of the Reserve parameter. For details, see [Reserve parameter description](https://help.aliyun.com/document_detail/273111.html).
    shared_ptr<string> reserved_ {};
    // The resource group ID.
    shared_ptr<string> resourceGroupId_ {};
    // Specifies whether to perform schema migration or initial schema synchronization. Valid values:
    // 
    // - **true**: yes.
    // - **false**: no.
    shared_ptr<bool> structureInitialization_ {};
    // The synchronization direction. Valid values:
    // - **Forward**: forward.
    // - **Reverse**: reverse.
    // 
    // > - Default value: **Forward**.
    // - This parameter is required only when the synchronization topology of the data synchronization instance is two-way synchronization.
    shared_ptr<string> synchronizationDirection_ {};
    // Specifies whether this is a seamless integration (zero-ETL) node. Valid values:
    // - **true**: yes.
    // - **false**: no.
    shared_ptr<bool> zeroEtlJob_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
