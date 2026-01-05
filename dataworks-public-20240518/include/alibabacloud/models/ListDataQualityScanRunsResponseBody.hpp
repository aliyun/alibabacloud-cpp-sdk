// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANRUNSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTDATAQUALITYSCANRUNSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace DataworksPublic20240518
{
namespace Models
{
  class ListDataQualityScanRunsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListDataQualityScanRunsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, ListDataQualityScanRunsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageInfo, pageInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    ListDataQualityScanRunsResponseBody() = default ;
    ListDataQualityScanRunsResponseBody(const ListDataQualityScanRunsResponseBody &) = default ;
    ListDataQualityScanRunsResponseBody(ListDataQualityScanRunsResponseBody &&) = default ;
    ListDataQualityScanRunsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListDataQualityScanRunsResponseBody() = default ;
    ListDataQualityScanRunsResponseBody& operator=(const ListDataQualityScanRunsResponseBody &) = default ;
    ListDataQualityScanRunsResponseBody& operator=(ListDataQualityScanRunsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PageInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PageInfo& obj) { 
        DARABONBA_PTR_TO_JSON(DataQualityScanRuns, dataQualityScanRuns_);
        DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
        DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      };
      friend void from_json(const Darabonba::Json& j, PageInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(DataQualityScanRuns, dataQualityScanRuns_);
        DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
        DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
        DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      };
      PageInfo() = default ;
      PageInfo(const PageInfo &) = default ;
      PageInfo(PageInfo &&) = default ;
      PageInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PageInfo() = default ;
      PageInfo& operator=(const PageInfo &) = default ;
      PageInfo& operator=(PageInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class DataQualityScanRuns : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const DataQualityScanRuns& obj) { 
          DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
          DARABONBA_PTR_TO_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Parameters, parameters_);
          DARABONBA_PTR_TO_JSON(Status, status_);
        };
        friend void from_json(const Darabonba::Json& j, DataQualityScanRuns& obj) { 
          DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
          DARABONBA_PTR_FROM_JSON(FinishTime, finishTime_);
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Parameters, parameters_);
          DARABONBA_PTR_FROM_JSON(Status, status_);
        };
        DataQualityScanRuns() = default ;
        DataQualityScanRuns(const DataQualityScanRuns &) = default ;
        DataQualityScanRuns(DataQualityScanRuns &&) = default ;
        DataQualityScanRuns(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~DataQualityScanRuns() = default ;
        DataQualityScanRuns& operator=(const DataQualityScanRuns &) = default ;
        DataQualityScanRuns& operator=(DataQualityScanRuns &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Parameters : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Parameters& obj) { 
            DARABONBA_PTR_TO_JSON(Name, name_);
            DARABONBA_PTR_TO_JSON(Value, value_);
          };
          friend void from_json(const Darabonba::Json& j, Parameters& obj) { 
            DARABONBA_PTR_FROM_JSON(Name, name_);
            DARABONBA_PTR_FROM_JSON(Value, value_);
          };
          Parameters() = default ;
          Parameters(const Parameters &) = default ;
          Parameters(Parameters &&) = default ;
          Parameters(const Darabonba::Json & obj) { from_json(obj, *this); };
          virtual ~Parameters() = default ;
          Parameters& operator=(const Parameters &) = default ;
          Parameters& operator=(Parameters &&) = default ;
          virtual void validate() const override {
          };
          virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
          virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
          virtual bool empty() const override { return this->name_ == nullptr
        && this->value_ == nullptr; };
          // name Field Functions 
          bool hasName() const { return this->name_ != nullptr;};
          void deleteName() { this->name_ = nullptr;};
          inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
          inline Parameters& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


          // value Field Functions 
          bool hasValue() const { return this->value_ != nullptr;};
          void deleteValue() { this->value_ = nullptr;};
          inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
          inline Parameters& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


        protected:
          // The parameter name.
          shared_ptr<string> name_ {};
          // The parameter value. You can use a scheduling time expression.
          shared_ptr<string> value_ {};
        };

        virtual bool empty() const override { return this->createTime_ == nullptr
        && this->finishTime_ == nullptr && this->id_ == nullptr && this->parameters_ == nullptr && this->status_ == nullptr; };
        // createTime Field Functions 
        bool hasCreateTime() const { return this->createTime_ != nullptr;};
        void deleteCreateTime() { this->createTime_ = nullptr;};
        inline int64_t getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, 0L) };
        inline DataQualityScanRuns& setCreateTime(int64_t createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


        // finishTime Field Functions 
        bool hasFinishTime() const { return this->finishTime_ != nullptr;};
        void deleteFinishTime() { this->finishTime_ = nullptr;};
        inline int64_t getFinishTime() const { DARABONBA_PTR_GET_DEFAULT(finishTime_, 0L) };
        inline DataQualityScanRuns& setFinishTime(int64_t finishTime) { DARABONBA_PTR_SET_VALUE(finishTime_, finishTime) };


        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
        inline DataQualityScanRuns& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // parameters Field Functions 
        bool hasParameters() const { return this->parameters_ != nullptr;};
        void deleteParameters() { this->parameters_ = nullptr;};
        inline const vector<DataQualityScanRuns::Parameters> & getParameters() const { DARABONBA_PTR_GET_CONST(parameters_, vector<DataQualityScanRuns::Parameters>) };
        inline vector<DataQualityScanRuns::Parameters> getParameters() { DARABONBA_PTR_GET(parameters_, vector<DataQualityScanRuns::Parameters>) };
        inline DataQualityScanRuns& setParameters(const vector<DataQualityScanRuns::Parameters> & parameters) { DARABONBA_PTR_SET_VALUE(parameters_, parameters) };
        inline DataQualityScanRuns& setParameters(vector<DataQualityScanRuns::Parameters> && parameters) { DARABONBA_PTR_SET_RVALUE(parameters_, parameters) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline DataQualityScanRuns& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


      protected:
        // The time when the data quality monitor starts running.
        shared_ptr<int64_t> createTime_ {};
        // The time when the data quality monitor stops.
        shared_ptr<int64_t> finishTime_ {};
        // The ID of the data quality monitor running record.
        shared_ptr<int64_t> id_ {};
        // The parameters configured for the instance.
        shared_ptr<vector<DataQualityScanRuns::Parameters>> parameters_ {};
        // The status of the instance.
        // 
        // *   Pass
        // *   Running
        // *   Error
        // *   Warn
        // *   Fail
        shared_ptr<string> status_ {};
      };

      virtual bool empty() const override { return this->dataQualityScanRuns_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->totalCount_ == nullptr; };
      // dataQualityScanRuns Field Functions 
      bool hasDataQualityScanRuns() const { return this->dataQualityScanRuns_ != nullptr;};
      void deleteDataQualityScanRuns() { this->dataQualityScanRuns_ = nullptr;};
      inline const vector<PageInfo::DataQualityScanRuns> & getDataQualityScanRuns() const { DARABONBA_PTR_GET_CONST(dataQualityScanRuns_, vector<PageInfo::DataQualityScanRuns>) };
      inline vector<PageInfo::DataQualityScanRuns> getDataQualityScanRuns() { DARABONBA_PTR_GET(dataQualityScanRuns_, vector<PageInfo::DataQualityScanRuns>) };
      inline PageInfo& setDataQualityScanRuns(const vector<PageInfo::DataQualityScanRuns> & dataQualityScanRuns) { DARABONBA_PTR_SET_VALUE(dataQualityScanRuns_, dataQualityScanRuns) };
      inline PageInfo& setDataQualityScanRuns(vector<PageInfo::DataQualityScanRuns> && dataQualityScanRuns) { DARABONBA_PTR_SET_RVALUE(dataQualityScanRuns_, dataQualityScanRuns) };


      // pageNumber Field Functions 
      bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
      void deletePageNumber() { this->pageNumber_ = nullptr;};
      inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
      inline PageInfo& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


      // pageSize Field Functions 
      bool hasPageSize() const { return this->pageSize_ != nullptr;};
      void deletePageSize() { this->pageSize_ = nullptr;};
      inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
      inline PageInfo& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


      // totalCount Field Functions 
      bool hasTotalCount() const { return this->totalCount_ != nullptr;};
      void deleteTotalCount() { this->totalCount_ = nullptr;};
      inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
      inline PageInfo& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    protected:
      // The list of data quality monitor run records.
      shared_ptr<vector<PageInfo::DataQualityScanRuns>> dataQualityScanRuns_ {};
      // The page number of the results. Default value: 1.
      shared_ptr<int32_t> pageNumber_ {};
      // The number of records per page. Default value: 10.
      shared_ptr<int32_t> pageSize_ {};
      // The total number of records returned.
      shared_ptr<int32_t> totalCount_ {};
    };

    virtual bool empty() const override { return this->pageInfo_ == nullptr
        && this->requestId_ == nullptr; };
    // pageInfo Field Functions 
    bool hasPageInfo() const { return this->pageInfo_ != nullptr;};
    void deletePageInfo() { this->pageInfo_ = nullptr;};
    inline const ListDataQualityScanRunsResponseBody::PageInfo & getPageInfo() const { DARABONBA_PTR_GET_CONST(pageInfo_, ListDataQualityScanRunsResponseBody::PageInfo) };
    inline ListDataQualityScanRunsResponseBody::PageInfo getPageInfo() { DARABONBA_PTR_GET(pageInfo_, ListDataQualityScanRunsResponseBody::PageInfo) };
    inline ListDataQualityScanRunsResponseBody& setPageInfo(const ListDataQualityScanRunsResponseBody::PageInfo & pageInfo) { DARABONBA_PTR_SET_VALUE(pageInfo_, pageInfo) };
    inline ListDataQualityScanRunsResponseBody& setPageInfo(ListDataQualityScanRunsResponseBody::PageInfo && pageInfo) { DARABONBA_PTR_SET_RVALUE(pageInfo_, pageInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListDataQualityScanRunsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    // The page information.
    shared_ptr<ListDataQualityScanRunsResponseBody::PageInfo> pageInfo_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace DataworksPublic20240518
#endif
