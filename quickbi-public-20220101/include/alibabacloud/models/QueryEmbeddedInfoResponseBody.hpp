// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYEMBEDDEDINFORESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYEMBEDDEDINFORESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryEmbeddedInfoResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryEmbeddedInfoResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, QueryEmbeddedInfoResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    QueryEmbeddedInfoResponseBody() = default ;
    QueryEmbeddedInfoResponseBody(const QueryEmbeddedInfoResponseBody &) = default ;
    QueryEmbeddedInfoResponseBody(QueryEmbeddedInfoResponseBody &&) = default ;
    QueryEmbeddedInfoResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryEmbeddedInfoResponseBody() = default ;
    QueryEmbeddedInfoResponseBody& operator=(const QueryEmbeddedInfoResponseBody &) = default ;
    QueryEmbeddedInfoResponseBody& operator=(QueryEmbeddedInfoResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(Detail, detail_);
        DARABONBA_PTR_TO_JSON(EmbeddedCount, embeddedCount_);
        DARABONBA_PTR_TO_JSON(MaxCount, maxCount_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(Detail, detail_);
        DARABONBA_PTR_FROM_JSON(EmbeddedCount, embeddedCount_);
        DARABONBA_PTR_FROM_JSON(MaxCount, maxCount_);
      };
      Result() = default ;
      Result(const Result &) = default ;
      Result(Result &&) = default ;
      Result(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Result() = default ;
      Result& operator=(const Result &) = default ;
      Result& operator=(Result &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Detail : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Detail& obj) { 
          DARABONBA_PTR_TO_JSON(DashboardOfflineQuery, dashboardOfflineQuery_);
          DARABONBA_PTR_TO_JSON(Page, page_);
          DARABONBA_PTR_TO_JSON(Report, report_);
        };
        friend void from_json(const Darabonba::Json& j, Detail& obj) { 
          DARABONBA_PTR_FROM_JSON(DashboardOfflineQuery, dashboardOfflineQuery_);
          DARABONBA_PTR_FROM_JSON(Page, page_);
          DARABONBA_PTR_FROM_JSON(Report, report_);
        };
        Detail() = default ;
        Detail(const Detail &) = default ;
        Detail(Detail &&) = default ;
        Detail(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Detail() = default ;
        Detail& operator=(const Detail &) = default ;
        Detail& operator=(Detail &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->dashboardOfflineQuery_ == nullptr
        && this->page_ == nullptr && this->report_ == nullptr; };
        // dashboardOfflineQuery Field Functions 
        bool hasDashboardOfflineQuery() const { return this->dashboardOfflineQuery_ != nullptr;};
        void deleteDashboardOfflineQuery() { this->dashboardOfflineQuery_ = nullptr;};
        inline int32_t getDashboardOfflineQuery() const { DARABONBA_PTR_GET_DEFAULT(dashboardOfflineQuery_, 0) };
        inline Detail& setDashboardOfflineQuery(int32_t dashboardOfflineQuery) { DARABONBA_PTR_SET_VALUE(dashboardOfflineQuery_, dashboardOfflineQuery) };


        // page Field Functions 
        bool hasPage() const { return this->page_ != nullptr;};
        void deletePage() { this->page_ = nullptr;};
        inline int32_t getPage() const { DARABONBA_PTR_GET_DEFAULT(page_, 0) };
        inline Detail& setPage(int32_t page) { DARABONBA_PTR_SET_VALUE(page_, page) };


        // report Field Functions 
        bool hasReport() const { return this->report_ != nullptr;};
        void deleteReport() { this->report_ = nullptr;};
        inline int32_t getReport() const { DARABONBA_PTR_GET_DEFAULT(report_, 0) };
        inline Detail& setReport(int32_t report) { DARABONBA_PTR_SET_VALUE(report_, report) };


      protected:
        // The number of embedded self-service fetching.
        shared_ptr<int32_t> dashboardOfflineQuery_ {};
        // The number of embedded dashboards.
        shared_ptr<int32_t> page_ {};
        // The number of embedded spreadsheets.
        shared_ptr<int32_t> report_ {};
      };

      virtual bool empty() const override { return this->detail_ == nullptr
        && this->embeddedCount_ == nullptr && this->maxCount_ == nullptr; };
      // detail Field Functions 
      bool hasDetail() const { return this->detail_ != nullptr;};
      void deleteDetail() { this->detail_ = nullptr;};
      inline const Result::Detail & getDetail() const { DARABONBA_PTR_GET_CONST(detail_, Result::Detail) };
      inline Result::Detail getDetail() { DARABONBA_PTR_GET(detail_, Result::Detail) };
      inline Result& setDetail(const Result::Detail & detail) { DARABONBA_PTR_SET_VALUE(detail_, detail) };
      inline Result& setDetail(Result::Detail && detail) { DARABONBA_PTR_SET_RVALUE(detail_, detail) };


      // embeddedCount Field Functions 
      bool hasEmbeddedCount() const { return this->embeddedCount_ != nullptr;};
      void deleteEmbeddedCount() { this->embeddedCount_ = nullptr;};
      inline int32_t getEmbeddedCount() const { DARABONBA_PTR_GET_DEFAULT(embeddedCount_, 0) };
      inline Result& setEmbeddedCount(int32_t embeddedCount) { DARABONBA_PTR_SET_VALUE(embeddedCount_, embeddedCount) };


      // maxCount Field Functions 
      bool hasMaxCount() const { return this->maxCount_ != nullptr;};
      void deleteMaxCount() { this->maxCount_ = nullptr;};
      inline int32_t getMaxCount() const { DARABONBA_PTR_GET_DEFAULT(maxCount_, 0) };
      inline Result& setMaxCount(int32_t maxCount) { DARABONBA_PTR_SET_VALUE(maxCount_, maxCount) };


    protected:
      // Embed the statistics of the work.
      shared_ptr<Result::Detail> detail_ {};
      // The number of reports that are currently embedded.
      shared_ptr<int32_t> embeddedCount_ {};
      // The maximum number of reports that can be embedded.
      shared_ptr<int32_t> maxCount_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr && this->success_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryEmbeddedInfoResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const QueryEmbeddedInfoResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, QueryEmbeddedInfoResponseBody::Result) };
    inline QueryEmbeddedInfoResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, QueryEmbeddedInfoResponseBody::Result) };
    inline QueryEmbeddedInfoResponseBody& setResult(const QueryEmbeddedInfoResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline QueryEmbeddedInfoResponseBody& setResult(QueryEmbeddedInfoResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline QueryEmbeddedInfoResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // The embedded information of the reports under the organization.
    shared_ptr<QueryEmbeddedInfoResponseBody::Result> result_ {};
    // Indicates whether the request is successful. Valid values:
    // 
    // *   true: The request was successful.
    // *   false: The request failed.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
