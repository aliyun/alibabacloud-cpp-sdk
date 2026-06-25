// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEBYFILTERRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEBYFILTERRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace ImageSearch20201214
{
namespace Models
{
  class SearchImageByFilterResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageByFilterResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Auctions, auctions_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageByFilterResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Auctions, auctions_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SearchImageByFilterResponseBody() = default ;
    SearchImageByFilterResponseBody(const SearchImageByFilterResponseBody &) = default ;
    SearchImageByFilterResponseBody(SearchImageByFilterResponseBody &&) = default ;
    SearchImageByFilterResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageByFilterResponseBody() = default ;
    SearchImageByFilterResponseBody& operator=(const SearchImageByFilterResponseBody &) = default ;
    SearchImageByFilterResponseBody& operator=(SearchImageByFilterResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class Auctions : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Auctions& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CustomContent, customContent_);
        DARABONBA_PTR_TO_JSON(IntAttr, intAttr_);
        DARABONBA_PTR_TO_JSON(IntAttr2, intAttr2_);
        DARABONBA_PTR_TO_JSON(IntAttr3, intAttr3_);
        DARABONBA_PTR_TO_JSON(IntAttr4, intAttr4_);
        DARABONBA_PTR_TO_JSON(PicName, picName_);
        DARABONBA_PTR_TO_JSON(ProductId, productId_);
        DARABONBA_PTR_TO_JSON(StrAttr, strAttr_);
        DARABONBA_PTR_TO_JSON(StrAttr2, strAttr2_);
        DARABONBA_PTR_TO_JSON(StrAttr3, strAttr3_);
        DARABONBA_PTR_TO_JSON(StrAttr4, strAttr4_);
      };
      friend void from_json(const Darabonba::Json& j, Auctions& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CustomContent, customContent_);
        DARABONBA_PTR_FROM_JSON(IntAttr, intAttr_);
        DARABONBA_PTR_FROM_JSON(IntAttr2, intAttr2_);
        DARABONBA_PTR_FROM_JSON(IntAttr3, intAttr3_);
        DARABONBA_PTR_FROM_JSON(IntAttr4, intAttr4_);
        DARABONBA_PTR_FROM_JSON(PicName, picName_);
        DARABONBA_PTR_FROM_JSON(ProductId, productId_);
        DARABONBA_PTR_FROM_JSON(StrAttr, strAttr_);
        DARABONBA_PTR_FROM_JSON(StrAttr2, strAttr2_);
        DARABONBA_PTR_FROM_JSON(StrAttr3, strAttr3_);
        DARABONBA_PTR_FROM_JSON(StrAttr4, strAttr4_);
      };
      Auctions() = default ;
      Auctions(const Auctions &) = default ;
      Auctions(Auctions &&) = default ;
      Auctions(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Auctions() = default ;
      Auctions& operator=(const Auctions &) = default ;
      Auctions& operator=(Auctions &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->categoryId_ == nullptr
        && this->customContent_ == nullptr && this->intAttr_ == nullptr && this->intAttr2_ == nullptr && this->intAttr3_ == nullptr && this->intAttr4_ == nullptr
        && this->picName_ == nullptr && this->productId_ == nullptr && this->strAttr_ == nullptr && this->strAttr2_ == nullptr && this->strAttr3_ == nullptr
        && this->strAttr4_ == nullptr; };
      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
      inline Auctions& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // customContent Field Functions 
      bool hasCustomContent() const { return this->customContent_ != nullptr;};
      void deleteCustomContent() { this->customContent_ = nullptr;};
      inline string getCustomContent() const { DARABONBA_PTR_GET_DEFAULT(customContent_, "") };
      inline Auctions& setCustomContent(string customContent) { DARABONBA_PTR_SET_VALUE(customContent_, customContent) };


      // intAttr Field Functions 
      bool hasIntAttr() const { return this->intAttr_ != nullptr;};
      void deleteIntAttr() { this->intAttr_ = nullptr;};
      inline int32_t getIntAttr() const { DARABONBA_PTR_GET_DEFAULT(intAttr_, 0) };
      inline Auctions& setIntAttr(int32_t intAttr) { DARABONBA_PTR_SET_VALUE(intAttr_, intAttr) };


      // intAttr2 Field Functions 
      bool hasIntAttr2() const { return this->intAttr2_ != nullptr;};
      void deleteIntAttr2() { this->intAttr2_ = nullptr;};
      inline int32_t getIntAttr2() const { DARABONBA_PTR_GET_DEFAULT(intAttr2_, 0) };
      inline Auctions& setIntAttr2(int32_t intAttr2) { DARABONBA_PTR_SET_VALUE(intAttr2_, intAttr2) };


      // intAttr3 Field Functions 
      bool hasIntAttr3() const { return this->intAttr3_ != nullptr;};
      void deleteIntAttr3() { this->intAttr3_ = nullptr;};
      inline int32_t getIntAttr3() const { DARABONBA_PTR_GET_DEFAULT(intAttr3_, 0) };
      inline Auctions& setIntAttr3(int32_t intAttr3) { DARABONBA_PTR_SET_VALUE(intAttr3_, intAttr3) };


      // intAttr4 Field Functions 
      bool hasIntAttr4() const { return this->intAttr4_ != nullptr;};
      void deleteIntAttr4() { this->intAttr4_ = nullptr;};
      inline int32_t getIntAttr4() const { DARABONBA_PTR_GET_DEFAULT(intAttr4_, 0) };
      inline Auctions& setIntAttr4(int32_t intAttr4) { DARABONBA_PTR_SET_VALUE(intAttr4_, intAttr4) };


      // picName Field Functions 
      bool hasPicName() const { return this->picName_ != nullptr;};
      void deletePicName() { this->picName_ = nullptr;};
      inline string getPicName() const { DARABONBA_PTR_GET_DEFAULT(picName_, "") };
      inline Auctions& setPicName(string picName) { DARABONBA_PTR_SET_VALUE(picName_, picName) };


      // productId Field Functions 
      bool hasProductId() const { return this->productId_ != nullptr;};
      void deleteProductId() { this->productId_ = nullptr;};
      inline string getProductId() const { DARABONBA_PTR_GET_DEFAULT(productId_, "") };
      inline Auctions& setProductId(string productId) { DARABONBA_PTR_SET_VALUE(productId_, productId) };


      // strAttr Field Functions 
      bool hasStrAttr() const { return this->strAttr_ != nullptr;};
      void deleteStrAttr() { this->strAttr_ = nullptr;};
      inline string getStrAttr() const { DARABONBA_PTR_GET_DEFAULT(strAttr_, "") };
      inline Auctions& setStrAttr(string strAttr) { DARABONBA_PTR_SET_VALUE(strAttr_, strAttr) };


      // strAttr2 Field Functions 
      bool hasStrAttr2() const { return this->strAttr2_ != nullptr;};
      void deleteStrAttr2() { this->strAttr2_ = nullptr;};
      inline string getStrAttr2() const { DARABONBA_PTR_GET_DEFAULT(strAttr2_, "") };
      inline Auctions& setStrAttr2(string strAttr2) { DARABONBA_PTR_SET_VALUE(strAttr2_, strAttr2) };


      // strAttr3 Field Functions 
      bool hasStrAttr3() const { return this->strAttr3_ != nullptr;};
      void deleteStrAttr3() { this->strAttr3_ = nullptr;};
      inline string getStrAttr3() const { DARABONBA_PTR_GET_DEFAULT(strAttr3_, "") };
      inline Auctions& setStrAttr3(string strAttr3) { DARABONBA_PTR_SET_VALUE(strAttr3_, strAttr3) };


      // strAttr4 Field Functions 
      bool hasStrAttr4() const { return this->strAttr4_ != nullptr;};
      void deleteStrAttr4() { this->strAttr4_ = nullptr;};
      inline string getStrAttr4() const { DARABONBA_PTR_GET_DEFAULT(strAttr4_, "") };
      inline Auctions& setStrAttr4(string strAttr4) { DARABONBA_PTR_SET_VALUE(strAttr4_, strAttr4) };


    protected:
      // The image category.
      shared_ptr<int32_t> categoryId_ {};
      // The user-defined content.
      shared_ptr<string> customContent_ {};
      // The integer type attribute.
      shared_ptr<int32_t> intAttr_ {};
      // The integer type attribute.
      shared_ptr<int32_t> intAttr2_ {};
      // The integer type attribute.
      shared_ptr<int32_t> intAttr3_ {};
      // The integer type attribute.
      shared_ptr<int32_t> intAttr4_ {};
      // The image name.
      shared_ptr<string> picName_ {};
      // The product ID.
      shared_ptr<string> productId_ {};
      // The string type attribute.
      shared_ptr<string> strAttr_ {};
      // The string type attribute.
      shared_ptr<string> strAttr2_ {};
      // The string type attribute.
      shared_ptr<string> strAttr3_ {};
      // The string type attribute.
      shared_ptr<string> strAttr4_ {};
    };

    virtual bool empty() const override { return this->auctions_ == nullptr
        && this->code_ == nullptr && this->msg_ == nullptr && this->requestId_ == nullptr && this->success_ == nullptr; };
    // auctions Field Functions 
    bool hasAuctions() const { return this->auctions_ != nullptr;};
    void deleteAuctions() { this->auctions_ = nullptr;};
    inline const vector<SearchImageByFilterResponseBody::Auctions> & getAuctions() const { DARABONBA_PTR_GET_CONST(auctions_, vector<SearchImageByFilterResponseBody::Auctions>) };
    inline vector<SearchImageByFilterResponseBody::Auctions> getAuctions() { DARABONBA_PTR_GET(auctions_, vector<SearchImageByFilterResponseBody::Auctions>) };
    inline SearchImageByFilterResponseBody& setAuctions(const vector<SearchImageByFilterResponseBody::Auctions> & auctions) { DARABONBA_PTR_SET_VALUE(auctions_, auctions) };
    inline SearchImageByFilterResponseBody& setAuctions(vector<SearchImageByFilterResponseBody::Auctions> && auctions) { DARABONBA_PTR_SET_RVALUE(auctions_, auctions) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline SearchImageByFilterResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline SearchImageByFilterResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchImageByFilterResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchImageByFilterResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The product description information returned.
    shared_ptr<vector<SearchImageByFilterResponseBody::Auctions>> auctions_ {};
    // The error code.
    // - 0: success.
    // - Non-zero: failure.
    shared_ptr<int32_t> code_ {};
    // The error message.
    shared_ptr<string> msg_ {};
    // The request ID.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
