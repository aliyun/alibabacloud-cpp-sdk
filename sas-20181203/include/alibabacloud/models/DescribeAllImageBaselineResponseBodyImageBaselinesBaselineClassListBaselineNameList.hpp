// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLIMAGEBASELINERESPONSEBODYIMAGEBASELINESBASELINECLASSLISTBASELINENAMELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLIMAGEBASELINERESPONSEBODYIMAGEBASELINESBASELINECLASSLISTBASELINENAMELIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameListBaselineItemList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(BaselineItemList, baselineItemList_);
      DARABONBA_PTR_TO_JSON(ClassKey, classKey_);
      DARABONBA_PTR_TO_JSON(NameKey, nameKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(BaselineItemList, baselineItemList_);
      DARABONBA_PTR_FROM_JSON(ClassKey, classKey_);
      DARABONBA_PTR_FROM_JSON(NameKey, nameKey_);
    };
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList() = default ;
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList(const DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList &) = default ;
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList(DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList &&) = default ;
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList() = default ;
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList& operator=(const DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList &) = default ;
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList& operator=(DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->alias_ == nullptr
        && return this->baselineItemList_ == nullptr && return this->classKey_ == nullptr && return this->nameKey_ == nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // baselineItemList Field Functions 
    bool hasBaselineItemList() const { return this->baselineItemList_ != nullptr;};
    void deleteBaselineItemList() { this->baselineItemList_ = nullptr;};
    inline const vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameListBaselineItemList> & baselineItemList() const { DARABONBA_PTR_GET_CONST(baselineItemList_, vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameListBaselineItemList>) };
    inline vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameListBaselineItemList> baselineItemList() { DARABONBA_PTR_GET(baselineItemList_, vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameListBaselineItemList>) };
    inline DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList& setBaselineItemList(const vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameListBaselineItemList> & baselineItemList) { DARABONBA_PTR_SET_VALUE(baselineItemList_, baselineItemList) };
    inline DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList& setBaselineItemList(vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameListBaselineItemList> && baselineItemList) { DARABONBA_PTR_SET_RVALUE(baselineItemList_, baselineItemList) };


    // classKey Field Functions 
    bool hasClassKey() const { return this->classKey_ != nullptr;};
    void deleteClassKey() { this->classKey_ = nullptr;};
    inline string classKey() const { DARABONBA_PTR_GET_DEFAULT(classKey_, "") };
    inline DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList& setClassKey(string classKey) { DARABONBA_PTR_SET_VALUE(classKey_, classKey) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string nameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


  protected:
    // The alias of the baseline.
    std::shared_ptr<string> alias_ = nullptr;
    // The information about the baseline check item.
    std::shared_ptr<vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameListBaselineItemList>> baselineItemList_ = nullptr;
    // The key of the type for the baseline.
    std::shared_ptr<string> classKey_ = nullptr;
    // The key of the name for the baseline.
    std::shared_ptr<string> nameKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
