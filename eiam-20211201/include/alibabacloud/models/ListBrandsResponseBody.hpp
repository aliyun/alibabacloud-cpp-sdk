// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTBRANDSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTBRANDSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Eiam20211201
{
namespace Models
{
  class ListBrandsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListBrandsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Brands, brands_);
      DARABONBA_PTR_TO_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_TO_JSON(NextToken, nextToken_);
      DARABONBA_PTR_TO_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListBrandsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Brands, brands_);
      DARABONBA_PTR_FROM_JSON(MaxResults, maxResults_);
      DARABONBA_PTR_FROM_JSON(NextToken, nextToken_);
      DARABONBA_PTR_FROM_JSON(PreviousToken, previousToken_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListBrandsResponseBody() = default ;
    ListBrandsResponseBody(const ListBrandsResponseBody &) = default ;
    ListBrandsResponseBody(ListBrandsResponseBody &&) = default ;
    ListBrandsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListBrandsResponseBody() = default ;
    ListBrandsResponseBody& operator=(const ListBrandsResponseBody &) = default ;
    ListBrandsResponseBody& operator=(ListBrandsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Brands : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Brands& obj) { 
        DARABONBA_PTR_TO_JSON(BrandId, brandId_);
        DARABONBA_PTR_TO_JSON(BrandName, brandName_);
        DARABONBA_PTR_TO_JSON(BrandType, brandType_);
        DARABONBA_PTR_TO_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_TO_JSON(Status, status_);
      };
      friend void from_json(const Darabonba::Json& j, Brands& obj) { 
        DARABONBA_PTR_FROM_JSON(BrandId, brandId_);
        DARABONBA_PTR_FROM_JSON(BrandName, brandName_);
        DARABONBA_PTR_FROM_JSON(BrandType, brandType_);
        DARABONBA_PTR_FROM_JSON(InstanceId, instanceId_);
        DARABONBA_PTR_FROM_JSON(Status, status_);
      };
      Brands() = default ;
      Brands(const Brands &) = default ;
      Brands(Brands &&) = default ;
      Brands(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Brands() = default ;
      Brands& operator=(const Brands &) = default ;
      Brands& operator=(Brands &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->brandId_ == nullptr
        && this->brandName_ == nullptr && this->brandType_ == nullptr && this->instanceId_ == nullptr && this->status_ == nullptr; };
      // brandId Field Functions 
      bool hasBrandId() const { return this->brandId_ != nullptr;};
      void deleteBrandId() { this->brandId_ = nullptr;};
      inline string getBrandId() const { DARABONBA_PTR_GET_DEFAULT(brandId_, "") };
      inline Brands& setBrandId(string brandId) { DARABONBA_PTR_SET_VALUE(brandId_, brandId) };


      // brandName Field Functions 
      bool hasBrandName() const { return this->brandName_ != nullptr;};
      void deleteBrandName() { this->brandName_ = nullptr;};
      inline string getBrandName() const { DARABONBA_PTR_GET_DEFAULT(brandName_, "") };
      inline Brands& setBrandName(string brandName) { DARABONBA_PTR_SET_VALUE(brandName_, brandName) };


      // brandType Field Functions 
      bool hasBrandType() const { return this->brandType_ != nullptr;};
      void deleteBrandType() { this->brandType_ = nullptr;};
      inline string getBrandType() const { DARABONBA_PTR_GET_DEFAULT(brandType_, "") };
      inline Brands& setBrandType(string brandType) { DARABONBA_PTR_SET_VALUE(brandType_, brandType) };


      // instanceId Field Functions 
      bool hasInstanceId() const { return this->instanceId_ != nullptr;};
      void deleteInstanceId() { this->instanceId_ = nullptr;};
      inline string getInstanceId() const { DARABONBA_PTR_GET_DEFAULT(instanceId_, "") };
      inline Brands& setInstanceId(string instanceId) { DARABONBA_PTR_SET_VALUE(instanceId_, instanceId) };


      // status Field Functions 
      bool hasStatus() const { return this->status_ != nullptr;};
      void deleteStatus() { this->status_ = nullptr;};
      inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
      inline Brands& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    protected:
      // 品牌ID
      shared_ptr<string> brandId_ {};
      // 品牌名称
      shared_ptr<string> brandName_ {};
      // 品牌类型
      shared_ptr<string> brandType_ {};
      // 实例ID。
      shared_ptr<string> instanceId_ {};
      // 品牌状态
      shared_ptr<string> status_ {};
    };

    virtual bool empty() const override { return this->brands_ == nullptr
        && this->maxResults_ == nullptr && this->nextToken_ == nullptr && this->previousToken_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // brands Field Functions 
    bool hasBrands() const { return this->brands_ != nullptr;};
    void deleteBrands() { this->brands_ = nullptr;};
    inline const vector<ListBrandsResponseBody::Brands> & getBrands() const { DARABONBA_PTR_GET_CONST(brands_, vector<ListBrandsResponseBody::Brands>) };
    inline vector<ListBrandsResponseBody::Brands> getBrands() { DARABONBA_PTR_GET(brands_, vector<ListBrandsResponseBody::Brands>) };
    inline ListBrandsResponseBody& setBrands(const vector<ListBrandsResponseBody::Brands> & brands) { DARABONBA_PTR_SET_VALUE(brands_, brands) };
    inline ListBrandsResponseBody& setBrands(vector<ListBrandsResponseBody::Brands> && brands) { DARABONBA_PTR_SET_RVALUE(brands_, brands) };


    // maxResults Field Functions 
    bool hasMaxResults() const { return this->maxResults_ != nullptr;};
    void deleteMaxResults() { this->maxResults_ = nullptr;};
    inline int64_t getMaxResults() const { DARABONBA_PTR_GET_DEFAULT(maxResults_, 0L) };
    inline ListBrandsResponseBody& setMaxResults(int64_t maxResults) { DARABONBA_PTR_SET_VALUE(maxResults_, maxResults) };


    // nextToken Field Functions 
    bool hasNextToken() const { return this->nextToken_ != nullptr;};
    void deleteNextToken() { this->nextToken_ = nullptr;};
    inline string getNextToken() const { DARABONBA_PTR_GET_DEFAULT(nextToken_, "") };
    inline ListBrandsResponseBody& setNextToken(string nextToken) { DARABONBA_PTR_SET_VALUE(nextToken_, nextToken) };


    // previousToken Field Functions 
    bool hasPreviousToken() const { return this->previousToken_ != nullptr;};
    void deletePreviousToken() { this->previousToken_ = nullptr;};
    inline string getPreviousToken() const { DARABONBA_PTR_GET_DEFAULT(previousToken_, "") };
    inline ListBrandsResponseBody& setPreviousToken(string previousToken) { DARABONBA_PTR_SET_VALUE(previousToken_, previousToken) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListBrandsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline ListBrandsResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<ListBrandsResponseBody::Brands>> brands_ {};
    // 分页查询时每页行数。
    shared_ptr<int64_t> maxResults_ {};
    // 本次调用返回的查询凭证（Token）值，用于下一次翻页查询。
    shared_ptr<string> nextToken_ {};
    // 本次调用返回的查询凭证（Token）值，用于上一次翻页查询。
    shared_ptr<string> previousToken_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Eiam20211201
#endif
