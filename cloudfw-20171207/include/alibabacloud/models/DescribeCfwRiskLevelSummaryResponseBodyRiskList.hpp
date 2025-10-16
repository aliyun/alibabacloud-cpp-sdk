// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECFWRISKLEVELSUMMARYRESPONSEBODYRISKLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECFWRISKLEVELSUMMARYRESPONSEBODYRISKLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cloudfw20171207
{
namespace Models
{
  class DescribeCfwRiskLevelSummaryResponseBodyRiskList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCfwRiskLevelSummaryResponseBodyRiskList& obj) { 
      DARABONBA_PTR_TO_JSON(Level, level_);
      DARABONBA_PTR_TO_JSON(Num, num_);
      DARABONBA_PTR_TO_JSON(Type, type_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCfwRiskLevelSummaryResponseBodyRiskList& obj) { 
      DARABONBA_PTR_FROM_JSON(Level, level_);
      DARABONBA_PTR_FROM_JSON(Num, num_);
      DARABONBA_PTR_FROM_JSON(Type, type_);
    };
    DescribeCfwRiskLevelSummaryResponseBodyRiskList() = default ;
    DescribeCfwRiskLevelSummaryResponseBodyRiskList(const DescribeCfwRiskLevelSummaryResponseBodyRiskList &) = default ;
    DescribeCfwRiskLevelSummaryResponseBodyRiskList(DescribeCfwRiskLevelSummaryResponseBodyRiskList &&) = default ;
    DescribeCfwRiskLevelSummaryResponseBodyRiskList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCfwRiskLevelSummaryResponseBodyRiskList() = default ;
    DescribeCfwRiskLevelSummaryResponseBodyRiskList& operator=(const DescribeCfwRiskLevelSummaryResponseBodyRiskList &) = default ;
    DescribeCfwRiskLevelSummaryResponseBodyRiskList& operator=(DescribeCfwRiskLevelSummaryResponseBodyRiskList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->level_ == nullptr
        && return this->num_ == nullptr && return this->type_ == nullptr; };
    // level Field Functions 
    bool hasLevel() const { return this->level_ != nullptr;};
    void deleteLevel() { this->level_ = nullptr;};
    inline string level() const { DARABONBA_PTR_GET_DEFAULT(level_, "") };
    inline DescribeCfwRiskLevelSummaryResponseBodyRiskList& setLevel(string level) { DARABONBA_PTR_SET_VALUE(level_, level) };


    // num Field Functions 
    bool hasNum() const { return this->num_ != nullptr;};
    void deleteNum() { this->num_ = nullptr;};
    inline string num() const { DARABONBA_PTR_GET_DEFAULT(num_, "") };
    inline DescribeCfwRiskLevelSummaryResponseBodyRiskList& setNum(string num) { DARABONBA_PTR_SET_VALUE(num_, num) };


    // type Field Functions 
    bool hasType() const { return this->type_ != nullptr;};
    void deleteType() { this->type_ = nullptr;};
    inline string type() const { DARABONBA_PTR_GET_DEFAULT(type_, "") };
    inline DescribeCfwRiskLevelSummaryResponseBodyRiskList& setType(string type) { DARABONBA_PTR_SET_VALUE(type_, type) };


  protected:
    // The risk levels. Valid values:
    // 
    // *   **medium**
    std::shared_ptr<string> level_ = nullptr;
    // The number of at-risk Elastic Compute Service (ECS) instances.
    std::shared_ptr<string> num_ = nullptr;
    // The type.
    std::shared_ptr<string> type_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cloudfw20171207
#endif
