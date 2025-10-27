// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODYRISKCHECKSUMMARYRISKLEVELCOUNT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKCHECKSUMMARYRESPONSEBODYRISKCHECKSUMMARYRISKLEVELCOUNT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Key, key_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Key, key_);
    };
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount() = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount(const DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount &) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount(DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount &&) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount() = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount& operator=(const DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount &) = default ;
    DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount& operator=(DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->key_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // key Field Functions 
    bool hasKey() const { return this->key_ != nullptr;};
    void deleteKey() { this->key_ = nullptr;};
    inline string key() const { DARABONBA_PTR_GET_DEFAULT(key_, "") };
    inline DescribeRiskCheckSummaryResponseBodyRiskCheckSummaryRiskLevelCount& setKey(string key) { DARABONBA_PTR_SET_VALUE(key_, key) };


  protected:
    // The number of check items at the specified risk level.
    std::shared_ptr<int32_t> count_ = nullptr;
    // The risk level of the check items. Valid values:
    // 
    // *   **high**
    // *   **medium**
    // *   **low**
    std::shared_ptr<string> key_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
