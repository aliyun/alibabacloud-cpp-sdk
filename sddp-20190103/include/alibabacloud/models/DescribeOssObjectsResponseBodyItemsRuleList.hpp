// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTSRESPONSEBODYITEMSRULELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEOSSOBJECTSRESPONSEBODYITEMSRULELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sddp20190103
{
namespace Models
{
  class DescribeOssObjectsResponseBodyItemsRuleList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeOssObjectsResponseBodyItemsRuleList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(Name, name_);
      DARABONBA_PTR_TO_JSON(RiskLevelId, riskLevelId_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeOssObjectsResponseBodyItemsRuleList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(Name, name_);
      DARABONBA_PTR_FROM_JSON(RiskLevelId, riskLevelId_);
    };
    DescribeOssObjectsResponseBodyItemsRuleList() = default ;
    DescribeOssObjectsResponseBodyItemsRuleList(const DescribeOssObjectsResponseBodyItemsRuleList &) = default ;
    DescribeOssObjectsResponseBodyItemsRuleList(DescribeOssObjectsResponseBodyItemsRuleList &&) = default ;
    DescribeOssObjectsResponseBodyItemsRuleList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeOssObjectsResponseBodyItemsRuleList() = default ;
    DescribeOssObjectsResponseBodyItemsRuleList& operator=(const DescribeOssObjectsResponseBodyItemsRuleList &) = default ;
    DescribeOssObjectsResponseBodyItemsRuleList& operator=(DescribeOssObjectsResponseBodyItemsRuleList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->count_ != nullptr
        && this->name_ != nullptr && this->riskLevelId_ != nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int64_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0L) };
    inline DescribeOssObjectsResponseBodyItemsRuleList& setCount(int64_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // name Field Functions 
    bool hasName() const { return this->name_ != nullptr;};
    void deleteName() { this->name_ = nullptr;};
    inline string name() const { DARABONBA_PTR_GET_DEFAULT(name_, "") };
    inline DescribeOssObjectsResponseBodyItemsRuleList& setName(string name) { DARABONBA_PTR_SET_VALUE(name_, name) };


    // riskLevelId Field Functions 
    bool hasRiskLevelId() const { return this->riskLevelId_ != nullptr;};
    void deleteRiskLevelId() { this->riskLevelId_ = nullptr;};
    inline int64_t riskLevelId() const { DARABONBA_PTR_GET_DEFAULT(riskLevelId_, 0L) };
    inline DescribeOssObjectsResponseBodyItemsRuleList& setRiskLevelId(int64_t riskLevelId) { DARABONBA_PTR_SET_VALUE(riskLevelId_, riskLevelId) };


  protected:
    // The number of times that the rule is hit.
    std::shared_ptr<int64_t> count_ = nullptr;
    // The search keyword. Fuzzy match is supported.
    std::shared_ptr<string> name_ = nullptr;
    // The ID of the sensitivity level of the OSS object. Valid values:
    // 
    // *   **1**: N/A, which indicates that no sensitive data is detected.
    // *   **2**: S1, which indicates the low sensitivity level.
    // *   **3**: S2, which indicates the medium sensitivity level.
    // *   **4**: S3, which indicates the high sensitivity level.
    // *   **5**: S4, which indicates the highest sensitivity level.
    std::shared_ptr<int64_t> riskLevelId_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sddp20190103
#endif
