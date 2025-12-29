// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEVERIFYFAILSTATISTICSRESPONSEBODY_HPP_
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
  class DescribeVerifyFailStatisticsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeVerifyFailStatisticsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(ResultObject, resultObject_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeVerifyFailStatisticsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(ResultObject, resultObject_);
    };
    DescribeVerifyFailStatisticsResponseBody() = default ;
    DescribeVerifyFailStatisticsResponseBody(const DescribeVerifyFailStatisticsResponseBody &) = default ;
    DescribeVerifyFailStatisticsResponseBody(DescribeVerifyFailStatisticsResponseBody &&) = default ;
    DescribeVerifyFailStatisticsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeVerifyFailStatisticsResponseBody() = default ;
    DescribeVerifyFailStatisticsResponseBody& operator=(const DescribeVerifyFailStatisticsResponseBody &) = default ;
    DescribeVerifyFailStatisticsResponseBody& operator=(DescribeVerifyFailStatisticsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class ResultObject : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const ResultObject& obj) { 
        DARABONBA_PTR_TO_JSON(Column, column_);
        DARABONBA_PTR_TO_JSON(Line, line_);
      };
      friend void from_json(const Darabonba::Json& j, ResultObject& obj) { 
        DARABONBA_PTR_FROM_JSON(Column, column_);
        DARABONBA_PTR_FROM_JSON(Line, line_);
      };
      ResultObject() = default ;
      ResultObject(const ResultObject &) = default ;
      ResultObject(ResultObject &&) = default ;
      ResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~ResultObject() = default ;
      ResultObject& operator=(const ResultObject &) = default ;
      ResultObject& operator=(ResultObject &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Line : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Line& obj) { 
          DARABONBA_PTR_TO_JSON(Items, items_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Line& obj) { 
          DARABONBA_PTR_FROM_JSON(Items, items_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        Line() = default ;
        Line(const Line &) = default ;
        Line(Line &&) = default ;
        Line(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Line() = default ;
        Line& operator=(const Line &) = default ;
        Line& operator=(Line &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Data, data_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Data, data_);
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
              DARABONBA_PTR_TO_JSON(Code, code_);
              DARABONBA_PTR_TO_JSON(Count, count_);
              DARABONBA_PTR_TO_JSON(Date, date_);
            };
            friend void from_json(const Darabonba::Json& j, Data& obj) { 
              DARABONBA_PTR_FROM_JSON(Code, code_);
              DARABONBA_PTR_FROM_JSON(Count, count_);
              DARABONBA_PTR_FROM_JSON(Date, date_);
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
            virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->date_ == nullptr; };
            // code Field Functions 
            bool hasCode() const { return this->code_ != nullptr;};
            void deleteCode() { this->code_ = nullptr;};
            inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
            inline Data& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


            // count Field Functions 
            bool hasCount() const { return this->count_ != nullptr;};
            void deleteCount() { this->count_ = nullptr;};
            inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
            inline Data& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


            // date Field Functions 
            bool hasDate() const { return this->date_ != nullptr;};
            void deleteDate() { this->date_ = nullptr;};
            inline string getDate() const { DARABONBA_PTR_GET_DEFAULT(date_, "") };
            inline Data& setDate(string date) { DARABONBA_PTR_SET_VALUE(date_, date) };


          protected:
            // Error code.
            shared_ptr<string> code_ {};
            // Count.
            shared_ptr<int64_t> count_ {};
            // Date.
            shared_ptr<string> date_ {};
          };

          virtual bool empty() const override { return this->code_ == nullptr
        && this->data_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Items& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // data Field Functions 
          bool hasData() const { return this->data_ != nullptr;};
          void deleteData() { this->data_ = nullptr;};
          inline const vector<Items::Data> & getData() const { DARABONBA_PTR_GET_CONST(data_, vector<Items::Data>) };
          inline vector<Items::Data> getData() { DARABONBA_PTR_GET(data_, vector<Items::Data>) };
          inline Items& setData(const vector<Items::Data> & data) { DARABONBA_PTR_SET_VALUE(data_, data) };
          inline Items& setData(vector<Items::Data> && data) { DARABONBA_PTR_SET_RVALUE(data_, data) };


        protected:
          // Error code.
          shared_ptr<string> code_ {};
          // Returned quantity data.
          shared_ptr<vector<Items::Data>> data_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->totalCount_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<Line::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Line::Items>) };
        inline vector<Line::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Line::Items>) };
        inline Line& setItems(const vector<Line::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline Line& setItems(vector<Line::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline Line& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // Column information.
        shared_ptr<vector<Line::Items>> items_ {};
        // Total count.
        shared_ptr<int64_t> totalCount_ {};
      };

      class Column : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Column& obj) { 
          DARABONBA_PTR_TO_JSON(Items, items_);
          DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
        };
        friend void from_json(const Darabonba::Json& j, Column& obj) { 
          DARABONBA_PTR_FROM_JSON(Items, items_);
          DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
        };
        Column() = default ;
        Column(const Column &) = default ;
        Column(Column &&) = default ;
        Column(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Column() = default ;
        Column& operator=(const Column &) = default ;
        Column& operator=(Column &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        class Items : public Darabonba::Model {
        public:
          friend void to_json(Darabonba::Json& j, const Items& obj) { 
            DARABONBA_PTR_TO_JSON(Code, code_);
            DARABONBA_PTR_TO_JSON(Count, count_);
            DARABONBA_PTR_TO_JSON(Rate, rate_);
          };
          friend void from_json(const Darabonba::Json& j, Items& obj) { 
            DARABONBA_PTR_FROM_JSON(Code, code_);
            DARABONBA_PTR_FROM_JSON(Count, count_);
            DARABONBA_PTR_FROM_JSON(Rate, rate_);
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
          virtual bool empty() const override { return this->code_ == nullptr
        && this->count_ == nullptr && this->rate_ == nullptr; };
          // code Field Functions 
          bool hasCode() const { return this->code_ != nullptr;};
          void deleteCode() { this->code_ = nullptr;};
          inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
          inline Items& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


          // count Field Functions 
          bool hasCount() const { return this->count_ != nullptr;};
          void deleteCount() { this->count_ = nullptr;};
          inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
          inline Items& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


          // rate Field Functions 
          bool hasRate() const { return this->rate_ != nullptr;};
          void deleteRate() { this->rate_ = nullptr;};
          inline string getRate() const { DARABONBA_PTR_GET_DEFAULT(rate_, "") };
          inline Items& setRate(string rate) { DARABONBA_PTR_SET_VALUE(rate_, rate) };


        protected:
          // Error code.
          shared_ptr<string> code_ {};
          // Failure count.
          shared_ptr<int64_t> count_ {};
          // Date: Date
          shared_ptr<string> rate_ {};
        };

        virtual bool empty() const override { return this->items_ == nullptr
        && this->totalCount_ == nullptr; };
        // items Field Functions 
        bool hasItems() const { return this->items_ != nullptr;};
        void deleteItems() { this->items_ = nullptr;};
        inline const vector<Column::Items> & getItems() const { DARABONBA_PTR_GET_CONST(items_, vector<Column::Items>) };
        inline vector<Column::Items> getItems() { DARABONBA_PTR_GET(items_, vector<Column::Items>) };
        inline Column& setItems(const vector<Column::Items> & items) { DARABONBA_PTR_SET_VALUE(items_, items) };
        inline Column& setItems(vector<Column::Items> && items) { DARABONBA_PTR_SET_RVALUE(items_, items) };


        // totalCount Field Functions 
        bool hasTotalCount() const { return this->totalCount_ != nullptr;};
        void deleteTotalCount() { this->totalCount_ = nullptr;};
        inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
        inline Column& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


      protected:
        // Column information.
        shared_ptr<vector<Column::Items>> items_ {};
        // Total count.
        shared_ptr<int64_t> totalCount_ {};
      };

      virtual bool empty() const override { return this->column_ == nullptr
        && this->line_ == nullptr; };
      // column Field Functions 
      bool hasColumn() const { return this->column_ != nullptr;};
      void deleteColumn() { this->column_ = nullptr;};
      inline const ResultObject::Column & getColumn() const { DARABONBA_PTR_GET_CONST(column_, ResultObject::Column) };
      inline ResultObject::Column getColumn() { DARABONBA_PTR_GET(column_, ResultObject::Column) };
      inline ResultObject& setColumn(const ResultObject::Column & column) { DARABONBA_PTR_SET_VALUE(column_, column) };
      inline ResultObject& setColumn(ResultObject::Column && column) { DARABONBA_PTR_SET_RVALUE(column_, column) };


      // line Field Functions 
      bool hasLine() const { return this->line_ != nullptr;};
      void deleteLine() { this->line_ = nullptr;};
      inline const ResultObject::Line & getLine() const { DARABONBA_PTR_GET_CONST(line_, ResultObject::Line) };
      inline ResultObject::Line getLine() { DARABONBA_PTR_GET(line_, ResultObject::Line) };
      inline ResultObject& setLine(const ResultObject::Line & line) { DARABONBA_PTR_SET_VALUE(line_, line) };
      inline ResultObject& setLine(ResultObject::Line && line) { DARABONBA_PTR_SET_RVALUE(line_, line) };


    protected:
      // Line chart of failure reasons.
      shared_ptr<ResultObject::Column> column_ {};
      // Bar chart of failure reasons.
      shared_ptr<ResultObject::Line> line_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->resultObject_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeVerifyFailStatisticsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // resultObject Field Functions 
    bool hasResultObject() const { return this->resultObject_ != nullptr;};
    void deleteResultObject() { this->resultObject_ = nullptr;};
    inline const DescribeVerifyFailStatisticsResponseBody::ResultObject & getResultObject() const { DARABONBA_PTR_GET_CONST(resultObject_, DescribeVerifyFailStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyFailStatisticsResponseBody::ResultObject getResultObject() { DARABONBA_PTR_GET(resultObject_, DescribeVerifyFailStatisticsResponseBody::ResultObject) };
    inline DescribeVerifyFailStatisticsResponseBody& setResultObject(const DescribeVerifyFailStatisticsResponseBody::ResultObject & resultObject) { DARABONBA_PTR_SET_VALUE(resultObject_, resultObject) };
    inline DescribeVerifyFailStatisticsResponseBody& setResultObject(DescribeVerifyFailStatisticsResponseBody::ResultObject && resultObject) { DARABONBA_PTR_SET_RVALUE(resultObject_, resultObject) };


  protected:
    // ID of this request.
    shared_ptr<string> requestId_ {};
    // Authentication result.
    shared_ptr<DescribeVerifyFailStatisticsResponseBody::ResultObject> resultObject_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudauth20190307
#endif
