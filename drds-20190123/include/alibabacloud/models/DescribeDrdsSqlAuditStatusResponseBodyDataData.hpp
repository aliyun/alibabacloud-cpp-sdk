// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDRDSSQLAUDITSTATUSRESPONSEBODYDATADATA_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDRDSSQLAUDITSTATUSRESPONSEBODYDATADATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Drds20190123
{
namespace Models
{
  class DescribeDrdsSqlAuditStatusResponseBodyDataData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDrdsSqlAuditStatusResponseBodyDataData& obj) { 
      DARABONBA_PTR_TO_JSON(DbName, dbName_);
      DARABONBA_PTR_TO_JSON(Detailed, detailed_);
      DARABONBA_PTR_TO_JSON(Enabled, enabled_);
      DARABONBA_PTR_TO_JSON(ExtraAliUid, extraAliUid_);
      DARABONBA_PTR_TO_JSON(ExtraSlsLogStore, extraSlsLogStore_);
      DARABONBA_PTR_TO_JSON(ExtraSlsProject, extraSlsProject_);
      DARABONBA_PTR_TO_JSON(ExtraWriteEnabled, extraWriteEnabled_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDrdsSqlAuditStatusResponseBodyDataData& obj) { 
      DARABONBA_PTR_FROM_JSON(DbName, dbName_);
      DARABONBA_PTR_FROM_JSON(Detailed, detailed_);
      DARABONBA_PTR_FROM_JSON(Enabled, enabled_);
      DARABONBA_PTR_FROM_JSON(ExtraAliUid, extraAliUid_);
      DARABONBA_PTR_FROM_JSON(ExtraSlsLogStore, extraSlsLogStore_);
      DARABONBA_PTR_FROM_JSON(ExtraSlsProject, extraSlsProject_);
      DARABONBA_PTR_FROM_JSON(ExtraWriteEnabled, extraWriteEnabled_);
    };
    DescribeDrdsSqlAuditStatusResponseBodyDataData() = default ;
    DescribeDrdsSqlAuditStatusResponseBodyDataData(const DescribeDrdsSqlAuditStatusResponseBodyDataData &) = default ;
    DescribeDrdsSqlAuditStatusResponseBodyDataData(DescribeDrdsSqlAuditStatusResponseBodyDataData &&) = default ;
    DescribeDrdsSqlAuditStatusResponseBodyDataData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDrdsSqlAuditStatusResponseBodyDataData() = default ;
    DescribeDrdsSqlAuditStatusResponseBodyDataData& operator=(const DescribeDrdsSqlAuditStatusResponseBodyDataData &) = default ;
    DescribeDrdsSqlAuditStatusResponseBodyDataData& operator=(DescribeDrdsSqlAuditStatusResponseBodyDataData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dbName_ != nullptr
        && this->detailed_ != nullptr && this->enabled_ != nullptr && this->extraAliUid_ != nullptr && this->extraSlsLogStore_ != nullptr && this->extraSlsProject_ != nullptr
        && this->extraWriteEnabled_ != nullptr; };
    // dbName Field Functions 
    bool hasDbName() const { return this->dbName_ != nullptr;};
    void deleteDbName() { this->dbName_ = nullptr;};
    inline string dbName() const { DARABONBA_PTR_GET_DEFAULT(dbName_, "") };
    inline DescribeDrdsSqlAuditStatusResponseBodyDataData& setDbName(string dbName) { DARABONBA_PTR_SET_VALUE(dbName_, dbName) };


    // detailed Field Functions 
    bool hasDetailed() const { return this->detailed_ != nullptr;};
    void deleteDetailed() { this->detailed_ = nullptr;};
    inline string detailed() const { DARABONBA_PTR_GET_DEFAULT(detailed_, "") };
    inline DescribeDrdsSqlAuditStatusResponseBodyDataData& setDetailed(string detailed) { DARABONBA_PTR_SET_VALUE(detailed_, detailed) };


    // enabled Field Functions 
    bool hasEnabled() const { return this->enabled_ != nullptr;};
    void deleteEnabled() { this->enabled_ = nullptr;};
    inline string enabled() const { DARABONBA_PTR_GET_DEFAULT(enabled_, "") };
    inline DescribeDrdsSqlAuditStatusResponseBodyDataData& setEnabled(string enabled) { DARABONBA_PTR_SET_VALUE(enabled_, enabled) };


    // extraAliUid Field Functions 
    bool hasExtraAliUid() const { return this->extraAliUid_ != nullptr;};
    void deleteExtraAliUid() { this->extraAliUid_ = nullptr;};
    inline int64_t extraAliUid() const { DARABONBA_PTR_GET_DEFAULT(extraAliUid_, 0L) };
    inline DescribeDrdsSqlAuditStatusResponseBodyDataData& setExtraAliUid(int64_t extraAliUid) { DARABONBA_PTR_SET_VALUE(extraAliUid_, extraAliUid) };


    // extraSlsLogStore Field Functions 
    bool hasExtraSlsLogStore() const { return this->extraSlsLogStore_ != nullptr;};
    void deleteExtraSlsLogStore() { this->extraSlsLogStore_ = nullptr;};
    inline string extraSlsLogStore() const { DARABONBA_PTR_GET_DEFAULT(extraSlsLogStore_, "") };
    inline DescribeDrdsSqlAuditStatusResponseBodyDataData& setExtraSlsLogStore(string extraSlsLogStore) { DARABONBA_PTR_SET_VALUE(extraSlsLogStore_, extraSlsLogStore) };


    // extraSlsProject Field Functions 
    bool hasExtraSlsProject() const { return this->extraSlsProject_ != nullptr;};
    void deleteExtraSlsProject() { this->extraSlsProject_ = nullptr;};
    inline string extraSlsProject() const { DARABONBA_PTR_GET_DEFAULT(extraSlsProject_, "") };
    inline DescribeDrdsSqlAuditStatusResponseBodyDataData& setExtraSlsProject(string extraSlsProject) { DARABONBA_PTR_SET_VALUE(extraSlsProject_, extraSlsProject) };


    // extraWriteEnabled Field Functions 
    bool hasExtraWriteEnabled() const { return this->extraWriteEnabled_ != nullptr;};
    void deleteExtraWriteEnabled() { this->extraWriteEnabled_ = nullptr;};
    inline bool extraWriteEnabled() const { DARABONBA_PTR_GET_DEFAULT(extraWriteEnabled_, false) };
    inline DescribeDrdsSqlAuditStatusResponseBodyDataData& setExtraWriteEnabled(bool extraWriteEnabled) { DARABONBA_PTR_SET_VALUE(extraWriteEnabled_, extraWriteEnabled) };


  protected:
    // The name of the database.
    std::shared_ptr<string> dbName_ = nullptr;
    // Indicates whether the complete report of the SQL audit is supported. Valid values: true and false.
    std::shared_ptr<string> detailed_ = nullptr;
    // Indicates whether the SQL audit feature is enabled for the database. Valid values: true and false.
    std::shared_ptr<string> enabled_ = nullptr;
    // The UID of the external delivery.
    // 
    // > This parameter is returned only if external log delivery is enabled.
    std::shared_ptr<int64_t> extraAliUid_ = nullptr;
    // The Log Service Logstore from which logs are delivered.
    // 
    // > This parameter is returned only if external log delivery is enabled.
    std::shared_ptr<string> extraSlsLogStore_ = nullptr;
    // The Log Service project from which logs are delivered.
    // 
    // > This parameter is returned only if external log delivery is enabled.
    std::shared_ptr<string> extraSlsProject_ = nullptr;
    // Indicates whether external log delivery is enabled. Valid values: true and false.
    std::shared_ptr<bool> extraWriteEnabled_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Drds20190123
#endif
