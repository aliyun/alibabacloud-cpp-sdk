// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEAVGEXECUTECOSTREPORTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEAVGEXECUTECOSTREPORTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeAvgExecuteCostReportResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeAvgExecuteCostReportResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeAvgExecuteCostReportResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeAvgExecuteCostReportResponseBodyResultObject() = default ;
    DescribeAvgExecuteCostReportResponseBodyResultObject(const DescribeAvgExecuteCostReportResponseBodyResultObject &) = default ;
    DescribeAvgExecuteCostReportResponseBodyResultObject(DescribeAvgExecuteCostReportResponseBodyResultObject &&) = default ;
    DescribeAvgExecuteCostReportResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeAvgExecuteCostReportResponseBodyResultObject() = default ;
    DescribeAvgExecuteCostReportResponseBodyResultObject& operator=(const DescribeAvgExecuteCostReportResponseBodyResultObject &) = default ;
    DescribeAvgExecuteCostReportResponseBodyResultObject& operator=(DescribeAvgExecuteCostReportResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->ratio_ != nullptr
        && this->value_ != nullptr; };
    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline DescribeAvgExecuteCostReportResponseBodyResultObject& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeAvgExecuteCostReportResponseBodyResultObject& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Comparison with yesterday\\"s average execution time
    std::shared_ptr<string> ratio_ = nullptr;
    // Today\\"s average execution time
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
