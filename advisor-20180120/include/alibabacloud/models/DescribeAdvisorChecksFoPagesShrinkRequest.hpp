// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVISORCHECKSFOPAGESSHRINKREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVISORCHECKSFOPAGESSHRINKREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeAdvisorChecksFoPagesShrinkRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvisorChecksFoPagesShrinkRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AssumeAliyunId, assumeAliyunId_);
      DARABONBA_PTR_TO_JSON(BizCategory, bizCategory_);
      DARABONBA_PTR_TO_JSON(Category, category_);
      DARABONBA_PTR_TO_JSON(CheckTypes, checkTypesShrink_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(Source, source_);
      DARABONBA_PTR_TO_JSON(Status, status_);
      DARABONBA_PTR_TO_JSON(Token, token_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvisorChecksFoPagesShrinkRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AssumeAliyunId, assumeAliyunId_);
      DARABONBA_PTR_FROM_JSON(BizCategory, bizCategory_);
      DARABONBA_PTR_FROM_JSON(Category, category_);
      DARABONBA_PTR_FROM_JSON(CheckTypes, checkTypesShrink_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(Source, source_);
      DARABONBA_PTR_FROM_JSON(Status, status_);
      DARABONBA_PTR_FROM_JSON(Token, token_);
    };
    DescribeAdvisorChecksFoPagesShrinkRequest() = default ;
    DescribeAdvisorChecksFoPagesShrinkRequest(const DescribeAdvisorChecksFoPagesShrinkRequest &) = default ;
    DescribeAdvisorChecksFoPagesShrinkRequest(DescribeAdvisorChecksFoPagesShrinkRequest &&) = default ;
    DescribeAdvisorChecksFoPagesShrinkRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvisorChecksFoPagesShrinkRequest() = default ;
    DescribeAdvisorChecksFoPagesShrinkRequest& operator=(const DescribeAdvisorChecksFoPagesShrinkRequest &) = default ;
    DescribeAdvisorChecksFoPagesShrinkRequest& operator=(DescribeAdvisorChecksFoPagesShrinkRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->assumeAliyunId_ == nullptr
        && this->bizCategory_ == nullptr && this->category_ == nullptr && this->checkTypesShrink_ == nullptr && this->language_ == nullptr && this->name_ == nullptr
        && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->product_ == nullptr && this->source_ == nullptr && this->status_ == nullptr
        && this->token_ == nullptr; };
    // assumeAliyunId Field Functions 
    bool hasAssumeAliyunId() const { return this->assumeAliyunId_ != nullptr;};
    void deleteAssumeAliyunId() { this->assumeAliyunId_ = nullptr;};
    inline int64_t getAssumeAliyunId() const { DARABONBA_PTR_GET_DEFAULT(assumeAliyunId_, 0L) };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setAssumeAliyunId(int64_t assumeAliyunId) { DARABONBA_PTR_SET_VALUE(assumeAliyunId_, assumeAliyunId) };


    // bizCategory Field Functions 
    bool hasBizCategory() const { return this->bizCategory_ != nullptr;};
    void deleteBizCategory() { this->bizCategory_ = nullptr;};
    inline string getBizCategory() const { DARABONBA_PTR_GET_DEFAULT(bizCategory_, "") };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setBizCategory(string bizCategory) { DARABONBA_PTR_SET_VALUE(bizCategory_, bizCategory) };


    // category Field Functions 
    bool hasCategory() const { return this->category_ != nullptr;};
    void deleteCategory() { this->category_ = nullptr;};
    inline string getCategory() const { DARABONBA_PTR_GET_DEFAULT(category_, "") };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setCategory(string category) { DARABONBA_PTR_SET_VALUE(category_, category) };


    // checkTypesShrink Field Functions 
    bool hasCheckTypesShrink() const { return this->checkTypesShrink_ != nullptr;};
    void deleteCheckTypesShrink() { this->checkTypesShrink_ = nullptr;};
    inline string getCheckTypesShrink() const { DARABONBA_PTR_GET_DEFAULT(checkTypesShrink_, "") };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setCheckTypesShrink(string checkTypesShrink) { DARABONBA_PTR_SET_VALUE(checkTypesShrink_, checkTypesShrink) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // source Field Functions 
    bool hasSource() const { return this->source_ != nullptr;};
    void deleteSource() { this->source_ = nullptr;};
    inline string getSource() const { DARABONBA_PTR_GET_DEFAULT(source_, "") };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setSource(string source) { DARABONBA_PTR_SET_VALUE(source_, source) };


    // status Field Functions 
    bool hasStatus() const { return this->status_ != nullptr;};
    void deleteStatus() { this->status_ = nullptr;};
    inline string getStatus() const { DARABONBA_PTR_GET_DEFAULT(status_, "") };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setStatus(string status) { DARABONBA_PTR_SET_VALUE(status_, status) };


    // token Field Functions 
    bool hasToken() const { return this->token_ != nullptr;};
    void deleteToken() { this->token_ = nullptr;};
    inline string getToken() const { DARABONBA_PTR_GET_DEFAULT(token_, "") };
    inline DescribeAdvisorChecksFoPagesShrinkRequest& setToken(string token) { DARABONBA_PTR_SET_VALUE(token_, token) };


  protected:
    shared_ptr<int64_t> assumeAliyunId_ {};
    shared_ptr<string> bizCategory_ {};
    shared_ptr<string> category_ {};
    shared_ptr<string> checkTypesShrink_ {};
    shared_ptr<string> language_ {};
    shared_ptr<string> name_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> product_ {};
    shared_ptr<string> source_ {};
    shared_ptr<string> status_ {};
    shared_ptr<string> token_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
