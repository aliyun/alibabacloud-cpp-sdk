// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPORTFOLIOSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_LISTPORTFOLIOSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Servicecatalog20210901
{
namespace Models
{
  class ListPortfoliosResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListPortfoliosResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(PortfolioDetails, portfolioDetails_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, ListPortfoliosResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(PortfolioDetails, portfolioDetails_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    ListPortfoliosResponseBody() = default ;
    ListPortfoliosResponseBody(const ListPortfoliosResponseBody &) = default ;
    ListPortfoliosResponseBody(ListPortfoliosResponseBody &&) = default ;
    ListPortfoliosResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListPortfoliosResponseBody() = default ;
    ListPortfoliosResponseBody& operator=(const ListPortfoliosResponseBody &) = default ;
    ListPortfoliosResponseBody& operator=(ListPortfoliosResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PortfolioDetails : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PortfolioDetails& obj) { 
        DARABONBA_PTR_TO_JSON(CreateTime, createTime_);
        DARABONBA_PTR_TO_JSON(Description, description_);
        DARABONBA_PTR_TO_JSON(PortfolioArn, portfolioArn_);
        DARABONBA_PTR_TO_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_TO_JSON(PortfolioName, portfolioName_);
        DARABONBA_PTR_TO_JSON(ProviderName, providerName_);
      };
      friend void from_json(const Darabonba::Json& j, PortfolioDetails& obj) { 
        DARABONBA_PTR_FROM_JSON(CreateTime, createTime_);
        DARABONBA_PTR_FROM_JSON(Description, description_);
        DARABONBA_PTR_FROM_JSON(PortfolioArn, portfolioArn_);
        DARABONBA_PTR_FROM_JSON(PortfolioId, portfolioId_);
        DARABONBA_PTR_FROM_JSON(PortfolioName, portfolioName_);
        DARABONBA_PTR_FROM_JSON(ProviderName, providerName_);
      };
      PortfolioDetails() = default ;
      PortfolioDetails(const PortfolioDetails &) = default ;
      PortfolioDetails(PortfolioDetails &&) = default ;
      PortfolioDetails(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PortfolioDetails() = default ;
      PortfolioDetails& operator=(const PortfolioDetails &) = default ;
      PortfolioDetails& operator=(PortfolioDetails &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->createTime_ == nullptr
        && this->description_ == nullptr && this->portfolioArn_ == nullptr && this->portfolioId_ == nullptr && this->portfolioName_ == nullptr && this->providerName_ == nullptr; };
      // createTime Field Functions 
      bool hasCreateTime() const { return this->createTime_ != nullptr;};
      void deleteCreateTime() { this->createTime_ = nullptr;};
      inline string getCreateTime() const { DARABONBA_PTR_GET_DEFAULT(createTime_, "") };
      inline PortfolioDetails& setCreateTime(string createTime) { DARABONBA_PTR_SET_VALUE(createTime_, createTime) };


      // description Field Functions 
      bool hasDescription() const { return this->description_ != nullptr;};
      void deleteDescription() { this->description_ = nullptr;};
      inline string getDescription() const { DARABONBA_PTR_GET_DEFAULT(description_, "") };
      inline PortfolioDetails& setDescription(string description) { DARABONBA_PTR_SET_VALUE(description_, description) };


      // portfolioArn Field Functions 
      bool hasPortfolioArn() const { return this->portfolioArn_ != nullptr;};
      void deletePortfolioArn() { this->portfolioArn_ = nullptr;};
      inline string getPortfolioArn() const { DARABONBA_PTR_GET_DEFAULT(portfolioArn_, "") };
      inline PortfolioDetails& setPortfolioArn(string portfolioArn) { DARABONBA_PTR_SET_VALUE(portfolioArn_, portfolioArn) };


      // portfolioId Field Functions 
      bool hasPortfolioId() const { return this->portfolioId_ != nullptr;};
      void deletePortfolioId() { this->portfolioId_ = nullptr;};
      inline string getPortfolioId() const { DARABONBA_PTR_GET_DEFAULT(portfolioId_, "") };
      inline PortfolioDetails& setPortfolioId(string portfolioId) { DARABONBA_PTR_SET_VALUE(portfolioId_, portfolioId) };


      // portfolioName Field Functions 
      bool hasPortfolioName() const { return this->portfolioName_ != nullptr;};
      void deletePortfolioName() { this->portfolioName_ = nullptr;};
      inline string getPortfolioName() const { DARABONBA_PTR_GET_DEFAULT(portfolioName_, "") };
      inline PortfolioDetails& setPortfolioName(string portfolioName) { DARABONBA_PTR_SET_VALUE(portfolioName_, portfolioName) };


      // providerName Field Functions 
      bool hasProviderName() const { return this->providerName_ != nullptr;};
      void deleteProviderName() { this->providerName_ = nullptr;};
      inline string getProviderName() const { DARABONBA_PTR_GET_DEFAULT(providerName_, "") };
      inline PortfolioDetails& setProviderName(string providerName) { DARABONBA_PTR_SET_VALUE(providerName_, providerName) };


    protected:
      // 代表创建时间的资源属性字段
      shared_ptr<string> createTime_ {};
      // 产品组合描述
      shared_ptr<string> description_ {};
      shared_ptr<string> portfolioArn_ {};
      // 代表资源一级ID的资源属性字段
      shared_ptr<string> portfolioId_ {};
      // 代表资源名称的资源属性字段
      shared_ptr<string> portfolioName_ {};
      // 产品组合提供方
      shared_ptr<string> providerName_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->portfolioDetails_ == nullptr && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline ListPortfoliosResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListPortfoliosResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // portfolioDetails Field Functions 
    bool hasPortfolioDetails() const { return this->portfolioDetails_ != nullptr;};
    void deletePortfolioDetails() { this->portfolioDetails_ = nullptr;};
    inline const vector<ListPortfoliosResponseBody::PortfolioDetails> & getPortfolioDetails() const { DARABONBA_PTR_GET_CONST(portfolioDetails_, vector<ListPortfoliosResponseBody::PortfolioDetails>) };
    inline vector<ListPortfoliosResponseBody::PortfolioDetails> getPortfolioDetails() { DARABONBA_PTR_GET(portfolioDetails_, vector<ListPortfoliosResponseBody::PortfolioDetails>) };
    inline ListPortfoliosResponseBody& setPortfolioDetails(const vector<ListPortfoliosResponseBody::PortfolioDetails> & portfolioDetails) { DARABONBA_PTR_SET_VALUE(portfolioDetails_, portfolioDetails) };
    inline ListPortfoliosResponseBody& setPortfolioDetails(vector<ListPortfoliosResponseBody::PortfolioDetails> && portfolioDetails) { DARABONBA_PTR_SET_RVALUE(portfolioDetails_, portfolioDetails) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline ListPortfoliosResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline ListPortfoliosResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<vector<ListPortfoliosResponseBody::PortfolioDetails>> portfolioDetails_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Servicecatalog20210901
#endif
