// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTBACKUPPLANSTATISTICS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVAULTSRESPONSEBODYVAULTSVAULTBACKUPPLANSTATISTICS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& obj) { 
      DARABONBA_PTR_TO_JSON(Archive, archive_);
      DARABONBA_PTR_TO_JSON(CommonFileSystem, commonFileSystem_);
      DARABONBA_PTR_TO_JSON(CommonNas, commonNas_);
      DARABONBA_PTR_TO_JSON(Csg, csg_);
      DARABONBA_PTR_TO_JSON(EcsFile, ecsFile_);
      DARABONBA_PTR_TO_JSON(EcsHana, ecsHana_);
      DARABONBA_PTR_TO_JSON(Isilon, isilon_);
      DARABONBA_PTR_TO_JSON(LocalFile, localFile_);
      DARABONBA_PTR_TO_JSON(LocalVm, localVm_);
      DARABONBA_PTR_TO_JSON(MySql, mySql_);
      DARABONBA_PTR_TO_JSON(Nas, nas_);
      DARABONBA_PTR_TO_JSON(Oracle, oracle_);
      DARABONBA_PTR_TO_JSON(Oss, oss_);
      DARABONBA_PTR_TO_JSON(Ots, ots_);
      DARABONBA_PTR_TO_JSON(SqlServer, sqlServer_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& obj) { 
      DARABONBA_PTR_FROM_JSON(Archive, archive_);
      DARABONBA_PTR_FROM_JSON(CommonFileSystem, commonFileSystem_);
      DARABONBA_PTR_FROM_JSON(CommonNas, commonNas_);
      DARABONBA_PTR_FROM_JSON(Csg, csg_);
      DARABONBA_PTR_FROM_JSON(EcsFile, ecsFile_);
      DARABONBA_PTR_FROM_JSON(EcsHana, ecsHana_);
      DARABONBA_PTR_FROM_JSON(Isilon, isilon_);
      DARABONBA_PTR_FROM_JSON(LocalFile, localFile_);
      DARABONBA_PTR_FROM_JSON(LocalVm, localVm_);
      DARABONBA_PTR_FROM_JSON(MySql, mySql_);
      DARABONBA_PTR_FROM_JSON(Nas, nas_);
      DARABONBA_PTR_FROM_JSON(Oracle, oracle_);
      DARABONBA_PTR_FROM_JSON(Oss, oss_);
      DARABONBA_PTR_FROM_JSON(Ots, ots_);
      DARABONBA_PTR_FROM_JSON(SqlServer, sqlServer_);
    };
    DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics() = default ;
    DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics(const DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics &) = default ;
    DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics(DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics &&) = default ;
    DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics() = default ;
    DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& operator=(const DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics &) = default ;
    DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& operator=(DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->archive_ != nullptr
        && this->commonFileSystem_ != nullptr && this->commonNas_ != nullptr && this->csg_ != nullptr && this->ecsFile_ != nullptr && this->ecsHana_ != nullptr
        && this->isilon_ != nullptr && this->localFile_ != nullptr && this->localVm_ != nullptr && this->mySql_ != nullptr && this->nas_ != nullptr
        && this->oracle_ != nullptr && this->oss_ != nullptr && this->ots_ != nullptr && this->sqlServer_ != nullptr; };
    // archive Field Functions 
    bool hasArchive() const { return this->archive_ != nullptr;};
    void deleteArchive() { this->archive_ = nullptr;};
    inline int32_t archive() const { DARABONBA_PTR_GET_DEFAULT(archive_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setArchive(int32_t archive) { DARABONBA_PTR_SET_VALUE(archive_, archive) };


    // commonFileSystem Field Functions 
    bool hasCommonFileSystem() const { return this->commonFileSystem_ != nullptr;};
    void deleteCommonFileSystem() { this->commonFileSystem_ = nullptr;};
    inline int32_t commonFileSystem() const { DARABONBA_PTR_GET_DEFAULT(commonFileSystem_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setCommonFileSystem(int32_t commonFileSystem) { DARABONBA_PTR_SET_VALUE(commonFileSystem_, commonFileSystem) };


    // commonNas Field Functions 
    bool hasCommonNas() const { return this->commonNas_ != nullptr;};
    void deleteCommonNas() { this->commonNas_ = nullptr;};
    inline int32_t commonNas() const { DARABONBA_PTR_GET_DEFAULT(commonNas_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setCommonNas(int32_t commonNas) { DARABONBA_PTR_SET_VALUE(commonNas_, commonNas) };


    // csg Field Functions 
    bool hasCsg() const { return this->csg_ != nullptr;};
    void deleteCsg() { this->csg_ = nullptr;};
    inline int32_t csg() const { DARABONBA_PTR_GET_DEFAULT(csg_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setCsg(int32_t csg) { DARABONBA_PTR_SET_VALUE(csg_, csg) };


    // ecsFile Field Functions 
    bool hasEcsFile() const { return this->ecsFile_ != nullptr;};
    void deleteEcsFile() { this->ecsFile_ = nullptr;};
    inline int32_t ecsFile() const { DARABONBA_PTR_GET_DEFAULT(ecsFile_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setEcsFile(int32_t ecsFile) { DARABONBA_PTR_SET_VALUE(ecsFile_, ecsFile) };


    // ecsHana Field Functions 
    bool hasEcsHana() const { return this->ecsHana_ != nullptr;};
    void deleteEcsHana() { this->ecsHana_ = nullptr;};
    inline int32_t ecsHana() const { DARABONBA_PTR_GET_DEFAULT(ecsHana_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setEcsHana(int32_t ecsHana) { DARABONBA_PTR_SET_VALUE(ecsHana_, ecsHana) };


    // isilon Field Functions 
    bool hasIsilon() const { return this->isilon_ != nullptr;};
    void deleteIsilon() { this->isilon_ = nullptr;};
    inline int32_t isilon() const { DARABONBA_PTR_GET_DEFAULT(isilon_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setIsilon(int32_t isilon) { DARABONBA_PTR_SET_VALUE(isilon_, isilon) };


    // localFile Field Functions 
    bool hasLocalFile() const { return this->localFile_ != nullptr;};
    void deleteLocalFile() { this->localFile_ = nullptr;};
    inline int32_t localFile() const { DARABONBA_PTR_GET_DEFAULT(localFile_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setLocalFile(int32_t localFile) { DARABONBA_PTR_SET_VALUE(localFile_, localFile) };


    // localVm Field Functions 
    bool hasLocalVm() const { return this->localVm_ != nullptr;};
    void deleteLocalVm() { this->localVm_ = nullptr;};
    inline int32_t localVm() const { DARABONBA_PTR_GET_DEFAULT(localVm_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setLocalVm(int32_t localVm) { DARABONBA_PTR_SET_VALUE(localVm_, localVm) };


    // mySql Field Functions 
    bool hasMySql() const { return this->mySql_ != nullptr;};
    void deleteMySql() { this->mySql_ = nullptr;};
    inline int32_t mySql() const { DARABONBA_PTR_GET_DEFAULT(mySql_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setMySql(int32_t mySql) { DARABONBA_PTR_SET_VALUE(mySql_, mySql) };


    // nas Field Functions 
    bool hasNas() const { return this->nas_ != nullptr;};
    void deleteNas() { this->nas_ = nullptr;};
    inline int32_t nas() const { DARABONBA_PTR_GET_DEFAULT(nas_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setNas(int32_t nas) { DARABONBA_PTR_SET_VALUE(nas_, nas) };


    // oracle Field Functions 
    bool hasOracle() const { return this->oracle_ != nullptr;};
    void deleteOracle() { this->oracle_ = nullptr;};
    inline int32_t oracle() const { DARABONBA_PTR_GET_DEFAULT(oracle_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setOracle(int32_t oracle) { DARABONBA_PTR_SET_VALUE(oracle_, oracle) };


    // oss Field Functions 
    bool hasOss() const { return this->oss_ != nullptr;};
    void deleteOss() { this->oss_ = nullptr;};
    inline int32_t oss() const { DARABONBA_PTR_GET_DEFAULT(oss_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setOss(int32_t oss) { DARABONBA_PTR_SET_VALUE(oss_, oss) };


    // ots Field Functions 
    bool hasOts() const { return this->ots_ != nullptr;};
    void deleteOts() { this->ots_ = nullptr;};
    inline int32_t ots() const { DARABONBA_PTR_GET_DEFAULT(ots_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setOts(int32_t ots) { DARABONBA_PTR_SET_VALUE(ots_, ots) };


    // sqlServer Field Functions 
    bool hasSqlServer() const { return this->sqlServer_ != nullptr;};
    void deleteSqlServer() { this->sqlServer_ = nullptr;};
    inline int32_t sqlServer() const { DARABONBA_PTR_GET_DEFAULT(sqlServer_, 0) };
    inline DescribeVaultsResponseBodyVaultsVaultBackupPlanStatistics& setSqlServer(int32_t sqlServer) { DARABONBA_PTR_SET_VALUE(sqlServer_, sqlServer) };


  protected:
    // The number of archive plans.
    std::shared_ptr<int32_t> archive_ = nullptr;
    // The number of Cloud Parallel File Storage (CPFS) backup plans.
    std::shared_ptr<int32_t> commonFileSystem_ = nullptr;
    // The number of backup plans for General-purpose NAS file systems.
    std::shared_ptr<int32_t> commonNas_ = nullptr;
    // The number of backup plans for Cloud Storage Gateway (CSG) gateways.
    std::shared_ptr<int32_t> csg_ = nullptr;
    // The number of backup plans for ECS files.
    std::shared_ptr<int32_t> ecsFile_ = nullptr;
    // The number of backup plans for SAP HANA instances.
    std::shared_ptr<int32_t> ecsHana_ = nullptr;
    // The number of backup plans for Isilon storage systems.
    std::shared_ptr<int32_t> isilon_ = nullptr;
    // The number of backup plans for on-premises servers.
    std::shared_ptr<int32_t> localFile_ = nullptr;
    // The number of backup plans for on-premises virtual machines (VMs).
    std::shared_ptr<int32_t> localVm_ = nullptr;
    // The number of backup plans for MySQL databases.
    std::shared_ptr<int32_t> mySql_ = nullptr;
    // The number of backup plans for NAS file systems.
    std::shared_ptr<int32_t> nas_ = nullptr;
    // The number of backup plans for Oracle databases.
    std::shared_ptr<int32_t> oracle_ = nullptr;
    // The number of backup plans for OSS buckets.
    std::shared_ptr<int32_t> oss_ = nullptr;
    // The number of backup plans for Tablestore instances.
    std::shared_ptr<int32_t> ots_ = nullptr;
    // The number of backup plans for SQL Server databases.
    std::shared_ptr<int32_t> sqlServer_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
