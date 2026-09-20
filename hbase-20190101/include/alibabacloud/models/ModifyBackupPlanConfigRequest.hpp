// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_MODIFYBACKUPPLANCONFIGREQUEST_HPP_
#define ALIBABACLOUD_MODELS_MODIFYBACKUPPLANCONFIGREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace HBase20190101
{
namespace Models
{
  class ModifyBackupPlanConfigRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ModifyBackupPlanConfigRequest& obj) { 
      DARABONBA_PTR_TO_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_TO_JSON(FullBackupCycle, fullBackupCycle_);
      DARABONBA_PTR_TO_JSON(MinHFileBackupCount, minHFileBackupCount_);
      DARABONBA_PTR_TO_JSON(NextFullBackupDate, nextFullBackupDate_);
      DARABONBA_PTR_TO_JSON(Tables, tables_);
    };
    friend void from_json(const Darabonba::Json& j, ModifyBackupPlanConfigRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(ClusterId, clusterId_);
      DARABONBA_PTR_FROM_JSON(FullBackupCycle, fullBackupCycle_);
      DARABONBA_PTR_FROM_JSON(MinHFileBackupCount, minHFileBackupCount_);
      DARABONBA_PTR_FROM_JSON(NextFullBackupDate, nextFullBackupDate_);
      DARABONBA_PTR_FROM_JSON(Tables, tables_);
    };
    ModifyBackupPlanConfigRequest() = default ;
    ModifyBackupPlanConfigRequest(const ModifyBackupPlanConfigRequest &) = default ;
    ModifyBackupPlanConfigRequest(ModifyBackupPlanConfigRequest &&) = default ;
    ModifyBackupPlanConfigRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ModifyBackupPlanConfigRequest() = default ;
    ModifyBackupPlanConfigRequest& operator=(const ModifyBackupPlanConfigRequest &) = default ;
    ModifyBackupPlanConfigRequest& operator=(ModifyBackupPlanConfigRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->clusterId_ == nullptr
        && this->fullBackupCycle_ == nullptr && this->minHFileBackupCount_ == nullptr && this->nextFullBackupDate_ == nullptr && this->tables_ == nullptr; };
    // clusterId Field Functions 
    bool hasClusterId() const { return this->clusterId_ != nullptr;};
    void deleteClusterId() { this->clusterId_ = nullptr;};
    inline string getClusterId() const { DARABONBA_PTR_GET_DEFAULT(clusterId_, "") };
    inline ModifyBackupPlanConfigRequest& setClusterId(string clusterId) { DARABONBA_PTR_SET_VALUE(clusterId_, clusterId) };


    // fullBackupCycle Field Functions 
    bool hasFullBackupCycle() const { return this->fullBackupCycle_ != nullptr;};
    void deleteFullBackupCycle() { this->fullBackupCycle_ = nullptr;};
    inline string getFullBackupCycle() const { DARABONBA_PTR_GET_DEFAULT(fullBackupCycle_, "") };
    inline ModifyBackupPlanConfigRequest& setFullBackupCycle(string fullBackupCycle) { DARABONBA_PTR_SET_VALUE(fullBackupCycle_, fullBackupCycle) };


    // minHFileBackupCount Field Functions 
    bool hasMinHFileBackupCount() const { return this->minHFileBackupCount_ != nullptr;};
    void deleteMinHFileBackupCount() { this->minHFileBackupCount_ = nullptr;};
    inline string getMinHFileBackupCount() const { DARABONBA_PTR_GET_DEFAULT(minHFileBackupCount_, "") };
    inline ModifyBackupPlanConfigRequest& setMinHFileBackupCount(string minHFileBackupCount) { DARABONBA_PTR_SET_VALUE(minHFileBackupCount_, minHFileBackupCount) };


    // nextFullBackupDate Field Functions 
    bool hasNextFullBackupDate() const { return this->nextFullBackupDate_ != nullptr;};
    void deleteNextFullBackupDate() { this->nextFullBackupDate_ = nullptr;};
    inline string getNextFullBackupDate() const { DARABONBA_PTR_GET_DEFAULT(nextFullBackupDate_, "") };
    inline ModifyBackupPlanConfigRequest& setNextFullBackupDate(string nextFullBackupDate) { DARABONBA_PTR_SET_VALUE(nextFullBackupDate_, nextFullBackupDate) };


    // tables Field Functions 
    bool hasTables() const { return this->tables_ != nullptr;};
    void deleteTables() { this->tables_ = nullptr;};
    inline string getTables() const { DARABONBA_PTR_GET_DEFAULT(tables_, "") };
    inline ModifyBackupPlanConfigRequest& setTables(string tables) { DARABONBA_PTR_SET_VALUE(tables_, tables) };


  protected:
    // The cluster ID.
    // 
    // This parameter is required.
    shared_ptr<string> clusterId_ {};
    // The full backup cycle, in days. Valid values: 3 to 9.
    // 
    // This parameter is required.
    shared_ptr<string> fullBackupCycle_ {};
    // The number of full backups to retain. Valid values: 3 to 8.
    // 
    // This parameter is required.
    shared_ptr<string> minHFileBackupCount_ {};
    // The time of the next full backup. The specified time must be at least 6 minutes later than the current time.
    // 
    // This parameter is required.
    shared_ptr<string> nextFullBackupDate_ {};
    // The tables to back up. Specify one table name per line. Wildcards are supported. An asterisk (*) indicates all tables.
    // 
    // This parameter is required.
    shared_ptr<string> tables_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace HBase20190101
#endif
