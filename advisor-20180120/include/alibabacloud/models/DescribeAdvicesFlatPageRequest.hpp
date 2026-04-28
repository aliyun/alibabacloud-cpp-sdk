// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEADVICESFLATPAGEREQUEST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEADVICESFLATPAGEREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Advisor20180120
{
namespace Models
{
  class DescribeAdvicesFlatPageRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAdvicesFlatPageRequest& obj) { 
      DARABONBA_PTR_TO_JSON(AdviceId, adviceId_);
      DARABONBA_PTR_TO_JSON(CheckId, checkId_);
      DARABONBA_PTR_TO_JSON(Language, language_);
      DARABONBA_PTR_TO_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(Product, product_);
      DARABONBA_PTR_TO_JSON(ResourceId, resourceId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAdvicesFlatPageRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(AdviceId, adviceId_);
      DARABONBA_PTR_FROM_JSON(CheckId, checkId_);
      DARABONBA_PTR_FROM_JSON(Language, language_);
      DARABONBA_PTR_FROM_JSON(PageNumber, pageNumber_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(Product, product_);
      DARABONBA_PTR_FROM_JSON(ResourceId, resourceId_);
    };
    DescribeAdvicesFlatPageRequest() = default ;
    DescribeAdvicesFlatPageRequest(const DescribeAdvicesFlatPageRequest &) = default ;
    DescribeAdvicesFlatPageRequest(DescribeAdvicesFlatPageRequest &&) = default ;
    DescribeAdvicesFlatPageRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAdvicesFlatPageRequest() = default ;
    DescribeAdvicesFlatPageRequest& operator=(const DescribeAdvicesFlatPageRequest &) = default ;
    DescribeAdvicesFlatPageRequest& operator=(DescribeAdvicesFlatPageRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->adviceId_ == nullptr
        && this->checkId_ == nullptr && this->language_ == nullptr && this->pageNumber_ == nullptr && this->pageSize_ == nullptr && this->product_ == nullptr
        && this->resourceId_ == nullptr; };
    // adviceId Field Functions 
    bool hasAdviceId() const { return this->adviceId_ != nullptr;};
    void deleteAdviceId() { this->adviceId_ = nullptr;};
    inline int64_t getAdviceId() const { DARABONBA_PTR_GET_DEFAULT(adviceId_, 0L) };
    inline DescribeAdvicesFlatPageRequest& setAdviceId(int64_t adviceId) { DARABONBA_PTR_SET_VALUE(adviceId_, adviceId) };


    // checkId Field Functions 
    bool hasCheckId() const { return this->checkId_ != nullptr;};
    void deleteCheckId() { this->checkId_ = nullptr;};
    inline string getCheckId() const { DARABONBA_PTR_GET_DEFAULT(checkId_, "") };
    inline DescribeAdvicesFlatPageRequest& setCheckId(string checkId) { DARABONBA_PTR_SET_VALUE(checkId_, checkId) };


    // language Field Functions 
    bool hasLanguage() const { return this->language_ != nullptr;};
    void deleteLanguage() { this->language_ = nullptr;};
    inline string getLanguage() const { DARABONBA_PTR_GET_DEFAULT(language_, "") };
    inline DescribeAdvicesFlatPageRequest& setLanguage(string language) { DARABONBA_PTR_SET_VALUE(language_, language) };


    // pageNumber Field Functions 
    bool hasPageNumber() const { return this->pageNumber_ != nullptr;};
    void deletePageNumber() { this->pageNumber_ = nullptr;};
    inline int32_t getPageNumber() const { DARABONBA_PTR_GET_DEFAULT(pageNumber_, 0) };
    inline DescribeAdvicesFlatPageRequest& setPageNumber(int32_t pageNumber) { DARABONBA_PTR_SET_VALUE(pageNumber_, pageNumber) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t getPageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline DescribeAdvicesFlatPageRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // product Field Functions 
    bool hasProduct() const { return this->product_ != nullptr;};
    void deleteProduct() { this->product_ = nullptr;};
    inline string getProduct() const { DARABONBA_PTR_GET_DEFAULT(product_, "") };
    inline DescribeAdvicesFlatPageRequest& setProduct(string product) { DARABONBA_PTR_SET_VALUE(product_, product) };


    // resourceId Field Functions 
    bool hasResourceId() const { return this->resourceId_ != nullptr;};
    void deleteResourceId() { this->resourceId_ = nullptr;};
    inline string getResourceId() const { DARABONBA_PTR_GET_DEFAULT(resourceId_, "") };
    inline DescribeAdvicesFlatPageRequest& setResourceId(string resourceId) { DARABONBA_PTR_SET_VALUE(resourceId_, resourceId) };


  protected:
    shared_ptr<int64_t> adviceId_ {};
    shared_ptr<string> checkId_ {};
    shared_ptr<string> language_ {};
    shared_ptr<int32_t> pageNumber_ {};
    shared_ptr<int32_t> pageSize_ {};
    shared_ptr<string> product_ {};
    shared_ptr<string> resourceId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Advisor20180120
#endif
