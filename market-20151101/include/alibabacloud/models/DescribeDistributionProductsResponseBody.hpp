// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeDistributionProductsResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistributionProductsResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Results, results_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDistributionProductsResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Results, results_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeDistributionProductsResponseBody() = default ;
    DescribeDistributionProductsResponseBody(const DescribeDistributionProductsResponseBody &) = default ;
    DescribeDistributionProductsResponseBody(DescribeDistributionProductsResponseBody &&) = default ;
    DescribeDistributionProductsResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistributionProductsResponseBody() = default ;
    DescribeDistributionProductsResponseBody& operator=(const DescribeDistributionProductsResponseBody &) = default ;
    DescribeDistributionProductsResponseBody& operator=(DescribeDistributionProductsResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Results : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Results& obj) { 
        DARABONBA_PTR_TO_JSON(Code, code_);
        DARABONBA_PTR_TO_JSON(FirstCategoryName, firstCategoryName_);
        DARABONBA_PTR_TO_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_TO_JSON(Name, name_);
        DARABONBA_PTR_TO_JSON(Price, price_);
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(SecondCategoryName, secondCategoryName_);
        DARABONBA_PTR_TO_JSON(ShortDescription, shortDescription_);
        DARABONBA_PTR_TO_JSON(SubmissionRadio, submissionRadio_);
        DARABONBA_PTR_TO_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_TO_JSON(SupplierUId, supplierUId_);
        DARABONBA_PTR_TO_JSON(TradeCount, tradeCount_);
        DARABONBA_PTR_TO_JSON(Type, type_);
        DARABONBA_PTR_TO_JSON(UserCommentCount, userCommentCount_);
      };
      friend void from_json(const Darabonba::Json& j, Results& obj) { 
        DARABONBA_PTR_FROM_JSON(Code, code_);
        DARABONBA_PTR_FROM_JSON(FirstCategoryName, firstCategoryName_);
        DARABONBA_PTR_FROM_JSON(ImageUrl, imageUrl_);
        DARABONBA_PTR_FROM_JSON(Name, name_);
        DARABONBA_PTR_FROM_JSON(Price, price_);
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(SecondCategoryName, secondCategoryName_);
        DARABONBA_PTR_FROM_JSON(ShortDescription, shortDescription_);
        DARABONBA_PTR_FROM_JSON(SubmissionRadio, submissionRadio_);
        DARABONBA_PTR_FROM_JSON(SupplierName, supplierName_);
        DARABONBA_PTR_FROM_JSON(SupplierUId, supplierUId_);
        DARABONBA_PTR_FROM_JSON(TradeCount, tradeCount_);
        DARABONBA_PTR_FROM_JSON(Type, type_);
        DARABONBA_PTR_FROM_JSON(UserCommentCount, userCommentCount_);
      };
      Results() = default ;
      Results(const Results &) = default ;
      Results(Results &&) = default ;
      Results(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Results() = default ;
      Results& operator=(const Results &) = default ;
      Results& operator=(Results &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->code_ == nullptr
        && this->firstCategoryName_ == nullptr && this->imageUrl_ == nullptr && this->name_ == nullptr && this->price_ == nullptr && this->score_ == nullptr
        && this->secondCategoryName_ == nullptr && this->shortDescription_ == nullptr && this->submissionRadio_ == nullptr && this->supplierName_ == nullptr && this->supplierUId_ == nullptr
        && this->tradeCount_ == nullptr && this->type_ == nullptr && this->userCommentCount_ == nullptr; };
      // code Field Functions 
      bool hasCode() const { return this->code_ != nullptr;};
      void deleteCode() { this->code_ = nullptr;};
      inline string getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
      inline Results& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


      // firstCategoryName Field Functions 
      bool hasFirstCategoryName() const { return this->firstCategoryName_ != nullptr;};
      void deleteFirstCategoryName() { this->firstCategoryName_ = nullptr;};
      inline string getFirstCategoryName() const { DARABONBA_PTR_GET_DEFAULT(firstCategoryName_, "") };
      inline Results& setFirstCategoryName(string firstCategoryName) { DARABONBA_PTR_SET_VALUE(firstCategoryName_, firstCategoryName) };


      // imageUrl Field Functions 
      bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
      void deleteImageUrl() { this->imageUrl_ = nullptr;};
      inline string getImageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
      inline Results& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


      // name Field Functions 
      bool hasName() const { return this->name_ != nullptr;};
      void deleteName() { this->name_ = nullptr;};
      inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
      inline Results& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      // price Field Functions 
      bool hasPrice() const { return this->price_ != nullptr;};
      void deletePrice() { this->price_ = nullptr;};
      inline string getPrice() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
      inline Results& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline string getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
      inline Results& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // secondCategoryName Field Functions 
      bool hasSecondCategoryName() const { return this->secondCategoryName_ != nullptr;};
      void deleteSecondCategoryName() { this->secondCategoryName_ = nullptr;};
      inline string getSecondCategoryName() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryName_, "") };
      inline Results& setSecondCategoryName(string secondCategoryName) { DARABONBA_PTR_SET_VALUE(secondCategoryName_, secondCategoryName) };


      // shortDescription Field Functions 
      bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
      void deleteShortDescription() { this->shortDescription_ = nullptr;};
      inline string getShortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
      inline Results& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


      // submissionRadio Field Functions 
      bool hasSubmissionRadio() const { return this->submissionRadio_ != nullptr;};
      void deleteSubmissionRadio() { this->submissionRadio_ = nullptr;};
      inline string getSubmissionRadio() const { DARABONBA_PTR_GET_DEFAULT(submissionRadio_, "") };
      inline Results& setSubmissionRadio(string submissionRadio) { DARABONBA_PTR_SET_VALUE(submissionRadio_, submissionRadio) };


      // supplierName Field Functions 
      bool hasSupplierName() const { return this->supplierName_ != nullptr;};
      void deleteSupplierName() { this->supplierName_ = nullptr;};
      inline string getSupplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
      inline Results& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


      // supplierUId Field Functions 
      bool hasSupplierUId() const { return this->supplierUId_ != nullptr;};
      void deleteSupplierUId() { this->supplierUId_ = nullptr;};
      inline string getSupplierUId() const { DARABONBA_PTR_GET_DEFAULT(supplierUId_, "") };
      inline Results& setSupplierUId(string supplierUId) { DARABONBA_PTR_SET_VALUE(supplierUId_, supplierUId) };


      // tradeCount Field Functions 
      bool hasTradeCount() const { return this->tradeCount_ != nullptr;};
      void deleteTradeCount() { this->tradeCount_ = nullptr;};
      inline string getTradeCount() const { DARABONBA_PTR_GET_DEFAULT(tradeCount_, "") };
      inline Results& setTradeCount(string tradeCount) { DARABONBA_PTR_SET_VALUE(tradeCount_, tradeCount) };


      // type Field Functions 
      bool hasType() const { return this->type_ != nullptr;};
      void deleteType() { this->type_ = nullptr;};
      inline string getType() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
      inline Results& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


      // userCommentCount Field Functions 
      bool hasUserCommentCount() const { return this->userCommentCount_ != nullptr;};
      void deleteUserCommentCount() { this->userCommentCount_ = nullptr;};
      inline string getUserCommentCount() const { DARABONBA_PTR_GET_DEFAULT(userCommentCount_, "") };
      inline Results& setUserCommentCount(string userCommentCount) { DARABONBA_PTR_SET_VALUE(userCommentCount_, userCommentCount) };


    protected:
      shared_ptr<string> code_ {};
      shared_ptr<string> firstCategoryName_ {};
      shared_ptr<string> imageUrl_ {};
      shared_ptr<string> name_ {};
      shared_ptr<string> price_ {};
      shared_ptr<string> score_ {};
      shared_ptr<string> secondCategoryName_ {};
      shared_ptr<string> shortDescription_ {};
      shared_ptr<string> submissionRadio_ {};
      shared_ptr<string> supplierName_ {};
      shared_ptr<string> supplierUId_ {};
      shared_ptr<string> tradeCount_ {};
      shared_ptr<string> type_ {};
      shared_ptr<string> userCommentCount_ {};
    };

    virtual bool empty() const override { return this->pageNumber_ == nullptr
        && this->pageSize_ == nullptr && this->requestId_ == nullptr && this->results_ == nullptr && this->totalCount_ == nullptr; };
    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeDistributionProductsResponseBody& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeDistributionProductsResponseBody& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeDistributionProductsResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // results Field Functions 
    bool hasResults() const { return this->results_ != nullptr;};
    void deleteResults() { this->results_ = nullptr;};
    inline const vector<DescribeDistributionProductsResponseBody::Results> & getResults() const { DARABONBA_PTR_GET_CONST(results_, vector<DescribeDistributionProductsResponseBody::Results>) };
    inline vector<DescribeDistributionProductsResponseBody::Results> getResults() { DARABONBA_PTR_GET(results_, vector<DescribeDistributionProductsResponseBody::Results>) };
    inline DescribeDistributionProductsResponseBody& setResults(const vector<DescribeDistributionProductsResponseBody::Results> & results) { DARABONBA_PTR_SET_VALUE(results_, results) };
    inline DescribeDistributionProductsResponseBody& setResults(vector<DescribeDistributionProductsResponseBody::Results> && results) { DARABONBA_PTR_SET_RVALUE(results_, results) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeDistributionProductsResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<vector<DescribeDistributionProductsResponseBody::Results>> results_ {};
    shared_ptr<int32_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
