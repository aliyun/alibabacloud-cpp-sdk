// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTIMPORTEDLOGSBYPRODRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTIMPORTEDLOGSBYPRODRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace CloudSiem20220616
{
namespace Models
{
  class ListImportedLogsByProdResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListImportedLogsByProdResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Data, data_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListImportedLogsByProdResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Data, data_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListImportedLogsByProdResponseBody() = default ;
    ListImportedLogsByProdResponseBody(const ListImportedLogsByProdResponseBody &) = default ;
    ListImportedLogsByProdResponseBody(ListImportedLogsByProdResponseBody &&) = default ;
    ListImportedLogsByProdResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListImportedLogsByProdResponseBody() = default ;
    ListImportedLogsByProdResponseBody& operator=(const ListImportedLogsByProdResponseBody &) = default ;
    ListImportedLogsByProdResponseBody& operator=(ListImportedLogsByProdResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Data : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Data& obj) { 
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
      friend void from_json(const Darabonba::Json& j, Data& obj) { 
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
      Data() = default ;
      Data(const Data &) = default ;
      Data(Data &&) = default ;
      Data(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Data() = default ;
      Data& operator=(const Data &) = default ;
      Data& operator=(Data &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->autoImported_ == nullptr
        && this->cloudCode_ == nullptr && this->imported_ == nullptr && this->importedUserCount_ == nullptr && this->logCode_ == nullptr && this->logMdsCode_ == nullptr
        && this->logType_ == nullptr && this->modifyTime_ == nullptr && this->prodCode_ == nullptr && this->totalUserCount_ == nullptr && this->unImportedUserCount_ == nullptr; };
      // autoImported Field Functions 
      bool hasAutoImported() const { return this->autoImported_ != nullptr;};
      void deleteAutoImported() { this->autoImported_ = nullptr;};
      inline int32_t getAutoImported() const { DARABONBA_PTR_GET_DEFAULT(autoImported_, 0) };
      inline Data& setAutoImported(int32_t autoImported) { DARABONBA_PTR_SET_VALUE(autoImported_, autoImported) };


      // cloudCode Field Functions 
      bool hasCloudCode() const { return this->cloudCode_ != nullptr;};
      void deleteCloudCode() { this->cloudCode_ = nullptr;};
      inline string getCloudCode() const { DARABONBA_PTR_GET_DEFAULT(cloudCode_, "") };
      inline Data& setCloudCode(string cloudCode) { DARABONBA_PTR_SET_VALUE(cloudCode_, cloudCode) };


      // imported Field Functions 
      bool hasImported() const { return this->imported_ != nullptr;};
      void deleteImported() { this->imported_ = nullptr;};
      inline int32_t getImported() const { DARABONBA_PTR_GET_DEFAULT(imported_, 0) };
      inline Data& setImported(int32_t imported) { DARABONBA_PTR_SET_VALUE(imported_, imported) };


      // importedUserCount Field Functions 
      bool hasImportedUserCount() const { return this->importedUserCount_ != nullptr;};
      void deleteImportedUserCount() { this->importedUserCount_ = nullptr;};
      inline int32_t getImportedUserCount() const { DARABONBA_PTR_GET_DEFAULT(importedUserCount_, 0) };
      inline Data& setImportedUserCount(int32_t importedUserCount) { DARABONBA_PTR_SET_VALUE(importedUserCount_, importedUserCount) };


      // logCode Field Functions 
      bool hasLogCode() const { return this->logCode_ != nullptr;};
      void deleteLogCode() { this->logCode_ = nullptr;};
      inline string getLogCode() const { DARABONBA_PTR_GET_DEFAULT(logCode_, "") };
      inline Data& setLogCode(string logCode) { DARABONBA_PTR_SET_VALUE(logCode_, logCode) };


      // logMdsCode Field Functions 
      bool hasLogMdsCode() const { return this->logMdsCode_ != nullptr;};
      void deleteLogMdsCode() { this->logMdsCode_ = nullptr;};
      inline string getLogMdsCode() const { DARABONBA_PTR_GET_DEFAULT(logMdsCode_, "") };
      inline Data& setLogMdsCode(string logMdsCode) { DARABONBA_PTR_SET_VALUE(logMdsCode_, logMdsCode) };


      // logType Field Functions 
      bool hasLogType() const { return this->logType_ != nullptr;};
      void deleteLogType() { this->logType_ = nullptr;};
      inline int32_t getLogType() const { DARABONBA_PTR_GET_DEFAULT(logType_, 0) };
      inline Data& setLogType(int32_t logType) { DARABONBA_PTR_SET_VALUE(logType_, logType) };


      // modifyTime Field Functions 
      bool hasModifyTime() const { return this->modifyTime_ != nullptr;};
      void deleteModifyTime() { this->modifyTime_ = nullptr;};
      inline string getModifyTime() const { DARABONBA_PTR_GET_DEFAULT(modifyTime_, "") };
      inline Data& setModifyTime(string modifyTime) { DARABONBA_PTR_SET_VALUE(modifyTime_, modifyTime) };


      // prodCode Field Functions 
      bool hasProdCode() const { return this->prodCode_ != nullptr;};
      void deleteProdCode() { this->prodCode_ = nullptr;};
      inline string getProdCode() const { DARABONBA_PTR_GET_DEFAULT(prodCode_, "") };
      inline Data& setProdCode(string prodCode) { DARABONBA_PTR_SET_VALUE(prodCode_, prodCode) };


      // totalUserCount Field Functions 
      bool hasTotalUserCount() const { return this->totalUserCount_ != nullptr;};
      void deleteTotalUserCount() { this->totalUserCount_ = nullptr;};
      inline int32_t getTotalUserCount() const { DARABONBA_PTR_GET_DEFAULT(totalUserCount_, 0) };
      inline Data& setTotalUserCount(int32_t totalUserCount) { DARABONBA_PTR_SET_VALUE(totalUserCount_, totalUserCount) };


      // unImportedUserCount Field Functions 
      bool hasUnImportedUserCount() const { return this->unImportedUserCount_ != nullptr;};
      void deleteUnImportedUserCount() { this->unImportedUserCount_ = nullptr;};
      inline int32_t getUnImportedUserCount() const { DARABONBA_PTR_GET_DEFAULT(unImportedUserCount_, 0) };
      inline Data& setUnImportedUserCount(int32_t unImportedUserCount) { DARABONBA_PTR_SET_VALUE(unImportedUserCount_, unImportedUserCount) };


    protected:
      // Indicates whether the log is automatically added to the threat analysis feature within newly added accounts. Valid values:
      // 
      // *   1: yes.
      // *   0: no.
      shared_ptr<int32_t> autoImported_ {};
      // The code of the cloud service provider. Valid values:
      // 
      // *   qcloud: Tencent Cloud.
      // *   aliyun: Alibaba Cloud.
      // *   hcloud: Huawei Cloud.
      shared_ptr<string> cloudCode_ {};
      // Indicates whether the log is added to the threat analysis feature. Valid values:
      // 
      // *   1: yes.
      // *   0: no.
      shared_ptr<int32_t> imported_ {};
      // The number of users who have added the log.
      shared_ptr<int32_t> importedUserCount_ {};
      // The code of the log.
      shared_ptr<string> logCode_ {};
      // The display code of the log.
      shared_ptr<string> logMdsCode_ {};
      // The type of log. Valid values:
      //  - 1: the log produced by other product
      //  - 2: the predefined log
      //  - 3: the custom log
      shared_ptr<int32_t> logType_ {};
      // The time when the log was last added.
      shared_ptr<string> modifyTime_ {};
      // The code of the cloud service to which the log belongs.
      shared_ptr<string> prodCode_ {};
      // The total number of users who have the log.
      shared_ptr<int32_t> totalUserCount_ {};
      // The number of users who have not added the log.
      shared_ptr<int32_t> unImportedUserCount_ {};
    };

    virtual bool empty() const override { return this->data_ == nullptr
        && this->requestId_ == nullptr; };
    // data Field Functions 
    bool hasData() const { return this->data_ != nullptr;};
    void deleteData() { this->data_ = nullptr;};
    inline const vector<ListImportedLogsByProdResponseBody::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<ListImportedLogsByProdResponseBody::Data>) };
    inline vector<ListImportedLogsByProdResponseBody::Data> getData() { DARABONBA_PTR_GET(data_, vector<ListImportedLogsByProdResponseBody::Data>) };
    inline ListImportedLogsByProdResponseBody& setData(const vector<ListImportedLogsByProdResponseBody::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
    inline ListImportedLogsByProdResponseBody& setData(vector<ListImportedLogsByProdResponseBody::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListImportedLogsByProdResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The data returned.
    shared_ptr<vector<ListImportedLogsByProdResponseBody::Data>> data_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace CloudSiem20220616
#endif
