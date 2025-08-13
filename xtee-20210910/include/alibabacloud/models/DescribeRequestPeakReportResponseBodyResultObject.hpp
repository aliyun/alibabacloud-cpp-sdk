// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEREQUESTPEAKREPORTRESPONSEBODYRESULTOBJECT_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEREQUESTPEAKREPORTRESPONSEBODYRESULTOBJECT_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Xtee20210910
{
namespace Models
{
  class DescribeRequestPeakReportResponseBodyResultObject : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeRequestPeakReportResponseBodyResultObject& obj) { 
      DARABONBA_PTR_TO_JSON(ratio, ratio_);
      DARABONBA_PTR_TO_JSON(value, value_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeRequestPeakReportResponseBodyResultObject& obj) { 
      DARABONBA_PTR_FROM_JSON(ratio, ratio_);
      DARABONBA_PTR_FROM_JSON(value, value_);
    };
    DescribeRequestPeakReportResponseBodyResultObject() = default ;
    DescribeRequestPeakReportResponseBodyResultObject(const DescribeRequestPeakReportResponseBodyResultObject &) = default ;
    DescribeRequestPeakReportResponseBodyResultObject(DescribeRequestPeakReportResponseBodyResultObject &&) = default ;
    DescribeRequestPeakReportResponseBodyResultObject(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeRequestPeakReportResponseBodyResultObject() = default ;
    DescribeRequestPeakReportResponseBodyResultObject& operator=(const DescribeRequestPeakReportResponseBodyResultObject &) = default ;
    DescribeRequestPeakReportResponseBodyResultObject& operator=(DescribeRequestPeakReportResponseBodyResultObject &&) = default ;
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
    inline DescribeRequestPeakReportResponseBodyResultObject& setRatio(string ratio) { DARABONBA_PTR_SET_VALUE(ratio_, ratio) };


    // value Field Functions 
    bool hasValue() const { return this->value_ != nullptr;};
    void deleteValue() { this->value_ = nullptr;};
    inline string value() const { DARABONBA_PTR_GET_DEFAULT(value_, "") };
    inline DescribeRequestPeakReportResponseBodyResultObject& setValue(string value) { DARABONBA_PTR_SET_VALUE(value_, value) };


  protected:
    // Return value
    std::shared_ptr<string> ratio_ = nullptr;
    // Return text
    std::shared_ptr<string> value_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Xtee20210910
#endif
