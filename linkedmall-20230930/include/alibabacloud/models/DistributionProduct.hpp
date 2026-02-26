// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DISTRIBUTIONPRODUCT_HPP_
#define ALIBABACLOUD_MODELS_DISTRIBUTIONPRODUCT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DistributionSku.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class DistributionProduct : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DistributionProduct& obj) { 
      DARABONBA_PTR_TO_JSON(categoryChain, categoryChain_);
      DARABONBA_PTR_TO_JSON(categoryLeafId, categoryLeafId_);
      DARABONBA_PTR_TO_JSON(categoryLeafName, categoryLeafName_);
      DARABONBA_PTR_TO_JSON(channelCode, channelCode_);
      DARABONBA_PTR_TO_JSON(distributeStatus, distributeStatus_);
      DARABONBA_PTR_TO_JSON(picUrl, picUrl_);
      DARABONBA_PTR_TO_JSON(productId, productId_);
      DARABONBA_PTR_TO_JSON(sellerId, sellerId_);
      DARABONBA_PTR_TO_JSON(shortTitle, shortTitle_);
      DARABONBA_PTR_TO_JSON(skus, skus_);
      DARABONBA_PTR_TO_JSON(title, title_);
      DARABONBA_PTR_TO_JSON(whiteBackgroundPicUrl, whiteBackgroundPicUrl_);
    };
    friend void from_json(const Darabonba::Json& j, DistributionProduct& obj) { 
      DARABONBA_PTR_FROM_JSON(categoryChain, categoryChain_);
      DARABONBA_PTR_FROM_JSON(categoryLeafId, categoryLeafId_);
      DARABONBA_PTR_FROM_JSON(categoryLeafName, categoryLeafName_);
      DARABONBA_PTR_FROM_JSON(channelCode, channelCode_);
      DARABONBA_PTR_FROM_JSON(distributeStatus, distributeStatus_);
      DARABONBA_PTR_FROM_JSON(picUrl, picUrl_);
      DARABONBA_PTR_FROM_JSON(productId, productId_);
      DARABONBA_PTR_FROM_JSON(sellerId, sellerId_);
      DARABONBA_PTR_FROM_JSON(shortTitle, shortTitle_);
      DARABONBA_PTR_FROM_JSON(skus, skus_);
      DARABONBA_PTR_FROM_JSON(title, title_);
      DARABONBA_PTR_FROM_JSON(whiteBackgroundPicUrl, whiteBackgroundPicUrl_);
    };
    DistributionProduct() = default ;
    DistributionProduct(const DistributionProduct &) = default ;
    DistributionProduct(DistributionProduct &&) = default ;
    DistributionProduct(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DistributionProduct() = default ;
    DistributionProduct& operator=(const DistributionProduct &) = default ;
    DistributionProduct& operator=(DistributionProduct &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryChain_ == nullptr
        && this->categoryLeafId_ == nullptr && this->categoryLeafName_ == nullptr && this->channelCode_ == nullptr && this->distributeStatus_ == nullptr && this->picUrl_ == nullptr
        && this->productId_ == nullptr && this->sellerId_ == nullptr && this->shortTitle_ == nullptr && this->skus_ == nullptr && this->title_ == nullptr
        && this->whiteBackgroundPicUrl_ == nullptr; };
    // categoryChain Field Functions 
    bool hasCategoryChain() const { return this->categoryChain_ != nullptr;};
    void deleteCategoryChain() { this->categoryChain_ = nullptr;};
    inline string getCategoryChain() const { DARABONBA_PTR_GET_DEFAULT(categoryChain_, "") };
    inline DistributionProduct& setCategoryChain(string categoryChain) { DARABONBA_PTR_SET_VALUE(categoryChain_, categoryChain) };


    // categoryLeafId Field Functions 
    bool hasCategoryLeafId() const { return this->categoryLeafId_ != nullptr;};
    void deleteCategoryLeafId() { this->categoryLeafId_ = nullptr;};
    inline int64_t getCategoryLeafId() const { DARABONBA_PTR_GET_DEFAULT(categoryLeafId_, 0L) };
    inline DistributionProduct& setCategoryLeafId(int64_t categoryLeafId) { DARABONBA_PTR_SET_VALUE(categoryLeafId_, categoryLeafId) };


    // categoryLeafName Field Functions 
    bool hasCategoryLeafName() const { return this->categoryLeafName_ != nullptr;};
    void deleteCategoryLeafName() { this->categoryLeafName_ = nullptr;};
    inline string getCategoryLeafName() const { DARABONBA_PTR_GET_DEFAULT(categoryLeafName_, "") };
    inline DistributionProduct& setCategoryLeafName(string categoryLeafName) { DARABONBA_PTR_SET_VALUE(categoryLeafName_, categoryLeafName) };


    // channelCode Field Functions 
    bool hasChannelCode() const { return this->channelCode_ != nullptr;};
    void deleteChannelCode() { this->channelCode_ = nullptr;};
    inline string getChannelCode() const { DARABONBA_PTR_GET_DEFAULT(channelCode_, "") };
    inline DistributionProduct& setChannelCode(string channelCode) { DARABONBA_PTR_SET_VALUE(channelCode_, channelCode) };


    // distributeStatus Field Functions 
    bool hasDistributeStatus() const { return this->distributeStatus_ != nullptr;};
    void deleteDistributeStatus() { this->distributeStatus_ = nullptr;};
    inline string getDistributeStatus() const { DARABONBA_PTR_GET_DEFAULT(distributeStatus_, "") };
    inline DistributionProduct& setDistributeStatus(string distributeStatus) { DARABONBA_PTR_SET_VALUE(distributeStatus_, distributeStatus) };


    // picUrl Field Functions 
    bool hasPicUrl() const { return this->picUrl_ != nullptr;};
    void deletePicUrl() { this->picUrl_ = nullptr;};
    inline string getPicUrl() const { DARABONBA_PTR_GET_DEFAULT(picUrl_, "") };
    inline DistributionProduct& setPicUrl(string picUrl) { DARABONBA_PTR_SET_VALUE(picUrl_, picUrl) };


    // productId Field Functions 
    bool hasProductId() const { return this->productId_ != nullptr;};
    void deleteProductId() { this->productId_ = nullptr;};
    inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
    inline DistributionProduct& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


    // sellerId Field Functions 
    bool hasSellerId() const { return this->sellerId_ != nullptr;};
    void deleteSellerId() { this->sellerId_ = nullptr;};
    inline string getSellerId() const { DARABONBA_PTR_GET_DEFAULT(sellerId_, "") };
    inline DistributionProduct& setSellerId(string sellerId) { DARABONBA_PTR_SET_VALUE(sellerId_, sellerId) };


    // shortTitle Field Functions 
    bool hasShortTitle() const { return this->shortTitle_ != nullptr;};
    void deleteShortTitle() { this->shortTitle_ = nullptr;};
    inline string getShortTitle() const { DARABONBA_PTR_GET_DEFAULT(shortTitle_, "") };
    inline DistributionProduct& setShortTitle(string shortTitle) { DARABONBA_PTR_SET_VALUE(shortTitle_, shortTitle) };


    // skus Field Functions 
    bool hasSkus() const { return this->skus_ != nullptr;};
    void deleteSkus() { this->skus_ = nullptr;};
    inline const vector<DistributionSku> & getSkus() const { DARABONBA_PTR_GET_CONST(skus_, vector<DistributionSku>) };
    inline vector<DistributionSku> getSkus() { DARABONBA_PTR_GET(skus_, vector<DistributionSku>) };
    inline DistributionProduct& setSkus(const vector<DistributionSku> & skus) { DARABONBA_PTR_SET_VALUE(skus_, skus) };
    inline DistributionProduct& setSkus(vector<DistributionSku> && skus) { DARABONBA_PTR_SET_RVALUE(skus_, skus) };


    // title Field Functions 
    bool hasTitle() const { return this->title_ != nullptr;};
    void deleteTitle() { this->title_ = nullptr;};
    inline string getTitle() const { DARABONBA_PTR_GET_DEFAULT(title_, "") };
    inline DistributionProduct& setTitle(string title) { DARABONBA_PTR_SET_VALUE(title_, title) };


    // whiteBackgroundPicUrl Field Functions 
    bool hasWhiteBackgroundPicUrl() const { return this->whiteBackgroundPicUrl_ != nullptr;};
    void deleteWhiteBackgroundPicUrl() { this->whiteBackgroundPicUrl_ = nullptr;};
    inline string getWhiteBackgroundPicUrl() const { DARABONBA_PTR_GET_DEFAULT(whiteBackgroundPicUrl_, "") };
    inline DistributionProduct& setWhiteBackgroundPicUrl(string whiteBackgroundPicUrl) { DARABONBA_PTR_SET_VALUE(whiteBackgroundPicUrl_, whiteBackgroundPicUrl) };


  protected:
    shared_ptr<string> categoryChain_ {};
    shared_ptr<int64_t> categoryLeafId_ {};
    shared_ptr<string> categoryLeafName_ {};
    shared_ptr<string> channelCode_ {};
    shared_ptr<string> distributeStatus_ {};
    shared_ptr<string> picUrl_ {};
    shared_ptr<string> productId_ {};
    shared_ptr<string> sellerId_ {};
    shared_ptr<string> shortTitle_ {};
    shared_ptr<vector<DistributionSku>> skus_ {};
    shared_ptr<string> title_ {};
    shared_ptr<string> whiteBackgroundPicUrl_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
