// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_QUERYCOSTCENTERRULERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_QUERYCOSTCENTERRULERESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace BssOpenApi20230930
{
namespace Models
{
  class QueryCostCenterRuleResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const QueryCostCenterRuleResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_TO_JSON(FilterExpression, filterExpression_);
      DARABONBA_PTR_TO_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_TO_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(IsDeleted, isDeleted_);
      DARABONBA_ANY_TO_JSON(Metadata, metadata_);
      DARABONBA_PTR_TO_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(RootCostCenterId, rootCostCenterId_);
      DARABONBA_PTR_TO_JSON(Status, status_);
    };
    friend void from_json(const Darabonba::Json& j, QueryCostCenterRuleResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CostCenterId, costCenterId_);
      DARABONBA_PTR_FROM_JSON(FilterExpression, filterExpression_);
      DARABONBA_PTR_FROM_JSON(GmtCreate, gmtCreate_);
      DARABONBA_PTR_FROM_JSON(GmtModified, gmtModified_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(IsDeleted, isDeleted_);
      DARABONBA_ANY_FROM_JSON(Metadata, metadata_);
      DARABONBA_PTR_FROM_JSON(OwnerAccountId, ownerAccountId_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(RootCostCenterId, rootCostCenterId_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
    };
    QueryCostCenterRuleResponseBody() = default ;
    QueryCostCenterRuleResponseBody(const QueryCostCenterRuleResponseBody &) = default ;
    QueryCostCenterRuleResponseBody(QueryCostCenterRuleResponseBody &&) = default ;
    QueryCostCenterRuleResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~QueryCostCenterRuleResponseBody() = default ;
    QueryCostCenterRuleResponseBody& operator=(const QueryCostCenterRuleResponseBody &) = default ;
    QueryCostCenterRuleResponseBody& operator=(QueryCostCenterRuleResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class FilterExpression : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const FilterExpression& obj) { 
        DARABONBA_PTR_TO_JSON(ExpressionType, expressionType_);
        DARABONBA_PTR_TO_JSON(FilterValues, filterValues_);
        DARABONBA_ANY_TO_JSON(Operand, operand_);
        DARABONBA_PTR_TO_JSON(Operands, operands_);
        DARABONBA_PTR_TO_JSON(OperatorType, operatorType_);
      };
      friend void from_json(const Darabonba::Json& j, FilterExpression& obj) { 
        DARABONBA_PTR_FROM_JSON(ExpressionType, expressionType_);
        DARABONBA_PTR_FROM_JSON(FilterValues, filterValues_);
        DARABONBA_ANY_FROM_JSON(Operand, operand_);
        DARABONBA_PTR_FROM_JSON(Operands, operands_);
        DARABONBA_PTR_FROM_JSON(OperatorType, operatorType_);
      };
      FilterExpression() = default ;
      FilterExpression(const FilterExpression &) = default ;
      FilterExpression(FilterExpression &&) = default ;
      FilterExpression(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~FilterExpression() = default ;
      FilterExpression& operator=(const FilterExpression &) = default ;
      FilterExpression& operator=(FilterExpression &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class FilterValues : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const FilterValues& obj) { 
          DARABONBA_PTR_TO_JSON(Code, code_);
          DARABONBA_PTR_TO_JSON(CodeName, codeName_);
          DARABONBA_PTR_TO_JSON(SelectType, selectType_);
          DARABONBA_PTR_TO_JSON(Values, values_);
        };
        friend void from_json(const Darabonba::Json& j, FilterValues& obj) { 
          DARABONBA_PTR_FROM_JSON(Code, code_);
          DARABONBA_PTR_FROM_JSON(CodeName, codeName_);
          DARABONBA_PTR_FROM_JSON(SelectType, selectType_);
          DARABONBA_PTR_FROM_JSON(Values, values_);
        };
        FilterValues() = default ;
        FilterValues(const FilterValues &) = default ;
        FilterValues(FilterValues &&) = default ;
        FilterValues(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~FilterValues() = default ;
        FilterValues& operator=(const FilterValues &) = default ;
        FilterValues& operator=(FilterValues &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->code_ == nullptr
        && this->codeName_ == nullptr && this->selectType_ == nullptr && this->values_ == nullptr; };
        // code Field Functions 
        bool hasCode() const { return this->code_ != nullptr;};
        void deleteCode() { this->code_ = nullptr;};
        inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
        inline FilterValues& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


        // codeName Field Functions 
        bool hasCodeName() const { return this->codeName_ != nullptr;};
        void deleteCodeName() { this->codeName_ = nullptr;};
        inline string getCodeName() const { DARABONBA_PTR_GET_DEFAULT(codeName_, "") };
        inline FilterValues& setCodeName(string codeName) { DARABONBA_PTR_SET_VALUE(codeName_, codeName) };


        // selectType Field Functions 
        bool hasSelectType() const { return this->selectType_ != nullptr;};
        void deleteSelectType() { this->selectType_ = nullptr;};
        inline string getSelectType() const { DARABONBA_PTR_GET_DEFAULT(selectType_, "") };
        inline FilterValues& setSelectType(string selectType) { DARABONBA_PTR_SET_VALUE(selectType_, selectType) };


        // values Field Functions 
        bool hasValues() const { return this->values_ != nullptr;};
        void deleteValues() { this->values_ = nullptr;};
        inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
        inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
        inline FilterValues& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
        inline FilterValues& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


      protected:
        shared_ptr<string> code_ {};
        shared_ptr<string> codeName_ {};
        shared_ptr<string> selectType_ {};
        shared_ptr<vector<string>> values_ {};
      };

      virtual bool empty() const override { return this->expressionType_ == nullptr
        && this->filterValues_ == nullptr && this->operand_ == nullptr && this->operands_ == nullptr && this->operatorType_ == nullptr; };
      // expressionType Field Functions 
      bool hasExpressionType() const { return this->expressionType_ != nullptr;};
      void deleteExpressionType() { this->expressionType_ = nullptr;};
      inline string getExpressionType() const { DARABONBA_PTR_GET_DEFAULT(expressionType_, "") };
      inline FilterExpression& setExpressionType(string expressionType) { DARABONBA_PTR_SET_VALUE(expressionType_, expressionType) };


      // filterValues Field Functions 
      bool hasFilterValues() const { return this->filterValues_ != nullptr;};
      void deleteFilterValues() { this->filterValues_ = nullptr;};
      inline const FilterExpression::FilterValues & getFilterValues() const { DARABONBA_PTR_GET_CONST(filterValues_, FilterExpression::FilterValues) };
      inline FilterExpression::FilterValues getFilterValues() { DARABONBA_PTR_GET(filterValues_, FilterExpression::FilterValues) };
      inline FilterExpression& setFilterValues(const FilterExpression::FilterValues & filterValues) { DARABONBA_PTR_SET_VALUE(filterValues_, filterValues) };
      inline FilterExpression& setFilterValues(FilterExpression::FilterValues && filterValues) { DARABONBA_PTR_SET_RVALUE(filterValues_, filterValues) };


      // operand Field Functions 
      bool hasOperand() const { return this->operand_ != nullptr;};
      void deleteOperand() { this->operand_ = nullptr;};
      inline       const Darabonba::Json & getOperand() const { DARABONBA_GET(operand_) };
      Darabonba::Json & getOperand() { DARABONBA_GET(operand_) };
      inline FilterExpression& setOperand(const Darabonba::Json & operand) { DARABONBA_SET_VALUE(operand_, operand) };
      inline FilterExpression& setOperand(Darabonba::Json && operand) { DARABONBA_SET_RVALUE(operand_, operand) };


      // operands Field Functions 
      bool hasOperands() const { return this->operands_ != nullptr;};
      void deleteOperands() { this->operands_ = nullptr;};
      inline const vector<Darabonba::Json> & getOperands() const { DARABONBA_PTR_GET_CONST(operands_, vector<Darabonba::Json>) };
      inline vector<Darabonba::Json> getOperands() { DARABONBA_PTR_GET(operands_, vector<Darabonba::Json>) };
      inline FilterExpression& setOperands(const vector<Darabonba::Json> & operands) { DARABONBA_PTR_SET_VALUE(operands_, operands) };
      inline FilterExpression& setOperands(vector<Darabonba::Json> && operands) { DARABONBA_PTR_SET_RVALUE(operands_, operands) };


      // operatorType Field Functions 
      bool hasOperatorType() const { return this->operatorType_ != nullptr;};
      void deleteOperatorType() { this->operatorType_ = nullptr;};
      inline string getOperatorType() const { DARABONBA_PTR_GET_DEFAULT(operatorType_, "") };
      inline FilterExpression& setOperatorType(string operatorType) { DARABONBA_PTR_SET_VALUE(operatorType_, operatorType) };


    protected:
      shared_ptr<string> expressionType_ {};
      shared_ptr<FilterExpression::FilterValues> filterValues_ {};
      Darabonba::Json operand_ {};
      shared_ptr<vector<Darabonba::Json>> operands_ {};
      shared_ptr<string> operatorType_ {};
    };

    virtual bool empty() const override { return this->costCenterId_ == nullptr
        && this->filterExpression_ == nullptr && this->gmtCreate_ == nullptr && this->gmtModified_ == nullptr && this->id_ == nullptr && this->isDeleted_ == nullptr
        && this->metadata_ == nullptr && this->ownerAccountId_ == nullptr && this->requestId_ == nullptr && this->rootCostCenterId_ == nullptr && this->status_ == nullptr; };
    // costCenterId Field Functions 
    bool hasCostCenterId() const { return this->costCenterId_ != nullptr;};
    void deleteCostCenterId() { this->costCenterId_ = nullptr;};
    inline int64_t getCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(costCenterId_, 0L) };
    inline QueryCostCenterRuleResponseBody& setCostCenterId(int64_t costCenterId) { DARABONBA_PTR_SET_VALUE(costCenterId_, costCenterId) };


    // filterExpression Field Functions 
    bool hasFilterExpression() const { return this->filterExpression_ != nullptr;};
    void deleteFilterExpression() { this->filterExpression_ = nullptr;};
    inline const QueryCostCenterRuleResponseBody::FilterExpression & getFilterExpression() const { DARABONBA_PTR_GET_CONST(filterExpression_, QueryCostCenterRuleResponseBody::FilterExpression) };
    inline QueryCostCenterRuleResponseBody::FilterExpression getFilterExpression() { DARABONBA_PTR_GET(filterExpression_, QueryCostCenterRuleResponseBody::FilterExpression) };
    inline QueryCostCenterRuleResponseBody& setFilterExpression(const QueryCostCenterRuleResponseBody::FilterExpression & filterExpression) { DARABONBA_PTR_SET_VALUE(filterExpression_, filterExpression) };
    inline QueryCostCenterRuleResponseBody& setFilterExpression(QueryCostCenterRuleResponseBody::FilterExpression && filterExpression) { DARABONBA_PTR_SET_RVALUE(filterExpression_, filterExpression) };


    // gmtCreate Field Functions 
    bool hasGmtCreate() const { return this->gmtCreate_ != nullptr;};
    void deleteGmtCreate() { this->gmtCreate_ = nullptr;};
    inline string getGmtCreate() const { DARABONBA_PTR_GET_DEFAULT(gmtCreate_, "") };
    inline QueryCostCenterRuleResponseBody& setGmtCreate(string gmtCreate) { DARABONBA_PTR_SET_VALUE(gmtCreate_, gmtCreate) };


    // gmtModified Field Functions 
    bool hasGmtModified() const { return this->gmtModified_ != nullptr;};
    void deleteGmtModified() { this->gmtModified_ = nullptr;};
    inline string getGmtModified() const { DARABONBA_PTR_GET_DEFAULT(gmtModified_, "") };
    inline QueryCostCenterRuleResponseBody& setGmtModified(string gmtModified) { DARABONBA_PTR_SET_VALUE(gmtModified_, gmtModified) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline int64_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0L) };
    inline QueryCostCenterRuleResponseBody& setId(int64_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // isDeleted Field Functions 
    bool hasIsDeleted() const { return this->isDeleted_ != nullptr;};
    void deleteIsDeleted() { this->isDeleted_ = nullptr;};
    inline int32_t getIsDeleted() const { DARABONBA_PTR_GET_DEFAULT(isDeleted_, 0) };
    inline QueryCostCenterRuleResponseBody& setIsDeleted(int32_t isDeleted) { DARABONBA_PTR_SET_VALUE(isDeleted_, isDeleted) };


    // metadata Field Functions 
    bool hasMetadata() const { return this->metadata_ != nullptr;};
    void deleteMetadata() { this->metadata_ = nullptr;};
    inline     const Darabonba::Json & getMetadata() const { DARABONBA_GET(metadata_) };
    Darabonba::Json & getMetadata() { DARABONBA_GET(metadata_) };
    inline QueryCostCenterRuleResponseBody& setMetadata(const Darabonba::Json & metadata) { DARABONBA_SET_VALUE(metadata_, metadata) };
    inline QueryCostCenterRuleResponseBody& setMetadata(Darabonba::Json && metadata) { DARABONBA_SET_RVALUE(metadata_, metadata) };


    // ownerAccountId Field Functions 
    bool hasOwnerAccountId() const { return this->ownerAccountId_ != nullptr;};
    void deleteOwnerAccountId() { this->ownerAccountId_ = nullptr;};
    inline int64_t getOwnerAccountId() const { DARABONBA_PTR_GET_DEFAULT(ownerAccountId_, 0L) };
    inline QueryCostCenterRuleResponseBody& setOwnerAccountId(int64_t ownerAccountId) { DARABONBA_PTR_SET_VALUE(ownerAccountId_, ownerAccountId) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline QueryCostCenterRuleResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // rootCostCenterId Field Functions 
    bool hasRootCostCenterId() const { return this->rootCostCenterId_ != nullptr;};
    void deleteRootCostCenterId() { this->rootCostCenterId_ = nullptr;};
    inline int64_t getRootCostCenterId() const { DARABONBA_PTR_GET_DEFAULT(rootCostCenterId_, 0L) };
    inline QueryCostCenterRuleResponseBody& setRootCostCenterId(int64_t rootCostCenterId) { DARABONBA_PTR_SET_VALUE(rootCostCenterId_, rootCostCenterId) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline QueryCostCenterRuleResponseBody& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


  protected:
    shared_ptr<int64_t> costCenterId_ {};
    shared_ptr<QueryCostCenterRuleResponseBody::FilterExpression> filterExpression_ {};
    shared_ptr<string> gmtCreate_ {};
    shared_ptr<string> gmtModified_ {};
    shared_ptr<int64_t> id_ {};
    shared_ptr<int32_t> isDeleted_ {};
    Darabonba::Json metadata_ {};
    shared_ptr<int64_t> ownerAccountId_ {};
    // Id of the request
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> rootCostCenterId_ {};
    shared_ptr<string> status_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace BssOpenApi20230930
#endif
