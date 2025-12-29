// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYVERIFYINVOKESATISTICRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYVERIFYINVOKESATISTICRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudauth20190307
{
namespace Models
{
  class QueryVerifyInvokeSatisticResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryVerifyInvokeSatisticResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(Items, items_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TotalPage, totalPage_);
    };
    friend void from_json(const Darabonba::Json& j, QueryVerifyInvokeSatisticResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(Items, items_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TotalPage, totalPage_);
    };
    QueryVerifyInvokeSatisticResponseBody() = default ;
    QueryVerifyInvokeSatisticResponseBody(const QueryVerifyInvokeSatisticResponseBody &) = default ;
    QueryVerifyInvokeSatisticResponseBody(QueryVerifyInvokeSatisticResponseBody &&) = default ;
    QueryVerifyInvokeSatisticResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryVerifyInvokeSatisticResponseBody() = default ;
    QueryVerifyInvokeSatisticResponseBody& operator=(const QueryVerifyInvokeSatisticResponseBody &) = default ;
    QueryVerifyInvokeSatisticResponseBody& operator=(QueryVerifyInvokeSatisticResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Items : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Items& obj) { 
        DARABONBA_PTR_TO_JSON(Data, data_);
        DARABONBA_PTR_TO_JSON(StatisticsDate, statisticsDate_);
      };
      friend void from_json(const Darabonba::Json& j, Items& obj) { 
        DARABONBA_PTR_FROM_JSON(Data, data_);
        DARABONBA_PTR_FROM_JSON(StatisticsDate, statisticsDate_);
      };
      Items() = default ;
      Items(const Items &) = default ;
      Items(Items &&) = default ;
      Items(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Items() = default ;
      Items& operator=(const Items &) = default ;
      Items& operator=(Items &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Data : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Data& obj) { 
          DARABONBA_PTR_TO_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_TO_JSON(StatisticsType, statisticsType_);
        };
        friend void from_json(const Darabonba::Json& j, Data& obj) { 
          DARABONBA_PTR_FROM_JSON(StatisticsCount, statisticsCount_);
          DARABONBA_PTR_FROM_JSON(StatisticsType, statisticsType_);
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
        virtual bool empty() const override { return this->statisticsCount_ == nullptr
        && this->statisticsType_ == nullptr; };
        // statisticsCount Field Functions 
        bool hasStatisticsCount() const { return this->statisticsCount_ != nullptr;};
        void deleteStatisticsCount() { this->statisticsCount_ = nullptr;};
        inline string getStatisticsCount() const { DARABONBA_PTR_GET_DEFAULT(statisticsCount_, "") };
        inline Data& setStatisticsCount(string statisticsCount) { DARABONBA_PTR_SET_VALUE(statisticsCount_, statisticsCount) };


        // statisticsType Field Functions 
        bool hasStatisticsType() const { return this->statisticsType_ != nullptr;};
        void deleteStatisticsType() { this->statisticsType_ = nullptr;};
        inline string getStatisticsType() const { DARABONBA_PTR_GET_DEFAULT(statisticsType_, "") };
        inline Data& setStatisticsType(string statisticsType) { DARABONBA_PTR_SET_VALUE(statisticsType_, statisticsType) };


      protected:
        // Number of occurrences of the statistic.
        shared_ptr<string> statisticsCount_ {};
        // ProductCode。
        shared_ptr<string> statisticsType_ {};
      };

      virtual bool empty() const override { return this->data_ == nullptr
        && this->statisticsDate_ == nullptr; };
      // data Field Functions 
      bool hasData() const { return this->data_ != nullptr;};
      void deleteData() { this->data_ = nullptr;};
      inline const vector<Items::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Items::Data>) };
      inline vector<Items::Data> getData() { DARABONBA_PTR_GET(data_, vector<Items::Data>) };
      inline Items& setData(const vector<Items::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
      inline Items& setData(vector<Items::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


      // statisticsDate Field Functions 
      bool hasStatisticsDate() const { return this->statisticsDate_ != nullptr;};
      void deleteStatisticsDate() { this->statisticsDate_ = nullptr;};
      inline string getStatisticsDate() const { DARABONBA_PTR_GET_DEFAULT(statisticsDate_, "") };
      inline Items& setStatisticsDate(string statisticsDate) { DARABONBA_PTR_SET_VALUE(statisticsDate_, statisticsDate) };


    protected:
      // List of statistical data.
      shared_ptr<vector<Items::Data>> data_ {};
      // Statistics date.
      shared_ptr<string> statisticsDate_ {};
    };

    virtual bool empty() const override { return this->code_ == nullptr
        && this->currentPage_ == nullptr && this->items_ == nullptr && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr
        && this->totalCount_ == nullptr && this->totalPage_ == nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline QueryVerifyInvokeSatisticResponseBody& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int64_t getCurrentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0L) };
    inline QueryVerifyInvokeSatisticResponseBody& setCurrentPage(int64_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // items Field Functions 
    bool hasItems() const { return this->items_ != nullptr;};
    void deleteItems() { this->items_ = nullptr;};
    inline const vector<QueryVerifyInvokeSatisticResponseBody::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<QueryVerifyInvokeSatisticResponseBody::Items>) };
    inline vector<QueryVerifyInvokeSatisticResponseBody::Items> getItems() { DARABONBA_PTR_GET(items_, vector<QueryVerifyInvokeSatisticResponseBody::Items>) };
    inline QueryVerifyInvokeSatisticResponseBody& setItems(const vector<QueryVerifyInvokeSatisticResponseBody::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
    inline QueryVerifyInvokeSatisticResponseBody& setItems(vector<QueryVerifyInvokeSatisticResponseBody::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int64_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0L) };
    inline QueryVerifyInvokeSatisticResponseBody& setPageSize(int64_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryVerifyInvokeSatisticResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryVerifyInvokeSatisticResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline QueryVerifyInvokeSatisticResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // totalPage Field Functions 
    bool hasTotalPage() const { return this->totalPage_ != nullptr;};
    void deleteTotalPage() { this->totalPage_ = nullptr;};
    inline int64_t getTotalPage() const { DARABONBA_PTR_GET_DEFAULT(totalPage_, 0L) };
    inline QueryVerifyInvokeSatisticResponseBody& setTotalPage(int64_t totalPage) { DARABONBA_PTR_SET_VALUE(totalPage_, totalPage) };


  protected:
    // Response code, **200** indicates a successful response.
    shared_ptr<string> code_ {};
    // Current page number.
    shared_ptr<int64_t> currentPage_ {};
    // List of returned data.
    shared_ptr<vector<QueryVerifyInvokeSatisticResponseBody::Items>> items_ {};
    // Number of items per page.
    shared_ptr<int64_t> pageSize_ {};
    // ID of the request
    shared_ptr<string> requestId_ {};
    // Whether the response was successful.
    shared_ptr<bool> success_ {};
    // Total count.
    shared_ptr<int64_t> totalCount_ {};
    // Total number of pages.
    shared_ptr<int64_t> totalPage_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
