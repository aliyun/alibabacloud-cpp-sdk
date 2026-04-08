// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DSGDESENSPLANQUERYLISTRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DSGDESENSPLANQUERYLISTRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20200518
{
namespace Models
{
  class DsgDesensPlanQueryListResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DsgDesensPlanQueryListResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_TO_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_TO_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_TO_JSON(PageData, pageData_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, DsgDesensPlanQueryListResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(ErrorCode, errorCode_);
      DARABONBA_PTR_FROM_JSON(ErrorMessage, errorMessage_);
      DARABONBA_PTR_FROM_JSON(HttpStatusCode, httpStatusCode_);
      DARABONBA_PTR_FROM_JSON(PageData, pageData_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    DsgDesensPlanQueryListResponseBody() = default ;
    DsgDesensPlanQueryListResponseBody(const DsgDesensPlanQueryListResponseBody &) = default ;
    DsgDesensPlanQueryListResponseBody(DsgDesensPlanQueryListResponseBody &&) = default ;
    DsgDesensPlanQueryListResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DsgDesensPlanQueryListResponseBody() = default ;
    DsgDesensPlanQueryListResponseBody& operator=(const DsgDesensPlanQueryListResponseBody &) = default ;
    DsgDesensPlanQueryListResponseBody& operator=(DsgDesensPlanQueryListResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageData : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageData& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageData& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageData() = default ;
      PageData(const PageData &) = default ;
      PageData(PageData &&) = default ;
      PageData(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageData() = default ;
      PageData& operator=(const PageData &) = default ;
      PageData& operator=(PageData &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(CheckWatermark, checkWatermark_);
          DARABONBA_PTR_TO_JSON(DataType, dataType_);
          DARABONBA_PTR_TO_JSON(DesenMode, desenMode_);
          DARABONBA_PTR_TO_JSON(DesensPlan, desensPlan_);
          DARABONBA_PTR_TO_JSON(DesensRule, desensRule_);
          DARABONBA_PTR_TO_JSON(DesensWay, desensWay_);
          DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Owner, owner_);
          DARABONBA_PTR_TO_JSON(RuleName, ruleName_);
          DARABONBA_PTR_TO_JSON(SceneCode, sceneCode_);
          DARABONBA_PTR_TO_JSON(SceneName, sceneName_);
          DARABONBA_PTR_TO_JSON(Status, status_);
          DARABONBA_PTR_TO_JSON(columns, columns_);
          DARABONBA_PTR_TO_JSON(emptyNotDesesn, emptyNotDesesn_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(CheckWatermark, checkWatermark_);
          DARABONBA_PTR_FROM_JSON(DataType, dataType_);
          DARABONBA_PTR_FROM_JSON(DesenMode, desenMode_);
          DARABONBA_PTR_FROM_JSON(DesensPlan, desensPlan_);
          DARABONBA_PTR_FROM_JSON(DesensRule, desensRule_);
          DARABONBA_PTR_FROM_JSON(DesensWay, desensWay_);
          DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
          DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Owner, owner_);
          DARABONBA_PTR_FROM_JSON(RuleName, ruleName_);
          DARABONBA_PTR_FROM_JSON(SceneCode, sceneCode_);
          DARABONBA_PTR_FROM_JSON(SceneName, sceneName_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
          DARABONBA_PTR_FROM_JSON(columns, columns_);
          DARABONBA_PTR_FROM_JSON(emptyNotDesesn, emptyNotDesesn_);
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
        class Columns : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Columns& obj) { 
            DARABONBA_PTR_TO_JSON(column, column_);
            DARABONBA_PTR_TO_JSON(dbType, dbType_);
            DARABONBA_PTR_TO_JSON(project, project_);
            DARABONBA_PTR_TO_JSON(table, table_);
          };
          friend void from_json(const Darabonba::Json& j, Columns& obj) { 
            DARABONBA_PTR_FROM_JSON(column, column_);
            DARABONBA_PTR_FROM_JSON(dbType, dbType_);
            DARABONBA_PTR_FROM_JSON(project, project_);
            DARABONBA_PTR_FROM_JSON(table, table_);
          };
          Columns() = default ;
          Columns(const Columns &) = default ;
          Columns(Columns &&) = default ;
          Columns(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Columns() = default ;
          Columns& operator=(const Columns &) = default ;
          Columns& operator=(Columns &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->column_ == nullptr
        && this->dbType_ == nullptr && this->project_ == nullptr && this->table_ == nullptr; };
          // column Field Functions 
          bool hasColumn() const { return this->column_ != nullptr;};
          void deleteColumn() { this->column_ = nullptr;};
          inline string getColumn() const { DARABONBA_PTR_GET_DEFAULT(column_, "") };
          inline Columns& setColumn(string column) { DARABONBA_PTR_SET_VALUE(column_, column) };


          // dbType Field Functions 
          bool hasDbType() const { return this->dbType_ != nullptr;};
          void deleteDbType() { this->dbType_ = nullptr;};
          inline string getDbType() const { DARABONBA_PTR_GET_DEFAULT(dbType_, "") };
          inline Columns& setDbType(string dbType) { DARABONBA_PTR_SET_VALUE(dbType_, dbType) };


          // project Field Functions 
          bool hasProject() const { return this->project_ != nullptr;};
          void deleteProject() { this->project_ = nullptr;};
          inline string getProject() const { DARABONBA_PTR_GET_DEFAULT(project_, "") };
          inline Columns& setProject(string project) { DARABONBA_PTR_SET_VALUE(project_, project) };


          // table Field Functions 
          bool hasTable() const { return this->table_ != nullptr;};
          void deleteTable() { this->table_ = nullptr;};
          inline string getTable() const { DARABONBA_PTR_GET_DEFAULT(table_, "") };
          inline Columns& setTable(string table) { DARABONBA_PTR_SET_VALUE(table_, table) };


        protected:
          shared_ptr<string> column_ {};
          shared_ptr<string> dbType_ {};
          shared_ptr<string> project_ {};
          shared_ptr<string> table_ {};
        };

        class DesensPlan : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const DesensPlan& obj) { 
            DARABONBA_PTR_TO_JSON(DesensPlanType, desensPlanType_);
            DARABONBA_ANY_TO_JSON(ExtParam, extParam_);
          };
          friend void from_json(const Darabonba::Json& j, DesensPlan& obj) { 
            DARABONBA_PTR_FROM_JSON(DesensPlanType, desensPlanType_);
            DARABONBA_ANY_FROM_JSON(ExtParam, extParam_);
          };
          DesensPlan() = default ;
          DesensPlan(const DesensPlan &) = default ;
          DesensPlan(DesensPlan &&) = default ;
          DesensPlan(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~DesensPlan() = default ;
          DesensPlan& operator=(const DesensPlan &) = default ;
          DesensPlan& operator=(DesensPlan &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->desensPlanType_ == nullptr
        && this->extParam_ == nullptr; };
          // desensPlanType Field Functions 
          bool hasDesensPlanType() const { return this->desensPlanType_ != nullptr;};
          void deleteDesensPlanType() { this->desensPlanType_ = nullptr;};
          inline string getDesensPlanType() const { DARABONBA_PTR_GET_DEFAULT(desensPlanType_, "") };
          inline DesensPlan& setDesensPlanType(string desensPlanType) { DARABONBA_PTR_SET_VALUE(desensPlanType_, desensPlanType) };


          // extParam Field Functions 
          bool hasExtParam() const { return this->extParam_ != nullptr;};
          void deleteExtParam() { this->extParam_ = nullptr;};
          inline           const Darabonba::Json & getExtParam() const { DARABONBA_GET(extParam_) };
          Darabonba::Json & getExtParam() { DARABONBA_GET(extParam_) };
          inline DesensPlan& setExtParam(const Darabonba::Json & extParam) { DARABONBA_SET_VALUE(extParam_, extParam) };
          inline DesensPlan& setExtParam(Darabonba::Json && extParam) { DARABONBA_SET_RVALUE(extParam_, extParam) };


        protected:
          // The type of the data masking rule.
          shared_ptr<string> desensPlanType_ {};
          // The parameters for the data masking rule. For more information about the parameters, see the [DsgDesensPlanAddOrUpdate](https://help.aliyun.com/document_detail/2786295.html) API reference.
          Darabonba::Json extParam_ {};
        };

        virtual bool empty() const override { return this->checkWatermark_ == nullptr
        && this->dataType_ == nullptr && this->desenMode_ == nullptr && this->desensPlan_ == nullptr && this->desensRule_ == nullptr && this->desensWay_ == nullptr
        && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->owner_ == nullptr && this->ruleName_ == nullptr
        && this->sceneCode_ == nullptr && this->sceneName_ == nullptr && this->status_ == nullptr && this->columns_ == nullptr && this->emptyNotDesesn_ == nullptr; };
        // checkWatermark Field Functions 
        bool hasCheckWatermark() const { return this->checkWatermark_ != nullptr;};
        void deleteCheckWatermark() { this->checkWatermark_ = nullptr;};
        inline bool getCheckWatermark() const { DARABONBA_PTR_GET_DEFAULT(checkWatermark_, false) };
        inline Data& setCheckWatermark(bool checkWatermark) { DARABONBA_PTR_SET_VALUE(checkWatermark_, checkWatermark) };


        // dataType Field Functions 
        bool hasDataType() const { return this->dataType_ != nullptr;};
        void deleteDataType() { this->dataType_ = nullptr;};
        inline string getDataType() const { DARABONBA_PTR_GET_DEFAULT(dataType_, "") };
        inline Data& setDataType(string dataType) { DARABONBA_PTR_SET_VALUE(dataType_, dataType) };


        // desenMode Field Functions 
        bool hasDesenMode() const { return this->desenMode_ != nullptr;};
        void deleteDesenMode() { this->desenMode_ = nullptr;};
        inline string getDesenMode() const { DARABONBA_PTR_GET_DEFAULT(desenMode_, "") };
        inline Data& setDesenMode(string desenMode) { DARABONBA_PTR_SET_VALUE(desenMode_, desenMode) };


        // desensPlan Field Functions 
        bool hasDesensPlan() const { return this->desensPlan_ != nullptr;};
        void deleteDesensPlan() { this->desensPlan_ = nullptr;};
        inline const Data::DesensPlan & getDesensPlan() const { DARABONBA_PTR_GET_CONST(desensPlan_, Data::DesensPlan) };
        inline Data::DesensPlan getDesensPlan() { DARABONBA_PTR_GET(desensPlan_, Data::DesensPlan) };
        inline Data& setDesensPlan(const Data::DesensPlan & desensPlan) { DARABONBA_PTR_SET_VALUE(desensPlan_, desensPlan) };
        inline Data& setDesensPlan(Data::DesensPlan && desensPlan) { DARABONBA_PTR_SET_RVALUE(desensPlan_, desensPlan) };


        // desensRule Field Functions 
        bool hasDesensRule() const { return this->desensRule_ != nullptr;};
        void deleteDesensRule() { this->desensRule_ = nullptr;};
        inline string getDesensRule() const { DARABONBA_PTR_GET_DEFAULT(desensRule_, "") };
        inline Data& setDesensRule(string desensRule) { DARABONBA_PTR_SET_VALUE(desensRule_, desensRule) };


        // desensWay Field Functions 
        bool hasDesensWay() const { return this->desensWay_ != nullptr;};
        void deleteDesensWay() { this->desensWay_ = nullptr;};
        inline string getDesensWay() const { DARABONBA_PTR_GET_DEFAULT(desensWay_, "") };
        inline Data& setDesensWay(string desensWay) { DARABONBA_PTR_SET_VALUE(desensWay_, desensWay) };


        // gmtCreate Field Functions 
        bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
        void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
        inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
        inline Data& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


        // gmtModified Field Functions 
        bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
        void deleteGmtModified() { this->gmtModified_ = nullptr;};
        inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
        inline Data& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline Data& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // owner Field Functions 
        bool hasOwner() const { return this->owner_ != nullptr;};
        void deleteOwner() { this->owner_ = nullptr;};
        inline string getOwner() const { DARABONBA_PTR_GET_DEFAULT(owner_, "") };
        inline Data& setOwner(string owner) { DARABONBA_PTR_SET_VALUE(owner_, owner) };


        // ruleName Field Functions 
        bool hasRuleName() const { return this->ruleName_ != nullptr;};
        void deleteRuleName() { this->ruleName_ = nullptr;};
        inline string getRuleName() const { DARABONBA_PTR_GET_DEFAULT(ruleName_, "") };
        inline Data& setRuleName(string ruleName) { DARABONBA_PTR_SET_VALUE(ruleName_, ruleName) };


        // sceneCode Field Functions 
        bool hasSceneCode() const { return this->sceneCode_ != nullptr;};
        void deleteSceneCode() { this->sceneCode_ = nullptr;};
        inline string getSceneCode() const { DARABONBA_PTR_GET_DEFAULT(sceneCode_, "") };
        inline Data& setSceneCode(string sceneCode) { DARABONBA_PTR_SET_VALUE(sceneCode_, sceneCode) };


        // sceneName Field Functions 
        bool hasSceneName() const { return this->sceneName_ != nullptr;};
        void deleteSceneName() { this->sceneName_ = nullptr;};
        inline string getSceneName() const { DARABONBA_PTR_GET_DEFAULT(sceneName_, "") };
        inline Data& setSceneName(string sceneName) { DARABONBA_PTR_SET_VALUE(sceneName_, sceneName) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline int32_t getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, 0) };
        inline Data& setStatus(int32_t status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // columns Field Functions 
        bool hasColumns() const { return this->columns_ != nullptr;};
        void deleteColumns() { this->columns_ = nullptr;};
        inline const vector<Data::Columns> & getColumns() const { DARABONBA_PTR_GET_CONST(columns_, vector<Data::Columns>) };
        inline vector<Data::Columns> getColumns() { DARABONBA_PTR_GET(columns_, vector<Data::Columns>) };
        inline Data& setColumns(const vector<Data::Columns> & columns) { DARABONBA_PTR_SET_VALUE(columns_, columns) };
        inline Data& setColumns(vector<Data::Columns> && columns) { DARABONBA_PTR_SET_RVALUE(columns_, columns) };


        // emptyNotDesesn Field Functions 
        bool hasEmptyNotDesesn() const { return this->emptyNotDesesn_ != nullptr;};
        void deleteEmptyNotDesesn() { this->emptyNotDesesn_ = nullptr;};
        inline bool getEmptyNotDesesn() const { DARABONBA_PTR_GET_DEFAULT(emptyNotDesesn_, false) };
        inline Data& setEmptyNotDesesn(bool emptyNotDesesn) { DARABONBA_PTR_SET_VALUE(emptyNotDesesn_, emptyNotDesesn) };


      protected:
        // Indicates whether a watermark is added. Valid values:
        // 
        // *   true
        // *   false
        shared_ptr<bool> checkWatermark_ {};
        // The sensitive field type.
        shared_ptr<string> dataType_ {};
        // The type of the data masking method.
        shared_ptr<string> desenMode_ {};
        // The details of the data masking rule.
        shared_ptr<Data::DesensPlan> desensPlan_ {};
        // The data masking rule.
        shared_ptr<string> desensRule_ {};
        // The data masking method.
        shared_ptr<string> desensWay_ {};
        // The time when the data masking rule was created.
        shared_ptr<string> gmtCreate_ {};
        // The time when the data masking rule was modified.
        shared_ptr<string> gmtModified_ {};
        // The ID of the data masking rule.
        shared_ptr<int64_t> id_ {};
        // The owner of the data masking rule.
        shared_ptr<string> owner_ {};
        // The name of the data masking rule.
        shared_ptr<string> ruleName_ {};
        // The code of the level-1 data masking scenario to which the rule belongs. Valid values:
        // 
        // *   dataworks_display_desense_code: masking of displayed data in DataStudio and Data Map
        // *   maxcompute_desense_code: data masking at the MaxCompute compute engine layer
        // *   maxcompute_new_desense_code: data masking at the MaxCompute compute engine layer (new)
        // *   hologres_display_desense_code: data masking at the Hologres compute engine layer
        // *   dataworks_data_integration_desense_code: static data masking in Data Integration
        // *   dataworks_analysis_desense_code: masking of displayed data in DataAnalysis
        shared_ptr<string> sceneCode_ {};
        // The name of the level-2 data masking scenario to which the data masking rule belongs.
        shared_ptr<string> sceneName_ {};
        // The status of the data masking rule. Valid values:
        // 
        // *   0: expired
        // *   1: effective
        shared_ptr<int32_t> status_ {};
        shared_ptr<vector<Data::Columns>> columns_ {};
        shared_ptr<bool> emptyNotDesesn_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<PageData::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<PageData::Data>) };
      inline vector<PageData::Data> getData() { DARABONBA_PTR_GET(data_, vector<PageData::Data>) };
      inline PageData& setData(const vector<PageData::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline PageData& setData(vector<PageData::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageData& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageData& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageData& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The information about the data masking rule.
      shared_ptr<vector<PageData::Data>> data_ {};
      // The page number.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of entries per page. Maximum value: 100.
      shared_ptr<int32_t> pageSize_ {};
      // The number of data masking rules.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->errorCode_ == nullptr
        && this->errorMessage_ == nullptr && this->httpStatusCode_ == nullptr && this->pageData_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // errorCode Field Functions 
    bool hasErrorCode() const { return this->errorCode_ != nullptr;};
    void deleteErrorCode() { this->errorCode_ = nullptr;};
    inline string getErrorCode() const { DARABONBA_PTR_GET_DEFAULT(errorCode_, "") };
    inline DsgDesensPlanQueryListResponseBody& setErrorCode(string errorCode) { DARABONBA_PTR_SET_VALUE(errorCode_, errorCode) };


    // errorMessage Field Functions 
    bool hasErrorMessage() const { return this->errorMessage_ != nullptr;};
    void deleteErrorMessage() { this->errorMessage_ = nullptr;};
    inline string getErrorMessage() const { DARABONBA_PTR_GET_DEFAULT(errorMessage_, "") };
    inline DsgDesensPlanQueryListResponseBody& setErrorMessage(string errorMessage) { DARABONBA_PTR_SET_VALUE(errorMessage_, errorMessage) };


    // httpStatusCode Field Functions 
    bool hasHttpStatusCode() const { return this->httpStatusCode_ != nullptr;};
    void deleteHttpStatusCode() { this->httpStatusCode_ = nullptr;};
    inline int32_t getHttpStatusCode() const { DARABONBA_PTR_GET_DEFAULT(httpStatusCode_, 0) };
    inline DsgDesensPlanQueryListResponseBody& setHttpStatusCode(int32_t httpStatusCode) { DARABONBA_PTR_SET_VALUE(httpStatusCode_, httpStatusCode) };


    // pageData Field Functions 
    bool hasPageData() const { return this->pageData_ != nullptr;};
    void deletePageData() { this->pageData_ = nullptr;};
    inline const DsgDesensPlanQueryListResponseBody::PageData & getPageData() const { DARABONBA_PTR_GET_CONST(pageData_, DsgDesensPlanQueryListResponseBody::PageData) };
    inline DsgDesensPlanQueryListResponseBody::PageData getPageData() { DARABONBA_PTR_GET(pageData_, DsgDesensPlanQueryListResponseBody::PageData) };
    inline DsgDesensPlanQueryListResponseBody& setPageData(const DsgDesensPlanQueryListResponseBody::PageData & pageData) { DARABONBA_PTR_SET_VALUE(pageData_, pageData) };
    inline DsgDesensPlanQueryListResponseBody& setPageData(DsgDesensPlanQueryListResponseBody::PageData && pageData) { DARABONBA_PTR_SET_RVALUE(pageData_, pageData) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DsgDesensPlanQueryListResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline DsgDesensPlanQueryListResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The error code.
    shared_ptr<string> errorCode_ {};
    // The error message.
    shared_ptr<string> errorMessage_ {};
    // The HTTP status code.
    shared_ptr<int32_t> httpStatusCode_ {};
    // The pagination information.
    shared_ptr<DsgDesensPlanQueryListResponseBody::PageData> pageData_ {};
    // The request ID. You can use the ID to locate logs and troubleshoot issues.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request was successful. Valid values:
    // 
    // *   true
    // *   false
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20200518
#endif
