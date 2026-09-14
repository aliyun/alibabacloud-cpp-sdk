// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_EXECUTEQUERYREQUEST_HPP_
#define ALIBABACLOUD_MODELS_EXECUTEQUERYREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace AgentLoop20260520
{
namespace Models
{
  class ExecuteQueryRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ExecuteQueryRequest& obj) { 
      DARABONBA_PTR_TO_JSON(annotationFilter, annotationFilter_);
      DARABONBA_PTR_TO_JSON(from, from_);
      DARABONBA_PTR_TO_JSON(length, length_);
      DARABONBA_PTR_TO_JSON(maxOutputLength, maxOutputLength_);
      DARABONBA_PTR_TO_JSON(offset, offset_);
      DARABONBA_PTR_TO_JSON(query, query_);
      DARABONBA_PTR_TO_JSON(to, to_);
      DARABONBA_PTR_TO_JSON(type, type_);
      DARABONBA_PTR_TO_JSON(version, version_);
    };
    friend void from_json(const Darabonba::Json& j, ExecuteQueryRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(annotationFilter, annotationFilter_);
      DARABONBA_PTR_FROM_JSON(from, from_);
      DARABONBA_PTR_FROM_JSON(length, length_);
      DARABONBA_PTR_FROM_JSON(maxOutputLength, maxOutputLength_);
      DARABONBA_PTR_FROM_JSON(offset, offset_);
      DARABONBA_PTR_FROM_JSON(query, query_);
      DARABONBA_PTR_FROM_JSON(to, to_);
      DARABONBA_PTR_FROM_JSON(type, type_);
      DARABONBA_PTR_FROM_JSON(version, version_);
    };
    ExecuteQueryRequest() = default ;
    ExecuteQueryRequest(const ExecuteQueryRequest &) = default ;
    ExecuteQueryRequest(ExecuteQueryRequest &&) = default ;
    ExecuteQueryRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ExecuteQueryRequest() = default ;
    ExecuteQueryRequest& operator=(const ExecuteQueryRequest &) = default ;
    ExecuteQueryRequest& operator=(ExecuteQueryRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AnnotationFilter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AnnotationFilter& obj) { 
        DARABONBA_PTR_TO_JSON(conditions, conditions_);
      };
      friend void from_json(const Darabonba::Json& j, AnnotationFilter& obj) { 
        DARABONBA_PTR_FROM_JSON(conditions, conditions_);
      };
      AnnotationFilter() = default ;
      AnnotationFilter(const AnnotationFilter &) = default ;
      AnnotationFilter(AnnotationFilter &&) = default ;
      AnnotationFilter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AnnotationFilter() = default ;
      AnnotationFilter& operator=(const AnnotationFilter &) = default ;
      AnnotationFilter& operator=(AnnotationFilter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(key, key_);
          DARABONBA_PTR_TO_JSON(operator, operator_);
          DARABONBA_ANY_TO_JSON(value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(key, key_);
          DARABONBA_PTR_FROM_JSON(operator, operator_);
          DARABONBA_ANY_FROM_JSON(value, value_);
        };
        Conditions() = default ;
        Conditions(const Conditions &) = default ;
        Conditions(Conditions &&) = default ;
        Conditions(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~Conditions() = default ;
        Conditions& operator=(const Conditions &) = default ;
        Conditions& operator=(Conditions &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
        // key Field Functions 
        bool hasKey() const { return this->key_ != nullptr;};
        void deleteKey() { this->key_ = nullptr;};
        inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
        inline Conditions& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline Conditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline         const Darabonba::Json & getValue() const { DARABONBA_GET(value_) };
        Darabonba::Json & getValue() { DARABONBA_GET(value_) };
        inline Conditions& setValue(const Darabonba::Json & value) { DARABONBA_SET_VALUE(value_, value) };
        inline Conditions& setValue(Darabonba::Json && value) { DARABONBA_SET_RVALUE(value_, value) };


      protected:
        // The annotation key.
        shared_ptr<string> key_ {};
        // The operator.
        shared_ptr<string> operator_ {};
        // The annotation value.
        Darabonba::Json value_ {};
      };

      virtual bool empty() const override { return this->conditions_ == nullptr; };
      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<AnnotationFilter::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<AnnotationFilter::Conditions>) };
      inline vector<AnnotationFilter::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<AnnotationFilter::Conditions>) };
      inline AnnotationFilter& setConditions(const vector<AnnotationFilter::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline AnnotationFilter& setConditions(vector<AnnotationFilter::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    protected:
      // The annotation filter conditions.
      shared_ptr<vector<AnnotationFilter::Conditions>> conditions_ {};
    };

    virtual bool empty() const override { return this->annotationFilter_ == nullptr
        && this->from_ == nullptr && this->length_ == nullptr && this->maxOutputLength_ == nullptr && this->offset_ == nullptr && this->query_ == nullptr
        && this->to_ == nullptr && this->type_ == nullptr && this->version_ == nullptr; };
    // annotationFilter Field Functions 
    bool hasAnnotationFilter() const { return this->annotationFilter_ != nullptr;};
    void deleteAnnotationFilter() { this->annotationFilter_ = nullptr;};
    inline const ExecuteQueryRequest::AnnotationFilter & getAnnotationFilter() const { DARABONBA_PTR_GET_CONST(annotationFilter_, ExecuteQueryRequest::AnnotationFilter) };
    inline ExecuteQueryRequest::AnnotationFilter getAnnotationFilter() { DARABONBA_PTR_GET(annotationFilter_, ExecuteQueryRequest::AnnotationFilter) };
    inline ExecuteQueryRequest& setAnnotationFilter(const ExecuteQueryRequest::AnnotationFilter & annotationFilter) { DARABONBA_PTR_SET_VALUE(annotationFilter_, annotationFilter) };
    inline ExecuteQueryRequest& setAnnotationFilter(ExecuteQueryRequest::AnnotationFilter && annotationFilter) { DARABONBA_PTR_SET_RVALUE(annotationFilter_, annotationFilter) };


    // from Field Functions 
    bool hasFrom() const { return this->from_ != nullptr;};
    void deleteFrom() { this->from_ = nullptr;};
    inline int32_t getFrom() const { DARABONBA_PTR_GET_DEFAULT(from_, 0) };
    inline ExecuteQueryRequest& setFrom(int32_t from) { DARABONBA_PTR_SET_VALUE(from_, from) };


    // length Field Functions 
    bool hasLength() const { return this->length_ != nullptr;};
    void deleteLength() { this->length_ = nullptr;};
    inline int32_t getLength() const { DARABONBA_PTR_GET_DEFAULT(length_, 0) };
    inline ExecuteQueryRequest& setLength(int32_t length) { DARABONBA_PTR_SET_VALUE(length_, length) };


    // maxOutputLength Field Functions 
    bool hasMaxOutputLength() const { return this->maxOutputLength_ != nullptr;};
    void deleteMaxOutputLength() { this->maxOutputLength_ = nullptr;};
    inline int32_t getMaxOutputLength() const { DARABONBA_PTR_GET_DEFAULT(maxOutputLength_, 0) };
    inline ExecuteQueryRequest& setMaxOutputLength(int32_t maxOutputLength) { DARABONBA_PTR_SET_VALUE(maxOutputLength_, maxOutputLength) };


    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t getOffset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline ExecuteQueryRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // query Field Functions 
    bool hasQuery() const { return this->query_ != nullptr;};
    void deleteQuery() { this->query_ = nullptr;};
    inline string getQuery() const { DARABONBA_PTR_GET_DEFAULT(query_, "") };
    inline ExecuteQueryRequest& setQuery(string query) { DARABONBA_PTR_SET_VALUE(query_, query) };


    // to Field Functions 
    bool hasTo() const { return this->to_ != nullptr;};
    void deleteTo() { this->to_ = nullptr;};
    inline int32_t getTo() const { DARABONBA_PTR_GET_DEFAULT(to_, 0) };
    inline ExecuteQueryRequest& setTo(int32_t to) { DARABONBA_PTR_SET_VALUE(to_, to) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline ExecuteQueryRequest& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // version Field Functions 
    bool hasVersion() const { return this->version_ != nullptr;};
    void deleteVersion() { this->version_ = nullptr;};
    inline string getVersion() const { DARABONBA_PTR_GET_DEFAULT(version_, "") };
    inline ExecuteQueryRequest& setVersion(string version) { DARABONBA_PTR_SET_VALUE(version_, version) };


  protected:
    // The annotation filter.
    shared_ptr<ExecuteQueryRequest::AnnotationFilter> annotationFilter_ {};
    // The start time of the query.
    shared_ptr<int32_t> from_ {};
    // The page size.
    shared_ptr<int32_t> length_ {};
    // The maximum output length.
    shared_ptr<int32_t> maxOutputLength_ {};
    // The pagination offset.
    shared_ptr<int32_t> offset_ {};
    // The query entered by the user.
    // 
    // This parameter is required.
    shared_ptr<string> query_ {};
    // The end time of the query.
    shared_ptr<int32_t> to_ {};
    // The statement type. Currently, only SQL is supported.
    // 
    // This parameter is required.
    shared_ptr<string> type_ {};
    // The dataset version.
    shared_ptr<string> version_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace AgentLoop20260520
#endif
