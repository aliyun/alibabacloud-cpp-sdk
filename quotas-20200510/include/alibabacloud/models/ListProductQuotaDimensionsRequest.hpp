// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTQUOTADIMENSIONSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTQUOTADIMENSIONSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Quotas20200510
{
namespace Models
{
  class ListProductQuotaDimensionsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductQuotaDimensionsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(ProductCode, productCode_);
      DARABONBA_PTR_TO_JSON(QuotaCategory, quotaCategory_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductQuotaDimensionsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(ProductCode, productCode_);
      DARABONBA_PTR_FROM_JSON(QuotaCategory, quotaCategory_);
    };
    ListProductQuotaDimensionsRequest() = default ;
    ListProductQuotaDimensionsRequest(const ListProductQuotaDimensionsRequest &) = default ;
    ListProductQuotaDimensionsRequest(ListProductQuotaDimensionsRequest &&) = default ;
    ListProductQuotaDimensionsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductQuotaDimensionsRequest() = default ;
    ListProductQuotaDimensionsRequest& operator=(const ListProductQuotaDimensionsRequest &) = default ;
    ListProductQuotaDimensionsRequest& operator=(ListProductQuotaDimensionsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->maxResults_ != nullptr
        && this->nextToken_ != nullptr && this->productCode_ != nullptr && this->quotaCategory_ != nullptr; };
    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int32_t maxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0) };
    inline ListProductQuotaDimensionsRequest& setMaxResults(int32_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string nextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListProductQuotaDimensionsRequest& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // productCode Field Functions 
    bool hasProductCode() const { return this->productCode_ != nullptr;};
    void deleteProductCode() { this->productCode_ = nullptr;};
    inline string productCode() const { DARABONBA_PTR_GET_DEFAULT(productCode_, "") };
    inline ListProductQuotaDimensionsRequest& setProductCode(string productCode) { DARABONBA_PTR_SET_VALUE(productCode_, productCode) };


    // quotaCategory Field Functions 
    bool hasQuotaCategory() const { return this->quotaCategory_ != nullptr;};
    void deleteQuotaCategory() { this->quotaCategory_ = nullptr;};
    inline string quotaCategory() const { DARABONBA_PTR_GET_DEFAULT(quotaCategory_, "") };
    inline ListProductQuotaDimensionsRequest& setQuotaCategory(string quotaCategory) { DARABONBA_PTR_SET_VALUE(quotaCategory_, quotaCategory) };


  protected:
    // The maximum number of records that can be returned for the query.
    // 
    // Valid values: 1 to 200. Default value: 30.
    std::shared_ptr<int32_t> maxResults_ = nullptr;
    // The token that marks the position from which you want to start the query. If you leave this parameter empty, the query starts from the beginning.
    std::shared_ptr<string> nextToken_ = nullptr;
    // The abbreviation of the Alibaba Cloud service name.
    // 
    // > For more information, see [Alibaba Cloud services that support Quota Center](https://help.aliyun.com/document_detail/182368.html).
    // 
    // This parameter is required.
    std::shared_ptr<string> productCode_ = nullptr;
    // The type of the quota. Valid values:
    // 
    // *   FlowControl: API rate limit.
    // *   CommonQuota: general quota. This is the default value.
    std::shared_ptr<string> quotaCategory_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Quotas20200510
#endif
