// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONTEMPLATESREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTQUOTAAPPLICATIONTEMPLATESREQUEST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ListQuotaApplicationTemplatesRequestDimensions.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListQuotaApplicationTemplatesRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListQuotaApplicationTemplatesRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_TO_JSON(Id, id_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
    };
    friend void from_json(const Darabonba::Json& j, ListQuotaApplicationTemplatesRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Dimensions, dimensions_);
      DARABONBA_PTR_FROM_JSON(Id, id_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaActionCode, quotaActionCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
    };
    ListQuotaApplicationTemplatesRequest() = default ;
    ListQuotaApplicationTemplatesRequest(const ListQuotaApplicationTemplatesRequest &) = default ;
    ListQuotaApplicationTemplatesRequest(ListQuotaApplicationTemplatesRequest &&) = default ;
    ListQuotaApplicationTemplatesRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListQuotaApplicationTemplatesRequest() = default ;
    ListQuotaApplicationTemplatesRequest& operator=(const ListQuotaApplicationTemplatesRequest &) = default ;
    ListQuotaApplicationTemplatesRequest& operator=(ListQuotaApplicationTemplatesRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->dimensions_ != nullptr
        && this->id_ != nullptr && this->maxResults_ != nullptr && this->nextToken_ != nullptr && this->productCode_ != nullptr && this->quotaActionCode_ != nullptr
        && this->quotaCategory_ != nullptr; };
    // dimensions Field Functions 
    bool hasDimensions() const { return this->dimensions_ != nullptr;};
    void deleteDimensions() { this->dimensions_ = nullptr;};
    inline const vector<ListQuotaApplicationTemplatesRequestDimensions> & dimensions() const { DARABONBA_PTR_GET_CONST(dimensions_, vector<ListQuotaApplicationTemplatesRequestDimensions>) };
    inline vector<ListQuotaApplicationTemplatesRequestDimensions> dimensions() { DARABONBA_PTR_GET(dimensions_, vector<ListQuotaApplicationTemplatesRequestDimensions>) };
    inline ListQuotaApplicationTemplatesRequest& setDimensions(const vector<ListQuotaApplicationTemplatesRequestDimensions> & dimensions) { DARABONBA_PTR_SET_VALUE(dimensions_, dimensions) };
    inline ListQuotaApplicationTemplatesRequest& setDimensions(vector<ListQuotaApplicationTemplatesRequestDimensions> && dimensions) { DARABONBA_PTR_SET_RVALUE(dimensions_, dimensions) };


    // id Field Functions 
    bool hasId() const { return this->id_ != nullptr;};
    void deleteId() { this->id_ = nullptr;};
    inline string id() const { DARABONBA_PTR_GET_DEFAULT(id_, "") };
    inline ListQuotaApplicationTemplatesRequest& setId(string id) { DARABONBA_PTR_SET_VALUE(id_, id) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListQuotaApplicationTemplatesRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListQuotaApplicationTemplatesRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListQuotaApplicationTemplatesRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaActionCode Field Functions 
    bool hasQuotaActionCode() const { return this->quotaActionCode_ != nullptr;};
    void deleteQuotaActionCode() { this->quotaActionCode_ = nullptr;};
    inline string quotaActionCode() const { DARABONBA_PTR_GET_DEFAULT(quotaActionCode_, "") };
    inline ListQuotaApplicationTemplatesRequest& setQuotaActionCode(string quotaActionCode) { DARABONBA_PTR_SET_VALUE(quotaActionCode_, quotaActionCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListQuotaApplicationTemplatesRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


  protected:
    // The quota dimensions.
    std::shared_ptr<vector<ListQuotaApplicationTemplatesRequestDimensions>> dimensions_ = nullptr;
    // The ID of the quota item.
    std::shared_ptr<string> id_ = nullptr;
    // The maximum number of records that can be returned for the query. Valid values: 1 to 100. Default value: 30.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the position from which you want to start the query.
    // 
    // > If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // >  To query the abbreviation of an Alibaba Cloud service name, call the [ListProducts](https://help.aliyun.com/document_detail/440555.html) operation and check the value of `ProductCode` in the response.
    std::shared_ptr<string> productCode_ = nullptr;
    // The ID of the quota.
    std::shared_ptr<string> quotaActionCode_ = nullptr;
    // The quota type. Valid values:
    // 
    // *   CommonQuota: general quota.
    // *   WhiteListLabel: whitelist quota.
    // *   FlowControl: API rate limit.
    std::shared_ptr<string> quotaCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
