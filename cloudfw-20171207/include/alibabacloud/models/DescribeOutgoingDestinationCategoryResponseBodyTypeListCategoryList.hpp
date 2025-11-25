// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONCATEGORYRESPONSEBODYTYPELISTCATEGORYLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONCATEGORYRESPONSEBODYTYPELISTCATEGORYLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryDescribe, categoryDescribe_);
      DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_TO_JSON(ClassId, classId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryDescribe, categoryDescribe_);
      DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      DARABONBA_PTR_FROM_JSON(ClassId, classId_);
    };
    DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList() = default ;
    DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList(const DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList &) = default ;
    DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList(DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList &&) = default ;
    DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList() = default ;
    DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList& operator=(const DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList &) = default ;
    DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList& operator=(DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryDescribe_ == nullptr
        && return this->categoryId_ == nullptr && return this->categoryName_ == nullptr && return this->classId_ == nullptr; };
    // categoryDescribe Field Functions 
    bool hasCategoryDescribe() const { return this->categoryDescribe_ != nullptr;};
    void deleteCategoryDescribe() { this->categoryDescribe_ = nullptr;};
    inline string categoryDescribe() const { DARABONBA_PTR_GET_DEFAULT(categoryDescribe_, "") };
    inline DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList& setCategoryDescribe(string categoryDescribe) { DARABONBA_PTR_SET_VALUE(categoryDescribe_, categoryDescribe) };


    // categoryId Field Functions 
    bool hasCategoryId() const { return this->categoryId_ != nullptr;};
    void deleteCategoryId() { this->categoryId_ = nullptr;};
    inline string categoryId() const { DARABONBA_PTR_GET_DEFAULT(categoryId_, "") };
    inline DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList& setCategoryId(string categoryId) { DARABONBA_PTR_SET_VALUE(categoryId_, categoryId) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    // classId Field Functions 
    bool hasClassId() const { return this->classId_ != nullptr;};
    void deleteClassId() { this->classId_ = nullptr;};
    inline string classId() const { DARABONBA_PTR_GET_DEFAULT(classId_, "") };
    inline DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList& setClassId(string classId) { DARABONBA_PTR_SET_VALUE(classId_, classId) };


  protected:
    std::shared_ptr<string> categoryDescribe_ = nullptr;
    std::shared_ptr<string> categoryId_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
    std::shared_ptr<string> classId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
