// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SIMPLEQUERYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SIMPLEQUERYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/File.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Imm20200930
{
namespace Models
{
  class SimpleQueryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SimpleQueryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregations, aggregations_);
      DARABONBA_PTR_TO_JSON(Files, files_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalHits, totalHits_);
    };
    friend void from_json(const Darabonba::Json& j, SimpleQueryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregations, aggregations_);
      DARABONBA_PTR_FROM_JSON(Files, files_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalHits, totalHits_);
    };
    SimpleQueryResponseBody() = default ;
    SimpleQueryResponseBody(const SimpleQueryResponseBody &) = default ;
    SimpleQueryResponseBody(SimpleQueryResponseBody &&) = default ;
    SimpleQueryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SimpleQueryResponseBody() = default ;
    SimpleQueryResponseBody& operator=(const SimpleQueryResponseBody &) = default ;
    SimpleQueryResponseBody& operator=(SimpleQueryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Aggregations : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Aggregations& obj) { 
        DARABONBA_PTR_TO_JSON(Field, field_);
        DARABONBA_PTR_TO_JSON(Groups, groups_);
        DARABONBA_PTR_TO_JSON(Operation, operation_);
        DARABONBA_PTR_TO_JSON(Value, value_);
      };
      friend void from_json(const Darabonba::Json& j, Aggregations& obj) { 
        DARABONBA_PTR_FROM_JSON(Field, field_);
        DARABONBA_PTR_FROM_JSON(Groups, groups_);
        DARABONBA_PTR_FROM_JSON(Operation, operation_);
        DARABONBA_PTR_FROM_JSON(Value, value_);
      };
      Aggregations() = default ;
      Aggregations(const Aggregations &) = default ;
      Aggregations(Aggregations &&) = default ;
      Aggregations(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Aggregations() = default ;
      Aggregations& operator=(const Aggregations &) = default ;
      Aggregations& operator=(Aggregations &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Groups : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Groups& obj) { 
          DARABONBA_PTR_TO_JSON(Count, count_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Groups& obj) { 
          DARABONBA_PTR_FROM_JSON(Count, count_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
        };
        Groups() = default ;
        Groups(const Groups &) = default ;
        Groups(Groups &&) = default ;
        Groups(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Groups() = default ;
        Groups& operator=(const Groups &) = default ;
        Groups& operator=(Groups &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->count_ == nullptr
        && this->value_ == nullptr; };
        // count Field Functions 
        bool hasCount() const { return this->count_ != nullptr;};
        void deleteCount() { this->count_ = nullptr;};
        inline int64_t getCount() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
        inline Groups& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline string getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
        inline Groups& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


      protected:
        // The number of results in the grouped aggregation.
        shared_ptr<int64_t> count_ {};
        // The value for the grouped aggregation.
        shared_ptr<string> value_ {};
      };

      virtual bool empty() const override { return this->field_ == nullptr
        && this->groups_ == nullptr && this->operation_ == nullptr && this->value_ == nullptr; };
      // field Field Functions 
      bool hasField() const { return this->field_ != nullptr;};
      void deleteField() { this->field_ = nullptr;};
      inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
      inline Aggregations& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


      // groups Field Functions 
      bool hasGroups() const { return this->groups_ != nullptr;};
      void deleteGroups() { this->groups_ = nullptr;};
      inline const vector<Aggregations::Groups> & getGroups() const { DARABONBA_PTR_GET_CONST(groups_, vector<Aggregations::Groups>) };
      inline vector<Aggregations::Groups> getGroups() { DARABONBA_PTR_GET(groups_, vector<Aggregations::Groups>) };
      inline Aggregations& setGroups(const vector<Aggregations::Groups> & groups) { DARABONBA_PTR_SET_VALUE(groups_, groups) };
      inline Aggregations& setGroups(vector<Aggregations::Groups> && groups) { DARABONBA_PTR_SET_RVALUE(groups_, groups) };


      // operation Field Functions 
      bool hasOperation() const { return this->operation_ != nullptr;};
      void deleteOperation() { this->operation_ = nullptr;};
      inline string getOperation() const { DARABONBA_PTR_GET_DEFAULT(operation_, "") };
      inline Aggregations& setOperation(string operation) { DARABONBA_PTR_SET_VALUE(operation_, operation) };


      // value Field Functions 
      bool hasValue() const { return this->value_ != nullptr;};
      void deleteValue() { this->value_ = nullptr;};
      inline double getValue() const { DARABONBA_PTR_GET_DEFAULT(value_, 0.0) };
      inline Aggregations& setValue(double value) { DARABONBA_PTR_SET_VALUE(value_, value) };


    protected:
      // The name of the field.
      shared_ptr<string> field_ {};
      // The grouped aggregations. This parameter is returned only when the group operator is specified in the Aggregations request parameter.
      shared_ptr<vector<Aggregations::Groups>> groups_ {};
      // The operator.
      shared_ptr<string> operation_ {};
      // The statistical result.
      shared_ptr<double> value_ {};
    };

    virtual bool empty() const override { return this->aggregations_ == nullptr
        && this->files_ == nullptr && this->nextToken_ == nullptr && this->requestId_ == nullptr && this->totalHits_ == nullptr; };
    // aggregations Field Functions 
    bool hasAggregations() const { return this->aggregations_ != nullptr;};
    void deleteAggregations() { this->aggregations_ = nullptr;};
    inline const vector<SimpleQueryResponseBody::Aggregations> & getAggregations() const { DARABONBA_PTR_GET_CONST(aggregations_, vector<SimpleQueryResponseBody::Aggregations>) };
    inline vector<SimpleQueryResponseBody::Aggregations> getAggregations() { DARABONBA_PTR_GET(aggregations_, vector<SimpleQueryResponseBody::Aggregations>) };
    inline SimpleQueryResponseBody& setAggregations(const vector<SimpleQueryResponseBody::Aggregations> & aggregations) { DARABONBA_PTR_SET_VALUE(aggregations_, aggregations) };
    inline SimpleQueryResponseBody& setAggregations(vector<SimpleQueryResponseBody::Aggregations> && aggregations) { DARABONBA_PTR_SET_RVALUE(aggregations_, aggregations) };


    // files Field Functions 
    bool hasFiles() const { return this->files_ != nullptr;};
    void deleteFiles() { this->files_ = nullptr;};
    inline const vector<File> & getFiles() const { DARABONBA_PTR_GET_CONST(files_, vector<File>) };
    inline vector<File> getFiles() { DARABONBA_PTR_GET(files_, vector<File>) };
    inline SimpleQueryResponseBody& setFiles(const vector<File> & files) { DARABONBA_PTR_SET_VALUE(files_, files) };
    inline SimpleQueryResponseBody& setFiles(vector<File> && files) { DARABONBA_PTR_SET_RVALUE(files_, files) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline SimpleQueryResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SimpleQueryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalHits Field Functions 
    bool hasTotalHits() const { return this->totalHits_ != nullptr;};
    void deleteTotalHits() { this->totalHits_ = nullptr;};
    inline int64_t getTotalHits() const { DARABONBA_PTR_GET_DEFAULT(totalHits_, 0L) };
    inline SimpleQueryResponseBody& setTotalHits(int64_t totalHits) { DARABONBA_PTR_SET_VALUE(totalHits_, totalHits) };


  protected:
    // The aggregations. This parameter is returned only when the value of the Aggregations request parameter is not empty.
    shared_ptr<vector<SimpleQueryResponseBody::Aggregations>> aggregations_ {};
    // The files. This parameter is returned only when the value of the Aggregations request parameter is empty.
    shared_ptr<vector<File>> files_ {};
    // The pagination token is used in the next request to retrieve a new page of results if the total number of results exceeds the value of the MaxResults parameter.
    // 
    // It can be used in the next request to retrieve a new page of results.
    // 
    // If NextToken is empty, no next page exists.
    // 
    // This parameter is required.
    shared_ptr<string> nextToken_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // The number of total hits.
    shared_ptr<int64_t> totalHits_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Imm20200930
#endif
