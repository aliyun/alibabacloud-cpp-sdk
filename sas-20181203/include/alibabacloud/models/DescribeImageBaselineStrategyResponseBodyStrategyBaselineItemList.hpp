// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINESTRATEGYRESPONSEBODYSTRATEGYBASELINEITEMLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEIMAGEBASELINESTRATEGYRESPONSEBODYSTRATEGYBASELINEITEMLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList& obj) { 
      DARABONBA_PTR_TO_JSON(ClassKey, classKey_);
      DARABONBA_PTR_TO_JSON(ItemKey, itemKey_);
      DARABONBA_PTR_TO_JSON(NameKey, nameKey_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList& obj) { 
      DARABONBA_PTR_FROM_JSON(ClassKey, classKey_);
      DARABONBA_PTR_FROM_JSON(ItemKey, itemKey_);
      DARABONBA_PTR_FROM_JSON(NameKey, nameKey_);
    };
    DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList() = default ;
    DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList(const DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList &) = default ;
    DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList(DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList &&) = default ;
    DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList() = default ;
    DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList& operator=(const DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList &) = default ;
    DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList& operator=(DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->classKey_ == nullptr
        && return this->itemKey_ == nullptr && return this->nameKey_ == nullptr; };
    // classKey Field Functions 
    bool hasClassKey() const { return this->classKey_ != nullptr;};
    void deleteClassKey() { this->classKey_ = nullptr;};
    inline string classKey() const { DARABONBA_PTR_GET_DEFAULT(classKey_, "") };
    inline DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList& setClassKey(string classKey) { DARABONBA_PTR_SET_VALUE(classKey_, classKey) };


    // itemKey Field Functions 
    bool hasItemKey() const { return this->itemKey_ != nullptr;};
    void deleteItemKey() { this->itemKey_ = nullptr;};
    inline string itemKey() const { DARABONBA_PTR_GET_DEFAULT(itemKey_, "") };
    inline DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList& setItemKey(string itemKey) { DARABONBA_PTR_SET_VALUE(itemKey_, itemKey) };


    // nameKey Field Functions 
    bool hasNameKey() const { return this->nameKey_ != nullptr;};
    void deleteNameKey() { this->nameKey_ = nullptr;};
    inline string nameKey() const { DARABONBA_PTR_GET_DEFAULT(nameKey_, "") };
    inline DescribeImageBaselineStrategyResponseBodyStrategyBaselineItemList& setNameKey(string nameKey) { DARABONBA_PTR_SET_VALUE(nameKey_, nameKey) };


  protected:
    // The key of the baseline type.
    std::shared_ptr<string> classKey_ = nullptr;
    // The key of the baseline check item.
    std::shared_ptr<string> itemKey_ = nullptr;
    // The key of the name for the baseline.
    std::shared_ptr<string> nameKey_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
