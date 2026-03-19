// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTSTATSEVENTRECORDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTSTATSEVENTRECORDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Elasticsearch20170613
{
namespace Models
{
  class ListStatsEventRecordsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListStatsEventRecordsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Result, result_);
    };
    friend void from_json(const Darabonba::Json& j, ListStatsEventRecordsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Result, result_);
    };
    ListStatsEventRecordsResponseBody() = default ;
    ListStatsEventRecordsResponseBody(const ListStatsEventRecordsResponseBody &) = default ;
    ListStatsEventRecordsResponseBody(ListStatsEventRecordsResponseBody &&) = default ;
    ListStatsEventRecordsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListStatsEventRecordsResponseBody() = default ;
    ListStatsEventRecordsResponseBody& operator=(const ListStatsEventRecordsResponseBody &) = default ;
    ListStatsEventRecordsResponseBody& operator=(ListStatsEventRecordsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Result : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Result& obj) { 
        DARABONBA_PTR_TO_JSON(result, result_);
        DARABONBA_PTR_TO_JSON(total, total_);
      };
      friend void from_json(const Darabonba::Json& j, Result& obj) { 
        DARABONBA_PTR_FROM_JSON(result, result_);
        DARABONBA_PTR_FROM_JSON(total, total_);
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
      class ResultItem : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const ResultItem& obj) { 
          DARABONBA_PTR_TO_JSON(cnt, cnt_);
          DARABONBA_PTR_TO_JSON(level, level_);
          DARABONBA_PTR_TO_JSON(status, status_);
          DARABONBA_PTR_TO_JSON(type, type_);
        };
        friend void from_json(const Darabonba::Json& j, ResultItem& obj) { 
          DARABONBA_PTR_FROM_JSON(cnt, cnt_);
          DARABONBA_PTR_FROM_JSON(level, level_);
          DARABONBA_PTR_FROM_JSON(status, status_);
          DARABONBA_PTR_FROM_JSON(type, type_);
        };
        ResultItem() = default ;
        ResultItem(const ResultItem &) = default ;
        ResultItem(ResultItem &&) = default ;
        ResultItem(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~ResultItem() = default ;
        ResultItem& operator=(const ResultItem &) = default ;
        ResultItem& operator=(ResultItem &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->cnt_ == nullptr
        && this->level_ == nullptr && this->status_ == nullptr && this->type_ == nullptr; };
        // cnt Field Functions 
        bool hasCnt() const { return this->cnt_ != nullptr;};
        void deleteCnt() { this->cnt_ = nullptr;};
        inline string getCnt() const { DARABONBA_PTR_GET_DEFAULT(cnt_, "") };
        inline ResultItem& setCnt(string cnt) { DARABONBA_PTR_SET_VALUE(cnt_, cnt) };


        // level Field Functions 
        bool hasLevel() const { return this->level_ != nullptr;};
        void deleteLevel() { this->level_ = nullptr;};
        inline string getLevel() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
        inline ResultItem& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


        // status Field Functions 
        bool hasStatus() const { return this->status_ != nullptr;};
        void deleteStatus() { this->status_ = nullptr;};
        inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
        inline ResultItem& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


        // type Field Functions 
        bool hasType() const { return this->type_ != nullptr;};
        void deleteType() { this->type_ = nullptr;};
        inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
        inline ResultItem& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      protected:
        shared_ptr<string> cnt_ {};
        shared_ptr<string> level_ {};
        shared_ptr<string> status_ {};
        shared_ptr<string> type_ {};
      };

      virtual bool empty() const override { return this->result_ == nullptr
        && this->total_ == nullptr; };
      // result Field Functions 
      bool hasResult() const { return this->result_ != nullptr;};
      void deleteResult() { this->result_ = nullptr;};
      inline const vector<Result::ResultItem> & getResult() const { DARABONBA_PTR_GET_CONST(result_, vector<Result::ResultItem>) };
      inline vector<Result::ResultItem> getResult() { DARABONBA_PTR_GET(result_, vector<Result::ResultItem>) };
      inline Result& setResult(const vector<Result::ResultItem> & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
      inline Result& setResult(vector<Result::ResultItem> && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


      // total Field Functions 
      bool hasTotal() const { return this->total_ != nullptr;};
      void deleteTotal() { this->total_ = nullptr;};
      inline string getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, "") };
      inline Result& setTotal(string total) { DARABONBA_PTR_SET_VALUE(total_, total) };


    protected:
      shared_ptr<vector<Result::ResultItem>> result_ {};
      shared_ptr<string> total_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->result_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListStatsEventRecordsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // result Field Functions 
    bool hasResult() const { return this->result_ != nullptr;};
    void deleteResult() { this->result_ = nullptr;};
    inline const ListStatsEventRecordsResponseBody::Result & getResult() const { DARABONBA_PTR_GET_CONST(result_, ListStatsEventRecordsResponseBody::Result) };
    inline ListStatsEventRecordsResponseBody::Result getResult() { DARABONBA_PTR_GET(result_, ListStatsEventRecordsResponseBody::Result) };
    inline ListStatsEventRecordsResponseBody& setResult(const ListStatsEventRecordsResponseBody::Result & result) { DARABONBA_PTR_SET_VALUE(result_, result) };
    inline ListStatsEventRecordsResponseBody& setResult(ListStatsEventRecordsResponseBody::Result && result) { DARABONBA_PTR_SET_RVALUE(result_, result) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<ListStatsEventRecordsResponseBody::Result> result_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Elasticsearch20170613
#endif
