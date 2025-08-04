// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEQOEMETRICDATARESPONSEBODYVIDEODATANODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEQOEMETRICDATARESPONSEBODYVIDEODATANODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Rtc20180111
{
namespace Models
{
  class DescribeQoeMetricDataResponseBodyVideoDataNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeQoeMetricDataResponseBodyVideoDataNodes& obj) { 
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeQoeMetricDataResponseBodyVideoDataNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    DescribeQoeMetricDataResponseBodyVideoDataNodes() = default ;
    DescribeQoeMetricDataResponseBodyVideoDataNodes(const DescribeQoeMetricDataResponseBodyVideoDataNodes &) = default ;
    DescribeQoeMetricDataResponseBodyVideoDataNodes(DescribeQoeMetricDataResponseBodyVideoDataNodes &&) = default ;
    DescribeQoeMetricDataResponseBodyVideoDataNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeQoeMetricDataResponseBodyVideoDataNodes() = default ;
    DescribeQoeMetricDataResponseBodyVideoDataNodes& operator=(const DescribeQoeMetricDataResponseBodyVideoDataNodes &) = default ;
    DescribeQoeMetricDataResponseBodyVideoDataNodes& operator=(DescribeQoeMetricDataResponseBodyVideoDataNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->x_ != nullptr
        && this->y_ != nullptr; };
    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline string x() const { DARABONBA_PTR_GET_DEFAULT(x_, "") };
    inline DescribeQoeMetricDataResponseBodyVideoDataNodes& setX(string x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline string y() const { DARABONBA_PTR_GET_DEFAULT(y_, "") };
    inline DescribeQoeMetricDataResponseBodyVideoDataNodes& setY(string y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<string> x_ = nullptr;
    std::shared_ptr<string> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Rtc20180111
#endif
