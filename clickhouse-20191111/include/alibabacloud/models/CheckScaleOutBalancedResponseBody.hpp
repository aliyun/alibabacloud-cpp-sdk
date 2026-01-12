// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_CHECKSCALEOUTBALANCEDRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_CHECKSCALEOUTBALANCEDRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Clickhouse20191111
{
namespace Models
{
  class CheckScaleOutBalancedResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const CheckScaleOutBalancedResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CheckCode, checkCode_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TableDetails, tableDetails_);
      DARABONBA_PTR_TO_JSON(TimeDuration, timeDuration_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, CheckScaleOutBalancedResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CheckCode, checkCode_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TableDetails, tableDetails_);
      DARABONBA_PTR_FROM_JSON(TimeDuration, timeDuration_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    CheckScaleOutBalancedResponseBody() = default ;
    CheckScaleOutBalancedResponseBody(const CheckScaleOutBalancedResponseBody &) = default ;
    CheckScaleOutBalancedResponseBody(CheckScaleOutBalancedResponseBody &&) = default ;
    CheckScaleOutBalancedResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~CheckScaleOutBalancedResponseBody() = default ;
    CheckScaleOutBalancedResponseBody& operator=(const CheckScaleOutBalancedResponseBody &) = default ;
    CheckScaleOutBalancedResponseBody& operator=(CheckScaleOutBalancedResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TableDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TableDetails& obj) { 
        DARABONBA_PTR_TO_JSON(TableDetail, tableDetail_);
      };
      friend void from_json(const Darabonba::Json& j, TableDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(TableDetail, tableDetail_);
      };
      TableDetails() = default ;
      TableDetails(const TableDetails &) = default ;
      TableDetails(TableDetails &&) = default ;
      TableDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TableDetails() = default ;
      TableDetails& operator=(const TableDetails &) = default ;
      TableDetails& operator=(TableDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class TableDetail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const TableDetail& obj) { 
          DARABONBA_PTR_TO_JSON(Cluster, cluster_);
          DARABONBA_PTR_TO_JSON(Database, database_);
          DARABONBA_PTR_TO_JSON(Detail, detail_);
          DARABONBA_PTR_TO_JSON(TableName, tableName_);
        };
        friend void from_json(const Darabonba::Json& j, TableDetail& obj) { 
          DARABONBA_PTR_FROM_JSON(Cluster, cluster_);
          DARABONBA_PTR_FROM_JSON(Database, database_);
          DARABONBA_PTR_FROM_JSON(Detail, detail_);
          DARABONBA_PTR_FROM_JSON(TableName, tableName_);
        };
        TableDetail() = default ;
        TableDetail(const TableDetail &) = default ;
        TableDetail(TableDetail &&) = default ;
        TableDetail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~TableDetail() = default ;
        TableDetail& operator=(const TableDetail &) = default ;
        TableDetail& operator=(TableDetail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cluster_ == nullptr
        && this->database_ == nullptr && this->detail_ == nullptr && this->tableName_ == nullptr; };
        // cluster Field Functions 
        bool hasCluster() const { return this->cluster_ != nullptr;};
        void deleteCluster() { this->cluster_ = nullptr;};
        inline string getCluster() const { DARABONBA_PTR_GET_DEFAULT(cluster_, "") };
        inline TableDetail& setCluster(string cluster) { DARABONBA_PTR_SET_VALUE(cluster_, cluster) };


        // database Field Functions 
        bool hasDatabase() const { return this->database_ != nullptr;};
        void deleteDatabase() { this->database_ = nullptr;};
        inline string getDatabase() const { DARABONBA_PTR_GET_DEFAULT(database_, "") };
        inline TableDetail& setDatabase(string database) { DARABONBA_PTR_SET_VALUE(database_, database) };


        // detail Field Functions 
        bool hasDetail() const { return this->detail_ != nullptr;};
        void deleteDetail() { this->detail_ = nullptr;};
        inline int32_t getDetail() const { DARABONBA_PTR_GET_DEFAULT(detail_, 0) };
        inline TableDetail& setDetail(int32_t detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };


        // tableName Field Functions 
        bool hasTableName() const { return this->tableName_ != nullptr;};
        void deleteTableName() { this->tableName_ = nullptr;};
        inline string getTableName() const { DARABONBA_PTR_GET_DEFAULT(tableName_, "") };
        inline TableDetail& setTableName(string tableName) { DARABONBA_PTR_SET_VALUE(tableName_, tableName) };


      protected:
        // The cluster. The value is fixed as **default**.
        shared_ptr<string> cluster_ {};
        // The database name.
        shared_ptr<string> database_ {};
        // The error details. Valid values:
        // 
        // *   **1**: The unique distributed table is missing.
        // *   **2**: More than one distributed table exists for the local table.
        shared_ptr<int32_t> detail_ {};
        // The name of the local table.
        shared_ptr<string> tableName_ {};
      };

      virtual bool empty() const override { return this->tableDetail_ == nullptr; };
      // tableDetail Field Functions 
      bool hasTableDetail() const { return this->tableDetail_ != nullptr;};
      void deleteTableDetail() { this->tableDetail_ = nullptr;};
      inline const vector<TableDetails::TableDetail> & getTableDetail() const { DARABONBA_PTR_GET_CONST(tableDetail_, vector<TableDetails::TableDetail>) };
      inline vector<TableDetails::TableDetail> getTableDetail() { DARABONBA_PTR_GET(tableDetail_, vector<TableDetails::TableDetail>) };
      inline TableDetails& setTableDetail(const vector<TableDetails::TableDetail> & tableDetail) { DARABONBA_PTR_SET_VALUE(tableDetail_, tableDetail) };
      inline TableDetails& setTableDetail(vector<TableDetails::TableDetail> && tableDetail) { DARABONBA_PTR_SET_RVALUE(tableDetail_, tableDetail) };


    protected:
      shared_ptr<vector<TableDetails::TableDetail>> tableDetail_ {};
    };

    virtual bool empty() const override { return this->checkCode_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->tableDetails_ == nullptr && this->timeDuration_ == nullptr
        && this->totalCount_ == nullptr; };
    // checkCode Field Functions 
    bool hasCheckCode() const { return this->checkCode_ != nullptr;};
    void deleteCheckCode() { this->checkCode_ = nullptr;};
    inline string getCheckCode() const { DARABONBA_PTR_GET_DEFAULT(checkCode_, "") };
    inline CheckScaleOutBalancedResponseBody& setCheckCode(string checkCode) { DARABONBA_PTR_SET_VALUE(checkCode_, checkCode) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline CheckScaleOutBalancedResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline CheckScaleOutBalancedResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline CheckScaleOutBalancedResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // tableDetails Field Functions 
    bool hasTableDetails() const { return this->tableDetails_ != nullptr;};
    void deleteTableDetails() { this->tableDetails_ = nullptr;};
    inline const CheckScaleOutBalancedResponseBody::TableDetails & getTableDetails() const { DARABONBA_PTR_GET_CONST(tableDetails_, CheckScaleOutBalancedResponseBody::TableDetails) };
    inline CheckScaleOutBalancedResponseBody::TableDetails getTableDetails() { DARABONBA_PTR_GET(tableDetails_, CheckScaleOutBalancedResponseBody::TableDetails) };
    inline CheckScaleOutBalancedResponseBody& setTableDetails(const CheckScaleOutBalancedResponseBody::TableDetails & tableDetails) { DARABONBA_PTR_SET_VALUE(tableDetails_, tableDetails) };
    inline CheckScaleOutBalancedResponseBody& setTableDetails(CheckScaleOutBalancedResponseBody::TableDetails && tableDetails) { DARABONBA_PTR_SET_RVALUE(tableDetails_, tableDetails) };


    // timeDuration Field Functions 
    bool hasTimeDuration() const { return this->timeDuration_ != nullptr;};
    void deleteTimeDuration() { this->timeDuration_ = nullptr;};
    inline string getTimeDuration() const { DARABONBA_PTR_GET_DEFAULT(timeDuration_, "") };
    inline CheckScaleOutBalancedResponseBody& setTimeDuration(string timeDuration) { DARABONBA_PTR_SET_VALUE(timeDuration_, timeDuration) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline CheckScaleOutBalancedResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The check result. Valid values:
    // 
    // *   **400**: The cluster failed the check.
    // *   **200**: The cluster passed the check.
    shared_ptr<string> checkCode_ {};
    // The total number of returned pages.
    shared_ptr<int32_t> pageNumber_ {};
    // The number of entries returned per page. Valid values:
    // 
    // *   **30** (default)
    // *   **50**
    // *   **100**
    shared_ptr<int32_t> pageSize_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The error information returned for a check failure.
    shared_ptr<CheckScaleOutBalancedResponseBody::TableDetails> tableDetails_ {};
    // The amount of time that is required for the migration and scale-out. Unit: minutes.
    shared_ptr<string> timeDuration_ {};
    // The total number of entries that are returned.
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Clickhouse20191111
#endif
