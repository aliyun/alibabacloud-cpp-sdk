// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CREATERESTOREPLANREQUEST_HPP_
#define ALIBABACLOUD_MODELS_CREATERESTOREPLANREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class CreateRestorePlanRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CreateRestorePlanRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(RestoreAllTable, restoreAllTable_);
      DARABONBA_PTR_TO_JSON(RestoreByCopy, restoreByCopy_);
      DARABONBA_PTR_TO_JSON(RestoreToDate, restoreToDate_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
      DARABONBA_PTR_TO_JSON(TargetClusterId, targetClusterId_);
    };
    friend void from_json(const Darabonba::Json& j, CreateRestorePlanRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(RestoreAllTable, restoreAllTable_);
      DARABONBA_PTR_FROM_JSON(RestoreByCopy, restoreByCopy_);
      DARABONBA_PTR_FROM_JSON(RestoreToDate, restoreToDate_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
      DARABONBA_PTR_FROM_JSON(TargetClusterId, targetClusterId_);
    };
    CreateRestorePlanRequest() = default ;
    CreateRestorePlanRequest(const CreateRestorePlanRequest &) = default ;
    CreateRestorePlanRequest(CreateRestorePlanRequest &&) = default ;
    CreateRestorePlanRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CreateRestorePlanRequest() = default ;
    CreateRestorePlanRequest& operator=(const CreateRestorePlanRequest &) = default ;
    CreateRestorePlanRequest& operator=(CreateRestorePlanRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->restoreAllTable_ == nullptr && this->restoreByCopy_ == nullptr && this->restoreToDate_ == nullptr && this->tables_ == nullptr && this->targetClusterId_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline CreateRestorePlanRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // restoreAllTable Field Functions 
    bool hasRestoreAllTable() const { return this->restoreAllTable_ != nullptr;};
    void deleteRestoreAllTable() { this->restoreAllTable_ = nullptr;};
    inline bool getRestoreAllTable() const { DARABONBA_PTR_GET_DEFAULT(restoreAllTable_, false) };
    inline CreateRestorePlanRequest& setRestoreAllTable(bool restoreAllTable) { DARABONBA_PTR_SET_VALUE(restoreAllTable_, restoreAllTable) };


    // restoreByCopy Field Functions 
    bool hasRestoreByCopy() const { return this->restoreByCopy_ != nullptr;};
    void deleteRestoreByCopy() { this->restoreByCopy_ = nullptr;};
    inline bool getRestoreByCopy() const { DARABONBA_PTR_GET_DEFAULT(restoreByCopy_, false) };
    inline CreateRestorePlanRequest& setRestoreByCopy(bool restoreByCopy) { DARABONBA_PTR_SET_VALUE(restoreByCopy_, restoreByCopy) };


    // restoreToDate Field Functions 
    bool hasRestoreToDate() const { return this->restoreToDate_ != nullptr;};
    void deleteRestoreToDate() { this->restoreToDate_ = nullptr;};
    inline string getRestoreToDate() const { DARABONBA_PTR_GET_DEFAULT(restoreToDate_, "") };
    inline CreateRestorePlanRequest& setRestoreToDate(string restoreToDate) { DARABONBA_PTR_SET_VALUE(restoreToDate_, restoreToDate) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline string getTables() const { DARABONBA_PTR_GET_DEFAULT(tables_, "") };
    inline CreateRestorePlanRequest& setTables(string tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


    // targetClusterId Field Functions 
    bool hasTargetClusterId() const { return this->targetClusterId_ != nullptr;};
    void deleteTargetClusterId() { this->targetClusterId_ = nullptr;};
    inline string getTargetClusterId() const { DARABONBA_PTR_GET_DEFAULT(targetClusterId_, "") };
    inline CreateRestorePlanRequest& setTargetClusterId(string targetClusterId) { DARABONBA_PTR_SET_VALUE(targetClusterId_, targetClusterId) };


  protected:
    // The ID of the ApsaraDB for HBase Performance-enhanced Edition cluster.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // Specifies whether to restore all tables. Valid values:
    // 
    // - **true**: Restores all tables in the ApsaraDB for HBase Performance-enhanced Edition cluster.
    // - **false**: Does not restore all tables in the ApsaraDB for HBase Performance-enhanced Edition cluster.
    // 
    // > If this parameter is set to **true**, the **Tables** parameter is invalid. If this parameter is set to **false**, the **Tables** parameter is required.
    // 
    // This parameter is required.
    shared_ptr<bool> restoreAllTable_ {};
    // Specifies whether to restore data by using the copy method. Set the value to **true**.
    // 
    // This parameter is required.
    shared_ptr<bool> restoreByCopy_ {};
    // The point in time to which you want to restore data. The point in time must be within the recoverable time range. You can call the [DescribeRecoverableTimeRange](https://help.aliyun.com/document_detail/188365.html) operation to query the recoverable time range.
    // 
    // This parameter is required.
    shared_ptr<string> restoreToDate_ {};
    // The table names. Specify one table name per line. Wildcards (*) are not supported.
    // 
    // - To restore to the current table, use the format: `namespace:table`. Example: `default:testTable`.
    // - To restore to a different table, use the format: `namespace:table/namespace:table2`. Example: `default:testTable/default:testTable2`.
    shared_ptr<string> tables_ {};
    // The ID of the ApsaraDB for HBase Performance-enhanced Edition cluster to which data is restored. You can also restore data to the cluster that is currently backed up.
    // 
    // > The specified ApsaraDB for HBase Performance-enhanced Edition cluster and the backed-up ApsaraDB for HBase Performance-enhanced Edition cluster must meet the following requirements:<ul>
    // <li>They are of the same version.</li>
    // <li>They are in the same region.</li>
    // <li>They are associated with the BDS cluster.</li></ul>.
    // 
    // This parameter is required.
    shared_ptr<string> targetClusterId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
