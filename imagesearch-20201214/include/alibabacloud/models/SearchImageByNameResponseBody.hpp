// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_SEARCHIMAGEBYNAMERESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_SEARCHIMAGEBYNAMERESPONSEBODY_HPP_
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
  class SearchImageByNameResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const SearchImageByNameResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(Auctions, auctions_);
      DARABONBA_PTR_TO_JSON(Code, code_);
      DARABONBA_PTR_TO_JSON(Head, head_);
      DARABONBA_PTR_TO_JSON(Msg, msg_);
      DARABONBA_PTR_TO_JSON(PicInfo, picInfo_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(Success, success_);
    };
    friend void from_json(const Darabonba::Json& j, SearchImageByNameResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(Auctions, auctions_);
      DARABONBA_PTR_FROM_JSON(Code, code_);
      DARABONBA_PTR_FROM_JSON(Head, head_);
      DARABONBA_PTR_FROM_JSON(Msg, msg_);
      DARABONBA_PTR_FROM_JSON(PicInfo, picInfo_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(Success, success_);
    };
    SearchImageByNameResponseBody() = default ;
    SearchImageByNameResponseBody(const SearchImageByNameResponseBody &) = default ;
    SearchImageByNameResponseBody(SearchImageByNameResponseBody &&) = default ;
    SearchImageByNameResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~SearchImageByNameResponseBody() = default ;
    SearchImageByNameResponseBody& operator=(const SearchImageByNameResponseBody &) = default ;
    SearchImageByNameResponseBody& operator=(SearchImageByNameResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class PicInfo : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const PicInfo& obj) { 
        DARABONBA_PTR_TO_JSON(AllCategories, allCategories_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(MultiRegion, multiRegion_);
        DARABONBA_PTR_TO_JSON(Region, region_);
      };
      friend void from_json(const Darabonba::Json& j, PicInfo& obj) { 
        DARABONBA_PTR_FROM_JSON(AllCategories, allCategories_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(MultiRegion, multiRegion_);
        DARABONBA_PTR_FROM_JSON(Region, region_);
      };
      PicInfo() = default ;
      PicInfo(const PicInfo &) = default ;
      PicInfo(PicInfo &&) = default ;
      PicInfo(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~PicInfo() = default ;
      PicInfo& operator=(const PicInfo &) = default ;
      PicInfo& operator=(PicInfo &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class MultiRegion : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const MultiRegion& obj) { 
          DARABONBA_PTR_TO_JSON(Region, region_);
        };
        friend void from_json(const Darabonba::Json& j, MultiRegion& obj) { 
          DARABONBA_PTR_FROM_JSON(Region, region_);
        };
        MultiRegion() = default ;
        MultiRegion(const MultiRegion &) = default ;
        MultiRegion(MultiRegion &&) = default ;
        MultiRegion(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~MultiRegion() = default ;
        MultiRegion& operator=(const MultiRegion &) = default ;
        MultiRegion& operator=(MultiRegion &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->region_ == nullptr; };
        // region Field Functions 
        bool hasRegion() const { return this->region_ != nullptr;};
        void deleteRegion() { this->region_ = nullptr;};
        inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
        inline MultiRegion& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


      protected:
        // The result of subject recognition.
        // 
        // The subject area of the image, in the format of x1,x2,y1,y2. Specifically, x1 and y1 specify the upper-left pixel, and x2 and y2 specify the lower-right pixel. If a subject area is specified in the request, the specified subject area prevails.
        shared_ptr<string> region_ {};
      };

      class AllCategories : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const AllCategories& obj) { 
          DARABONBA_PTR_TO_JSON(Id, id_);
          DARABONBA_PTR_TO_JSON(Name, name_);
        };
        friend void from_json(const Darabonba::Json& j, AllCategories& obj) { 
          DARABONBA_PTR_FROM_JSON(Id, id_);
          DARABONBA_PTR_FROM_JSON(Name, name_);
        };
        AllCategories() = default ;
        AllCategories(const AllCategories &) = default ;
        AllCategories(AllCategories &&) = default ;
        AllCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~AllCategories() = default ;
        AllCategories& operator=(const AllCategories &) = default ;
        AllCategories& operator=(AllCategories &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->id_ == nullptr
        && this->name_ == nullptr; };
        // id Field Functions 
        bool hasId() const { return this->id_ != nullptr;};
        void deleteId() { this->id_ = nullptr;};
        inline int32_t getId() const { DARABONBA_PTR_GET_DEFAULT(id_, 0) };
        inline AllCategories& setId(int32_t id) { DARABONBA_PTR_SET_VALUE(id_, id) };


        // name Field Functions 
        bool hasName() const { return this->name_ != nullptr;};
        void deleteName() { this->name_ = nullptr;};
        inline string getName() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
        inline AllCategories& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


      protected:
        // The ID of the category.
        shared_ptr<int32_t> id_ {};
        // The name of the category.
        shared_ptr<string> name_ {};
      };

      virtual bool empty() const override { return this->allCategories_ == nullptr
        && this->categoryId_ == nullptr && this->multiRegion_ == nullptr && this->region_ == nullptr; };
      // allCategories Field Functions 
      bool hasAllCategories() const { return this->allCategories_ != nullptr;};
      void deleteAllCategories() { this->allCategories_ = nullptr;};
      inline const vector<PicInfo::AllCategories> & getAllCategories() const { DARABONBA_PTR_GET_CONST(allCategories_, vector<PicInfo::AllCategories>) };
      inline vector<PicInfo::AllCategories> getAllCategories() { DARABONBA_PTR_GET(allCategories_, vector<PicInfo::AllCategories>) };
      inline PicInfo& setAllCategories(const vector<PicInfo::AllCategories> & allCategories) { DARABONBA_PTR_SET_VALUE(allCategories_, allCategories) };
      inline PicInfo& setAllCategories(vector<PicInfo::AllCategories> && allCategories) { DARABONBA_PTR_SET_RVALUE(allCategories_, allCategories) };


      // categoryId Field Functions 
      bool hasCategoryId() const { return this->categoryId_ != nullptr;};
      void deleteCategoryId() { this->categoryId_ = nullptr;};
      inline int32_t getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, 0) };
      inline PicInfo& setCategoryId(int32_t categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


      // multiRegion Field Functions 
      bool hasMultiRegion() const { return this->multiRegion_ != nullptr;};
      void deleteMultiRegion() { this->multiRegion_ = nullptr;};
      inline const vector<PicInfo::MultiRegion> & getMultiRegion() const { DARABONBA_PTR_GET_CONST(multiRegion_, vector<PicInfo::MultiRegion>) };
      inline vector<PicInfo::MultiRegion> getMultiRegion() { DARABONBA_PTR_GET(multiRegion_, vector<PicInfo::MultiRegion>) };
      inline PicInfo& setMultiRegion(const vector<PicInfo::MultiRegion> & multiRegion) { DARABONBA_PTR_SET_VALUE(multiRegion_, multiRegion) };
      inline PicInfo& setMultiRegion(vector<PicInfo::MultiRegion> && multiRegion) { DARABONBA_PTR_SET_RVALUE(multiRegion_, multiRegion) };


      // region Field Functions 
      bool hasRegion() const { return this->region_ != nullptr;};
      void deleteRegion() { this->region_ = nullptr;};
      inline string getRegion() const { DARABONBA_PTR_GET_DEFAULT(region_, "") };
      inline PicInfo& setRegion(string region) { DARABONBA_PTR_SET_VALUE(region_, region) };


    protected:
      // The categories that are supported by the system.
      shared_ptr<vector<PicInfo::AllCategories>> allCategories_ {};
      // The category selected by the system.
      // 
      // If a category is specified in the request, the specified category prevails.
      shared_ptr<int32_t> categoryId_ {};
      // The recognized subjects.
      shared_ptr<vector<PicInfo::MultiRegion>> multiRegion_ {};
      // The result of subject recognition.
      // 
      // The subject area of the image, in the format of x1,x2,y1,y2. Specifically, x1 and y1 specify the upper-left pixel, and x2 and y2 specify the lower-right pixel. If a subject area is specified in the request, the specified subject area prevails.
      shared_ptr<string> region_ {};
    };

    class Head : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const Head& obj) { 
        DARABONBA_PTR_TO_JSON(DocsFound, docsFound_);
        DARABONBA_PTR_TO_JSON(DocsReturn, docsReturn_);
        DARABONBA_PTR_TO_JSON(SearchTime, searchTime_);
      };
      friend void from_json(const Darabonba::Json& j, Head& obj) { 
        DARABONBA_PTR_FROM_JSON(DocsFound, docsFound_);
        DARABONBA_PTR_FROM_JSON(DocsReturn, docsReturn_);
        DARABONBA_PTR_FROM_JSON(SearchTime, searchTime_);
      };
      Head() = default ;
      Head(const Head &) = default ;
      Head(Head &&) = default ;
      Head(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~Head() = default ;
      Head& operator=(const Head &) = default ;
      Head& operator=(Head &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->docsFound_ == nullptr
        && this->docsReturn_ == nullptr && this->searchTime_ == nullptr; };
      // docsFound Field Functions 
      bool hasDocsFound() const { return this->docsFound_ != nullptr;};
      void deleteDocsFound() { this->docsFound_ = nullptr;};
      inline int32_t getDocsFound() const { DARABONBA_PTR_GET_DEFAULT(docsFound_, 0) };
      inline Head& setDocsFound(int32_t docsFound) { DARABONBA_PTR_SET_VALUE(docsFound_, docsFound) };


      // docsReturn Field Functions 
      bool hasDocsReturn() const { return this->docsReturn_ != nullptr;};
      void deleteDocsReturn() { this->docsReturn_ = nullptr;};
      inline int32_t getDocsReturn() const { DARABONBA_PTR_GET_DEFAULT(docsReturn_, 0) };
      inline Head& setDocsReturn(int32_t docsReturn) { DARABONBA_PTR_SET_VALUE(docsReturn_, docsReturn) };


      // searchTime Field Functions 
      bool hasSearchTime() const { return this->searchTime_ != nullptr;};
      void deleteSearchTime() { this->searchTime_ = nullptr;};
      inline int32_t getSearchTime() const { DARABONBA_PTR_GET_DEFAULT(searchTime_, 0) };
      inline Head& setSearchTime(int32_t searchTime) { DARABONBA_PTR_SET_VALUE(searchTime_, searchTime) };


    protected:
      // The number of images returned.
      shared_ptr<int32_t> docsFound_ {};
      // The number of images that match the search conditions on the Image Search instance.
      shared_ptr<int32_t> docsReturn_ {};
      // The time it takes to complete the search process. Unit: milliseconds.
      shared_ptr<int32_t> searchTime_ {};
    };

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
        DARABONBA_PTR_TO_JSON(Score, score_);
        DARABONBA_PTR_TO_JSON(SortExprValues, sortExprValues_);
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
        DARABONBA_PTR_FROM_JSON(Score, score_);
        DARABONBA_PTR_FROM_JSON(SortExprValues, sortExprValues_);
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
        && this->picName_ == nullptr && this->productId_ == nullptr && this->score_ == nullptr && this->sortExprValues_ == nullptr && this->strAttr_ == nullptr
        && this->strAttr2_ == nullptr && this->strAttr3_ == nullptr && this->strAttr4_ == nullptr; };
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


      // score Field Functions 
      bool hasScore() const { return this->score_ != nullptr;};
      void deleteScore() { this->score_ = nullptr;};
      inline float getScore() const { DARABONBA_PTR_GET_DEFAULT(score_, 0.0) };
      inline Auctions& setScore(float score) { DARABONBA_PTR_SET_VALUE(score_, score) };


      // sortExprValues Field Functions 
      bool hasSortExprValues() const { return this->sortExprValues_ != nullptr;};
      void deleteSortExprValues() { this->sortExprValues_ = nullptr;};
      inline string getSortExprValues() const { DARABONBA_PTR_GET_DEFAULT(sortExprValues_, "") };
      inline Auctions& setSortExprValues(string sortExprValues) { DARABONBA_PTR_SET_VALUE(sortExprValues_, sortExprValues) };


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
      // The category of the image.
      shared_ptr<int32_t> categoryId_ {};
      // The user-defined content.
      shared_ptr<string> customContent_ {};
      // The attribute, which is an integer.
      shared_ptr<int32_t> intAttr_ {};
      shared_ptr<int32_t> intAttr2_ {};
      shared_ptr<int32_t> intAttr3_ {};
      shared_ptr<int32_t> intAttr4_ {};
      // The name of the image.
      shared_ptr<string> picName_ {};
      // The ID of the product.
      shared_ptr<string> productId_ {};
      // The similarity score of the returned image. Valid values: 0 to 1.
      // 
      // >  To use this feature, you must upgrade the SDK to version 3.1.1.
      shared_ptr<float> score_ {};
      // The score information about the image.
      // 
      // > *   This parameter is not supported. We recommend that you use the Score parameter.
      // >*   The SortExprValues parameter indicates a 2-tuple in which values are separated by a semicolon (;). The first value indicates the correlation score of the returned image. A greater value indicates a higher correlation with the sample image. Different algorithms are used.
      // >*   If the value of CategoryId is within the value range from 0 to 2, the value range of SortExprValues is from 0 to 7.33136443711219e+24.
      // >*   If the value of CategoryId is not within the value range from 0 to 2, the value range of SortExprValues is from 0 to 5.37633353624177e+24. If the returned image is identical with the sample image, the highest correlation score is generated.
      shared_ptr<string> sortExprValues_ {};
      // The attribute, which is a string.
      shared_ptr<string> strAttr_ {};
      shared_ptr<string> strAttr2_ {};
      shared_ptr<string> strAttr3_ {};
      shared_ptr<string> strAttr4_ {};
    };

    virtual bool empty() const override { return this->auctions_ == nullptr
        && this->code_ == nullptr && this->head_ == nullptr && this->msg_ == nullptr && this->picInfo_ == nullptr && this->requestId_ == nullptr
        && this->success_ == nullptr; };
    // auctions Field Functions 
    bool hasAuctions() const { return this->auctions_ != nullptr;};
    void deleteAuctions() { this->auctions_ = nullptr;};
    inline const vector<SearchImageByNameResponseBody::Auctions> & getAuctions() const { DARABONBA_PTR_GET_CONST(auctions_, vector<SearchImageByNameResponseBody::Auctions>) };
    inline vector<SearchImageByNameResponseBody::Auctions> getAuctions() { DARABONBA_PTR_GET(auctions_, vector<SearchImageByNameResponseBody::Auctions>) };
    inline SearchImageByNameResponseBody& setAuctions(const vector<SearchImageByNameResponseBody::Auctions> & auctions) { DARABONBA_PTR_SET_VALUE(auctions_, auctions) };
    inline SearchImageByNameResponseBody& setAuctions(vector<SearchImageByNameResponseBody::Auctions> && auctions) { DARABONBA_PTR_SET_RVALUE(auctions_, auctions) };


    // code Field Functions 
    bool hasCode() const { return this->code_ != nullptr;};
    void deleteCode() { this->code_ = nullptr;};
    inline int32_t getCode() const { DARABONBA_PTR_GET_DEFAULT(code_, 0) };
    inline SearchImageByNameResponseBody& setCode(int32_t code) { DARABONBA_PTR_SET_VALUE(code_, code) };


    // head Field Functions 
    bool hasHead() const { return this->head_ != nullptr;};
    void deleteHead() { this->head_ = nullptr;};
    inline const SearchImageByNameResponseBody::Head & getHead() const { DARABONBA_PTR_GET_CONST(head_, SearchImageByNameResponseBody::Head) };
    inline SearchImageByNameResponseBody::Head getHead() { DARABONBA_PTR_GET(head_, SearchImageByNameResponseBody::Head) };
    inline SearchImageByNameResponseBody& setHead(const SearchImageByNameResponseBody::Head & head) { DARABONBA_PTR_SET_VALUE(head_, head) };
    inline SearchImageByNameResponseBody& setHead(SearchImageByNameResponseBody::Head && head) { DARABONBA_PTR_SET_RVALUE(head_, head) };


    // msg Field Functions 
    bool hasMsg() const { return this->msg_ != nullptr;};
    void deleteMsg() { this->msg_ = nullptr;};
    inline string getMsg() const { DARABONBA_PTR_GET_DEFAULT(msg_, "") };
    inline SearchImageByNameResponseBody& setMsg(string msg) { DARABONBA_PTR_SET_VALUE(msg_, msg) };


    // picInfo Field Functions 
    bool hasPicInfo() const { return this->picInfo_ != nullptr;};
    void deletePicInfo() { this->picInfo_ = nullptr;};
    inline const SearchImageByNameResponseBody::PicInfo & getPicInfo() const { DARABONBA_PTR_GET_CONST(picInfo_, SearchImageByNameResponseBody::PicInfo) };
    inline SearchImageByNameResponseBody::PicInfo getPicInfo() { DARABONBA_PTR_GET(picInfo_, SearchImageByNameResponseBody::PicInfo) };
    inline SearchImageByNameResponseBody& setPicInfo(const SearchImageByNameResponseBody::PicInfo & picInfo) { DARABONBA_PTR_SET_VALUE(picInfo_, picInfo) };
    inline SearchImageByNameResponseBody& setPicInfo(SearchImageByNameResponseBody::PicInfo && picInfo) { DARABONBA_PTR_SET_RVALUE(picInfo_, picInfo) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline SearchImageByNameResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // success Field Functions 
    bool hasSuccess() const { return this->success_ != nullptr;};
    void deleteSuccess() { this->success_ = nullptr;};
    inline bool getSuccess() const { DARABONBA_PTR_GET_DEFAULT(success_, false) };
    inline SearchImageByNameResponseBody& setSuccess(bool success) { DARABONBA_PTR_SET_VALUE(success_, success) };


  protected:
    // The product descriptions returned.
    shared_ptr<vector<SearchImageByNameResponseBody::Auctions>> auctions_ {};
    // The error code returned.
    // 
    // *   A value of 0 indicates that the operation is successful.
    // *   Values other than 0 indicate errors.
    shared_ptr<int32_t> code_ {};
    // The summary of the search result.
    shared_ptr<SearchImageByNameResponseBody::Head> head_ {};
    // The error message returned.
    shared_ptr<string> msg_ {};
    // The information such as the system-selected category and result of subject recognition.
    shared_ptr<SearchImageByNameResponseBody::PicInfo> picInfo_ {};
    // The ID of the request.
    shared_ptr<string> requestId_ {};
    // Indicates whether the request is successful.
    shared_ptr<bool> success_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace ImageSearch20201214
#endif
