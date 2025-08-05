// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYDTSJOBADVANCEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYDTSJOBADVANCEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Dts20200101
{
namespace Models
{
  class ModifyDtsJobAdvanceRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyDtsJobAdvanceRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_TO_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_TO_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_ANY_TO_JSON(DbList, dbList_);
      DARABONBA_PTR_TO_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_TO_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_TO_JSON(EtlOperatorColumnReference, etlOperatorColumnReference_);
      DARABONBA_TO_JSON(FileOssUrl, fileOssUrlObject_);
      DARABONBA_PTR_TO_JSON(FilterTableName, filterTableName_);
      DARABONBA_PTR_TO_JSON(ModifyTypeEnum, modifyTypeEnum_);
      DARABONBA_PTR_TO_JSON(RegionId, regionId_);
      DARABONBA_PTR_TO_JSON(Reserved, reserved_);
      DARABONBA_PTR_TO_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_TO_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_TO_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_TO_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyDtsJobAdvanceRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClientToken, clientToken_);
      DARABONBA_PTR_FROM_JSON(DataInitialization, dataInitialization_);
      DARABONBA_PTR_FROM_JSON(DataSynchronization, dataSynchronization_);
      DARABONBA_ANY_FROM_JSON(DbList, dbList_);
      DARABONBA_PTR_FROM_JSON(DtsInstanceId, dtsInstanceId_);
      DARABONBA_PTR_FROM_JSON(DtsJobId, dtsJobId_);
      DARABONBA_PTR_FROM_JSON(EtlOperatorColumnReference, etlOperatorColumnReference_);
      DARABONBA_FROM_JSON(FileOssUrl, fileOssUrlObject_);
      DARABONBA_PTR_FROM_JSON(FilterTableName, filterTableName_);
      DARABONBA_PTR_FROM_JSON(ModifyTypeEnum, modifyTypeEnum_);
      DARABONBA_PTR_FROM_JSON(RegionId, regionId_);
      DARABONBA_PTR_FROM_JSON(Reserved, reserved_);
      DARABONBA_PTR_FROM_JSON(ResourceGroupId, resourceGroupId_);
      DARABONBA_PTR_FROM_JSON(StructureInitialization, structureInitialization_);
      DARABONBA_PTR_FROM_JSON(SynchronizationDirection, synchronizationDirection_);
      DARABONBA_PTR_FROM_JSON(ZeroEtlJob, zeroEtlJob_);
    };
    ModifyDtsJobAdvanceRequest() = default ;
    ModifyDtsJobAdvanceRequest(const ModifyDtsJobAdvanceRequest &) = default ;
    ModifyDtsJobAdvanceRequest(ModifyDtsJobAdvanceRequest &&) = default ;
    ModifyDtsJobAdvanceRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyDtsJobAdvanceRequest() = default ;
    ModifyDtsJobAdvanceRequest& operator=(const ModifyDtsJobAdvanceRequest &) = default ;
    ModifyDtsJobAdvanceRequest& operator=(ModifyDtsJobAdvanceRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->clientToken_ != nullptr
        && this->dataInitialization_ != nullptr && this->dataSynchronization_ != nullptr && this->dbList_ != nullptr && this->dtsInstanceId_ != nullptr && this->dtsJobId_ != nullptr
        && this->etlOperatorColumnReference_ != nullptr && this->fileOssUrlObject_ != nullptr && this->filterTableName_ != nullptr && this->modifyTypeEnum_ != nullptr && this->regionId_ != nullptr
        && this->reserved_ != nullptr && this->resourceGroupId_ != nullptr && this->structureInitialization_ != nullptr && this->synchronizationDirection_ != nullptr && this->zeroEtlJob_ != nullptr; };
    // clientToken Field Functions 
    bool hasClientToken() const { return this->clientToken_ != nullptr;};
    void deleteClientToken() { this->clientToken_ = nullptr;};
    inline string clientToken() const { DARABONBA_PTR_GET_DEFAULT(clientToken_, "") };
    inline ModifyDtsJobAdvanceRequest& setClientToken(string clientToken) { DARABONBA_PTR_SET_VALUE(clientToken_, clientToken) };


    // dataInitialization Field Functions 
    bool hasDataInitialization() const { return this->dataInitialization_ != nullptr;};
    void deleteDataInitialization() { this->dataInitialization_ = nullptr;};
    inline bool dataInitialization() const { DARABONBA_PTR_GET_DEFAULT(dataInitialization_, false) };
    inline ModifyDtsJobAdvanceRequest& setDataInitialization(bool dataInitialization) { DARABONBA_PTR_SET_VALUE(dataInitialization_, dataInitialization) };


    // dataSynchronization Field Functions 
    bool hasDataSynchronization() const { return this->dataSynchronization_ != nullptr;};
    void deleteDataSynchronization() { this->dataSynchronization_ = nullptr;};
    inline bool dataSynchronization() const { DARABONBA_PTR_GET_DEFAULT(dataSynchronization_, false) };
    inline ModifyDtsJobAdvanceRequest& setDataSynchronization(bool dataSynchronization) { DARABONBA_PTR_SET_VALUE(dataSynchronization_, dataSynchronization) };


    // dbList Field Functions 
    bool hasDbList() const { return this->dbList_ != nullptr;};
    void deleteDbList() { this->dbList_ = nullptr;};
    inline     const Darabonba::Json & dbList() const { DARABONBA_GET(dbList_) };
    Darabonba::Json & dbList() { DARABONBA_GET(dbList_) };
    inline ModifyDtsJobAdvanceRequest& setDbList(const Darabonba::Json & dbList) { DARABONBA_SET_VALUE(dbList_, dbList) };
    inline ModifyDtsJobAdvanceRequest& setDbList(Darabonba::Json & dbList) { DARABONBA_SET_RVALUE(dbList_, dbList) };


    // dtsInstanceId Field Functions 
    bool hasDtsInstanceId() const { return this->dtsInstanceId_ != nullptr;};
    void deleteDtsInstanceId() { this->dtsInstanceId_ = nullptr;};
    inline string dtsInstanceId() const { DARABONBA_PTR_GET_DEFAULT(dtsInstanceId_, "") };
    inline ModifyDtsJobAdvanceRequest& setDtsInstanceId(string dtsInstanceId) { DARABONBA_PTR_SET_VALUE(dtsInstanceId_, dtsInstanceId) };


    // dtsJobId Field Functions 
    bool hasDtsJobId() const { return this->dtsJobId_ != nullptr;};
    void deleteDtsJobId() { this->dtsJobId_ = nullptr;};
    inline string dtsJobId() const { DARABONBA_PTR_GET_DEFAULT(dtsJobId_, "") };
    inline ModifyDtsJobAdvanceRequest& setDtsJobId(string dtsJobId) { DARABONBA_PTR_SET_VALUE(dtsJobId_, dtsJobId) };


    // etlOperatorColumnReference Field Functions 
    bool hasEtlOperatorColumnReference() const { return this->etlOperatorColumnReference_ != nullptr;};
    void deleteEtlOperatorColumnReference() { this->etlOperatorColumnReference_ = nullptr;};
    inline string etlOperatorColumnReference() const { DARABONBA_PTR_GET_DEFAULT(etlOperatorColumnReference_, "") };
    inline ModifyDtsJobAdvanceRequest& setEtlOperatorColumnReference(string etlOperatorColumnReference) { DARABONBA_PTR_SET_VALUE(etlOperatorColumnReference_, etlOperatorColumnReference) };


    // fileOssUrlObject Field Functions 
    bool hasFileOssUrlObject() const { return this->fileOssUrlObject_ != nullptr;};
    void deleteFileOssUrlObject() { this->fileOssUrlObject_ = nullptr;};
    inline shared_ptr<Darabonba::IStream> fileOssUrlObject() const { DARABONBA_GET(fileOssUrlObject_) };
    inline ModifyDtsJobAdvanceRequest& setFileOssUrlObject(shared_ptr<Darabonba::IStream> fileOssUrlObject) { DARABONBA_SET_VALUE(fileOssUrlObject_, fileOssUrlObject) };


    // filterTableName Field Functions 
    bool hasFilterTableName() const { return this->filterTableName_ != nullptr;};
    void deleteFilterTableName() { this->filterTableName_ = nullptr;};
    inline string filterTableName() const { DARABONBA_PTR_GET_DEFAULT(filterTableName_, "") };
    inline ModifyDtsJobAdvanceRequest& setFilterTableName(string filterTableName) { DARABONBA_PTR_SET_VALUE(filterTableName_, filterTableName) };


    // modifyTypeEnum Field Functions 
    bool hasModifyTypeEnum() const { return this->modifyTypeEnum_ != nullptr;};
    void deleteModifyTypeEnum() { this->modifyTypeEnum_ = nullptr;};
    inline string modifyTypeEnum() const { DARABONBA_PTR_GET_DEFAULT(modifyTypeEnum_, "") };
    inline ModifyDtsJobAdvanceRequest& setModifyTypeEnum(string modifyTypeEnum) { DARABONBA_PTR_SET_VALUE(modifyTypeEnum_, modifyTypeEnum) };


    // regionId Field Functions 
    bool hasRegionId() const { return this->regionId_ != nullptr;};
    void deleteRegionId() { this->regionId_ = nullptr;};
    inline string regionId() const { DARABONBA_PTR_GET_DEFAULT(regionId_, "") };
    inline ModifyDtsJobAdvanceRequest& setRegionId(string regionId) { DARABONBA_PTR_SET_VALUE(regionId_, regionId) };


    // reserved Field Functions 
    bool hasReserved() const { return this->reserved_ != nullptr;};
    void deleteReserved() { this->reserved_ = nullptr;};
    inline string reserved() const { DARABONBA_PTR_GET_DEFAULT(reserved_, "") };
    inline ModifyDtsJobAdvanceRequest& setReserved(string reserved) { DARABONBA_PTR_SET_VALUE(reserved_, reserved) };


    // resourceGroupId Field Functions 
    bool hasResourceGroupId() const { return this->resourceGroupId_ != nullptr;};
    void deleteResourceGroupId() { this->resourceGroupId_ = nullptr;};
    inline string resourceGroupId() const { DARABONBA_PTR_GET_DEFAULT(resourceGroupId_, "") };
    inline ModifyDtsJobAdvanceRequest& setResourceGroupId(string resourceGroupId) { DARABONBA_PTR_SET_VALUE(resourceGroupId_, resourceGroupId) };


    // structureInitialization Field Functions 
    bool hasStructureInitialization() const { return this->structureInitialization_ != nullptr;};
    void deleteStructureInitialization() { this->structureInitialization_ = nullptr;};
    inline bool structureInitialization() const { DARABONBA_PTR_GET_DEFAULT(structureInitialization_, false) };
    inline ModifyDtsJobAdvanceRequest& setStructureInitialization(bool structureInitialization) { DARABONBA_PTR_SET_VALUE(structureInitialization_, structureInitialization) };


    // synchronizationDirection Field Functions 
    bool hasSynchronizationDirection() const { return this->synchronizationDirection_ != nullptr;};
    void deleteSynchronizationDirection() { this->synchronizationDirection_ = nullptr;};
    inline string synchronizationDirection() const { DARABONBA_PTR_GET_DEFAULT(synchronizationDirection_, "") };
    inline ModifyDtsJobAdvanceRequest& setSynchronizationDirection(string synchronizationDirection) { DARABONBA_PTR_SET_VALUE(synchronizationDirection_, synchronizationDirection) };


    // zeroEtlJob Field Functions 
    bool hasZeroEtlJob() const { return this->zeroEtlJob_ != nullptr;};
    void deleteZeroEtlJob() { this->zeroEtlJob_ = nullptr;};
    inline bool zeroEtlJob() const { DARABONBA_PTR_GET_DEFAULT(zeroEtlJob_, false) };
    inline ModifyDtsJobAdvanceRequest& setZeroEtlJob(bool zeroEtlJob) { DARABONBA_PTR_SET_VALUE(zeroEtlJob_, zeroEtlJob) };


  protected:
    // The client token that is used to ensure the idempotence of the request. You can use the client to generate the value, but you must ensure that it is unique among different requests. The **ClientToken** parameter can contain only ASCII characters and cannot exceed 64 characters in length.
    std::shared_ptr<string> clientToken_ = nullptr;
    // Specifies whether to perform full data migration or synchronization. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> dataInitialization_ = nullptr;
    // Specifies whether to perform incremental data migration or synchronization. Valid values:
    // 
    // *   **false**
    // *   **true**
    std::shared_ptr<bool> dataSynchronization_ = nullptr;
    // The objects of the data synchronization task after modification. The value must be a JSON string. For more information, see [Objects of DTS tasks](https://help.aliyun.com/document_detail/209545.html).
    // 
    // > 
    // 
    // *   The new value of DbList overwrites the original value. Make sure that all the objects that you want to synchronize are specified. Otherwise, some objects may be lost. Specify this parameter with caution.
    // 
    // *   Before you call the ModifyDtsJob operation, we recommend that you call the [DescribeDtsJobDetail](https://help.aliyun.com/document_detail/208925.html) operation to query the current objects of the data synchronization task. Then, you can specify the new objects based on your business requirements. For example, if the current objects are Table A and Table B and you need to add Table C, you must specify Table A, Table B, and Table C for this parameter.
    Darabonba::Json dbList_ = nullptr;
    // The ID of the data synchronization instance.
    // 
    // This parameter is required.
    std::shared_ptr<string> dtsInstanceId_ = nullptr;
    // The synchronization task ID. You can call the [DescribeDtsJobs](https://help.aliyun.com/document_detail/209702.html) operation to query the task ID.
    std::shared_ptr<string> dtsJobId_ = nullptr;
    // The operator that is related to the extract, transform, and load (ETL) feature and dedicated to T+1 business.
    std::shared_ptr<string> etlOperatorColumnReference_ = nullptr;
    // The endpoint of the Object Storage Service (OSS) bucket in which the files to be synchronized are stored.
    shared_ptr<Darabonba::IStream> fileOssUrlObject_ = nullptr;
    // The name of the table to be filtered.
    std::shared_ptr<string> filterTableName_ = nullptr;
    // The method that is used to modify the data synchronization task. If you do not specify the parameter, the objects of the data synchronization task are modified by default. If you specify UPDATE_RESERVED for the parameter, the reserved parameters are modified.
    std::shared_ptr<string> modifyTypeEnum_ = nullptr;
    // The ID of the region in which the data synchronization instance resides. For more information, see [List of supported regions](https://help.aliyun.com/document_detail/141033.html).
    std::shared_ptr<string> regionId_ = nullptr;
    // The reserved parameters of the data synchronization task. You can add reserved parameters instead of overwriting the existing reserved parameters. The value of the parameter is a MAP JSON string. You can specify this parameter to meet special requirements, such as specifying whether to automatically start the precheck of the data synchronization task. For more information, see [MigrationReserved](https://help.aliyun.com/document_detail/176470.html).
    std::shared_ptr<string> reserved_ = nullptr;
    // Resource group ID.
    std::shared_ptr<string> resourceGroupId_ = nullptr;
    // Specifies whether to perform schema migration or synchronization. Valid values:
    // 
    // *   **true**
    // *   **false**
    std::shared_ptr<bool> structureInitialization_ = nullptr;
    // The synchronization direction. Valid values:
    // 
    // *   **Forward**: Data is synchronized from the source database to the destination database.
    // *   **Reverse**: Data is synchronized from the destination database to the source database.
    // 
    // > 
    // *   Default value: **Forward**.
    // *   This parameter is required only if the topology of the data synchronization instance is two-way synchronization.
    std::shared_ptr<string> synchronizationDirection_ = nullptr;
    // Whether it is a seamless integration (Zero-ETL) task, the value can be:
    // - **false**: No. - **true**: Yes.
    std::shared_ptr<bool> zeroEtlJob_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Dts20200101
#endif
