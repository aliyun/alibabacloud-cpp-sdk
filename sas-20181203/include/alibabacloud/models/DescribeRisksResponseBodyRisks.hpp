// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBERISKSRESPONSEBODYRISKS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBERISKSRESPONSEBODYRISKS_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeRisksResponseBodyRisks : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRisksResponseBodyRisks& obj) { 
      DARABONBA_PTR_TO_JSON(RiskDetail, riskDetail_);
      DARABONBA_PTR_TO_JSON(RiskId, riskId_);
      DARABONBA_PTR_TO_JSON(RiskName, riskName_);
      DARABONBA_PTR_TO_JSON(RiskType, riskType_);
      DARABONBA_PTR_TO_JSON(SubRiskType, subRiskType_);
      DARABONBA_PTR_TO_JSON(SubTypeAlias, subTypeAlias_);
      DARABONBA_PTR_TO_JSON(TypeAlias, typeAlias_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRisksResponseBodyRisks& obj) { 
      DARABONBA_PTR_FROM_JSON(RiskDetail, riskDetail_);
      DARABONBA_PTR_FROM_JSON(RiskId, riskId_);
      DARABONBA_PTR_FROM_JSON(RiskName, riskName_);
      DARABONBA_PTR_FROM_JSON(RiskType, riskType_);
      DARABONBA_PTR_FROM_JSON(SubRiskType, subRiskType_);
      DARABONBA_PTR_FROM_JSON(SubTypeAlias, subTypeAlias_);
      DARABONBA_PTR_FROM_JSON(TypeAlias, typeAlias_);
    };
    DescribeRisksResponseBodyRisks() = default ;
    DescribeRisksResponseBodyRisks(const DescribeRisksResponseBodyRisks &) = default ;
    DescribeRisksResponseBodyRisks(DescribeRisksResponseBodyRisks &&) = default ;
    DescribeRisksResponseBodyRisks(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRisksResponseBodyRisks() = default ;
    DescribeRisksResponseBodyRisks& operator=(const DescribeRisksResponseBodyRisks &) = default ;
    DescribeRisksResponseBodyRisks& operator=(DescribeRisksResponseBodyRisks &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->riskDetail_ == nullptr
        && return this->riskId_ == nullptr && return this->riskName_ == nullptr && return this->riskType_ == nullptr && return this->subRiskType_ == nullptr && return this->subTypeAlias_ == nullptr
        && return this->typeAlias_ == nullptr; };
    // riskDetail Field Functions 
    bool hasRiskDetail() const { return this->riskDetail_ != nullptr;};
    void deleteRiskDetail() { this->riskDetail_ = nullptr;};
    inline string riskDetail() const { DARABONBA_PTR_GET_DEFAULT(riskDetail_, "") };
    inline DescribeRisksResponseBodyRisks& setRiskDetail(string riskDetail) { DARABONBA_PTR_SET_VALUE(riskDetail_, riskDetail) };


    // riskId Field Functions 
    bool hasRiskId() const { return this->riskId_ != nullptr;};
    void deleteRiskId() { this->riskId_ = nullptr;};
    inline int64_t riskId() const { DARABONBA_PTR_GET_DEFAULT(riskId_, 0L) };
    inline DescribeRisksResponseBodyRisks& setRiskId(int64_t riskId) { DARABONBA_PTR_SET_VALUE(riskId_, riskId) };


    // riskName Field Functions 
    bool hasRiskName() const { return this->riskName_ != nullptr;};
    void deleteRiskName() { this->riskName_ = nullptr;};
    inline string riskName() const { DARABONBA_PTR_GET_DEFAULT(riskName_, "") };
    inline DescribeRisksResponseBodyRisks& setRiskName(string riskName) { DARABONBA_PTR_SET_VALUE(riskName_, riskName) };


    // riskType Field Functions 
    bool hasRiskType() const { return this->riskType_ != nullptr;};
    void deleteRiskType() { this->riskType_ = nullptr;};
    inline string riskType() const { DARABONBA_PTR_GET_DEFAULT(riskType_, "") };
    inline DescribeRisksResponseBodyRisks& setRiskType(string riskType) { DARABONBA_PTR_SET_VALUE(riskType_, riskType) };


    // subRiskType Field Functions 
    bool hasSubRiskType() const { return this->subRiskType_ != nullptr;};
    void deleteSubRiskType() { this->subRiskType_ = nullptr;};
    inline string subRiskType() const { DARABONBA_PTR_GET_DEFAULT(subRiskType_, "") };
    inline DescribeRisksResponseBodyRisks& setSubRiskType(string subRiskType) { DARABONBA_PTR_SET_VALUE(subRiskType_, subRiskType) };


    // subTypeAlias Field Functions 
    bool hasSubTypeAlias() const { return this->subTypeAlias_ != nullptr;};
    void deleteSubTypeAlias() { this->subTypeAlias_ = nullptr;};
    inline string subTypeAlias() const { DARABONBA_PTR_GET_DEFAULT(subTypeAlias_, "") };
    inline DescribeRisksResponseBodyRisks& setSubTypeAlias(string subTypeAlias) { DARABONBA_PTR_SET_VALUE(subTypeAlias_, subTypeAlias) };


    // typeAlias Field Functions 
    bool hasTypeAlias() const { return this->typeAlias_ != nullptr;};
    void deleteTypeAlias() { this->typeAlias_ = nullptr;};
    inline string typeAlias() const { DARABONBA_PTR_GET_DEFAULT(typeAlias_, "") };
    inline DescribeRisksResponseBodyRisks& setTypeAlias(string typeAlias) { DARABONBA_PTR_SET_VALUE(typeAlias_, typeAlias) };


  protected:
    // The description of the baseline.
    std::shared_ptr<string> riskDetail_ = nullptr;
    // The baseline ID.
    std::shared_ptr<int64_t> riskId_ = nullptr;
    // The name of the baseline.
    std::shared_ptr<string> riskName_ = nullptr;
    // The name of the baseline type.
    std::shared_ptr<string> riskType_ = nullptr;
    // The name of the baseline subtype.
    std::shared_ptr<string> subRiskType_ = nullptr;
    // The display name of the baseline subtype.
    std::shared_ptr<string> subTypeAlias_ = nullptr;
    // The display name of the baseline type.
    std::shared_ptr<string> typeAlias_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
