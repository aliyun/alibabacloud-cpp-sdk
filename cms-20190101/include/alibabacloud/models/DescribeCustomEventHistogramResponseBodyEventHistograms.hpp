// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTHISTOGRAMRESPONSEBODYEVENTHISTOGRAMS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTHISTOGRAMRESPONSEBODYEVENTHISTOGRAMS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventHistogramResponseBodyEventHistograms : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventHistogramResponseBodyEventHistograms& obj) { 
      DARABONBA_PTR_TO_JSON(EventHistogram, eventHistogram_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventHistogramResponseBodyEventHistograms& obj) { 
      DARABONBA_PTR_FROM_JSON(EventHistogram, eventHistogram_);
    };
    DescribeCustomEventHistogramResponseBodyEventHistograms() = default ;
    DescribeCustomEventHistogramResponseBodyEventHistograms(const DescribeCustomEventHistogramResponseBodyEventHistograms &) = default ;
    DescribeCustomEventHistogramResponseBodyEventHistograms(DescribeCustomEventHistogramResponseBodyEventHistograms &&) = default ;
    DescribeCustomEventHistogramResponseBodyEventHistograms(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventHistogramResponseBodyEventHistograms() = default ;
    DescribeCustomEventHistogramResponseBodyEventHistograms& operator=(const DescribeCustomEventHistogramResponseBodyEventHistograms &) = default ;
    DescribeCustomEventHistogramResponseBodyEventHistograms& operator=(DescribeCustomEventHistogramResponseBodyEventHistograms &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { this->eventHistogram_ != nullptr; };
    // eventHistogram Field Functions 
    bool hasEventHistogram() const { return this->eventHistogram_ != nullptr;};
    void deleteEventHistogram() { this->eventHistogram_ = nullptr;};
    inline const vector<Models::DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram> & eventHistogram() const { DARABONBA_PTR_GET_CONST(eventHistogram_, vector<Models::DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram>) };
    inline vector<Models::DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram> eventHistogram() { DARABONBA_PTR_GET(eventHistogram_, vector<Models::DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram>) };
    inline DescribeCustomEventHistogramResponseBodyEventHistograms& setEventHistogram(const vector<Models::DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram> & eventHistogram) { DARABONBA_PTR_SET_VALUE(eventHistogram_, eventHistogram) };
    inline DescribeCustomEventHistogramResponseBodyEventHistograms& setEventHistogram(vector<Models::DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram> && eventHistogram) { DARABONBA_PTR_SET_RVALUE(eventHistogram_, eventHistogram) };


  protected:
    std::shared_ptr<vector<Models::DescribeCustomEventHistogramResponseBodyEventHistogramsEventHistogram>> eventHistogram_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
