// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESTATISTICSRESPONSEBODYSTATISTICSINFOS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEDEFENSERULESTATISTICSRESPONSEBODYSTATISTICSINFOS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace WafOpenapi20211001
{
namespace Models
{
  class DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(FourthValue, fourthValue_);
      DARABONBA_PTR_TO_JSON(PrimaryValue, primaryValue_);
      DARABONBA_PTR_TO_JSON(SecondaryValue, secondaryValue_);
      DARABONBA_PTR_TO_JSON(ThirdValue, thirdValue_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(FourthValue, fourthValue_);
      DARABONBA_PTR_FROM_JSON(PrimaryValue, primaryValue_);
      DARABONBA_PTR_FROM_JSON(SecondaryValue, secondaryValue_);
      DARABONBA_PTR_FROM_JSON(ThirdValue, thirdValue_);
    };
    DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos() = default ;
    DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos(const DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos &) = default ;
    DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos(DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos &&) = default ;
    DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos() = default ;
    DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos& operator=(const DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos &) = default ;
    DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos& operator=(DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->fourthValue_ == nullptr && return this->primaryValue_ == nullptr && return this->secondaryValue_ == nullptr && return this->thirdValue_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // fourthValue Field Functions 
    bool hasFourthValue() const { return this->fourthValue_ != nullptr;};
    void deleteFourthValue() { this->fourthValue_ = nullptr;};
    inline string fourthValue() const { DARABONBA_PTR_GET_DEFAULT(fourthValue_, "") };
    inline DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos& setFourthValue(string fourthValue) { DARABONBA_PTR_SET_VALUE(fourthValue_, fourthValue) };


    // primaryValue Field Functions 
    bool hasPrimaryValue() const { return this->primaryValue_ != nullptr;};
    void deletePrimaryValue() { this->primaryValue_ = nullptr;};
    inline string primaryValue() const { DARABONBA_PTR_GET_DEFAULT(primaryValue_, "") };
    inline DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos& setPrimaryValue(string primaryValue) { DARABONBA_PTR_SET_VALUE(primaryValue_, primaryValue) };


    // secondaryValue Field Functions 
    bool hasSecondaryValue() const { return this->secondaryValue_ != nullptr;};
    void deleteSecondaryValue() { this->secondaryValue_ = nullptr;};
    inline string secondaryValue() const { DARABONBA_PTR_GET_DEFAULT(secondaryValue_, "") };
    inline DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos& setSecondaryValue(string secondaryValue) { DARABONBA_PTR_SET_VALUE(secondaryValue_, secondaryValue) };


    // thirdValue Field Functions 
    bool hasThirdValue() const { return this->thirdValue_ != nullptr;};
    void deleteThirdValue() { this->thirdValue_ = nullptr;};
    inline string thirdValue() const { DARABONBA_PTR_GET_DEFAULT(thirdValue_, "") };
    inline DescribeDefenseRuleStatisticsResponseBodyStatisticsInfos& setThirdValue(string thirdValue) { DARABONBA_PTR_SET_VALUE(thirdValue_, thirdValue) };


  protected:
    std::shared_ptr<int64_t> count_ = nullptr;
    std::shared_ptr<string> fourthValue_ = nullptr;
    std::shared_ptr<string> primaryValue_ = nullptr;
    std::shared_ptr<string> secondaryValue_ = nullptr;
    std::shared_ptr<string> thirdValue_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace WafOpenapi20211001
#endif
