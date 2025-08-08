// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_GETSTRUCTSYNCORDERDETAILRESPONSEBODYSTRUCTSYNCORDERDETAIL_HPP_
#define ALIBABACLOUD_MODELS_GETSTRUCTSYNCORDERDETAILRESPONSEBODYSTRUCTSYNCORDERDETAIL_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo.hpp>
#include <alibabacloud/models/GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo.hpp>
#include <vector>
#include <alibabacloud/models/GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList.hpp>
#include <alibabacloud/models/GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo.hpp>
#include <alibabacloud/models/GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DmsEnterprise20181101
{
namespace Models
{
  class GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& obj) { 
      DARABONBA_PTR_TO_JSON(IgnoreError, ignoreError_);
      DARABONBA_PTR_TO_JSON(SourceDatabaseInfo, sourceDatabaseInfo_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
      DARABONBA_PTR_TO_JSON(SourceVersionInfo, sourceVersionInfo_);
      DARABONBA_PTR_TO_JSON(TableInfoList, tableInfoList_);
      DARABONBA_PTR_TO_JSON(TargetDatabaseInfo, targetDatabaseInfo_);
      DARABONBA_PTR_TO_JSON(TargetType, targetType_);
      DARABONBA_PTR_TO_JSON(TargetVersionInfo, targetVersionInfo_);
    };
    friend void from_json(const Darabonba::Json& j, GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& obj) { 
      DARABONBA_PTR_FROM_JSON(IgnoreError, ignoreError_);
      DARABONBA_PTR_FROM_JSON(SourceDatabaseInfo, sourceDatabaseInfo_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
      DARABONBA_PTR_FROM_JSON(SourceVersionInfo, sourceVersionInfo_);
      DARABONBA_PTR_FROM_JSON(TableInfoList, tableInfoList_);
      DARABONBA_PTR_FROM_JSON(TargetDatabaseInfo, targetDatabaseInfo_);
      DARABONBA_PTR_FROM_JSON(TargetType, targetType_);
      DARABONBA_PTR_FROM_JSON(TargetVersionInfo, targetVersionInfo_);
    };
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail() = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail(const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail &) = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail(GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail &&) = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail() = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& operator=(const GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail &) = default ;
    GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& operator=(GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ignoreError_ != nullptr
        && this->sourceDatabaseInfo_ != nullptr && this->sourceType_ != nullptr && this->sourceVersionInfo_ != nullptr && this->tableInfoList_ != nullptr && this->targetDatabaseInfo_ != nullptr
        && this->targetType_ != nullptr && this->targetVersionInfo_ != nullptr; };
    // ignoreError Field Functions 
    bool hasIgnoreError() const { return this->ignoreError_ != nullptr;};
    void deleteIgnoreError() { this->ignoreError_ = nullptr;};
    inline bool ignoreError() const { DARABONBA_PTR_GET_DEFAULT(ignoreError_, false) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setIgnoreError(bool ignoreError) { DARABONBA_PTR_SET_VALUE(ignoreError_, ignoreError) };


    // sourceDatabaseInfo Field Functions 
    bool hasSourceDatabaseInfo() const { return this->sourceDatabaseInfo_ != nullptr;};
    void deleteSourceDatabaseInfo() { this->sourceDatabaseInfo_ = nullptr;};
    inline const Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo & sourceDatabaseInfo() const { DARABONBA_PTR_GET_CONST(sourceDatabaseInfo_, Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo) };
    inline Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo sourceDatabaseInfo() { DARABONBA_PTR_GET(sourceDatabaseInfo_, Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setSourceDatabaseInfo(const Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo & sourceDatabaseInfo) { DARABONBA_PTR_SET_VALUE(sourceDatabaseInfo_, sourceDatabaseInfo) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setSourceDatabaseInfo(Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo && sourceDatabaseInfo) { DARABONBA_PTR_SET_RVALUE(sourceDatabaseInfo_, sourceDatabaseInfo) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


    // sourceVersionInfo Field Functions 
    bool hasSourceVersionInfo() const { return this->sourceVersionInfo_ != nullptr;};
    void deleteSourceVersionInfo() { this->sourceVersionInfo_ = nullptr;};
    inline const Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo & sourceVersionInfo() const { DARABONBA_PTR_GET_CONST(sourceVersionInfo_, Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo) };
    inline Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo sourceVersionInfo() { DARABONBA_PTR_GET(sourceVersionInfo_, Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setSourceVersionInfo(const Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo & sourceVersionInfo) { DARABONBA_PTR_SET_VALUE(sourceVersionInfo_, sourceVersionInfo) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setSourceVersionInfo(Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo && sourceVersionInfo) { DARABONBA_PTR_SET_RVALUE(sourceVersionInfo_, sourceVersionInfo) };


    // tableInfoList Field Functions 
    bool hasTableInfoList() const { return this->tableInfoList_ != nullptr;};
    void deleteTableInfoList() { this->tableInfoList_ = nullptr;};
    inline const vector<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList> & tableInfoList() const { DARABONBA_PTR_GET_CONST(tableInfoList_, vector<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList>) };
    inline vector<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList> tableInfoList() { DARABONBA_PTR_GET(tableInfoList_, vector<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList>) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setTableInfoList(const vector<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList> & tableInfoList) { DARABONBA_PTR_SET_VALUE(tableInfoList_, tableInfoList) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setTableInfoList(vector<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList> && tableInfoList) { DARABONBA_PTR_SET_RVALUE(tableInfoList_, tableInfoList) };


    // targetDatabaseInfo Field Functions 
    bool hasTargetDatabaseInfo() const { return this->targetDatabaseInfo_ != nullptr;};
    void deleteTargetDatabaseInfo() { this->targetDatabaseInfo_ = nullptr;};
    inline const Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo & targetDatabaseInfo() const { DARABONBA_PTR_GET_CONST(targetDatabaseInfo_, Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo) };
    inline Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo targetDatabaseInfo() { DARABONBA_PTR_GET(targetDatabaseInfo_, Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setTargetDatabaseInfo(const Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo & targetDatabaseInfo) { DARABONBA_PTR_SET_VALUE(targetDatabaseInfo_, targetDatabaseInfo) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setTargetDatabaseInfo(Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo && targetDatabaseInfo) { DARABONBA_PTR_SET_RVALUE(targetDatabaseInfo_, targetDatabaseInfo) };


    // targetType Field Functions 
    bool hasTargetType() const { return this->targetType_ != nullptr;};
    void deleteTargetType() { this->targetType_ = nullptr;};
    inline string targetType() const { DARABONBA_PTR_GET_DEFAULT(targetType_, "") };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setTargetType(string targetType) { DARABONBA_PTR_SET_VALUE(targetType_, targetType) };


    // targetVersionInfo Field Functions 
    bool hasTargetVersionInfo() const { return this->targetVersionInfo_ != nullptr;};
    void deleteTargetVersionInfo() { this->targetVersionInfo_ = nullptr;};
    inline const Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo & targetVersionInfo() const { DARABONBA_PTR_GET_CONST(targetVersionInfo_, Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo) };
    inline Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo targetVersionInfo() { DARABONBA_PTR_GET(targetVersionInfo_, Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setTargetVersionInfo(const Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo & targetVersionInfo) { DARABONBA_PTR_SET_VALUE(targetVersionInfo_, targetVersionInfo) };
    inline GetStructSyncOrderDetailResponseBodyStructSyncOrderDetail& setTargetVersionInfo(Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo && targetVersionInfo) { DARABONBA_PTR_SET_RVALUE(targetVersionInfo_, targetVersionInfo) };


  protected:
    // Indicates whether to skip errors. Valid values:
    // 
    // *   **true**: skips the error and continues to execute SQL statements.
    // *   **false**: stops executing SQL statements.
    std::shared_ptr<bool> ignoreError_ = nullptr;
    // The information about the source database.
    std::shared_ptr<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceDatabaseInfo> sourceDatabaseInfo_ = nullptr;
    // The schema version of the source database. Valid values:
    // 
    // *   **DATASOURCE**: the default latest version of the system
    // *   **VERSION**: a previous schema version that you manually specify
    std::shared_ptr<string> sourceType_ = nullptr;
    // The version information about the source instance.
    // 
    // > This parameter is displayed only when the value of the **SourceType** parameter is **VERSION**.
    std::shared_ptr<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailSourceVersionInfo> sourceVersionInfo_ = nullptr;
    // The information about the table whose schema you want to synchronize.
    std::shared_ptr<vector<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTableInfoList>> tableInfoList_ = nullptr;
    // The information about the destination database.
    std::shared_ptr<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetDatabaseInfo> targetDatabaseInfo_ = nullptr;
    // The schema version of the destination database. Valid values:
    // 
    // *   **DATASOURCE**: the default latest version of the system
    // *   **VERSION**: a previous schema version that you manually specify
    std::shared_ptr<string> targetType_ = nullptr;
    // The version information about the destination instance.
    // 
    // > This parameter is displayed only when the value of the **SourceType** parameter is **VERSION**.
    std::shared_ptr<Models::GetStructSyncOrderDetailResponseBodyStructSyncOrderDetailTargetVersionInfo> targetVersionInfo_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DmsEnterprise20181101
#endif
