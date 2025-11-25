// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEATTACKAPPCATEGORYRESPONSEBODYAPPCATEGORIES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEATTACKAPPCATEGORYRESPONSEBODYAPPCATEGORIES_HPP_
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
  class DescribeAttackAppCategoryResponseBodyAppCategories : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAttackAppCategoryResponseBodyAppCategories& obj) { 
      DARABONBA_PTR_TO_JSON(AttackApps, attackApps_);
      DARABONBA_PTR_TO_JSON(CategoryName, categoryName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAttackAppCategoryResponseBodyAppCategories& obj) { 
      DARABONBA_PTR_FROM_JSON(AttackApps, attackApps_);
      DARABONBA_PTR_FROM_JSON(CategoryName, categoryName_);
    };
    DescribeAttackAppCategoryResponseBodyAppCategories() = default ;
    DescribeAttackAppCategoryResponseBodyAppCategories(const DescribeAttackAppCategoryResponseBodyAppCategories &) = default ;
    DescribeAttackAppCategoryResponseBodyAppCategories(DescribeAttackAppCategoryResponseBodyAppCategories &&) = default ;
    DescribeAttackAppCategoryResponseBodyAppCategories(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAttackAppCategoryResponseBodyAppCategories() = default ;
    DescribeAttackAppCategoryResponseBodyAppCategories& operator=(const DescribeAttackAppCategoryResponseBodyAppCategories &) = default ;
    DescribeAttackAppCategoryResponseBodyAppCategories& operator=(DescribeAttackAppCategoryResponseBodyAppCategories &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->attackApps_ == nullptr
        && return this->categoryName_ == nullptr; };
    // attackApps Field Functions 
    bool hasAttackApps() const { return this->attackApps_ != nullptr;};
    void deleteAttackApps() { this->attackApps_ = nullptr;};
    inline const vector<string> & attackApps() const { DARABONBA_PTR_GET_CONST(attackApps_, vector<string>) };
    inline vector<string> attackApps() { DARABONBA_PTR_GET(attackApps_, vector<string>) };
    inline DescribeAttackAppCategoryResponseBodyAppCategories& setAttackApps(const vector<string> & attackApps) { DARABONBA_PTR_SET_VALUE(attackApps_, attackApps) };
    inline DescribeAttackAppCategoryResponseBodyAppCategories& setAttackApps(vector<string> && attackApps) { DARABONBA_PTR_SET_RVALUE(attackApps_, attackApps) };


    // categoryName Field Functions 
    bool hasCategoryName() const { return this->categoryName_ != nullptr;};
    void deleteCategoryName() { this->categoryName_ = nullptr;};
    inline string categoryName() const { DARABONBA_PTR_GET_DEFAULT(categoryName_, "") };
    inline DescribeAttackAppCategoryResponseBodyAppCategories& setCategoryName(string categoryName) { DARABONBA_PTR_SET_VALUE(categoryName_, categoryName) };


  protected:
    std::shared_ptr<vector<string>> attackApps_ = nullptr;
    std::shared_ptr<string> categoryName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
