// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODYRESULTDATACONTENTRETURNFIELDS_HPP_
#define ALIBABACLOUD_MODELS_QUERYDATASERVICELISTRESPONSEBODYRESULTDATACONTENTRETURNFIELDS_HPP_
#include <darabonba/Core.hpp>
#include <alibabacloud/models/QueryDataServiceListResponseBodyResultDataContentReturnFieldsField.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace QuickbiPublic20220101
{
namespace Models
{
  class QueryDataServiceListResponseBodyResultDataContentReturnFields : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryDataServiceListResponseBodyResultDataContentReturnFields& obj) { 
      DARABONBA_PTR_TO_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(Desc, desc_);
      DARABONBA_PTR_TO_JSON(Field, field_);
      DARABONBA_PTR_TO_JSON(Orderby, orderby_);
    };
    friend void from_json(const Darabonba::Json& j, QueryDataServiceListResponseBodyResultDataContentReturnFields& obj) { 
      DARABONBA_PTR_FROM_JSON(Aggregator, aggregator_);
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(Desc, desc_);
      DARABONBA_PTR_FROM_JSON(Field, field_);
      DARABONBA_PTR_FROM_JSON(Orderby, orderby_);
    };
    QueryDataServiceListResponseBodyResultDataContentReturnFields() = default ;
    QueryDataServiceListResponseBodyResultDataContentReturnFields(const QueryDataServiceListResponseBodyResultDataContentReturnFields &) = default ;
    QueryDataServiceListResponseBodyResultDataContentReturnFields(QueryDataServiceListResponseBodyResultDataContentReturnFields &&) = default ;
    QueryDataServiceListResponseBodyResultDataContentReturnFields(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryDataServiceListResponseBodyResultDataContentReturnFields() = default ;
    QueryDataServiceListResponseBodyResultDataContentReturnFields& operator=(const QueryDataServiceListResponseBodyResultDataContentReturnFields &) = default ;
    QueryDataServiceListResponseBodyResultDataContentReturnFields& operator=(QueryDataServiceListResponseBodyResultDataContentReturnFields &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->aggregator_ == nullptr
        && return this->alias_ == nullptr && return this->desc_ == nullptr && return this->field_ == nullptr && return this->orderby_ == nullptr; };
    // aggregator Field Functions 
    bool hasAggregator() const { return this->aggregator_ != nullptr;};
    void deleteAggregator() { this->aggregator_ = nullptr;};
    inline string aggregator() const { DARABONBA_PTR_GET_DEFAULT(aggregator_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFields& setAggregator(string aggregator) { DARABONBA_PTR_SET_VALUE(aggregator_, aggregator) };


    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFields& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // desc Field Functions 
    bool hasDesc() const { return this->desc_ != nullptr;};
    void deleteDesc() { this->desc_ = nullptr;};
    inline string desc() const { DARABONBA_PTR_GET_DEFAULT(desc_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFields& setDesc(string desc) { DARABONBA_PTR_SET_VALUE(desc_, desc) };


    // field Field Functions 
    bool hasField() const { return this->field_ != nullptr;};
    void deleteField() { this->field_ = nullptr;};
    inline const Models::QueryDataServiceListResponseBodyResultDataContentReturnFieldsField & field() const { DARABONBA_PTR_GET_CONST(field_, Models::QueryDataServiceListResponseBodyResultDataContentReturnFieldsField) };
    inline Models::QueryDataServiceListResponseBodyResultDataContentReturnFieldsField field() { DARABONBA_PTR_GET(field_, Models::QueryDataServiceListResponseBodyResultDataContentReturnFieldsField) };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFields& setField(const Models::QueryDataServiceListResponseBodyResultDataContentReturnFieldsField & field) { DARABONBA_PTR_SET_VALUE(field_, field) };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFields& setField(Models::QueryDataServiceListResponseBodyResultDataContentReturnFieldsField && field) { DARABONBA_PTR_SET_RVALUE(field_, field) };


    // orderby Field Functions 
    bool hasOrderby() const { return this->orderby_ != nullptr;};
    void deleteOrderby() { this->orderby_ = nullptr;};
    inline string orderby() const { DARABONBA_PTR_GET_DEFAULT(orderby_, "") };
    inline QueryDataServiceListResponseBodyResultDataContentReturnFields& setOrderby(string orderby) { DARABONBA_PTR_SET_VALUE(orderby_, orderby) };


  protected:
    // Aggregation operator. For example, SUM, AVG, and MAX.
    std::shared_ptr<string> aggregator_ = nullptr;
    // Field parameter name.
    std::shared_ptr<string> alias_ = nullptr;
    // Remark for the returned field.
    std::shared_ptr<string> desc_ = nullptr;
    // Corresponding cube field information.
    std::shared_ptr<Models::QueryDataServiceListResponseBodyResultDataContentReturnFieldsField> field_ = nullptr;
    // Sorting.
    // 
    // - asc: Ascending
    // - desc: Descending
    // - no: No sorting
    std::shared_ptr<string> orderby_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace QuickbiPublic20220101
#endif
