// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTMULTIDIMTABLERECORDSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Aliding20230426
{
namespace Models
{
  class ListMultiDimTableRecordsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListMultiDimTableRecordsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(BaseId, baseId_);
      DARABONBA_PTR_TO_JSON(Filter, filter_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_TO_JSON(TenantContext, tenantContext_);
    };
    friend void from_json(const Darabonba::Json& j, ListMultiDimTableRecordsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(BaseId, baseId_);
      DARABONBA_PTR_FROM_JSON(Filter, filter_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(SheetIdOrName, sheetIdOrName_);
      DARABONBA_PTR_FROM_JSON(TenantContext, tenantContext_);
    };
    ListMultiDimTableRecordsRequest() = default ;
    ListMultiDimTableRecordsRequest(const ListMultiDimTableRecordsRequest &) = default ;
    ListMultiDimTableRecordsRequest(ListMultiDimTableRecordsRequest &&) = default ;
    ListMultiDimTableRecordsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListMultiDimTableRecordsRequest() = default ;
    ListMultiDimTableRecordsRequest& operator=(const ListMultiDimTableRecordsRequest &) = default ;
    ListMultiDimTableRecordsRequest& operator=(ListMultiDimTableRecordsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TenantContext : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TenantContext& obj) { 
        DARABONBA_PTR_TO_JSON(tenantId, tenantId_);
      };
      friend void from_json(const Darabonba::Json& j, TenantContext& obj) { 
        DARABONBA_PTR_FROM_JSON(tenantId, tenantId_);
      };
      TenantContext() = default ;
      TenantContext(const TenantContext &) = default ;
      TenantContext(TenantContext &&) = default ;
      TenantContext(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TenantContext() = default ;
      TenantContext& operator=(const TenantContext &) = default ;
      TenantContext& operator=(TenantContext &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->tenantId_ == nullptr; };
      // tenantId Field Functions 
      bool hasTenantId() const { return this->tenantId_ != nullptr;};
      void deleteTenantId() { this->tenantId_ = nullptr;};
      inline string getTenantId() const { DARABONBA_PTR_GET_DEFAULT(tenantId_, "") };
      inline TenantContext& setTenantId(string tenantId) { DARABONBA_PTR_SET_VALUE(tenantId_, tenantId) };


    protected:
      shared_ptr<string> tenantId_ {};
    };

    class Filter : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filter& obj) { 
        DARABONBA_PTR_TO_JSON(Combination, combination_);
        DARABONBA_PTR_TO_JSON(Conditions, conditions_);
      };
      friend void from_json(const Darabonba::Json& j, Filter& obj) { 
        DARABONBA_PTR_FROM_JSON(Combination, combination_);
        DARABONBA_PTR_FROM_JSON(Conditions, conditions_);
      };
      Filter() = default ;
      Filter(const Filter &) = default ;
      Filter(Filter &&) = default ;
      Filter(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filter() = default ;
      Filter& operator=(const Filter &) = default ;
      Filter& operator=(Filter &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class Conditions : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const Conditions& obj) { 
          DARABONBA_PTR_TO_JSON(Field, field_);
          DARABONBA_PTR_TO_JSON(Operator, operator_);
          DARABONBA_PTR_TO_JSON(Value, value_);
        };
        friend void from_json(const Darabonba::Json& j, Conditions& obj) { 
          DARABONBA_PTR_FROM_JSON(Field, field_);
          DARABONBA_PTR_FROM_JSON(Operator, operator_);
          DARABONBA_PTR_FROM_JSON(Value, value_);
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
        virtual bool empty() const override { return this->field_ == nullptr
        && this->operator_ == nullptr && this->value_ == nullptr; };
        // field Field Functions 
        bool hasField() const { return this->field_ != nullptr;};
        void deleteField() { this->field_ = nullptr;};
        inline string getField() const { DARABONBA_PTR_GET_DEFAULT(field_, "") };
        inline Conditions& setField(string field) { DARABONBA_PTR_SET_VALUE(field_, field) };


        // operator Field Functions 
        bool hasOperator() const { return this->operator_ != nullptr;};
        void deleteOperator() { this->operator_ = nullptr;};
        inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
        inline Conditions& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


        // value Field Functions 
        bool hasValue() const { return this->value_ != nullptr;};
        void deleteValue() { this->value_ = nullptr;};
        inline const vector<Darabonba::Json> & getValue() const { DARABONBA_PTR_GET_CONST(value_, vector<Darabonba::Json>) };
        inline vector<Darabonba::Json> getValue() { DARABONBA_PTR_GET(value_, vector<Darabonba::Json>) };
        inline Conditions& setValue(const vector<Darabonba::Json> & value) { DARABONBA_PTR_SET_VALUE(value_, value) };
        inline Conditions& setValue(vector<Darabonba::Json> && value) { DARABONBA_PTR_SET_RVALUE(value_, value) };


      protected:
        shared_ptr<string> field_ {};
        shared_ptr<string> operator_ {};
        shared_ptr<vector<Darabonba::Json>> value_ {};
      };

      virtual bool empty() const override { return this->combination_ == nullptr
        && this->conditions_ == nullptr; };
      // combination Field Functions 
      bool hasCombination() const { return this->combination_ != nullptr;};
      void deleteCombination() { this->combination_ = nullptr;};
      inline string getCombination() const { DARABONBA_PTR_GET_DEFAULT(combination_, "") };
      inline Filter& setCombination(string combination) { DARABONBA_PTR_SET_VALUE(combination_, combination) };


      // conditions Field Functions 
      bool hasConditions() const { return this->conditions_ != nullptr;};
      void deleteConditions() { this->conditions_ = nullptr;};
      inline const vector<Filter::Conditions> & getConditions() const { DARABONBA_PTR_GET_CONST(conditions_, vector<Filter::Conditions>) };
      inline vector<Filter::Conditions> getConditions() { DARABONBA_PTR_GET(conditions_, vector<Filter::Conditions>) };
      inline Filter& setConditions(const vector<Filter::Conditions> & conditions) { DARABONBA_PTR_SET_VALUE(conditions_, conditions) };
      inline Filter& setConditions(vector<Filter::Conditions> && conditions) { DARABONBA_PTR_SET_RVALUE(conditions_, conditions) };


    protected:
      shared_ptr<string> combination_ {};
      shared_ptr<vector<Filter::Conditions>> conditions_ {};
    };

    virtual bool empty() const override { return this->baseId_ == nullptr
        && this->filter_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->sheetIdOrName_ == nullptr && this->tenantContext_ == nullptr; };
    // baseId Field Functions 
    bool hasBaseId() const { return this->baseId_ != nullptr;};
    void deleteBaseId() { this->baseId_ = nullptr;};
    inline string getBaseId() const { DARABONBA_PTR_GET_DEFAULT(baseId_, "") };
    inline ListMultiDimTableRecordsRequest& setBaseId(string baseId) { DARABONBA_PTR_SET_VALUE(baseId_, baseId) };


    // filter Field Functions 
    bool hasFilter() const { return this->filter_ != nullptr;};
    void deleteFilter() { this->filter_ = nullptr;};
    inline const ListMultiDimTableRecordsRequest::Filter & getFilter() const { DARABONBA_PTR_GET_CONST(filter_, ListMultiDimTableRecordsRequest::Filter) };
    inline ListMultiDimTableRecordsRequest::Filter getFilter() { DARABONBA_PTR_GET(filter_, ListMultiDimTableRecordsRequest::Filter) };
    inline ListMultiDimTableRecordsRequest& setFilter(const ListMultiDimTableRecordsRequest::Filter & filter) { DARABONBA_PTR_SET_VALUE(filter_, filter) };
    inline ListMultiDimTableRecordsRequest& setFilter(ListMultiDimTableRecordsRequest::Filter && filter) { DARABONBA_PTR_SET_RVALUE(filter_, filter) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListMultiDimTableRecordsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListMultiDimTableRecordsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // sheetIdOrName Field Functions 
    bool hasSheetIdOrName() const { return this->sheetIdOrName_ != nullptr;};
    void deleteSheetIdOrName() { this->sheetIdOrName_ = nullptr;};
    inline string getSheetIdOrName() const { DARABONBA_PTR_GET_DEFAULT(sheetIdOrName_, "") };
    inline ListMultiDimTableRecordsRequest& setSheetIdOrName(string sheetIdOrName) { DARABONBA_PTR_SET_VALUE(sheetIdOrName_, sheetIdOrName) };


    // tenantContext Field Functions 
    bool hasTenantContext() const { return this->tenantContext_ != nullptr;};
    void deleteTenantContext() { this->tenantContext_ = nullptr;};
    inline const ListMultiDimTableRecordsRequest::TenantContext & getTenantContext() const { DARABONBA_PTR_GET_CONST(tenantContext_, ListMultiDimTableRecordsRequest::TenantContext) };
    inline ListMultiDimTableRecordsRequest::TenantContext getTenantContext() { DARABONBA_PTR_GET(tenantContext_, ListMultiDimTableRecordsRequest::TenantContext) };
    inline ListMultiDimTableRecordsRequest& setTenantContext(const ListMultiDimTableRecordsRequest::TenantContext & tenantContext) { DARABONBA_PTR_SET_VALUE(tenantContext_, tenantContext) };
    inline ListMultiDimTableRecordsRequest& setTenantContext(ListMultiDimTableRecordsRequest::TenantContext && tenantContext) { DARABONBA_PTR_SET_RVALUE(tenantContext_, tenantContext) };


  protected:
    // This parameter is required.
    shared_ptr<string> baseId_ {};
    shared_ptr<ListMultiDimTableRecordsRequest::Filter> filter_ {};
    shared_ptr<int32_t> maxResults_ {};
    shared_ptr<string> nextToken_ {};
    // This parameter is required.
    shared_ptr<string> sheetIdOrName_ {};
    shared_ptr<ListMultiDimTableRecordsRequest::TenantContext> tenantContext_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Aliding20230426
#endif
