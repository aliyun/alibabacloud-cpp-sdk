// This file is auto-generated, don't edit it. Thanks.
#ifndef ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTCOUNTRESPONSEBODYCUSTOMEVENTCOUNTS_HPP_
#define ALIBABACLOUD_MODELS_DESCRIBECUSTOMEVENTCOUNTRESPONSEBODYCUSTOMEVENTCOUNTS_HPP_
#include <darabonba/Core.hpp>
#include <vector>
#include <alibabacloud/models/DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount.hpp>
using namespace std;
using json = nlohmann::json;
namespace AlibabaCloud
{
namespace Cms20190101
{
namespace Models
{
  class DescribeCustomEventCountResponseBodyCustomEventCounts : public Darabonba::Model {
  public:
    friend void to_json(Darabonba::Json& j, const DescribeCustomEventCountResponseBodyCustomEventCounts& obj) { 
      DARABONBA_PTR_TO_JSON(CustomEventCount, customEventCount_);
    };
    friend void from_json(const Darabonba::Json& j, DescribeCustomEventCountResponseBodyCustomEventCounts& obj) { 
      DARABONBA_PTR_FROM_JSON(CustomEventCount, customEventCount_);
    };
    DescribeCustomEventCountResponseBodyCustomEventCounts() = default ;
    DescribeCustomEventCountResponseBodyCustomEventCounts(const DescribeCustomEventCountResponseBodyCustomEventCounts &) = default ;
    DescribeCustomEventCountResponseBodyCustomEventCounts(DescribeCustomEventCountResponseBodyCustomEventCounts &&) = default ;
    DescribeCustomEventCountResponseBodyCustomEventCounts(const Darabonba::Json & obj) { from_json(obj, *this); };
    virtual ~DescribeCustomEventCountResponseBodyCustomEventCounts() = default ;
    DescribeCustomEventCountResponseBodyCustomEventCounts& operator=(const DescribeCustomEventCountResponseBodyCustomEventCounts &) = default ;
    DescribeCustomEventCountResponseBodyCustomEventCounts& operator=(DescribeCustomEventCountResponseBodyCustomEventCounts &&) = default ;
    virtual void validate() const override {
    };
    virtual void fromMap(const Darabonba::Json &obj) override { from_json(obj, *this); validate(); };
    virtual Darabonba::Json toMap() const override { Darabonba::Json obj; to_json(obj, *this); return obj; };
    virtual bool empty() const override { return this->customEventCount_ == nullptr; };
    // customEventCount Field Functions 
    bool hasCustomEventCount() const { return this->customEventCount_ != nullptr;};
    void deleteCustomEventCount() { this->customEventCount_ = nullptr;};
    inline const vector<Models::DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount> & customEventCount() const { DARABONBA_PTR_GET_CONST(customEventCount_, vector<Models::DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount>) };
    inline vector<Models::DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount> customEventCount() { DARABONBA_PTR_GET(customEventCount_, vector<Models::DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount>) };
    inline DescribeCustomEventCountResponseBodyCustomEventCounts& setCustomEventCount(const vector<Models::DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount> & customEventCount) { DARABONBA_PTR_SET_VALUE(customEventCount_, customEventCount) };
    inline DescribeCustomEventCountResponseBodyCustomEventCounts& setCustomEventCount(vector<Models::DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount> && customEventCount) { DARABONBA_PTR_SET_RVALUE(customEventCount_, customEventCount) };


  protected:
    std::shared_ptr<vector<Models::DescribeCustomEventCountResponseBodyCustomEventCountsCustomEventCount>> customEventCount_ = nullptr;
  };

  } // namespace Models
} // namespace AlibabaCloud
} // namespace Cms20190101
#endif
