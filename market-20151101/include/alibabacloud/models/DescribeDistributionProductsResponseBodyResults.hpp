// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSRESPONSEBODYRESULTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDISTRIBUTIONPRODUCTSRESPONSEBODYRESULTS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Market20151101
{
namespace Models
{
  class DescribeDistributionProductsResponseBodyResults : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDistributionProductsResponseBodyResults& obj) { 
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
    friend void from_json(const Darabonba::Json& j, DescribeDistributionProductsResponseBodyResults& obj) { 
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
    DescribeDistributionProductsResponseBodyResults() = default ;
    DescribeDistributionProductsResponseBodyResults(const DescribeDistributionProductsResponseBodyResults &) = default ;
    DescribeDistributionProductsResponseBodyResults(DescribeDistributionProductsResponseBodyResults &&) = default ;
    DescribeDistributionProductsResponseBodyResults(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDistributionProductsResponseBodyResults() = default ;
    DescribeDistributionProductsResponseBodyResults& operator=(const DescribeDistributionProductsResponseBodyResults &) = default ;
    DescribeDistributionProductsResponseBodyResults& operator=(DescribeDistributionProductsResponseBodyResults &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->code_ != nullptr
        && this->firstCategoryName_ != nullptr && this->imageUrl_ != nullptr && this->name_ != nullptr && this->price_ != nullptr && this->score_ != nullptr
        && this->secondCategoryName_ != nullptr && this->shortDescription_ != nullptr && this->submissionRadio_ != nullptr && this->supplierName_ != nullptr && this->supplierUId_ != nullptr
        && this->tradeCount_ != nullptr && this->type_ != nullptr && this->userCommentCount_ != nullptr; };
    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline string code() const { DARABONBA_PTR_GET_DEFAULT(code_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setCode(string code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // firstCategoryName Field Functions 
    bool hasFirstCategoryName() const { return this->firstCategoryName_ != nullptr;};
    void deleteFirstCategoryName() { this->firstCategoryName_ = nullptr;};
    inline string firstCategoryName() const { DARABONBA_PTR_GET_DEFAULT(firstCategoryName_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setFirstCategoryName(string firstCategoryName) { DARABONBA_PTR_SET_VALUE(firstCategoryName_, firstCategoryName) };


    // imageUrl Field Functions 
    bool hasImageUrl() const { return this->imageUrl_ != nullptr;};
    void deleteImageUrl() { this->imageUrl_ = nullptr;};
    inline string imageUrl() const { DARABONBA_PTR_GET_DEFAULT(imageUrl_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setImageUrl(string imageUrl) { DARABONBA_PTR_SET_VALUE(imageUrl_, imageUrl) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // price Field Functions 
    bool hasPrice() const { return this->price_ != nullptr;};
    void deletePrice() { this->price_ = nullptr;};
    inline string price() const { DARABONBA_PTR_GET_DEFAULT(price_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setPrice(string price) { DARABONBA_PTR_SET_VALUE(price_, price) };


    // score Field Functions 
    bool hasScore() const { return this->score_ != nullptr;};
    void deleteScore() { this->score_ = nullptr;};
    inline string score() const { DARABONBA_PTR_GET_DEFAULT(score_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setScore(string score) { DARABONBA_PTR_SET_VALUE(score_, score) };


    // secondCategoryName Field Functions 
    bool hasSecondCategoryName() const { return this->secondCategoryName_ != nullptr;};
    void deleteSecondCategoryName() { this->secondCategoryName_ = nullptr;};
    inline string secondCategoryName() const { DARABONBA_PTR_GET_DEFAULT(secondCategoryName_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setSecondCategoryName(string secondCategoryName) { DARABONBA_PTR_SET_VALUE(secondCategoryName_, secondCategoryName) };


    // shortDescription Field Functions 
    bool hasShortDescription() const { return this->shortDescription_ != nullptr;};
    void deleteShortDescription() { this->shortDescription_ = nullptr;};
    inline string shortDescription() const { DARABONBA_PTR_GET_DEFAULT(shortDescription_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setShortDescription(string shortDescription) { DARABONBA_PTR_SET_VALUE(shortDescription_, shortDescription) };


    // submissionRadio Field Functions 
    bool hasSubmissionRadio() const { return this->submissionRadio_ != nullptr;};
    void deleteSubmissionRadio() { this->submissionRadio_ = nullptr;};
    inline string submissionRadio() const { DARABONBA_PTR_GET_DEFAULT(submissionRadio_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setSubmissionRadio(string submissionRadio) { DARABONBA_PTR_SET_VALUE(submissionRadio_, submissionRadio) };


    // supplierName Field Functions 
    bool hasSupplierName() const { return this->supplierName_ != nullptr;};
    void deleteSupplierName() { this->supplierName_ = nullptr;};
    inline string supplierName() const { DARABONBA_PTR_GET_DEFAULT(supplierName_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setSupplierName(string supplierName) { DARABONBA_PTR_SET_VALUE(supplierName_, supplierName) };


    // supplierUId Field Functions 
    bool hasSupplierUId() const { return this->supplierUId_ != nullptr;};
    void deleteSupplierUId() { this->supplierUId_ = nullptr;};
    inline string supplierUId() const { DARABONBA_PTR_GET_DEFAULT(supplierUId_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setSupplierUId(string supplierUId) { DARABONBA_PTR_SET_VALUE(supplierUId_, supplierUId) };


    // tradeCount Field Functions 
    bool hasTradeCount() const { return this->tradeCount_ != nullptr;};
    void deleteTradeCount() { this->tradeCount_ = nullptr;};
    inline string tradeCount() const { DARABONBA_PTR_GET_DEFAULT(tradeCount_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setTradeCount(string tradeCount) { DARABONBA_PTR_SET_VALUE(tradeCount_, tradeCount) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


    // userCommentCount Field Functions 
    bool hasUserCommentCount() const { return this->userCommentCount_ != nullptr;};
    void deleteUserCommentCount() { this->userCommentCount_ = nullptr;};
    inline string userCommentCount() const { DARABONBA_PTR_GET_DEFAULT(userCommentCount_, "") };
    inline DescribeDistributionProductsResponseBodyResults& setUserCommentCount(string userCommentCount) { DARABONBA_PTR_SET_VALUE(userCommentCount_, userCommentCount) };


  protected:
    std::shared_ptr<string> code_ = nullptr;
    std::shared_ptr<string> firstCategoryName_ = nullptr;
    std::shared_ptr<string> imageUrl_ = nullptr;
    std::shared_ptr<string> name_ = nullptr;
    std::shared_ptr<string> price_ = nullptr;
    std::shared_ptr<string> score_ = nullptr;
    std::shared_ptr<string> secondCategoryName_ = nullptr;
    std::shared_ptr<string> shortDescription_ = nullptr;
    std::shared_ptr<string> submissionRadio_ = nullptr;
    std::shared_ptr<string> supplierName_ = nullptr;
    std::shared_ptr<string> supplierUId_ = nullptr;
    std::shared_ptr<string> tradeCount_ = nullptr;
    std::shared_ptr<string> type_ = nullptr;
    std::shared_ptr<string> userCommentCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Market20151101
#endif
