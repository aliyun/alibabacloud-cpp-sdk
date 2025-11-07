// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSRESPONSEBODYCHECKITEMLISTCHECKRESULTLIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBENISINSPECTIONREPORTCHECKITEMSRESPONSEBODYCHECKITEMLISTCHECKRESULTLIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Nis20211216
{
namespace Models
{
  class DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList& obj) { 
      DARABONBA_PTR_TO_JSON(Count, count_);
      DARABONBA_PTR_TO_JSON(RiskLevel, riskLevel_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList& obj) { 
      DARABONBA_PTR_FROM_JSON(Count, count_);
      DARABONBA_PTR_FROM_JSON(RiskLevel, riskLevel_);
    };
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList() = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList(const DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList &) = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList(DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList &&) = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList() = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList& operator=(const DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList &) = default ;
    DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList& operator=(DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->count_ == nullptr
        && return this->riskLevel_ == nullptr; };
    // count Field Functions 
    bool hasCount() const { return this->count_ != nullptr;};
    void deleteCount() { this->count_ = nullptr;};
    inline int32_t count() const { DARABONBA_PTR_GET_DEFAULT(count_, 0) };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList& setCount(int32_t count) { DARABONBA_PTR_SET_VALUE(count_, count) };


    // riskLevel Field Functions 
    bool hasRiskLevel() const { return this->riskLevel_ != nullptr;};
    void deleteRiskLevel() { this->riskLevel_ = nullptr;};
    inline string riskLevel() const { DARABONBA_PTR_GET_DEFAULT(riskLevel_, "") };
    inline DescribeNisInspectionReportCheckItemsResponseBodyCheckItemListCheckResultList& setRiskLevel(string riskLevel) { DARABONBA_PTR_SET_VALUE(riskLevel_, riskLevel) };


  protected:
    std::shared_ptr<int32_t> count_ = nullptr;
    std::shared_ptr<string> riskLevel_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Nis20211216
#endif
