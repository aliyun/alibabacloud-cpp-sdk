// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEWHITELISTEFFECTIVEASSETSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEWHITELISTEFFECTIVEASSETSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeWhiteListEffectiveAssetsResponseBodyAssets.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeWhiteListEffectiveAssetsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeWhiteListEffectiveAssetsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Assets, assets_);
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeWhiteListEffectiveAssetsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Assets, assets_);
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(CurrentPage, currentPage_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeWhiteListEffectiveAssetsResponseBody() = default ;
    DescribeWhiteListEffectiveAssetsResponseBody(const DescribeWhiteListEffectiveAssetsResponseBody &) = default ;
    DescribeWhiteListEffectiveAssetsResponseBody(DescribeWhiteListEffectiveAssetsResponseBody &&) = default ;
    DescribeWhiteListEffectiveAssetsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeWhiteListEffectiveAssetsResponseBody() = default ;
    DescribeWhiteListEffectiveAssetsResponseBody& operator=(const DescribeWhiteListEffectiveAssetsResponseBody &) = default ;
    DescribeWhiteListEffectiveAssetsResponseBody& operator=(DescribeWhiteListEffectiveAssetsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assets_ == nullptr
        && return this->count_ == nullptr && return this->currentPage_ == nullptr && return this->pageSize_ == nullptr && return this->requestId_ == nullptr && return this->totalCount_ == nullptr; };
    // assets Field Functions 
    bool hasAssets() const { return this->assets_ != nullptr;};
    void deleteAssets() { this->assets_ = nullptr;};
    inline const vector<DescribeWhiteListEffectiveAssetsResponseBodyAssets> & assets() const { DARABONBA_PTR_GET_CONST(assets_, vector<DescribeWhiteListEffectiveAssetsResponseBodyAssets>) };
    inline vector<DescribeWhiteListEffectiveAssetsResponseBodyAssets> assets() { DARABONBA_PTR_GET(assets_, vector<DescribeWhiteListEffectiveAssetsResponseBodyAssets>) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setAssets(const vector<DescribeWhiteListEffectiveAssetsResponseBodyAssets> & assets) { DARABONBA_PTR_SET_VALUE(assets_, assets) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setAssets(vector<DescribeWhiteListEffectiveAssetsResponseBodyAssets> && assets) { DARABONBA_PTR_SET_RVALUE(assets_, assets) };


    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // currentPage Field Functions 
    bool hasCurrentPage() const { return this->currentPage_ != nullptr;};
    void deleteCurrentPage() { this->currentPage_ = nullptr;};
    inline int32_t currentPage() const { DARABONBA_PTR_GET_DEFAULT(currentPage_, 0) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setCurrentPage(int32_t currentPage) { DARABONBA_PTR_SET_VALUE(currentPage_, currentPage) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string requestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t totalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeWhiteListEffectiveAssetsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    // The servers on which the policy takes effect.
    std::shared_ptr<vector<DescribeWhiteListEffectiveAssetsResponseBodyAssets>> assets_ = nullptr;
    // The number of entries returned on the current page.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The page number.
    std::shared_ptr<int32_t> currentPage_ = nullptr;
    // The number of entries per page.
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    // The request ID.
    std::shared_ptr<string> requestId_ = nullptr;
    // The total number of the servers on which the policy takes effect.
    std::shared_ptr<int32_t> totalCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
