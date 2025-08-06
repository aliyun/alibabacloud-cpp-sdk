// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEPLAYFIRSTFRAMEDURATIONMETRICDATARESPONSEBODYNODES_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEPLAYFIRSTFRAMEDURATIONMETRICDATARESPONSEBODYNODES_HPP_
#include <darabonba/Core.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vod20170321
{
namespace Models
{
  class DescribePlayFirstFrameDurationMetricDataResponseBodyNodes : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribePlayFirstFrameDurationMetricDataResponseBodyNodes& obj) { 
      DARABONBA_PTR_TO_JSON(X, x_);
      DARABONBA_PTR_TO_JSON(Y, y_);
    };
    friend void from_json(const Darabonba::Json& j, DescribePlayFirstFrameDurationMetricDataResponseBodyNodes& obj) { 
      DARABONBA_PTR_FROM_JSON(X, x_);
      DARABONBA_PTR_FROM_JSON(Y, y_);
    };
    DescribePlayFirstFrameDurationMetricDataResponseBodyNodes() = default ;
    DescribePlayFirstFrameDurationMetricDataResponseBodyNodes(const DescribePlayFirstFrameDurationMetricDataResponseBodyNodes &) = default ;
    DescribePlayFirstFrameDurationMetricDataResponseBodyNodes(DescribePlayFirstFrameDurationMetricDataResponseBodyNodes &&) = default ;
    DescribePlayFirstFrameDurationMetricDataResponseBodyNodes(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribePlayFirstFrameDurationMetricDataResponseBodyNodes() = default ;
    DescribePlayFirstFrameDurationMetricDataResponseBodyNodes& operator=(const DescribePlayFirstFrameDurationMetricDataResponseBodyNodes &) = default ;
    DescribePlayFirstFrameDurationMetricDataResponseBodyNodes& operator=(DescribePlayFirstFrameDurationMetricDataResponseBodyNodes &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->x_ != nullptr
        && this->y_ != nullptr; };
    // x Field Functions 
    bool hasX() const { return this->x_ != nullptr;};
    void deleteX() { this->x_ = nullptr;};
    inline int64_t x() const { DARABONBA_PTR_GET_DEFAULT(x_, 0L) };
    inline DescribePlayFirstFrameDurationMetricDataResponseBodyNodes& setX(int64_t x) { DARABONBA_PTR_SET_VALUE(x_, x) };


    // y Field Functions 
    bool hasY() const { return this->y_ != nullptr;};
    void deleteY() { this->y_ = nullptr;};
    inline int64_t y() const { DARABONBA_PTR_GET_DEFAULT(y_, 0L) };
    inline DescribePlayFirstFrameDurationMetricDataResponseBodyNodes& setY(int64_t y) { DARABONBA_PTR_SET_VALUE(y_, y) };


  protected:
    std::shared_ptr<int64_t> x_ = nullptr;
    std::shared_ptr<int64_t> y_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vod20170321
#endif
