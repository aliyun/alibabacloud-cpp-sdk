// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONCATEGORYRESPONSEBODYTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOUTGOINGDESTINATIONCATEGORYRESPONSEBODYTYPELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeOutgoingDestinationCategoryResponseBodyTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOutgoingDestinationCategoryResponseBodyTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_TO_JSON(TypeDescribe, typeDescribe_);
      DARABONBA_PTR_TO_JSON(TypeId, typeId_);
      DARABONBA_PTR_TO_JSON(TypeName, typeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOutgoingDestinationCategoryResponseBodyTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_FROM_JSON(TypeDescribe, typeDescribe_);
      DARABONBA_PTR_FROM_JSON(TypeId, typeId_);
      DARABONBA_PTR_FROM_JSON(TypeName, typeName_);
    };
    DescribeOutgoingDestinationCategoryResponseBodyTypeList() = default ;
    DescribeOutgoingDestinationCategoryResponseBodyTypeList(const DescribeOutgoingDestinationCategoryResponseBodyTypeList &) = default ;
    DescribeOutgoingDestinationCategoryResponseBodyTypeList(DescribeOutgoingDestinationCategoryResponseBodyTypeList &&) = default ;
    DescribeOutgoingDestinationCategoryResponseBodyTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOutgoingDestinationCategoryResponseBodyTypeList() = default ;
    DescribeOutgoingDestinationCategoryResponseBodyTypeList& operator=(const DescribeOutgoingDestinationCategoryResponseBodyTypeList &) = default ;
    DescribeOutgoingDestinationCategoryResponseBodyTypeList& operator=(DescribeOutgoingDestinationCategoryResponseBodyTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->categoryList_ == nullptr
        && return this->typeDescribe_ == nullptr && return this->typeId_ == nullptr && return this->typeName_ == nullptr; };
    // categoryList Field Functions 
    bool hasCategoryList() const { return this->categoryList_ != nullptr;};
    void deleteCategoryList() { this->categoryList_ = nullptr;};
    inline const vector<Models::DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList> & categoryList() const { DARABONBA_PTR_GET_CONST(categoryList_, vector<Models::DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList>) };
    inline vector<Models::DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList> categoryList() { DARABONBA_PTR_GET(categoryList_, vector<Models::DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList>) };
    inline DescribeOutgoingDestinationCategoryResponseBodyTypeList& setCategoryList(const vector<Models::DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList> & categoryList) { DARABONBA_PTR_SET_VALUE(categoryList_, categoryList) };
    inline DescribeOutgoingDestinationCategoryResponseBodyTypeList& setCategoryList(vector<Models::DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList> && categoryList) { DARABONBA_PTR_SET_RVALUE(categoryList_, categoryList) };


    // typeDescribe Field Functions 
    bool hasTypeDescribe() const { return this->typeDescribe_ != nullptr;};
    void deleteTypeDescribe() { this->typeDescribe_ = nullptr;};
    inline string typeDescribe() const { DARABONBA_PTR_GET_DEFAULT(typeDescribe_, "") };
    inline DescribeOutgoingDestinationCategoryResponseBodyTypeList& setTypeDescribe(string typeDescribe) { DARABONBA_PTR_SET_VALUE(typeDescribe_, typeDescribe) };


    // typeId Field Functions 
    bool hasTypeId() const { return this->typeId_ != nullptr;};
    void deleteTypeId() { this->typeId_ = nullptr;};
    inline string typeId() const { DARABONBA_PTR_GET_DEFAULT(typeId_, "") };
    inline DescribeOutgoingDestinationCategoryResponseBodyTypeList& setTypeId(string typeId) { DARABONBA_PTR_SET_VALUE(typeId_, typeId) };


    // typeName Field Functions 
    bool hasTypeName() const { return this->typeName_ != nullptr;};
    void deleteTypeName() { this->typeName_ = nullptr;};
    inline string typeName() const { DARABONBA_PTR_GET_DEFAULT(typeName_, "") };
    inline DescribeOutgoingDestinationCategoryResponseBodyTypeList& setTypeName(string typeName) { DARABONBA_PTR_SET_VALUE(typeName_, typeName) };


  protected:
    std::shared_ptr<vector<Models::DescribeOutgoingDestinationCategoryResponseBodyTypeListCategoryList>> categoryList_ = nullptr;
    std::shared_ptr<string> typeDescribe_ = nullptr;
    std::shared_ptr<string> typeId_ = nullptr;
    std::shared_ptr<string> typeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
