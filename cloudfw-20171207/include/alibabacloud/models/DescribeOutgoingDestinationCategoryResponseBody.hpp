// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONCATEGORYRESPONSEBODY_HPP_
#include <darabonba/Core.hpp>
#include <vector>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_TO_JSON(TypeList, typeList_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
      DARABONBA_PTR_FROM_JSON(TypeList, typeList_);
    };
    DescribeOutgoingDestinationCategoryResponseBody() = default ;
    DescribeOutgoingDestinationCategoryResponseBody(const DescribeOutgoingDestinationCategoryResponseBody &) = default ;
    DescribeOutgoingDestinationCategoryResponseBody(DescribeOutgoingDestinationCategoryResponseBody &&) = default ;
    DescribeOutgoingDestinationCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationCategoryResponseBody() = default ;
    DescribeOutgoingDestinationCategoryResponseBody& operator=(const DescribeOutgoingDestinationCategoryResponseBody &) = default ;
    DescribeOutgoingDestinationCategoryResponseBody& operator=(DescribeOutgoingDestinationCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class TypeList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const TypeList& obj) { 
        DARABONBA_PTR_TO_JSON(CategoryList, categoryList_);
        DARABONBA_PTR_TO_JSON(TypeDescribe, typeDescribe_);
        DARABONBA_PTR_TO_JSON(TypeId, typeId_);
        DARABONBA_PTR_TO_JSON(TypeName, typeName_);
      };
      friend void from_json(const Darabonba::Json& j, TypeList& obj) { 
        DARABONBA_PTR_FROM_JSON(CategoryList, categoryList_);
        DARABONBA_PTR_FROM_JSON(TypeDescribe, typeDescribe_);
        DARABONBA_PTR_FROM_JSON(TypeId, typeId_);
        DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
      };
      TypeList() = default ;
      TypeList(const TypeList &) = default ;
      TypeList(TypeList &&) = default ;
      TypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~TypeList() = default ;
      TypeList& operator=(const TypeList &) = default ;
      TypeList& operator=(TypeList &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      class CategoryList : public Darabonba::Model {
      public:
        friend void to_json(Darabonba::Json& j, const CategoryList& obj) { 
          DARABONBA_PTR_TO_JSON(CategoryDescribe, categoryDescribe_);
          DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_TO_JSON(ClassId, classId_);
        };
        friend void from_json(const Darabonba::Json& j, CategoryList& obj) { 
          DARABONBA_PTR_FROM_JSON(CategoryDescribe, categoryDescribe_);
          DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
          DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
          DARABONBA_PTR_FROM_JSON(ClassId, classId_);
        };
        CategoryList() = default ;
        CategoryList(const CategoryList &) = default ;
        CategoryList(CategoryList &&) = default ;
        CategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
        virtual ~CategoryList() = default ;
        CategoryList& operator=(const CategoryList &) = default ;
        CategoryList& operator=(CategoryList &&) = default ;
        virtual void validate() const override {
        };
        virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
        virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
        virtual bool empty() const override { return this->categoryDescribe_ == nullptr
        && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->classId_ == nullptr; };
        // categoryDescribe Field Functions 
        bool hasCategoryDescribe() const { return this->categoryDescribe_ != nullptr;};
        void deleteCategoryDescribe() { this->categoryDescribe_ = nullptr;};
        inline string getCategoryDescribe() const { DARABONBA_PTR_GET_DEFAULT(categoryDescribe_, "") };
        inline CategoryList& setCategoryDescribe(string categoryDescribe) { DARABONBA_PTR_SET_VALUE(categoryDescribe_, categoryDescribe) };


        // categoryId Field Functions 
        bool hasCategoryId() const { return this->categoryId_ != nullptr;};
        void deleteCategoryId() { this->categoryId_ = nullptr;};
        inline string getCategoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
        inline CategoryList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


        // categoryName Field Functions 
        bool hasCategoryName() const { return this->categoryName_ != nullptr;};
        void deleteCategoryName() { this->categoryName_ = nullptr;};
        inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
        inline CategoryList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


        // classId Field Functions 
        bool hasClassId() const { return this->classId_ != nullptr;};
        void deleteClassId() { this->classId_ = nullptr;};
        inline string getClassId() const { DARABONBA_PTR_GET_DEFAULT(classId_, "") };
        inline CategoryList& setClassId(string classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


      protected:
        shared_ptr<string> categoryDescribe_ {};
        shared_ptr<string> categoryId_ {};
        shared_ptr<string> categoryName_ {};
        shared_ptr<string> classId_ {};
      };

      virtual bool empty() const override { return this->categoryList_ == nullptr
        && this->typeDescribe_ == nullptr && this->typeId_ == nullptr && this->typeName_ == nullptr; };
      // categoryList Field Functions 
      bool hasCategoryList() const { return this->categoryList_ != nullptr;};
      void deleteCategoryList() { this->categoryList_ = nullptr;};
      inline const vector<TypeList::CategoryList> & getCategoryList() const { DARABONBA_PTR_GET_CONST(categoryList_, vector<TypeList::CategoryList>) };
      inline vector<TypeList::CategoryList> getCategoryList() { DARABONBA_PTR_GET(categoryList_, vector<TypeList::CategoryList>) };
      inline TypeList& setCategoryList(const vector<TypeList::CategoryList> & categoryList) { DARABONBA_PTR_SET_VALUE(categoryList_, categoryList) };
      inline TypeList& setCategoryList(vector<TypeList::CategoryList> && categoryList) { DARABONBA_PTR_SET_RVALUE(categoryList_, categoryList) };


      // typeDescribe Field Functions 
      bool hasTypeDescribe() const { return this->typeDescribe_ != nullptr;};
      void deleteTypeDescribe() { this->typeDescribe_ = nullptr;};
      inline string getTypeDescribe() const { DARABONBA_PTR_GET_DEFAULT(typeDescribe_, "") };
      inline TypeList& setTypeDescribe(string typeDescribe) { DARABONBA_PTR_SET_VALUE(typeDescribe_, typeDescribe) };


      // typeId Field Functions 
      bool hasTypeId() const { return this->typeId_ != nullptr;};
      void deleteTypeId() { this->typeId_ = nullptr;};
      inline string getTypeId() const { DARABONBA_PTR_GET_DEFAULT(typeId_, "") };
      inline TypeList& setTypeId(string typeId) { DARABONBA_PTR_SET_VALUE(typeId_, typeId) };


      // typeName Field Functions 
      bool hasTypeName() const { return this->typeName_ != nullptr;};
      void deleteTypeName() { this->typeName_ = nullptr;};
      inline string getTypeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
      inline TypeList& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


    protected:
      shared_ptr<vector<TypeList::CategoryList>> categoryList_ {};
      shared_ptr<string> typeDescribe_ {};
      shared_ptr<string> typeId_ {};
      shared_ptr<string> typeName_ {};
    };

    virtual bool empty() const override { return this->requestId_ == nullptr
        && this->totalCount_ == nullptr && this->typeList_ == nullptr; };
    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeOutgoingDestinationCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int32_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0) };
    inline DescribeOutgoingDestinationCategoryResponseBody& setTotalCount(int32_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


    // typeList Field Functions 
    bool hasTypeList() const { return this->typeList_ != nullptr;};
    void deleteTypeList() { this->typeList_ = nullptr;};
    inline const vector<DescribeOutgoingDestinationCategoryResponseBody::TypeList> & getTypeList() const { DARABONBA_PTR_GET_CONST(typeList_, vector<DescribeOutgoingDestinationCategoryResponseBody::TypeList>) };
    inline vector<DescribeOutgoingDestinationCategoryResponseBody::TypeList> getTypeList() { DARABONBA_PTR_GET(typeList_, vector<DescribeOutgoingDestinationCategoryResponseBody::TypeList>) };
    inline DescribeOutgoingDestinationCategoryResponseBody& setTypeList(const vector<DescribeOutgoingDestinationCategoryResponseBody::TypeList> & typeList) { DARABONBA_PTR_SET_VALUE(typeList_, typeList) };
    inline DescribeOutgoingDestinationCategoryResponseBody& setTypeList(vector<DescribeOutgoingDestinationCategoryResponseBody::TypeList> && typeList) { DARABONBA_PTR_SET_RVALUE(typeList_, typeList) };


  protected:
    shared_ptr<string> requestId_ {};
    shared_ptr<int32_t> totalCount_ {};
    shared_ptr<vector<DescribeOutgoingDestinationCategoryResponseBody::TypeList>> typeList_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
