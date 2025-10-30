// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEVENTTOTALCOUNTREPORTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEVENTTOTALCOUNTREPORTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeEventTotalCountReportResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEventTotalCountReportResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEventTotalCountReportResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeEventTotalCountReportResponseBodyResultObject() = default ;
    DescribeEventTotalCountReportResponseBodyResultObject(const DescribeEventTotalCountReportResponseBodyResultObject &) = default ;
    DescribeEventTotalCountReportResponseBodyResultObject(DescribeEventTotalCountReportResponseBodyResultObject &&) = default ;
    DescribeEventTotalCountReportResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEventTotalCountReportResponseBodyResultObject() = default ;
    DescribeEventTotalCountReportResponseBodyResultObject& operator=(const DescribeEventTotalCountReportResponseBodyResultObject &) = default ;
    DescribeEventTotalCountReportResponseBodyResultObject& operator=(DescribeEventTotalCountReportResponseBodyResultObject &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->ratio_ == nullptr
        && return this->value_ == nullptr; };
    // ratio Field Functions 
    bool hasRatio() const { return this->ratio_ != nullptr;};
    void deleteRatio() { this->ratio_ = nullptr;};
    inline string ratio() const { DARABONBA_PTR_GET_DEFAULT(ratio_, "") };
    inline DescribeEventTotalCountReportResponseBodyResultObject& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeEventTotalCountReportResponseBodyResultObject& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Comparison with yesterday\\"s event invocation count
    std::shared_ptr<string> ratio_ = nullptr;
    // Today\\"s event invocation count
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
