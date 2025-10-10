// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_LISTPRODUCTSREQUEST_HPP_
#define ALIBABACLOUD_MODELS_LISTPRODUCTSREQUEST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Mhub20170825
{
namespace Models
{
  class ListProductsRequest : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const ListProductsRequest& obj) { 
      DARABONBA_PTR_TO_JSON(Offset, offset_);
      DARABONBA_PTR_TO_JSON(PageNum, pageNum_);
      DARABONBA_PTR_TO_JSON(PageSize, pageSize_);
      DARABONBA_PTR_TO_JSON(ProductName, productName_);
      DARABONBA_PTR_TO_JSON(SearchKeyWord, searchKeyWord_);
      DARABONBA_PTR_TO_JSON(Simple, simple_);
      DARABONBA_PTR_TO_JSON(Size, size_);
    };
    friend void from_json(const Darabonba::Json& j, ListProductsRequest& obj) { 
      DARABONBA_PTR_FROM_JSON(Offset, offset_);
      DARABONBA_PTR_FROM_JSON(PageNum, pageNum_);
      DARABONBA_PTR_FROM_JSON(PageSize, pageSize_);
      DARABONBA_PTR_FROM_JSON(ProductName, productName_);
      DARABONBA_PTR_FROM_JSON(SearchKeyWord, searchKeyWord_);
      DARABONBA_PTR_FROM_JSON(Simple, simple_);
      DARABONBA_PTR_FROM_JSON(Size, size_);
    };
    ListProductsRequest() = default ;
    ListProductsRequest(const ListProductsRequest &) = default ;
    ListProductsRequest(ListProductsRequest &&) = default ;
    ListProductsRequest(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~ListProductsRequest() = default ;
    ListProductsRequest& operator=(const ListProductsRequest &) = default ;
    ListProductsRequest& operator=(ListProductsRequest &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->offset_ != nullptr
        && this->pageNum_ != nullptr && this->pageSize_ != nullptr && this->productName_ != nullptr && this->searchKeyWord_ != nullptr && this->simple_ != nullptr
        && this->size_ != nullptr; };
    // offset Field Functions 
    bool hasOffset() const { return this->offset_ != nullptr;};
    void deleteOffset() { this->offset_ = nullptr;};
    inline int32_t offset() const { DARABONBA_PTR_GET_DEFAULT(offset_, 0) };
    inline ListProductsRequest& setOffset(int32_t offset) { DARABONBA_PTR_SET_VALUE(offset_, offset) };


    // pageNum Field Functions 
    bool hasPageNum() const { return this->pageNum_ != nullptr;};
    void deletePageNum() { this->pageNum_ = nullptr;};
    inline int32_t pageNum() const { DARABONBA_PTR_GET_DEFAULT(pageNum_, 0) };
    inline ListProductsRequest& setPageNum(int32_t pageNum) { DARABONBA_PTR_SET_VALUE(pageNum_, pageNum) };


    // pageSize Field Functions 
    bool hasPageSize() const { return this->pageSize_ != nullptr;};
    void deletePageSize() { this->pageSize_ = nullptr;};
    inline int32_t pageSize() const { DARABONBA_PTR_GET_DEFAULT(pageSize_, 0) };
    inline ListProductsRequest& setPageSize(int32_t pageSize) { DARABONBA_PTR_SET_VALUE(pageSize_, pageSize) };


    // productName Field Functions 
    bool hasProductName() const { return this->productName_ != nullptr;};
    void deleteProductName() { this->productName_ = nullptr;};
    inline string productName() const { DARABONBA_PTR_GET_DEFAULT(productName_, "") };
    inline ListProductsRequest& setProductName(string productName) { DARABONBA_PTR_SET_VALUE(productName_, productName) };


    // searchKeyWord Field Functions 
    bool hasSearchKeyWord() const { return this->searchKeyWord_ != nullptr;};
    void deleteSearchKeyWord() { this->searchKeyWord_ = nullptr;};
    inline string searchKeyWord() const { DARABONBA_PTR_GET_DEFAULT(searchKeyWord_, "") };
    inline ListProductsRequest& setSearchKeyWord(string searchKeyWord) { DARABONBA_PTR_SET_VALUE(searchKeyWord_, searchKeyWord) };


    // simple Field Functions 
    bool hasSimple() const { return this->simple_ != nullptr;};
    void deleteSimple() { this->simple_ = nullptr;};
    inline bool simple() const { DARABONBA_PTR_GET_DEFAULT(simple_, false) };
    inline ListProductsRequest& setSimple(bool simple) { DARABONBA_PTR_SET_VALUE(simple_, simple) };


    // size Field Functions 
    bool hasSize() const { return this->size_ != nullptr;};
    void deleteSize() { this->size_ = nullptr;};
    inline int32_t size() const { DARABONBA_PTR_GET_DEFAULT(size_, 0) };
    inline ListProductsRequest& setSize(int32_t size) { DARABONBA_PTR_SET_VALUE(size_, size) };


  protected:
    std::shared_ptr<int32_t> offset_ = nullptr;
    std::shared_ptr<int32_t> pageNum_ = nullptr;
    std::shared_ptr<int32_t> pageSize_ = nullptr;
    std::shared_ptr<string> productName_ = nullptr;
    std::shared_ptr<string> searchKeyWord_ = nullptr;
    std::shared_ptr<bool> simple_ = nullptr;
    std::shared_ptr<int32_t> size_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Mhub20170825
#endif
