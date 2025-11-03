// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBEEIPSEGMENTRESPONSEBODYEIPSEGMENTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBEEIPSEGMENTRESPONSEBODYEIPSEGMENTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeEipSegmentResponseBodyEipSegmentsEipSegment.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Vpc20160428
{
namespace Models
{
  class DescribeEipSegmentResponseBodyEipSegments : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeEipSegmentResponseBodyEipSegments& obj) { 
      DARABONBA_PTR_TO_JSON(EipSegment, eipSegment_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeEipSegmentResponseBodyEipSegments& obj) { 
      DARABONBA_PTR_FROM_JSON(EipSegment, eipSegment_);
    };
    DescribeEipSegmentResponseBodyEipSegments() = default ;
    DescribeEipSegmentResponseBodyEipSegments(const DescribeEipSegmentResponseBodyEipSegments &) = default ;
    DescribeEipSegmentResponseBodyEipSegments(DescribeEipSegmentResponseBodyEipSegments &&) = default ;
    DescribeEipSegmentResponseBodyEipSegments(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeEipSegmentResponseBodyEipSegments() = default ;
    DescribeEipSegmentResponseBodyEipSegments& operator=(const DescribeEipSegmentResponseBodyEipSegments &) = default ;
    DescribeEipSegmentResponseBodyEipSegments& operator=(DescribeEipSegmentResponseBodyEipSegments &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->eipSegment_ == nullptr; };
    // eipSegment Field Functions 
    bool hasEipSegment() const { return this->eipSegment_ != nullptr;};
    void deleteEipSegment() { this->eipSegment_ = nullptr;};
    inline const vector<Models::DescribeEipSegmentResponseBodyEipSegmentsEipSegment> & eipSegment() const { DARABONBA_PTR_GET_CONST(eipSegment_, vector<Models::DescribeEipSegmentResponseBodyEipSegmentsEipSegment>) };
    inline vector<Models::DescribeEipSegmentResponseBodyEipSegmentsEipSegment> eipSegment() { DARABONBA_PTR_GET(eipSegment_, vector<Models::DescribeEipSegmentResponseBodyEipSegmentsEipSegment>) };
    inline DescribeEipSegmentResponseBodyEipSegments& setEipSegment(const vector<Models::DescribeEipSegmentResponseBodyEipSegmentsEipSegment> & eipSegment) { DARABONBA_PTR_SET_VALUE(eipSegment_, eipSegment) };
    inline DescribeEipSegmentResponseBodyEipSegments& setEipSegment(vector<Models::DescribeEipSegmentResponseBodyEipSegmentsEipSegment> && eipSegment) { DARABONBA_PTR_SET_RVALUE(eipSegment_, eipSegment) };


  protected:
    std::shared_ptr<vector<Models::DescribeEipSegmentResponseBodyEipSegmentsEipSegment>> eipSegment_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Vpc20160428
#endif
