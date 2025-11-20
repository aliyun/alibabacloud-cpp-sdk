// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPOLICYBINDINGSREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribePolicyBindingsRequestFilters.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Hbr20170908
{
namespace Models
{
  class DescribePolicyBindingsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePolicyBindingsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_TO_JSON(Filters, filters_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PolicyId, policyId_);
      DARABONBA_PTR_TO_JSON(SourceType, sourceType_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePolicyBindingsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(DataSourceIds, dataSourceIds_);
      DARABONBA_PTR_FROM_JSON(Filters, filters_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PolicyId, policyId_);
      DARABONBA_PTR_FROM_JSON(SourceType, sourceType_);
    };
    DescribePolicyBindingsRequest() = default ;
    DescribePolicyBindingsRequest(const DescribePolicyBindingsRequest &) = default ;
    DescribePolicyBindingsRequest(DescribePolicyBindingsRequest &&) = default ;
    DescribePolicyBindingsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePolicyBindingsRequest() = default ;
    DescribePolicyBindingsRequest& operator=(const DescribePolicyBindingsRequest &) = default ;
    DescribePolicyBindingsRequest& operator=(DescribePolicyBindingsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->dataSourceIds_ == nullptr
        && return this->filters_ == nullptr && return this->maxResults_ == nullptr && return this->nextToken_ == nullptr && return this->policyId_ == nullptr && return this->sourceType_ == nullptr; };
    // dataSourceIds Field Functions 
    bool hasDataSourceIds() const { return this->dataSourceIds_ != nullptr;};
    void deleteDataSourceIds() { this->dataSourceIds_ = nullptr;};
    inline const vector<string> & dataSourceIds() const { DARABONBA_PTR_GET_CONST(dataSourceIds_, vector<string>) };
    inline vector<string> dataSourceIds() { DARABONBA_PTR_GET(dataSourceIds_, vector<string>) };
    inline DescribePolicyBindingsRequest& setDataSourceIds(const vector<string> & dataSourceIds) { DARABONBA_PTR_SET_VALUE(dataSourceIds_, dataSourceIds) };
    inline DescribePolicyBindingsRequest& setDataSourceIds(vector<string> && dataSourceIds) { DARABONBA_PTR_SET_RVALUE(dataSourceIds_, dataSourceIds) };


    // filters Field Functions 
    bool hasFilters() const { return this->filters_ != nullptr;};
    void deleteFilters() { this->filters_ = nullptr;};
    inline const vector<DescribePolicyBindingsRequestFilters> & filters() const { DARABONBA_PTR_GET_CONST(filters_, vector<DescribePolicyBindingsRequestFilters>) };
    inline vector<DescribePolicyBindingsRequestFilters> filters() { DARABONBA_PTR_GET(filters_, vector<DescribePolicyBindingsRequestFilters>) };
    inline DescribePolicyBindingsRequest& setFilters(const vector<DescribePolicyBindingsRequestFilters> & filters) { DARABONBA_PTR_SET_VALUE(filters_, filters) };
    inline DescribePolicyBindingsRequest& setFilters(vector<DescribePolicyBindingsRequestFilters> && filters) { DARABONBA_PTR_SET_RVALUE(filters_, filters) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline DescribePolicyBindingsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline DescribePolicyBindingsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // policyId Field Functions 
    bool hasPolicyId() const { return this->policyId_ != nullptr;};
    void deletePolicyId() { this->policyId_ = nullptr;};
    inline string policyId() const { DARABONBA_PTR_GET_DEFAULT(policyId_, "") };
    inline DescribePolicyBindingsRequest& setPolicyId(string policyId) { DARABONBA_PTR_SET_VALUE(policyId_, policyId) };


    // sourceType Field Functions 
    bool hasSourceType() const { return this->sourceType_ != nullptr;};
    void deleteSourceType() { this->sourceType_ = nullptr;};
    inline string sourceType() const { DARABONBA_PTR_GET_DEFAULT(sourceType_, "") };
    inline DescribePolicyBindingsRequest& setSourceType(string sourceType) { DARABONBA_PTR_SET_VALUE(sourceType_, sourceType) };


  protected:
    // List of data source IDs.
    std::shared_ptr<vector<string>> dataSourceIds_ = nullptr;
    // Query filters.
    std::shared_ptr<vector<DescribePolicyBindingsRequestFilters>> filters_ = nullptr;
    // Number of results per query.
    // 
    // Range: 10~100. Default: 10.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // Token required to fetch the next page of policy and data source associations.
    std::shared_ptr<string> nextToken_ = nullptr;
    // Policy ID.
    std::shared_ptr<string> policyId_ = nullptr;
    // Data source type. Possible values:
    // * **UDM_ECS**: Indicates ECS full machine backup.
    std::shared_ptr<string> sourceType_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Hbr20170908
#endif
