// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODYALLCHARTSUBTYPELIST_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECHARTDATARESPONSEBODYALLCHARTSUBTYPELIST_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Sas20181203
{
namespace Models
{
  class DescribeChartDataResponseBodyAllChartSubTypeList : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeChartDataResponseBodyAllChartSubTypeList& obj) { 
      DARABONBA_PTR_TO_JSON(SubType, subType_);
      DARABONBA_PTR_TO_JSON(SubTypeName, subTypeName_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeChartDataResponseBodyAllChartSubTypeList& obj) { 
      DARABONBA_PTR_FROM_JSON(SubType, subType_);
      DARABONBA_PTR_FROM_JSON(SubTypeName, subTypeName_);
    };
    DescribeChartDataResponseBodyAllChartSubTypeList() = default ;
    DescribeChartDataResponseBodyAllChartSubTypeList(const DescribeChartDataResponseBodyAllChartSubTypeList &) = default ;
    DescribeChartDataResponseBodyAllChartSubTypeList(DescribeChartDataResponseBodyAllChartSubTypeList &&) = default ;
    DescribeChartDataResponseBodyAllChartSubTypeList(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeChartDataResponseBodyAllChartSubTypeList() = default ;
    DescribeChartDataResponseBodyAllChartSubTypeList& operator=(const DescribeChartDataResponseBodyAllChartSubTypeList &) = default ;
    DescribeChartDataResponseBodyAllChartSubTypeList& operator=(DescribeChartDataResponseBodyAllChartSubTypeList &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->subType_ == nullptr
        && return this->subTypeName_ == nullptr; };
    // subType Field Functions 
    bool hasSubType() const { return this->subType_ != nullptr;};
    void deleteSubType() { this->subType_ = nullptr;};
    inline string subType() const { DARABONBA_PTR_GET_DEFAULT(subType_, "") };
    inline DescribeChartDataResponseBodyAllChartSubTypeList& setSubType(string subType) { DARABONBA_PTR_SET_VALUE(subType_, subType) };


    // subTypeName Field Functions 
    bool hasSubTypeName() const { return this->subTypeName_ != nullptr;};
    void deleteSubTypeName() { this->subTypeName_ = nullptr;};
    inline string subTypeName() const { DARABONBA_PTR_GET_DEFAULT(subTypeName_, "") };
    inline DescribeChartDataResponseBodyAllChartSubTypeList& setSubTypeName(string subTypeName) { DARABONBA_PTR_SET_VALUE(subTypeName_, subTypeName) };


  protected:
    // The subtype of the chart.
    std::shared_ptr<string> subType_ = nullptr;
    // The name of the chart subtype.
    std::shared_ptr<string> subTypeName_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Sas20181203
#endif
