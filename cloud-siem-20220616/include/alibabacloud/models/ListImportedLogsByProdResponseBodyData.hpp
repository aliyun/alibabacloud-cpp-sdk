// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMPORTEDLOGSBYPRODRESPONSEBODYDATA_HPP_
#define ALIBABACLOUD_MODELS_LISTIMPORTEDLOGSBYPRODRESPONSEBODYDATA_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListImportedLogsByProdResponseBodyData : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImportedLogsByProdResponseBodyData& obj) { 
      DARABONBA_PTR_TO_JSON(AutoImported, autoImported_);
      DARABONBA_PTR_TO_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_TO_JSON(Imported, imported_);
      DARABONBA_PTR_TO_JSON(ImportedUserCount, importedUserCount_);
      DARABONBA_PTR_TO_JSON(LogCode, logCode_);
      DARABONBA_PTR_TO_JSON(LogMdsCode, logMdsCode_);
      DARABONBA_PTR_TO_JSON(LogType, logType_);
      DARABONBA_PTR_TO_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_TO_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_TO_JSON(TotalUserCount, totalUserCount_);
      DARABONBA_PTR_TO_JSON(UnImportedUserCount, unImportedUserCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListImportedLogsByProdResponseBodyData& obj) { 
      DARABONBA_PTR_FROM_JSON(AutoImported, autoImported_);
      DARABONBA_PTR_FROM_JSON(CloudCode, cloudCode_);
      DARABONBA_PTR_FROM_JSON(Imported, imported_);
      DARABONBA_PTR_FROM_JSON(ImportedUserCount, importedUserCount_);
      DARABONBA_PTR_FROM_JSON(LogCode, logCode_);
      DARABONBA_PTR_FROM_JSON(LogMdsCode, logMdsCode_);
      DARABONBA_PTR_FROM_JSON(LogType, logType_);
      DARABONBA_PTR_FROM_JSON(ModifyTime, modifyTime_);
      DARABONBA_PTR_FROM_JSON(ProdCode, prodCode_);
      DARABONBA_PTR_FROM_JSON(TotalUserCount, totalUserCount_);
      DARABONBA_PTR_FROM_JSON(UnImportedUserCount, unImportedUserCount_);
    };
    ListImportedLogsByProdResponseBodyData() = default ;
    ListImportedLogsByProdResponseBodyData(const ListImportedLogsByProdResponseBodyData &) = default ;
    ListImportedLogsByProdResponseBodyData(ListImportedLogsByProdResponseBodyData &&) = default ;
    ListImportedLogsByProdResponseBodyData(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImportedLogsByProdResponseBodyData() = default ;
    ListImportedLogsByProdResponseBodyData& operator=(const ListImportedLogsByProdResponseBodyData &) = default ;
    ListImportedLogsByProdResponseBodyData& operator=(ListImportedLogsByProdResponseBodyData &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->autoImported_ != nullptr
        && this->cloudCode_ != nullptr && this->imported_ != nullptr && this->importedUserCount_ != nullptr && this->logCode_ != nullptr && this->logMdsCode_ != nullptr
        && this->logType_ != nullptr && this->modifyTime_ != nullptr && this->prodCode_ != nullptr && this->totalUserCount_ != nullptr && this->unImportedUserCount_ != nullptr; };
    // autoImported Field Functions 
    bool hasAutoImported() const { return this->autoImported_ != nullptr;};
    void deleteAutoImported() { this->autoImported_ = nullptr;};
    inline int32_t autoImported() const { DARABONBA_PTR_GET_DEFAULT(autoImported_, 0) };
    inline ListImportedLogsByProdResponseBodyData& setAutoImported(int32_t autoImported) { DARABONBA_PTR_SET_VALUE(autoImported_, autoImported) };


    // cloudCode Field Functions 
    bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
    void deleteCloudCode() { this->cloudCode_ = nullptr;};
    inline string cloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
    inline ListImportedLogsByProdResponseBodyData& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


    // imported Field Functions 
    bool hasImported() const { return this->imported_ != nullptr;};
    void deleteImported() { this->imported_ = nullptr;};
    inline int32_t imported() const { DARABONBA_PTR_GET_DEFAULT(imported_, 0) };
    inline ListImportedLogsByProdResponseBodyData& setImported(int32_t imported) { DARABONBA_PTR_SET_VALUE(imported_, imported) };


    // importedUserCount Field Functions 
    bool hasImportedUserCount() const { return this->importedUserCount_ != nullptr;};
    void deleteImportedUserCount() { this->importedUserCount_ = nullptr;};
    inline int32_t importedUserCount() const { DARABONBA_PTR_GET_DEFAULT(importedUserCount_, 0) };
    inline ListImportedLogsByProdResponseBodyData& setImportedUserCount(int32_t importedUserCount) { DARABONBA_PTR_SET_VALUE(importedUserCount_, importedUserCount) };


    // logCode Field Functions 
    bool hasLogCode() const { return this->logCode_ != nullptr;};
    void deleteLogCode() { this->logCode_ = nullptr;};
    inline string logCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
    inline ListImportedLogsByProdResponseBodyData& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


    // logMdsCode Field Functions 
    bool hasLogMdsCode() const { return this->logMdsCode_ != nullptr;};
    void deleteLogMdsCode() { this->logMdsCode_ = nullptr;};
    inline string logMdsCode() const { DARABONBA_PTR_GET_DEFAULT(logMdsCode_, "") };
    inline ListImportedLogsByProdResponseBodyData& setLogMdsCode(string logMdsCode) { DARABONBA_PTR_SET_VALUE(logMdsCode_, logMdsCode) };


    // logType Field Functions 
    bool hasLogType() const { return this->logType_ != nullptr;};
    void deleteLogType() { this->logType_ = nullptr;};
    inline int32_t logType() const { DARABONBA_PTR_GET_DEFAULT(logType_, 0) };
    inline ListImportedLogsByProdResponseBodyData& setLogType(int32_t logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


    // modifyTime Field Functions 
    bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
    void deleteModifyTime() { this->modifyTime_ = nullptr;};
    inline string modifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
    inline ListImportedLogsByProdResponseBodyData& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


    // prodCode Field Functions 
    bool hasProdCode() const { return this->prodCode_ != nullptr;};
    void deleteProdCode() { this->prodCode_ = nullptr;};
    inline string prodCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
    inline ListImportedLogsByProdResponseBodyData& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


    // totalUserCount Field Functions 
    bool hasTotalUserCount() const { return this->totalUserCount_ != nullptr;};
    void deleteTotalUserCount() { this->totalUserCount_ = nullptr;};
    inline int32_t totalUserCount() const { DARABONBA_PTR_GET_DEFAULT(totalUserCount_, 0) };
    inline ListImportedLogsByProdResponseBodyData& setTotalUserCount(int32_t totalUserCount) { DARABONBA_PTR_SET_VALUE(totalUserCount_, totalUserCount) };


    // unImportedUserCount Field Functions 
    bool hasUnImportedUserCount() const { return this->unImportedUserCount_ != nullptr;};
    void deleteUnImportedUserCount() { this->unImportedUserCount_ = nullptr;};
    inline int32_t unImportedUserCount() const { DARABONBA_PTR_GET_DEFAULT(unImportedUserCount_, 0) };
    inline ListImportedLogsByProdResponseBodyData& setUnImportedUserCount(int32_t unImportedUserCount) { DARABONBA_PTR_SET_VALUE(unImportedUserCount_, unImportedUserCount) };


  protected:
    // Indicates whether the log is automatically added to the threat analysis feature within newly added accounts. Valid values:
    // 
    // *   1: yes.
    // *   0: no.
    std::shared_ptr<int32_t> autoImported_ = nullptr;
    // The code of the cloud service provider. Valid values:
    // 
    // *   qcloud: Tencent Cloud.
    // *   aliyun: Alibaba Cloud.
    // *   hcloud: Huawei Cloud.
    std::shared_ptr<string> cloudCode_ = nullptr;
    // Indicates whether the log is added to the threat analysis feature. Valid values:
    // 
    // *   1: yes.
    // *   0: no.
    std::shared_ptr<int32_t> imported_ = nullptr;
    // The number of users who have added the log.
    std::shared_ptr<int32_t> importedUserCount_ = nullptr;
    // The code of the log.
    std::shared_ptr<string> logCode_ = nullptr;
    // The display code of the log.
    std::shared_ptr<string> logMdsCode_ = nullptr;
    // The type of log. Valid values:
    //  - 1: the log produced by other product
    //  - 2: the predefined log
    //  - 3: the custom log
    std::shared_ptr<int32_t> logType_ = nullptr;
    // The time when the log was last added.
    std::shared_ptr<string> modifyTime_ = nullptr;
    // The code of the cloud service to which the log belongs.
    std::shared_ptr<string> prodCode_ = nullptr;
    // The total number of users who have the log.
    std::shared_ptr<int32_t> totalUserCount_ = nullptr;
    // The number of users who have not added the log.
    std::shared_ptr<int32_t> unImportedUserCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
