// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKAPPCATEGORYRESPONSEBODY_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKAPPCATEGORYRESPONSEBODY_HPP_
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
  class DescribeAttackAppCategoryResponseBody : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttackAppCategoryResponseBody& obj) { 
      DARABONBA_PTR_TO_JSON(AppCategories, appCategories_);
      DARABONBA_PTR_TO_JSON(RequestId, requestId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttackAppCategoryResponseBody& obj) { 
      DARABONBA_PTR_FROM_JSON(AppCategories, appCategories_);
      DARABONBA_PTR_FROM_JSON(RequestId, requestId_);
    };
    DescribeAttackAppCategoryResponseBody() = default ;
    DescribeAttackAppCategoryResponseBody(const DescribeAttackAppCategoryResponseBody &) = default ;
    DescribeAttackAppCategoryResponseBody(DescribeAttackAppCategoryResponseBody &&) = default ;
    DescribeAttackAppCategoryResponseBody(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttackAppCategoryResponseBody() = default ;
    DescribeAttackAppCategoryResponseBody& operator=(const DescribeAttackAppCategoryResponseBody &) = default ;
    DescribeAttackAppCategoryResponseBody& operator=(DescribeAttackAppCategoryResponseBody &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    class AppCategories : public Darabonba::Model {
    public:
      friend void to_json(Darabonba::Json& j, const AppCategories& obj) { 
        DARABONBA_PTR_TO_JSON(AttackApps, attackApps_);
        DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
      };
      friend void from_json(const Darabonba::Json& j, AppCategories& obj) { 
        DARABONBA_PTR_FROM_JSON(AttackApps, attackApps_);
        DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
      };
      AppCategories() = default ;
      AppCategories(const AppCategories &) = default ;
      AppCategories(AppCategories &&) = default ;
      AppCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
      virtual ~AppCategories() = default ;
      AppCategories& operator=(const AppCategories &) = default ;
      AppCategories& operator=(AppCategories &&) = default ;
      virtual void validate() const override {
      };
      virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
      virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
      virtual bool empty() const override { return this->attackApps_ == nullptr
        && this->categoryName_ == nullptr; };
      // attackApps Field Functions 
      bool hasAttackApps() const { return this->attackApps_ != nullptr;};
      void deleteAttackApps() { this->attackApps_ = nullptr;};
      inline const vector<string> & getAttackApps() const { DARABONBA_PTR_GET_CONST(attackApps_, vector<string>) };
      inline vector<string> getAttackApps() { DARABONBA_PTR_GET(attackApps_, vector<string>) };
      inline AppCategories& setAttackApps(const vector<string> & attackApps) { DARABONBA_PTR_SET_VALUE(attackApps_, attackApps) };
      inline AppCategories& setAttackApps(vector<string> && attackApps) { DARABONBA_PTR_SET_RVALUE(attackApps_, attackApps) };


      // categoryName Field Functions 
      bool hasCategoryName() const { return this->categoryName_ != nullptr;};
      void deleteCategoryName() { this->categoryName_ = nullptr;};
      inline string getCategoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
      inline AppCategories& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


    protected:
      shared_ptr<vector<string>> attackApps_ {};
      shared_ptr<string> categoryName_ {};
    };

    virtual bool empty() const override { return this->appCategories_ == nullptr
        && this->requestId_ == nullptr; };
    // appCategories Field Functions 
    bool hasAppCategories() const { return this->appCategories_ != nullptr;};
    void deleteAppCategories() { this->appCategories_ = nullptr;};
    inline const vector<DescribeAttackAppCategoryResponseBody::AppCategories> & getAppCategories() const { DARABONBA_PTR_GET_CONST(appCategories_, vector<DescribeAttackAppCategoryResponseBody::AppCategories>) };
    inline vector<DescribeAttackAppCategoryResponseBody::AppCategories> getAppCategories() { DARABONBA_PTR_GET(appCategories_, vector<DescribeAttackAppCategoryResponseBody::AppCategories>) };
    inline DescribeAttackAppCategoryResponseBody& setAppCategories(const vector<DescribeAttackAppCategoryResponseBody::AppCategories> & appCategories) { DARABONBA_PTR_SET_VALUE(appCategories_, appCategories) };
    inline DescribeAttackAppCategoryResponseBody& setAppCategories(vector<DescribeAttackAppCategoryResponseBody::AppCategories> && appCategories) { DARABONBA_PTR_SET_RVALUE(appCategories_, appCategories) };


    // requestId Field Functions 
    bool hasRequestId() const { return this->requestId_ != nullptr;};
    void deleteRequestId() { this->requestId_ = nullptr;};
    inline string getRequestId() const { DARABONBA_PTR_GET_DEFAULT(requestId_, "") };
    inline DescribeAttackAppCategoryResponseBody& setRequestId(string requestId) { DARABONBA_PTR_SET_VALUE(requestId_, requestId) };


  protected:
    shared_ptr<vector<DescribeAttackAppCategoryResponseBody::AppCategories>> appCategories_ {};
    shared_ptr<string> requestId_ {};
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
