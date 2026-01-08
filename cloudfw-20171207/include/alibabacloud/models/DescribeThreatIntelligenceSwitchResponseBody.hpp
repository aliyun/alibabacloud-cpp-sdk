// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBETHREATINTELLIGENCESWITCHRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBETHREATINTELLIGENCESWITCHRESPONSEBODY_HPP_
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
  class DescribeThreatIntelligenceSwitchResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeThreatIntelligenceSwitchResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
      DARABONBA_PTR_TO_JSON(TotalCount, totalCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeThreatIntelligenceSwitchResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(CategoryList, categoryList_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
      DARABONBA_PTR_FROM_JSON(TotalCount, totalCount_);
    };
    DescribeThreatIntelligenceSwitchResponseBody() = default ;
    DescribeThreatIntelligenceSwitchResponseBody(const DescribeThreatIntelligenceSwitchResponseBody &) = default ;
    DescribeThreatIntelligenceSwitchResponseBody(DescribeThreatIntelligenceSwitchResponseBody &&) = default ;
    DescribeThreatIntelligenceSwitchResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeThreatIntelligenceSwitchResponseBody() = default ;
    DescribeThreatIntelligenceSwitchResponseBody& operator=(const DescribeThreatIntelligenceSwitchResponseBody &) = default ;
    DescribeThreatIntelligenceSwitchResponseBody& operator=(DescribeThreatIntelligenceSwitchResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class CategoryList : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const CategoryList& obj) { 
        DARABONBA_PTR_TO_JSON(Action, action_);
        DARABONBA_PTR_TO_JSON(CategoryDescribe, categoryDescribe_);
        DARABONBA_PTR_TO_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_TO_JSON(CategoryParentId, categoryParentId_);
        DARABONBA_PTR_TO_JSON(EnableStatus, enableStatus_);
      };
      friend void from_json(const Darabonba::Json& j, CategoryList& obj) { 
        DARABONBA_PTR_FROM_JSON(Action, action_);
        DARABONBA_PTR_FROM_JSON(CategoryDescribe, categoryDescribe_);
        DARABONBA_PTR_FROM_JSON(CategoryId, categoryId_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
        DARABONBA_PTR_FROM_JSON(CategoryParentId, categoryParentId_);
        DARABONBA_PTR_FROM_JSON(EnableStatus, enableStatus_);
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
      virtual bool empty() const override { return this->action_ == nullptr
        && this->categoryDescribe_ == nullptr && this->categoryId_ == nullptr && this->categoryName_ == nullptr && this->categoryParentId_ == nullptr && this->enableStatus_ == nullptr; };
      // action Field Functions 
      bool hasAction() const { return this->action_ != nullptr;};
      void deleteAction() { this->action_ = nullptr;};
      inline string getAction() const { DARABONBA_PTR_GET_DEFAULT(action_, "") };
      inline CategoryList& setAction(string action) { DARABONBA_PTR_SET_VALUE(action_, action) };


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


      // categoryParentId Field Functions 
      bool hasCategoryParentId() const { return this->categoryParentId_ != nullptr;};
      void deleteCategoryParentId() { this->categoryParentId_ = nullptr;};
      inline string getCategoryParentId() const { DARABONBA_PTR_GET_DEFAULT(categoryParentId_, "") };
      inline CategoryList& setCategoryParentId(string categoryParentId) { DARABONBA_PTR_SET_VALUE(categoryParentId_, categoryParentId) };


      // enableStatus Field Functions 
      bool hasEnableStatus() const { return this->enableStatus_ != nullptr;};
      void deleteEnableStatus() { this->enableStatus_ = nullptr;};
      inline int64_t getEnableStatus() const { DARABONBA_PTR_GET_DEFAULT(enableStatus_, 0L) };
      inline CategoryList& setEnableStatus(int64_t enableStatus) { DARABONBA_PTR_SET_VALUE(enableStatus_, enableStatus) };


    protected:
      shared_ptr<string> action_ {};
      shared_ptr<string> categoryDescribe_ {};
      shared_ptr<string> categoryId_ {};
      shared_ptr<string> categoryName_ {};
      shared_ptr<string> categoryParentId_ {};
      shared_ptr<int64_t> enableStatus_ {};
    };

    virtual bool empty() const override { return this->categoryList_ == nullptr
        && this->requestId_ == nullptr && this->totalCount_ == nullptr; };
    // categoryList Field Functions 
    bool hasCategoryList() const { return this->categoryList_ != nullptr;};
    void deleteCategoryList() { this->categoryList_ = nullptr;};
    inline const vector<DescribeThreatIntelligenceSwitchResponseBody::CategoryList> & getCategoryList() const { DARABONBA_PTR_GET_CONST(categoryList_, vector<DescribeThreatIntelligenceSwitchResponseBody::CategoryList>) };
    inline vector<DescribeThreatIntelligenceSwitchResponseBody::CategoryList> getCategoryList() { DARABONBA_PTR_GET(categoryList_, vector<DescribeThreatIntelligenceSwitchResponseBody::CategoryList>) };
    inline DescribeThreatIntelligenceSwitchResponseBody& setCategoryList(const vector<DescribeThreatIntelligenceSwitchResponseBody::CategoryList> & categoryList) { DARABONBA_PTR_SET_VALUE(categoryList_, categoryList) };
    inline DescribeThreatIntelligenceSwitchResponseBody& setCategoryList(vector<DescribeThreatIntelligenceSwitchResponseBody::CategoryList> && categoryList) { DARABONBA_PTR_SET_RVALUE(categoryList_, categoryList) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeThreatIntelligenceSwitchResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


    // totalCount Field Functions 
    bool hasTotalCount() const { return this->totalCount_ != nullptr;};
    void deleteTotalCount() { this->totalCount_ = nullptr;};
    inline int64_t getTotalCount() const { DARABONBA_PTR_GET_DEFAULT(totalCount_, 0L) };
    inline DescribeThreatIntelligenceSwitchResponseBody& setTotalCount(int64_t totalCount) { DARABONBA_PTR_SET_VALUE(totalCount_, totalCount) };


  protected:
    shared_ptr<vector<DescribeThreatIntelligenceSwitchResponseBody::CategoryList>> categoryList_ {};
    shared_ptr<string> requestId_ {};
    shared_ptr<int64_t> totalCount_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
