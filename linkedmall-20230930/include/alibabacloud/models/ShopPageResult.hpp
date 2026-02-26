// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SHOPPAGERESULT_HPP_
#define ALIBABACLOUD_MODELS_SHOPPAGERESULT_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/ShopPageDataResult.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Linkedmall20230930
{
namespace Models
{
  class ShopPageResult : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ShopPageResult& obj) { 
      DARABONBA_PTR_TO_JSON(requestId, requestId_);
      DARABONBA_PTR_TO_JSON(shopList, shopList_);
      DARABONBA_PTR_TO_JSON(total, total_);
    };
    friend void from_json(const Darabonba::Json& j, ShopPageResult& obj) { 
      DARABONBA_PTR_FROM_JSON(requestId, requestId_);
      DARABONBA_PTR_FROM_JSON(shopList, shopList_);
      DARABONBA_PTR_FROM_JSON(total, total_);
    };
    ShopPageResult() = default ;
    ShopPageResult(const ShopPageResult &) = default ;
    ShopPageResult(ShopPageResult &&) = default ;
    ShopPageResult(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ShopPageResult() = default ;
    ShopPageResult& operator=(const ShopPageResult &) = default ;
    ShopPageResult& operator=(ShopPageResult &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->shopList_ == nullptr && this->total_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ShopPageResult& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // shopList Field Functions 
    bool hasShopList() const { return this->shopList_ != nullptr;};
    void deleteShopList() { this->shopList_ = nullptr;};
    inline const vector<ShopPageDataResult> & getShopList() const { DARABONBA_PTR_GET_CONST(shopList_, vector<ShopPageDataResult>) };
    inline vector<ShopPageDataResult> getShopList() { DARABONBA_PTR_GET(shopList_, vector<ShopPageDataResult>) };
    inline ShopPageResult& setShopList(const vector<ShopPageDataResult> & shopList) { DARABONBA_PTR_SET_VALUE(shopList_, shopList) };
    inline ShopPageResult& setShopList(vector<ShopPageDataResult> && shopList) { DARABONBA_PTR_SET_RVALUE(shopList_, shopList) };


    // total Field Functions 
    bool hasTotal() const { return this->total_ != nullptr;};
    void deleteTotal() { this->total_ = nullptr;};
    inline int32_t getTotal() const { DARABONBA_PTR_GET_DEFAULT(total_, 0) };
    inline ShopPageResult& setTotal(int32_t total) { DARABONBA_PTR_SET_VALUE(total_, total) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<ShopPageDataResult>> shopList_ {};
    shared_ptr<int32_t> total_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Linkedmall20230930
#endif
