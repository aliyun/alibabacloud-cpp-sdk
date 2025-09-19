// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEALLIMAGEBASELINERESPONSEBODYIMAGEBASELINESBASELINECLASSLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEALLIMAGEBASELINERESPONSEBODYIMAGEBASELINESBASELINECLASSLIST_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList& obj) { 
      DARABONBA_PTR_TO_JSON(Alias, alias_);
      DARABONBA_PTR_TO_JSON(BaselineNameList, baselineNameList_);
      DARABONBA_PTR_TO_JSON(ClassKey, classKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList& obj) { 
      DARABONBA_PTR_FROM_JSON(Alias, alias_);
      DARABONBA_PTR_FROM_JSON(BaselineNameList, baselineNameList_);
      DARABONBA_PTR_FROM_JSON(ClassKey, classKey_);
    };
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList() = default ;
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList(const DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList &) = default ;
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList(DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList &&) = default ;
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList() = default ;
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList& operator=(const DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList &) = default ;
    DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList& operator=(DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->alias_ != nullptr
        && this->baselineNameList_ != nullptr && this->classKey_ != nullptr; };
    // alias Field Functions 
    bool hasAlias() const { return this->alias_ != nullptr;};
    void deleteAlias() { this->alias_ = nullptr;};
    inline string alias() const { DARABONBA_PTR_GET_DEFAULT(alias_, "") };
    inline DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList& setAlias(string alias) { DARABONBA_PTR_SET_VALUE(alias_, alias) };


    // baselineNameList Field Functions 
    bool hasBaselineNameList() const { return this->baselineNameList_ != nullptr;};
    void deleteBaselineNameList() { this->baselineNameList_ = nullptr;};
    inline const vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList> & baselineNameList() const { DARABONBA_PTR_GET_CONST(baselineNameList_, vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList>) };
    inline vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList> baselineNameList() { DARABONBA_PTR_GET(baselineNameList_, vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList>) };
    inline DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList& setBaselineNameList(const vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList> & baselineNameList) { DARABONBA_PTR_SET_VALUE(baselineNameList_, baselineNameList) };
    inline DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList& setBaselineNameList(vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList> && baselineNameList) { DARABONBA_PTR_SET_RVALUE(baselineNameList_, baselineNameList) };


    // classKey Field Functions 
    bool hasClassKey() const { return this->classKey_ != nullptr;};
    void deleteClassKey() { this->classKey_ = nullptr;};
    inline string classKey() const { DARABONBA_PTR_GET_DEFAULT(classKey_, "") };
    inline DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassList& setClassKey(string classKey) { DARABONBA_PTR_SET_VALUE(classKey_, classKey) };


  protected:
    // The alias of the baseline type.
    std::shared_ptr<string> alias_ = nullptr;
    // The information about the baseline.
    std::shared_ptr<vector<Models::DescribeAllImageBaselineResponseBodyImageBaselinesBaselineClassListBaselineNameList>> baselineNameList_ = nullptr;
    // The key of the baseline type.
    std::shared_ptr<string> classKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
