// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePolicyBindingsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIdsShrink_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIdsShrink_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DescribePolicyBindingsShrinkRequest() = default ;
    DescribePolicyBindingsShrinkRequest(const DescribePolicyBindingsShrinkRequest &) = default ;
    DescribePolicyBindingsShrinkRequest(DescribePolicyBindingsShrinkRequest &&) = default ;
    DescribePolicyBindingsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsShrinkRequest() = default ;
    DescribePolicyBindingsShrinkRequest& operator=(const DescribePolicyBindingsShrinkRequest &) = default ;
    DescribePolicyBindingsShrinkRequest& operator=(DescribePolicyBindingsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Filters : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Filters& obj) { 
        DARABONBA_PTR_TO_JSON(Key, key_);
        DARABONBA_PTR_TO_JSON(Operator, operator_);
        DARABONBA_PTR_TO_JSON(Values, values_);
      };
      friend void from_json(const Darabonba::Json& j, Filters& obj) { 
        DARABONBA_PTR_FROM_JSON(Key, key_);
        DARABONBA_PTR_FROM_JSON(Operator, operator_);
        DARABONBA_PTR_FROM_JSON(Values, values_);
      };
      Filters() = default ;
      Filters(const Filters &) = default ;
      Filters(Filters &&) = default ;
      Filters(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Filters() = default ;
      Filters& operator=(const Filters &) = default ;
      Filters& operator=(Filters &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->key_ == nullptr
        && this->operator_ == nullptr && this->values_ == nullptr; };
      // key Field Functions 
      bool hasKey() const { return this->key_ != nullptr;};
      void deleteKey() { this->key_ = nullptr;};
      inline string getKey() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
      inline Filters& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


      // operator Field Functions 
      bool hasOperator() const { return this->operator_ != nullptr;};
      void deleteOperator() { this->operator_ = nullptr;};
      inline string getOperator() const { DARABONBA_PTR_GET_DEFAULT(operator_, "") };
      inline Filters& setOperator(string _operator) { DARABONBA_PTR_SET_VALUE(operator_, _operator) };


      // values Field Functions 
      bool hasValues() const { return this->values_ != nullptr;};
      void deleteValues() { this->values_ = nullptr;};
      inline const vector<string> & getValues() const { DARABONBA_PTR_GET_CONST(values_, vector<string>) };
      inline vector<string> getValues() { DARABONBA_PTR_GET(values_, vector<string>) };
      inline Filters& setValues(const vector<string> & values) { DARABONBA_PTR_SET_VALUE(values_, values) };
      inline Filters& setValues(vector<string> && values) { DARABONBA_PTR_SET_RVALUE(values_, values) };


    protected:
      // The key in the query filter. Valid values:
      // 
      // - **PolicyId**: backup policy ID
      // - **DataSourceId**: ECS instance ID
      // - **DataSourceType**: data source type
      shared_ptr<string> key_ {};
      // The matching method. Default value: IN. The matching operation (Operator) supported by the Key and Value in the filter. Valid values:
      // 
      // - **EQUAL**: equal to
      // - **NOT_EQUAL**: not equal to
      // - **GREATER_THAN**: greater than
      // - **GREATER_THAN_OR_EQUAL**: greater than or equal to
      // - **LESS_THAN**: less than
      // - **LESS_THAN_OR_EQUAL**: less than or equal to
      // - **BETWEEN**: range. The value is a JSON array `[lower bound, upper bound]`.
      // - **IN**: in a set. The value is an array.
      shared_ptr<string> operator_ {};
      // The values to match in the query filter.
      shared_ptr<vector<string>> values_ {};
    };

    virtual bool empty() const override { return this->dataSourceIdsShrink_ == nullptr
        && this->filters_ == nullptr && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->policyId_ == nullptr && this->sourceType_ == nullptr; };
    // dataSourceIdsShrink Field Functions 
    bool hasDataSourceIdsShrink() const { return this->dataSourceIdsShrink_ != nullptr;};
    void deleteDataSourceIdsShrink() { this->dataSourceIdsShrink_ = nullptr;};
    inline string getDataSourceIdsShrink() const { DARABONBA_PTR_GET_DEFAULT(dataSourceIdsShrink_, "") };
    inline DescribePolicyBindingsShrinkRequest& setDataSourceIdsShrink(string dataSourceIdsShrink) { DARABONBA_PTR_SET_VALUE(dataSourceIdsShrink_, dataSourceIdsShrink) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribePolicyBindingsShrinkRequest::Filters> & getFilters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribePolicyBindingsShrinkRequest::Filters>) };
    inline vector<DescribePolicyBindingsShrinkRequest::Filters> getFilters() { DARABONBA_PTR_GET(filters_, vector<DescribePolicyBindingsShrinkRequest::Filters>) };
    inline DescribePolicyBindingsShrinkRequest& setFilters(const vector<DescribePolicyBindingsShrinkRequest::Filters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribePolicyBindingsShrinkRequest& setFilters(vector<DescribePolicyBindingsShrinkRequest::Filters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePolicyBindingsShrinkRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePolicyBindingsShrinkRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string getPolicyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribePolicyBindingsShrinkRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string getSourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribePolicyBindingsShrinkRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // The list of data source IDs.
    shared_ptr<string> dataSourceIdsShrink_ {};
    // The query filters.
    shared_ptr<vector<DescribePolicyBindingsShrinkRequest::Filters>> filters_ {};
    // The number of results for each query.
    // 
    // Valid values: 10 to 100. Default value: 10.
    shared_ptr<int32_t> maxResults_ {};
    // The token required to obtain the next page of policy-data source associations.
    shared_ptr<string> nextToken_ {};
    // The policy ID.
    shared_ptr<string> policyId_ {};
    // The data source type. Valid values:
    // - **UDM_ECS**: ECS instance backup.
    // - **OSS**: OSS backup.
    // - **NAS**: Alibaba Cloud NAS backup.
    // - **COMMON_NAS**: On-premises NAS backup.
    // - **ECS_FILE**: ECS File Backup Essential Edition.
    // - **File**: On-premises file backup.
    // - **COMMON_FILE_SYSTEM**: CPFS backup.
    // - **OTS**: Tablestore backup.
    shared_ptr<string> sourceType_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
