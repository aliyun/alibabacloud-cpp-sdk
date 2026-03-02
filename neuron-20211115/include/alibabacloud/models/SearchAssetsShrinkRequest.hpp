// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHASSETSSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_SEARCHASSETSSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Neuron20211115
{
namespace Models
{
  class SearchAssetsShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchAssetsShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(assetIndustrys, assetIndustrysShrink_);
      DARABONBA_PTR_TO_JSON(assetName, assetName_);
      DARABONBA_PTR_TO_JSON(assetTypes, assetTypesShrink_);
      DARABONBA_PTR_TO_JSON(companyId, companyId_);
      DARABONBA_PTR_TO_JSON(marketId, marketId_);
      DARABONBA_PTR_TO_JSON(orderBy, orderBy_);
      DARABONBA_PTR_TO_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_TO_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(pageSize, pageSize_);
    };
    friend void from_json(const Darabonba::Json& j, SearchAssetsShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(assetIndustrys, assetIndustrysShrink_);
      DARABONBA_PTR_FROM_JSON(assetName, assetName_);
      DARABONBA_PTR_FROM_JSON(assetTypes, assetTypesShrink_);
      DARABONBA_PTR_FROM_JSON(companyId, companyId_);
      DARABONBA_PTR_FROM_JSON(marketId, marketId_);
      DARABONBA_PTR_FROM_JSON(orderBy, orderBy_);
      DARABONBA_PTR_FROM_JSON(orderDirection, orderDirection_);
      DARABONBA_PTR_FROM_JSON(pageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(pageSize, pageSize_);
    };
    SearchAssetsShrinkRequest() = default ;
    SearchAssetsShrinkRequest(const SearchAssetsShrinkRequest &) = default ;
    SearchAssetsShrinkRequest(SearchAssetsShrinkRequest &&) = default ;
    SearchAssetsShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchAssetsShrinkRequest() = default ;
    SearchAssetsShrinkRequest& operator=(const SearchAssetsShrinkRequest &) = default ;
    SearchAssetsShrinkRequest& operator=(SearchAssetsShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assetIndustrysShrink_ == nullptr
        && this->assetName_ == nullptr && this->assetTypesShrink_ == nullptr && this->companyId_ == nullptr && this->marketId_ == nullptr && this->orderBy_ == nullptr
        && this->orderDirection_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr; };
    // assetIndustrysShrink Field Functions 
    bool hasAssetIndustrysShrink() const { return this->assetIndustrysShrink_ != nullptr;};
    void deleteAssetIndustrysShrink() { this->assetIndustrysShrink_ = nullptr;};
    inline string getAssetIndustrysShrink() const { DARABONBA_PTR_GET_DEFAULT(assetIndustrysShrink_, "") };
    inline SearchAssetsShrinkRequest& setAssetIndustrysShrink(string assetIndustrysShrink) { DARABONBA_PTR_SET_VALUE(assetIndustrysShrink_, assetIndustrysShrink) };


    // assetName Field Functions 
    bool hasAssetName() const { return this->assetName_ != nullptr;};
    void deleteAssetName() { this->assetName_ = nullptr;};
    inline string getAssetName() const { DARABONBA_PTR_GET_DEFAULT(assetName_, "") };
    inline SearchAssetsShrinkRequest& setAssetName(string assetName) { DARABONBA_PTR_SET_VALUE(assetName_, assetName) };


    // assetTypesShrink Field Functions 
    bool hasAssetTypesShrink() const { return this->assetTypesShrink_ != nullptr;};
    void deleteAssetTypesShrink() { this->assetTypesShrink_ = nullptr;};
    inline string getAssetTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(assetTypesShrink_, "") };
    inline SearchAssetsShrinkRequest& setAssetTypesShrink(string assetTypesShrink) { DARABONBA_PTR_SET_VALUE(assetTypesShrink_, assetTypesShrink) };


    // companyId Field Functions 
    bool hasCompanyId() const { return this->companyId_ != nullptr;};
    void deleteCompanyId() { this->companyId_ = nullptr;};
    inline int64_t getCompanyId() const { DARABONBA_PTR_GET_DEFAULT(companyId_, 0L) };
    inline SearchAssetsShrinkRequest& setCompanyId(int64_t companyId) { DARABONBA_PTR_SET_VALUE(companyId_, companyId) };


    // marketId Field Functions 
    bool hasMarketId() const { return this->marketId_ != nullptr;};
    void deleteMarketId() { this->marketId_ = nullptr;};
    inline int64_t getMarketId() const { DARABONBA_PTR_GET_DEFAULT(marketId_, 0L) };
    inline SearchAssetsShrinkRequest& setMarketId(int64_t marketId) { DARABONBA_PTR_SET_VALUE(marketId_, marketId) };


    // orderBy Field Functions 
    bool hasOrderBy() const { return this->orderBy_ != nullptr;};
    void deleteOrderBy() { this->orderBy_ = nullptr;};
    inline string getOrderBy() const { DARABONBA_PTR_GET_DEFAULT(orderBy_, "") };
    inline SearchAssetsShrinkRequest& setOrderBy(string orderBy) { DARABONBA_PTR_SET_VALUE(orderBy_, orderBy) };


    // orderDirection Field Functions 
    bool hasOrderDirection() const { return this->orderDirection_ != nullptr;};
    void deleteOrderDirection() { this->orderDirection_ = nullptr;};
    inline string getOrderDirection() const { DARABONBA_PTR_GET_DEFAULT(orderDirection_, "") };
    inline SearchAssetsShrinkRequest& setOrderDirection(string orderDirection) { DARABONBA_PTR_SET_VALUE(orderDirection_, orderDirection) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline SearchAssetsShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline SearchAssetsShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


  protected:
    shared_ptr<string> assetIndustrysShrink_ {};
    shared_ptr<string> assetName_ {};
    shared_ptr<string> assetTypesShrink_ {};
    shared_ptr<int64_t> companyId_ {};
    shared_ptr<int64_t> marketId_ {};
    shared_ptr<string> orderBy_ {};
    shared_ptr<string> orderDirection_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Neuron20211115
#endif
